// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALREQUEST_HPP_
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
  class UpdateCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateCredentialRequest() = default ;
    UpdateCredentialRequest(const UpdateCredentialRequest &) = default ;
    UpdateCredentialRequest(UpdateCredentialRequest &&) = default ;
    UpdateCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialRequest() = default ;
    UpdateCredentialRequest& operator=(const UpdateCredentialRequest &) = default ;
    UpdateCredentialRequest& operator=(UpdateCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(credentialMetadata, credentialMetadata_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(resourceRefs, resourceRefs_);
        DARABONBA_PTR_TO_JSON(resourceScope, resourceScope_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(credentialMetadata, credentialMetadata_);
        DARABONBA_PTR_FROM_JSON(description, description_);
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
        && this->description_ == nullptr && this->resourceRefs_ == nullptr && this->resourceScope_ == nullptr; };
      // credentialMetadata Field Functions 
      bool hasCredentialMetadata() const { return this->credentialMetadata_ != nullptr;};
      void deleteCredentialMetadata() { this->credentialMetadata_ = nullptr;};
      inline string getCredentialMetadata() const { DARABONBA_PTR_GET_DEFAULT(credentialMetadata_, "") };
      inline Body& setCredentialMetadata(string credentialMetadata) { DARABONBA_PTR_SET_VALUE(credentialMetadata_, credentialMetadata) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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
      // The new credential content. The value is a JSON string. If credentialType is set to apiKey, only the apiKey field can be included, and the value cannot be empty. At least one of credentialMetadata and description must be specified.
      shared_ptr<string> credentialMetadata_ {};
      // The new credential description. The description can be up to 256 characters in length. At least one of description and credentialMetadata must be specified.
      shared_ptr<string> description_ {};
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
    inline const UpdateCredentialRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateCredentialRequest::Body) };
    inline UpdateCredentialRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateCredentialRequest::Body) };
    inline UpdateCredentialRequest& setBody(const UpdateCredentialRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateCredentialRequest& setBody(UpdateCredentialRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCredentialRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body for updating the credential.
    shared_ptr<UpdateCredentialRequest::Body> body_ {};
    // Not supported.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
