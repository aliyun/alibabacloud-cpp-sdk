// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTVERSIONSRESPONSEBODY_HPP_
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
  class ListAgentVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentVersionsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAgentVersionsResponseBody& obj) { 
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
    ListAgentVersionsResponseBody() = default ;
    ListAgentVersionsResponseBody(const ListAgentVersionsResponseBody &) = default ;
    ListAgentVersionsResponseBody(ListAgentVersionsResponseBody &&) = default ;
    ListAgentVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentVersionsResponseBody() = default ;
    ListAgentVersionsResponseBody& operator=(const ListAgentVersionsResponseBody &) = default ;
    ListAgentVersionsResponseBody& operator=(ListAgentVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(agentVersion, agentVersion_);
        DARABONBA_PTR_TO_JSON(artifactStatus, artifactStatus_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(targetSpecVersion, targetSpecVersion_);
        DARABONBA_PTR_TO_JSON(versionName, versionName_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(agentVersion, agentVersion_);
        DARABONBA_PTR_FROM_JSON(artifactStatus, artifactStatus_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(targetSpecVersion, targetSpecVersion_);
        DARABONBA_PTR_FROM_JSON(versionName, versionName_);
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
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentVersion_ == nullptr && this->artifactStatus_ == nullptr && this->createdAt_ == nullptr && this->createdBy_ == nullptr && this->description_ == nullptr
        && this->targetSpecVersion_ == nullptr && this->versionName_ == nullptr && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Items& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
      inline Items& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


      // artifactStatus Field Functions 
      bool hasArtifactStatus() const { return this->artifactStatus_ != nullptr;};
      void deleteArtifactStatus() { this->artifactStatus_ = nullptr;};
      inline string getArtifactStatus() const { DARABONBA_PTR_GET_DEFAULT(artifactStatus_, "") };
      inline Items& setArtifactStatus(string artifactStatus) { DARABONBA_PTR_SET_VALUE(artifactStatus_, artifactStatus) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Items& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // targetSpecVersion Field Functions 
      bool hasTargetSpecVersion() const { return this->targetSpecVersion_ != nullptr;};
      void deleteTargetSpecVersion() { this->targetSpecVersion_ = nullptr;};
      inline int64_t getTargetSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(targetSpecVersion_, 0L) };
      inline Items& setTargetSpecVersion(int64_t targetSpecVersion) { DARABONBA_PTR_SET_VALUE(targetSpecVersion_, targetSpecVersion) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Items& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The ID of the managed or custom agent to which the version belongs.
      shared_ptr<string> agentId_ {};
      // The version number generated by the system in ascending order for the agent, such as v1 and v2. It is used when querying, deleting, and referencing the version in service endpoints.
      shared_ptr<string> agentVersion_ {};
      // Indicates only whether the version template and artifact archiving are complete, and does not represent the deployment or running status. READY indicates complete, and INVALID indicates missing or inconsistent archiving.
      shared_ptr<string> artifactStatus_ {};
      // The time when the version was saved, in ISO 8601 UTC format.
      shared_ptr<string> createdAt_ {};
      // The UID of the Alibaba Cloud account of the caller who saved the version. If a RAM user makes the call, this is the UID of the Alibaba Cloud account to which the RAM user belongs.
      shared_ptr<string> createdBy_ {};
      // The version description provided when saving the version, up to 1,024 characters. It is empty if no description was provided when saving.
      shared_ptr<string> description_ {};
      // The effective release serial number of the agent when the version was saved, which is the effectiveSpecVersion at that time. This value does not change after the version is saved.
      shared_ptr<int64_t> targetSpecVersion_ {};
      // The display name specified by the user when saving the version. For earlier saved versions without a recorded name, the agentVersion is returned.
      shared_ptr<string> versionName_ {};
      // The ID of the AgentCore workspace where the agent that owns the version resides.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAgentVersionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAgentVersionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAgentVersionsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAgentVersionsResponseBody::Items>) };
    inline vector<ListAgentVersionsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAgentVersionsResponseBody::Items>) };
    inline ListAgentVersionsResponseBody& setItems(const vector<ListAgentVersionsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAgentVersionsResponseBody& setItems(vector<ListAgentVersionsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgentVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAgentVersionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgentVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAgentVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAgentVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code. The value is SUCCESS if the request is successful, or an error code if the request fails.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of fixed versions on the current page, sorted in descending order of creation time. The configuration is not included.
    shared_ptr<vector<ListAgentVersionsResponseBody::Items>> items_ {};
    // The maximum number of entries per page used in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The response message. The value is success if the request is successful, or an error message if the request fails.
    shared_ptr<string> message_ {};
    // The pagination token for the next page. Pass this value as the nextToken request parameter to query the next page. An empty value indicates that no more data is available.
    shared_ptr<string> nextToken_ {};
    // The request ID, which is used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of undeleted fixed versions of the agent, excluding the system-maintained latest version.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
