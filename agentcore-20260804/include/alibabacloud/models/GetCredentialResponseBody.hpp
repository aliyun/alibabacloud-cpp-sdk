// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCREDENTIALRESPONSEBODY_HPP_
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
  class GetCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetCredentialResponseBody() = default ;
    GetCredentialResponseBody(const GetCredentialResponseBody &) = default ;
    GetCredentialResponseBody(GetCredentialResponseBody &&) = default ;
    GetCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCredentialResponseBody() = default ;
    GetCredentialResponseBody& operator=(const GetCredentialResponseBody &) = default ;
    GetCredentialResponseBody& operator=(GetCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(boundAgents, boundAgents_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
        DARABONBA_PTR_TO_JSON(credentialMetadata, credentialMetadata_);
        DARABONBA_PTR_TO_JSON(credentialType, credentialType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceRefs, resourceRefs_);
        DARABONBA_PTR_TO_JSON(resourceScope, resourceScope_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(boundAgents, boundAgents_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
        DARABONBA_PTR_FROM_JSON(credentialMetadata, credentialMetadata_);
        DARABONBA_PTR_FROM_JSON(credentialType, credentialType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceRefs, resourceRefs_);
        DARABONBA_PTR_FROM_JSON(resourceScope, resourceScope_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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

      class BoundAgents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BoundAgents& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(agentName, agentName_);
        };
        friend void from_json(const Darabonba::Json& j, BoundAgents& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(agentName, agentName_);
        };
        BoundAgents() = default ;
        BoundAgents(const BoundAgents &) = default ;
        BoundAgents(BoundAgents &&) = default ;
        BoundAgents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BoundAgents() = default ;
        BoundAgents& operator=(const BoundAgents &) = default ;
        BoundAgents& operator=(BoundAgents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline BoundAgents& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline BoundAgents& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      protected:
        // The agent ID.
        shared_ptr<string> agentId_ {};
        // The agent name.
        shared_ptr<string> agentName_ {};
      };

      virtual bool empty() const override { return this->boundAgents_ == nullptr
        && this->createdAt_ == nullptr && this->credentialId_ == nullptr && this->credentialMetadata_ == nullptr && this->credentialType_ == nullptr && this->description_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceRefs_ == nullptr && this->resourceScope_ == nullptr && this->updatedAt_ == nullptr
        && this->workspaceId_ == nullptr; };
      // boundAgents Field Functions 
      bool hasBoundAgents() const { return this->boundAgents_ != nullptr;};
      void deleteBoundAgents() { this->boundAgents_ = nullptr;};
      inline const vector<Data::BoundAgents> & getBoundAgents() const { DARABONBA_PTR_GET_CONST(boundAgents_, vector<Data::BoundAgents>) };
      inline vector<Data::BoundAgents> getBoundAgents() { DARABONBA_PTR_GET(boundAgents_, vector<Data::BoundAgents>) };
      inline Data& setBoundAgents(const vector<Data::BoundAgents> & boundAgents) { DARABONBA_PTR_SET_VALUE(boundAgents_, boundAgents) };
      inline Data& setBoundAgents(vector<Data::BoundAgents> && boundAgents) { DARABONBA_PTR_SET_RVALUE(boundAgents_, boundAgents) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // credentialId Field Functions 
      bool hasCredentialId() const { return this->credentialId_ != nullptr;};
      void deleteCredentialId() { this->credentialId_ = nullptr;};
      inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
      inline Data& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


      // credentialMetadata Field Functions 
      bool hasCredentialMetadata() const { return this->credentialMetadata_ != nullptr;};
      void deleteCredentialMetadata() { this->credentialMetadata_ = nullptr;};
      inline string getCredentialMetadata() const { DARABONBA_PTR_GET_DEFAULT(credentialMetadata_, "") };
      inline Data& setCredentialMetadata(string credentialMetadata) { DARABONBA_PTR_SET_VALUE(credentialMetadata_, credentialMetadata) };


      // credentialType Field Functions 
      bool hasCredentialType() const { return this->credentialType_ != nullptr;};
      void deleteCredentialType() { this->credentialType_ = nullptr;};
      inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
      inline Data& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceRefs Field Functions 
      bool hasResourceRefs() const { return this->resourceRefs_ != nullptr;};
      void deleteResourceRefs() { this->resourceRefs_ = nullptr;};
      inline const vector<Data::ResourceRefs> & getResourceRefs() const { DARABONBA_PTR_GET_CONST(resourceRefs_, vector<Data::ResourceRefs>) };
      inline vector<Data::ResourceRefs> getResourceRefs() { DARABONBA_PTR_GET(resourceRefs_, vector<Data::ResourceRefs>) };
      inline Data& setResourceRefs(const vector<Data::ResourceRefs> & resourceRefs) { DARABONBA_PTR_SET_VALUE(resourceRefs_, resourceRefs) };
      inline Data& setResourceRefs(vector<Data::ResourceRefs> && resourceRefs) { DARABONBA_PTR_SET_RVALUE(resourceRefs_, resourceRefs) };


      // resourceScope Field Functions 
      bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
      void deleteResourceScope() { this->resourceScope_ = nullptr;};
      inline string getResourceScope() const { DARABONBA_PTR_GET_DEFAULT(resourceScope_, "") };
      inline Data& setResourceScope(string resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The list of agents bound to the credential.
      shared_ptr<vector<Data::BoundAgents>> boundAgents_ {};
      // The creation time in UTC, formatted according to RFC 3339.
      shared_ptr<string> createdAt_ {};
      // The credential ID.
      shared_ptr<string> credentialId_ {};
      // The masked content of the credential. When credentialType is apiKey, the value of apiKey is returned as asterisks (*) of equal length.
      shared_ptr<string> credentialMetadata_ {};
      // The credential type. Currently, only apiKey is supported.
      shared_ptr<string> credentialType_ {};
      // The credential description, up to 256 characters in length.
      shared_ptr<string> description_ {};
      // The credential name. The name must be unique within the workspace and can contain only letters, digits, periods (.), underscores (_), and hyphens (-). The name must be 3 to 128 characters in length and cannot use runtime reserved names.
      shared_ptr<string> name_ {};
      // The region ID where the resource resides.
      shared_ptr<string> regionId_ {};
      // Each item contains resourceType, resourceId, and resourceName. If the resource has been deleted, resourceName is empty.
      shared_ptr<vector<Data::ResourceRefs>> resourceRefs_ {};
      // The scope of resources to which the credential applies.
      shared_ptr<string> resourceScope_ {};
      // The time of the last modification in UTC, formatted according to RFC 3339.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCredentialResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCredentialResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCredentialResponseBody::Data) };
    inline GetCredentialResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCredentialResponseBody::Data) };
    inline GetCredentialResponseBody& setData(const GetCredentialResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCredentialResponseBody& setData(GetCredentialResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCredentialResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCredentialResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCredentialResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The credential details.
    shared_ptr<GetCredentialResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message. An error description is returned if the request fails.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
