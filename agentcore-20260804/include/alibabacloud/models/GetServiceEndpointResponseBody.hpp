// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEENDPOINTRESPONSEBODY_HPP_
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
  class GetServiceEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetServiceEndpointResponseBody() = default ;
    GetServiceEndpointResponseBody(const GetServiceEndpointResponseBody &) = default ;
    GetServiceEndpointResponseBody(GetServiceEndpointResponseBody &&) = default ;
    GetServiceEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceEndpointResponseBody() = default ;
    GetServiceEndpointResponseBody& operator=(const GetServiceEndpointResponseBody &) = default ;
    GetServiceEndpointResponseBody& operator=(GetServiceEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accessUrls, accessUrls_);
        DARABONBA_PTR_TO_JSON(authentication, authentication_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(endpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(target, target_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accessUrls, accessUrls_);
        DARABONBA_PTR_FROM_JSON(authentication, authentication_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(endpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(target, target_);
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
      class Target : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Target& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(agentVersion, agentVersion_);
          DARABONBA_PTR_TO_JSON(collaborationComponent, collaborationComponent_);
          DARABONBA_PTR_TO_JSON(resourceBindingId, resourceBindingId_);
          DARABONBA_PTR_TO_JSON(targetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, Target& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(agentVersion, agentVersion_);
          DARABONBA_PTR_FROM_JSON(collaborationComponent, collaborationComponent_);
          DARABONBA_PTR_FROM_JSON(resourceBindingId, resourceBindingId_);
          DARABONBA_PTR_FROM_JSON(targetType, targetType_);
        };
        Target() = default ;
        Target(const Target &) = default ;
        Target(Target &&) = default ;
        Target(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Target() = default ;
        Target& operator=(const Target &) = default ;
        Target& operator=(Target &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentVersion_ == nullptr && this->collaborationComponent_ == nullptr && this->resourceBindingId_ == nullptr && this->targetType_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Target& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentVersion Field Functions 
        bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
        void deleteAgentVersion() { this->agentVersion_ = nullptr;};
        inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
        inline Target& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


        // collaborationComponent Field Functions 
        bool hasCollaborationComponent() const { return this->collaborationComponent_ != nullptr;};
        void deleteCollaborationComponent() { this->collaborationComponent_ = nullptr;};
        inline string getCollaborationComponent() const { DARABONBA_PTR_GET_DEFAULT(collaborationComponent_, "") };
        inline Target& setCollaborationComponent(string collaborationComponent) { DARABONBA_PTR_SET_VALUE(collaborationComponent_, collaborationComponent) };


        // resourceBindingId Field Functions 
        bool hasResourceBindingId() const { return this->resourceBindingId_ != nullptr;};
        void deleteResourceBindingId() { this->resourceBindingId_ = nullptr;};
        inline string getResourceBindingId() const { DARABONBA_PTR_GET_DEFAULT(resourceBindingId_, "") };
        inline Target& setResourceBindingId(string resourceBindingId) { DARABONBA_PTR_SET_VALUE(resourceBindingId_, resourceBindingId) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline Target& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The target agent ID. This parameter is returned when the target type is AGENT_VERSION.
        shared_ptr<string> agentId_ {};
        // The target agent version number. This parameter is returned when the target type is AGENT_VERSION.
        shared_ptr<string> agentVersion_ {};
        // The collaboration component type. This parameter is returned when the target type is TEAM_COLLABORATION.
        shared_ptr<string> collaborationComponent_ {};
        // The workspace resource binding ID associated with the target collaboration component. This parameter is returned when the target type is TEAM_COLLABORATION.
        shared_ptr<string> resourceBindingId_ {};
        // The target type. Valid values: AGENT_VERSION, TEAM_COLLABORATION.
        shared_ptr<string> targetType_ {};
      };

      class Authentication : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Authentication& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Authentication& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Authentication() = default ;
        Authentication(const Authentication &) = default ;
        Authentication(Authentication &&) = default ;
        Authentication(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Authentication() = default ;
        Authentication& operator=(const Authentication &) = default ;
        Authentication& operator=(Authentication &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Authentication& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The authentication method. Valid values:
        // - NONE: no authentication required.
        // - API_KEY: authentication by passing an API key through the x-api-key request header.
        shared_ptr<string> type_ {};
      };

      class AccessUrls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessUrls& obj) { 
          DARABONBA_PTR_TO_JSON(accessType, accessType_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, AccessUrls& obj) { 
          DARABONBA_PTR_FROM_JSON(accessType, accessType_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        AccessUrls() = default ;
        AccessUrls(const AccessUrls &) = default ;
        AccessUrls(AccessUrls &&) = default ;
        AccessUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessUrls() = default ;
        AccessUrls& operator=(const AccessUrls &) = default ;
        AccessUrls& operator=(AccessUrls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessType_ == nullptr
        && this->status_ == nullptr && this->statusReason_ == nullptr && this->url_ == nullptr; };
        // accessType Field Functions 
        bool hasAccessType() const { return this->accessType_ != nullptr;};
        void deleteAccessType() { this->accessType_ = nullptr;};
        inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
        inline AccessUrls& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AccessUrls& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusReason Field Functions 
        bool hasStatusReason() const { return this->statusReason_ != nullptr;};
        void deleteStatusReason() { this->statusReason_ = nullptr;};
        inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
        inline AccessUrls& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline AccessUrls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The access URL type. Valid values: INTERNET, VPC.
        shared_ptr<string> accessType_ {};
        // The access URL status. Valid values: CREATING, READY, DEGRADED.
        shared_ptr<string> status_ {};
        // The reason for the access URL status. A specific reason is returned when the status is degraded.
        shared_ptr<string> statusReason_ {};
        // The access URL.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->accessUrls_ == nullptr
        && this->authentication_ == nullptr && this->createdAt_ == nullptr && this->endpointType_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->serviceEndpointId_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->target_ == nullptr && this->updatedAt_ == nullptr
        && this->workspaceId_ == nullptr; };
      // accessUrls Field Functions 
      bool hasAccessUrls() const { return this->accessUrls_ != nullptr;};
      void deleteAccessUrls() { this->accessUrls_ = nullptr;};
      inline const vector<Data::AccessUrls> & getAccessUrls() const { DARABONBA_PTR_GET_CONST(accessUrls_, vector<Data::AccessUrls>) };
      inline vector<Data::AccessUrls> getAccessUrls() { DARABONBA_PTR_GET(accessUrls_, vector<Data::AccessUrls>) };
      inline Data& setAccessUrls(const vector<Data::AccessUrls> & accessUrls) { DARABONBA_PTR_SET_VALUE(accessUrls_, accessUrls) };
      inline Data& setAccessUrls(vector<Data::AccessUrls> && accessUrls) { DARABONBA_PTR_SET_RVALUE(accessUrls_, accessUrls) };


      // authentication Field Functions 
      bool hasAuthentication() const { return this->authentication_ != nullptr;};
      void deleteAuthentication() { this->authentication_ = nullptr;};
      inline const Data::Authentication & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, Data::Authentication) };
      inline Data::Authentication getAuthentication() { DARABONBA_PTR_GET(authentication_, Data::Authentication) };
      inline Data& setAuthentication(const Data::Authentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
      inline Data& setAuthentication(Data::Authentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Data& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


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


      // serviceEndpointId Field Functions 
      bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
      void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
      inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
      inline Data& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Data& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const Data::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Data::Target) };
      inline Data::Target getTarget() { DARABONBA_PTR_GET(target_, Data::Target) };
      inline Data& setTarget(const Data::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline Data& setTarget(Data::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


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
      // The access URL list of the service endpoint.
      shared_ptr<vector<Data::AccessUrls>> accessUrls_ {};
      // The authentication configuration of the service endpoint.
      shared_ptr<Data::Authentication> authentication_ {};
      // The creation time in UTC, formatted in RFC 3339.
      shared_ptr<string> createdAt_ {};
      // The service endpoint type. Valid values:
      // - DEFAULT: a default endpoint created and maintained by the platform.
      // - NAMED: a named endpoint explicitly created by the user.
      shared_ptr<string> endpointType_ {};
      // The service endpoint name. The name is unique within the workspace and is 1 to 128 characters in length.
      shared_ptr<string> name_ {};
      // The region ID where the service endpoint resides.
      shared_ptr<string> regionId_ {};
      // The service endpoint ID.
      shared_ptr<string> serviceEndpointId_ {};
      // The service endpoint status. Valid values: CREATING, READY, UPDATING, DEGRADED, DISABLED, DELETING.
      shared_ptr<string> status_ {};
      // The reason for the service endpoint status. A specific reason is returned when the status is abnormal.
      shared_ptr<string> statusReason_ {};
      // The target routing configuration of the service endpoint.
      shared_ptr<Data::Target> target_ {};
      // The last modification time in UTC, formatted in RFC 3339.
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
    inline GetServiceEndpointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceEndpointResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServiceEndpointResponseBody::Data) };
    inline GetServiceEndpointResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServiceEndpointResponseBody::Data) };
    inline GetServiceEndpointResponseBody& setData(const GetServiceEndpointResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceEndpointResponseBody& setData(GetServiceEndpointResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetServiceEndpointResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceEndpointResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceEndpointResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The service endpoint details.
    shared_ptr<GetServiceEndpointResponseBody::Data> data_ {};
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
