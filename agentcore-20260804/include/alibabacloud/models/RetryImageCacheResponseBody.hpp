// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYIMAGECACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRYIMAGECACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class RetryImageCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryImageCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RetryImageCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    RetryImageCacheResponseBody() = default ;
    RetryImageCacheResponseBody(const RetryImageCacheResponseBody &) = default ;
    RetryImageCacheResponseBody(RetryImageCacheResponseBody &&) = default ;
    RetryImageCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryImageCacheResponseBody() = default ;
    RetryImageCacheResponseBody& operator=(const RetryImageCacheResponseBody &) = default ;
    RetryImageCacheResponseBody& operator=(RetryImageCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        // The secure and non-empty error code for the current production failure.
        // 
        // This parameter is required.
        shared_ptr<string> code_ {};
        // The secure and non-empty display reason for the production failure, excluding credentials, internal addresses, or stack traces.
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
      inline Data& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


      // agentCount Field Functions 
      bool hasAgentCount() const { return this->agentCount_ != nullptr;};
      void deleteAgentCount() { this->agentCount_ = nullptr;};
      inline int64_t getAgentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0L) };
      inline Data& setAgentCount(int64_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


      // cacheSizeBytes Field Functions 
      bool hasCacheSizeBytes() const { return this->cacheSizeBytes_ != nullptr;};
      void deleteCacheSizeBytes() { this->cacheSizeBytes_ = nullptr;};
      inline int64_t getCacheSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(cacheSizeBytes_, 0L) };
      inline Data& setCacheSizeBytes(int64_t cacheSizeBytes) { DARABONBA_PTR_SET_VALUE(cacheSizeBytes_, cacheSizeBytes) };


      // canDelete Field Functions 
      bool hasCanDelete() const { return this->canDelete_ != nullptr;};
      void deleteCanDelete() { this->canDelete_ = nullptr;};
      inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
      inline Data& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // deleteBlockReason Field Functions 
      bool hasDeleteBlockReason() const { return this->deleteBlockReason_ != nullptr;};
      void deleteDeleteBlockReason() { this->deleteBlockReason_ = nullptr;};
      inline string getDeleteBlockReason() const { DARABONBA_PTR_GET_DEFAULT(deleteBlockReason_, "") };
      inline Data& setDeleteBlockReason(string deleteBlockReason) { DARABONBA_PTR_SET_VALUE(deleteBlockReason_, deleteBlockReason) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline Data& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Data::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Data::Error) };
      inline Data::Error getError() { DARABONBA_PTR_GET(error_, Data::Error) };
      inline Data& setError(const Data::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Data& setError(Data::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // registry Field Functions 
      bool hasRegistry() const { return this->registry_ != nullptr;};
      void deleteRegistry() { this->registry_ = nullptr;};
      inline string getRegistry() const { DARABONBA_PTR_GET_DEFAULT(registry_, "") };
      inline Data& setRegistry(string registry) { DARABONBA_PTR_SET_VALUE(registry_, registry) };


      // repository Field Functions 
      bool hasRepository() const { return this->repository_ != nullptr;};
      void deleteRepository() { this->repository_ = nullptr;};
      inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
      inline Data& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The source ACR Enterprise instance ID.
      // 
      // This parameter is required.
      shared_ptr<string> acrInstanceId_ {};
      // The deduplicated number of agents in the current workspace that have useImageCache set to true and are associated with this logical resource. The value is greater than or equal to 0. This uses the same set as the imageCacheId filter in ListAllAgents. Agents with the feature disabled are not counted, regardless of the number of occupied instances.
      // 
      // This parameter is required.
      shared_ptr<int64_t> agentCount_ {};
      // The actual cache size in bytes. Known values are greater than or equal to 0. If unknown, the value is null. The compressed size of the source image cannot be used as a substitute.
      // 
      // This parameter is required.
      shared_ptr<int64_t> cacheSizeBytes_ {};
      // Indicates whether deletion is allowed. The value is true when the current workspace has no configuration references with the switch enabled, no valid instances are occupying the resource, and the resource is not being deleted. If the reference status is unknown, the query fails instead of allowing deletion by default.
      // 
      // This parameter is required.
      shared_ptr<bool> canDelete_ {};
      // The creation time of the logical resource in the current workspace, in RFC3339 format with time zone. Content updates for the "latest" tag do not refresh this time.
      // 
      // This parameter is required.
      shared_ptr<string> createdAt_ {};
      // The reason why deletion is blocked. The value is null when canDelete is true. Otherwise, the value is returned based on the priority of DELETING, AGENT_ENABLED, and INSTANCES_RELEASING. Old instances may still occupy the resource even if the agent count is 0.
      // 
      // This parameter is required.
      shared_ptr<string> deleteBlockReason_ {};
      // The current content digest in the sha256: format followed by a 64-character lowercase hexadecimal string. It only describes the currently registered content and does not prove that old instances have been switched.
      // 
      // This parameter is required.
      shared_ptr<string> digest_ {};
      // The reason for cache failure. This is a non-empty object when the status is FAILED, and null for other statuses. It only describes the current content and the current production round.
      // 
      // This parameter is required.
      shared_ptr<Data::Error> error_ {};
      // The logical resource ID manageable by the current workspace, not the shared physical cache ID.
      // 
      // This parameter is required.
      shared_ptr<string> imageId_ {};
      // The source image domain name, excluding the protocol, path, and credentials.
      // 
      // This parameter is required.
      shared_ptr<string> registry_ {};
      // The source image repository path in the namespace/repository format, which includes the namespace.
      // 
      // This parameter is required.
      shared_ptr<string> repository_ {};
      // The image cache status. Valid values:
      // - PENDING: The cache is being created.
      // - READY: The cache is available.
      // - FAILED: An exception occurred.
      // - DELETING: The cache is being deleted in the current workspace.
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
      // The source image tag with case preserved. Regular tags cannot be registered with different digests, except for the exact lowercase "latest" tag.
      // 
      // This parameter is required.
      shared_ptr<string> tag_ {};
      // The workspace ID, which is consistent with the requested workspace. Resources with the same content from other workspaces are not returned.
      // 
      // This parameter is required.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RetryImageCacheResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RetryImageCacheResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RetryImageCacheResponseBody::Data) };
    inline RetryImageCacheResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RetryImageCacheResponseBody::Data) };
    inline RetryImageCacheResponseBody& setData(const RetryImageCacheResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RetryImageCacheResponseBody& setData(RetryImageCacheResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline RetryImageCacheResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RetryImageCacheResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetryImageCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RetryImageCacheResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The retry image cache result.
    // 
    // This parameter is required.
    shared_ptr<RetryImageCacheResponseBody::Data> data_ {};
    // The HTTP status code.
    // 
    // This parameter is required.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The request ID, which is used for troubleshooting.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. This does not mean that the cache production is complete.
    // 
    // This parameter is required.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
