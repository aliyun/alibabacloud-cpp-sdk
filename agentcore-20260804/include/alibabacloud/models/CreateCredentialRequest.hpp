// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateCredentialRequest() = default ;
    CreateCredentialRequest(const CreateCredentialRequest &) = default ;
    CreateCredentialRequest(CreateCredentialRequest &&) = default ;
    CreateCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCredentialRequest() = default ;
    CreateCredentialRequest& operator=(const CreateCredentialRequest &) = default ;
    CreateCredentialRequest& operator=(CreateCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(credentialMetadata, credentialMetadata_);
        DARABONBA_PTR_TO_JSON(credentialType, credentialType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resourceRefs, resourceRefs_);
        DARABONBA_PTR_TO_JSON(resourceScope, resourceScope_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(credentialMetadata, credentialMetadata_);
        DARABONBA_PTR_FROM_JSON(credentialType, credentialType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resourceRefs, resourceRefs_);
        DARABONBA_PTR_FROM_JSON(resourceScope, resourceScope_);
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
      class ResourceRefs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceRefs& obj) { 
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceRefs& obj) { 
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        };
        ResourceRefs() = default ;
        ResourceRefs(const ResourceRefs &) = default ;
        ResourceRefs(ResourceRefs &&) = default ;
        ResourceRefs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceRefs() = default ;
        ResourceRefs& operator=(const ResourceRefs &) = default ;
        ResourceRefs& operator=(ResourceRefs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ResourceRefs& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline ResourceRefs& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ResourceRefs& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The unique identifier of the resource.
        shared_ptr<string> resourceId_ {};
        // The resource name. This value is empty if the resource has been deleted.
        shared_ptr<string> resourceName_ {};
        // The resource type, such as agent.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->credentialMetadata_ == nullptr
        && this->credentialType_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->resourceRefs_ == nullptr && this->resourceScope_ == nullptr; };
      // credentialMetadata Field Functions 
      bool hasCredentialMetadata() const { return this->credentialMetadata_ != nullptr;};
      void deleteCredentialMetadata() { this->credentialMetadata_ = nullptr;};
      inline string getCredentialMetadata() const { DARABONBA_PTR_GET_DEFAULT(credentialMetadata_, "") };
      inline Body& setCredentialMetadata(string credentialMetadata) { DARABONBA_PTR_SET_VALUE(credentialMetadata_, credentialMetadata) };


      // credentialType Field Functions 
      bool hasCredentialType() const { return this->credentialType_ != nullptr;};
      void deleteCredentialType() { this->credentialType_ = nullptr;};
      inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
      inline Body& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceRefs Field Functions 
      bool hasResourceRefs() const { return this->resourceRefs_ != nullptr;};
      void deleteResourceRefs() { this->resourceRefs_ = nullptr;};
      inline const vector<Body::ResourceRefs> & getResourceRefs() const { DARABONBA_PTR_GET_CONST(resourceRefs_, vector<Body::ResourceRefs>) };
      inline vector<Body::ResourceRefs> getResourceRefs() { DARABONBA_PTR_GET(resourceRefs_, vector<Body::ResourceRefs>) };
      inline Body& setResourceRefs(const vector<Body::ResourceRefs> & resourceRefs) { DARABONBA_PTR_SET_VALUE(resourceRefs_, resourceRefs) };
      inline Body& setResourceRefs(vector<Body::ResourceRefs> && resourceRefs) { DARABONBA_PTR_SET_RVALUE(resourceRefs_, resourceRefs) };


      // resourceScope Field Functions 
      bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
      void deleteResourceScope() { this->resourceScope_ = nullptr;};
      inline string getResourceScope() const { DARABONBA_PTR_GET_DEFAULT(resourceScope_, "") };
      inline Body& setResourceScope(string resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };


    protected:
      // The credential content. The value is a JSON string. When credentialType is set to apiKey, the content can contain only the apiKey field, and the value cannot be empty. After being written, the content can only be queried in masked form.
      // 
      // This parameter is required.
      shared_ptr<string> credentialMetadata_ {};
      // The credential type. Currently, only apiKey is supported.
      // 
      // This parameter is required.
      shared_ptr<string> credentialType_ {};
      // The credential description. The description can be up to 256 characters in length.
      shared_ptr<string> description_ {};
      // The credential name. The name must be unique within the workspace and can contain only letters, digits, periods (.), underscores (_), and hyphens (-). The name must be 3 to 128 characters in length and cannot use runtime reserved names.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required and must be a non-empty array when resourceScope is set to SPECIFIED. Each item contains resourceType and resourceId. resourceName is optional.
      shared_ptr<vector<Body::ResourceRefs>> resourceRefs_ {};
      // ALL indicates all resources. SPECIFIED indicates that the credential applies only to the resources specified in resourceRefs.
      shared_ptr<string> resourceScope_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateCredentialRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateCredentialRequest::Body) };
    inline CreateCredentialRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateCredentialRequest::Body) };
    inline CreateCredentialRequest& setBody(const CreateCredentialRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateCredentialRequest& setBody(CreateCredentialRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCredentialRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body for creating a credential.
    shared_ptr<CreateCredentialRequest::Body> body_ {};
    // Not supported.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
