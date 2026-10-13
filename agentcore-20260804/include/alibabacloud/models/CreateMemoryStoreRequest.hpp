// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateMemoryStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateMemoryStoreRequest() = default ;
    CreateMemoryStoreRequest(const CreateMemoryStoreRequest &) = default ;
    CreateMemoryStoreRequest(CreateMemoryStoreRequest &&) = default ;
    CreateMemoryStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryStoreRequest() = default ;
    CreateMemoryStoreRequest& operator=(const CreateMemoryStoreRequest &) = default ;
    CreateMemoryStoreRequest& operator=(CreateMemoryStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(extractInstructions, extractInstructions_);
        DARABONBA_PTR_TO_JSON(memoryStoreName, memoryStoreName_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(extractInstructions, extractInstructions_);
        DARABONBA_PTR_FROM_JSON(memoryStoreName, memoryStoreName_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->extractInstructions_ == nullptr && this->memoryStoreName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extractInstructions Field Functions 
      bool hasExtractInstructions() const { return this->extractInstructions_ != nullptr;};
      void deleteExtractInstructions() { this->extractInstructions_ = nullptr;};
      inline string getExtractInstructions() const { DARABONBA_PTR_GET_DEFAULT(extractInstructions_, "") };
      inline Body& setExtractInstructions(string extractInstructions) { DARABONBA_PTR_SET_VALUE(extractInstructions_, extractInstructions) };


      // memoryStoreName Field Functions 
      bool hasMemoryStoreName() const { return this->memoryStoreName_ != nullptr;};
      void deleteMemoryStoreName() { this->memoryStoreName_ = nullptr;};
      inline string getMemoryStoreName() const { DARABONBA_PTR_GET_DEFAULT(memoryStoreName_, "") };
      inline Body& setMemoryStoreName(string memoryStoreName) { DARABONBA_PTR_SET_VALUE(memoryStoreName_, memoryStoreName) };


    protected:
      // The description of the memory store. Maximum of 1,024 characters.
      shared_ptr<string> description_ {};
      // The custom extraction instructions. Maximum of 4,096 characters.
      shared_ptr<string> extractInstructions_ {};
      // The name of the memory store. The name must be 1 to 64 characters in length and can contain only lowercase letters, digits, and hyphens (-). The name cannot be modified after creation.
      // 
      // This parameter is required.
      shared_ptr<string> memoryStoreName_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateMemoryStoreRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateMemoryStoreRequest::Body) };
    inline CreateMemoryStoreRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateMemoryStoreRequest::Body) };
    inline CreateMemoryStoreRequest& setBody(const CreateMemoryStoreRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMemoryStoreRequest& setBody(CreateMemoryStoreRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateMemoryStoreRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request to create a memory store.
    // 
    // This parameter is required.
    shared_ptr<CreateMemoryStoreRequest::Body> body_ {};
    // The client request token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
