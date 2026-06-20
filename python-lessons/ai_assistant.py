import ollama

print("EDITH system initialized. Ask me anything, Wynn.")

while True:
    user_input = input("\nYou: ")
    
    if user_input.lower() == "exit" or user_input.lower() == "quit":
        print("Shutting down protocols.")
        break
        
    response = ollama.chat(model='qwen2.5:1.5b', messages=[
        {
            'role': 'user',
            'content': user_input,
        },
    ])
    
    print(f"\nAI: {response['message']['content']}")