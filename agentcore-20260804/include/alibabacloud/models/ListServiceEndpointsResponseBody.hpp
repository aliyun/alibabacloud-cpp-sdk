// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEENDPOINTSRESPONSEBODY_HPP_
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
  class ListServiceEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListServiceEndpointsResponseBody() = default ;
    ListServiceEndpointsResponseBody(const ListServiceEndpointsResponseBody &) = default ;
    ListServiceEndpointsResponseBody(ListServiceEndpointsResponseBody &&) = default ;
    ListServiceEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceEndpointsResponseBody() = default ;
    ListServiceEndpointsResponseBody& operator=(const ListServiceEndpointsResponseBody &) = default ;
    ListServiceEndpointsResponseBody& operator=(ListServiceEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
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
        // The authentication method. NONE indicates that no authentication is required. API_KEY indicates that authentication is performed by passing an API key through the x-api-key request header.
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
        // The reason for the access URL status. A specific reason is returned when the status is abnormal.
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
      inline const vector<Items::AccessUrls> & getAccessUrls() const { DARABONBA_PTR_GET_CONST(accessUrls_, vector<Items::AccessUrls>) };
      inline vector<Items::AccessUrls> getAccessUrls() { DARABONBA_PTR_GET(accessUrls_, vector<Items::AccessUrls>) };
      inline Items& setAccessUrls(const vector<Items::AccessUrls> & accessUrls) { DARABONBA_PTR_SET_VALUE(accessUrls_, accessUrls) };
      inline Items& setAccessUrls(vector<Items::AccessUrls> && accessUrls) { DARABONBA_PTR_SET_RVALUE(accessUrls_, accessUrls) };


      // authentication Field Functions 
      bool hasAuthentication() const { return this->authentication_ != nullptr;};
      void deleteAuthentication() { this->authentication_ = nullptr;};
      inline const Items::Authentication & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, Items::Authentication) };
      inline Items::Authentication getAuthentication() { DARABONBA_PTR_GET(authentication_, Items::Authentication) };
      inline Items& setAuthentication(const Items::Authentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
      inline Items& setAuthentication(Items::Authentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Items& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // serviceEndpointId Field Functions 
      bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
      void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
      inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
      inline Items& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Items& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const Items::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Items::Target) };
      inline Items::Target getTarget() { DARABONBA_PTR_GET(target_, Items::Target) };
      inline Items& setTarget(const Items::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline Items& setTarget(Items::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The list of access URLs for the service endpoint.
      shared_ptr<vector<Items::AccessUrls>> accessUrls_ {};
      // The authentication configuration of the service endpoint.
      shared_ptr<Items::Authentication> authentication_ {};
      // The creation time in UTC, formatted according to RFC 3339.
      shared_ptr<string> createdAt_ {};
      // The service endpoint type. DEFAULT indicates a default endpoint created and maintained by the platform. NAMED indicates a named endpoint explicitly created by the user.
      shared_ptr<string> endpointType_ {};
      // The service endpoint name. The name is unique within the workspace and is 1 to 128 characters in length.
      shared_ptr<string> name_ {};
      // The region ID where the service endpoint is located.
      shared_ptr<string> regionId_ {};
      // The service endpoint ID.
      shared_ptr<string> serviceEndpointId_ {};
      // The service endpoint status. Valid values: CREATING, READY, UPDATING, DEGRADED, DISABLED, DELETING.
      shared_ptr<string> status_ {};
      // The reason for the service endpoint status. A specific reason is returned when the status is abnormal.
      shared_ptr<string> statusReason_ {};
      // The target routing configuration of the service endpoint.
      shared_ptr<Items::Target> target_ {};
      // The last modification time in UTC, formatted according to RFC 3339.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListServiceEndpointsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListServiceEndpointsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListServiceEndpointsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListServiceEndpointsResponseBody::Items>) };
    inline vector<ListServiceEndpointsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListServiceEndpointsResponseBody::Items>) };
    inline ListServiceEndpointsResponseBody& setItems(const vector<ListServiceEndpointsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListServiceEndpointsResponseBody& setItems(vector<ListServiceEndpointsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceEndpointsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListServiceEndpointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceEndpointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListServiceEndpointsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListServiceEndpointsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of service endpoints.
    shared_ptr<vector<ListServiceEndpointsResponseBody::Items>> items_ {};
    // The maximum number of records per page that takes effect for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The response message. An error description is returned if the request fails.
    shared_ptr<string> message_ {};
    // The pagination token for the next page. This value is empty if no more pages exist.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of service endpoints that match the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
