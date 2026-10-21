// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGECACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGECACHESRESPONSEBODY_HPP_
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
  class ListImageCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageCachesResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListImageCachesResponseBody& obj) { 
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
    ListImageCachesResponseBody() = default ;
    ListImageCachesResponseBody(const ListImageCachesResponseBody &) = default ;
    ListImageCachesResponseBody(ListImageCachesResponseBody &&) = default ;
    ListImageCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageCachesResponseBody() = default ;
    ListImageCachesResponseBody& operator=(const ListImageCachesResponseBody &) = default ;
    ListImageCachesResponseBody& operator=(ListImageCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
        DARABONBA_PTR_TO_JSON(agentCount, agentCount_);
        DARABONBA_PTR_TO_JSON(cacheSizeBytes, cacheSizeBytes_);
        DARABONBA_PTR_TO_JSON(canDelete, canDelete_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(deleteBlockReason, deleteBlockReason_);
        DARABONBA_PTR_TO_JSON(digest, digest_);
        DARABONBA_PTR_TO_JSON(error, error_);
        DARABONBA_PTR_TO_JSON(imageId, imageId_);
        DARABONBA_PTR_TO_JSON(registry, registry_);
        DARABONBA_PTR_TO_JSON(repository, repository_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tag, tag_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
        DARABONBA_PTR_FROM_JSON(agentCount, agentCount_);
        DARABONBA_PTR_FROM_JSON(cacheSizeBytes, cacheSizeBytes_);
        DARABONBA_PTR_FROM_JSON(canDelete, canDelete_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(deleteBlockReason, deleteBlockReason_);
        DARABONBA_PTR_FROM_JSON(digest, digest_);
        DARABONBA_PTR_FROM_JSON(error, error_);
        DARABONBA_PTR_FROM_JSON(imageId, imageId_);
        DARABONBA_PTR_FROM_JSON(registry, registry_);
        DARABONBA_PTR_FROM_JSON(repository, repository_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tag, tag_);
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
      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The secure and non-empty error code for the current creation attempt.
        // 
        // This parameter is required.
        shared_ptr<string> code_ {};
        // The secure and non-empty description of the failure. It does not contain credentials, internal addresses, or stack traces.
        // 
        // This parameter is required.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->agentCount_ == nullptr && this->cacheSizeBytes_ == nullptr && this->canDelete_ == nullptr && this->createdAt_ == nullptr && this->deleteBlockReason_ == nullptr
        && this->digest_ == nullptr && this->error_ == nullptr && this->imageId_ == nullptr && this->registry_ == nullptr && this->repository_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->workspaceId_ == nullptr; };
      // acrInstanceId Field Functions 
      bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
      void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
      inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
      inline Items& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


      // agentCount Field Functions 
      bool hasAgentCount() const { return this->agentCount_ != nullptr;};
      void deleteAgentCount() { this->agentCount_ = nullptr;};
      inline int64_t getAgentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0L) };
      inline Items& setAgentCount(int64_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


      // cacheSizeBytes Field Functions 
      bool hasCacheSizeBytes() const { return this->cacheSizeBytes_ != nullptr;};
      void deleteCacheSizeBytes() { this->cacheSizeBytes_ = nullptr;};
      inline int64_t getCacheSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(cacheSizeBytes_, 0L) };
      inline Items& setCacheSizeBytes(int64_t cacheSizeBytes) { DARABONBA_PTR_SET_VALUE(cacheSizeBytes_, cacheSizeBytes) };


      // canDelete Field Functions 
      bool hasCanDelete() const { return this->canDelete_ != nullptr;};
      void deleteCanDelete() { this->canDelete_ = nullptr;};
      inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
      inline Items& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // deleteBlockReason Field Functions 
      bool hasDeleteBlockReason() const { return this->deleteBlockReason_ != nullptr;};
      void deleteDeleteBlockReason() { this->deleteBlockReason_ = nullptr;};
      inline string getDeleteBlockReason() const { DARABONBA_PTR_GET_DEFAULT(deleteBlockReason_, "") };
      inline Items& setDeleteBlockReason(string deleteBlockReason) { DARABONBA_PTR_SET_VALUE(deleteBlockReason_, deleteBlockReason) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline Items& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Items::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Items::Error) };
      inline Items::Error getError() { DARABONBA_PTR_GET(error_, Items::Error) };
      inline Items& setError(const Items::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Items& setError(Items::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Items& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // registry Field Functions 
      bool hasRegistry() const { return this->registry_ != nullptr;};
      void deleteRegistry() { this->registry_ = nullptr;};
      inline string getRegistry() const { DARABONBA_PTR_GET_DEFAULT(registry_, "") };
      inline Items& setRegistry(string registry) { DARABONBA_PTR_SET_VALUE(registry_, registry) };


      // repository Field Functions 
      bool hasRepository() const { return this->repository_ != nullptr;};
      void deleteRepository() { this->repository_ = nullptr;};
      inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
      inline Items& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Items& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The ID of the source ACR Enterprise instance.
      // 
      // This parameter is required.
      shared_ptr<string> acrInstanceId_ {};
      // The deduplicated number of agents in the current workspace that have useImageCache set to true and are associated with this logical resource. The value is greater than or equal to 0. This matches the set filtered by imageCacheId in ListAllAgents. Disabled agents are not counted, and this value is independent of the number of occupied instances.
      // 
      // This parameter is required.
      shared_ptr<int64_t> agentCount_ {};
      // The actual cache size in bytes. The value is greater than or equal to 0 if known, or null if unknown. The compressed size of the source image cannot be used as a substitute.
      // 
      // This parameter is required.
      shared_ptr<int64_t> cacheSizeBytes_ {};
      // Indicates whether the resource can be deleted. The value is true if no configuration references with the switch enabled exist in the current workspace, no valid instances are occupying the resource, and the resource is not being deleted. If the reference status is unknown, the query fails instead of defaulting to true.
      // 
      // This parameter is required.
      shared_ptr<bool> canDelete_ {};
      // The creation time of the logical resource in the current workspace, in RFC 3339 format with the time zone. Content updates for the latest tag do not refresh this time.
      // 
      // This parameter is required.
      shared_ptr<string> createdAt_ {};
      // The reason why deletion is blocked. The value is null if canDelete is true. Otherwise, the value is returned based on the priority of DELETING, AGENT_ENABLED, and INSTANCES_RELEASING. Old instances may still occupy the resource even if the agent count is 0.
      // 
      // This parameter is required.
      shared_ptr<string> deleteBlockReason_ {};
      // The digest in the sha256: format followed by a 64-character lowercase hexadecimal string. It only describes the currently registered content and does not indicate whether old instances have been switched.
      // 
      // This parameter is required.
      shared_ptr<string> digest_ {};
      // The cache failure details. It is a non-null object when the status is FAILED, and null for other statuses. It only describes the current content and the current creation attempt.
      // 
      // This parameter is required.
      shared_ptr<Items::Error> error_ {};
      // The logical resource ID that can be managed in the current workspace. This is not the shared physical cache ID.
      // 
      // This parameter is required.
      shared_ptr<string> imageId_ {};
      // The domain name of the source image. It does not include the protocol, path, or credentials.
      // 
      // This parameter is required.
      shared_ptr<string> registry_ {};
      // The path of the source image repository in the namespace/repository format. The namespace is included.
      // 
      // This parameter is required.
      shared_ptr<string> repository_ {};
      // The status of the image cache. Valid values: PENDING (creating), READY (available), FAILED (abnormal), and DELETING (deleting in the current workspace).
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
      // The tag of the source image. It is case-sensitive. Regular tags cannot be registered with different digests, except for the exact lowercase \\"latest\\".
      // 
      // This parameter is required.
      shared_ptr<string> tag_ {};
      // The workspace ID. It must be consistent with the requested workspace. Resources with the same content from other workspaces must not be returned.
      // 
      // This parameter is required.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListImageCachesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListImageCachesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListImageCachesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListImageCachesResponseBody::Items>) };
    inline vector<ListImageCachesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListImageCachesResponseBody::Items>) };
    inline ListImageCachesResponseBody& setItems(const vector<ListImageCachesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListImageCachesResponseBody& setItems(vector<ListImageCachesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListImageCachesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListImageCachesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListImageCachesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListImageCachesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListImageCachesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business response code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    // 
    // This parameter is required.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The records on the current page. An empty array is returned if no matching items are found.
    // 
    // This parameter is required.
    shared_ptr<vector<ListImageCachesResponseBody::Items>> items_ {};
    // The actual page size used for this request. This is not the number of items on the current page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The opaque cursor for the next page. An empty string indicates that no more pages are available.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID used for troubleshooting.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. A value of true does not indicate that the cache creation is complete.
    // 
    // This parameter is required.
    shared_ptr<bool> success_ {};
    // The total number of records that match the current filter conditions. Do not use this value to determine whether all pages have been returned.
    // 
    // This parameter is required.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
