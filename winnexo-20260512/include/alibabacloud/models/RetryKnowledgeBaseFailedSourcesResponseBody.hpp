// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEFAILEDSOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEFAILEDSOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RetryKnowledgeBaseFailedSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryKnowledgeBaseFailedSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(enqueuedCount, enqueuedCount_);
      DARABONBA_PTR_TO_JSON(enqueuedIds, enqueuedIds_);
      DARABONBA_PTR_TO_JSON(failedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(failedSources, failedSources_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(skippedCount, skippedCount_);
    };
    friend void from_json(const Darabonba::Json& j, RetryKnowledgeBaseFailedSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(enqueuedCount, enqueuedCount_);
      DARABONBA_PTR_FROM_JSON(enqueuedIds, enqueuedIds_);
      DARABONBA_PTR_FROM_JSON(failedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(failedSources, failedSources_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(skippedCount, skippedCount_);
    };
    RetryKnowledgeBaseFailedSourcesResponseBody() = default ;
    RetryKnowledgeBaseFailedSourcesResponseBody(const RetryKnowledgeBaseFailedSourcesResponseBody &) = default ;
    RetryKnowledgeBaseFailedSourcesResponseBody(RetryKnowledgeBaseFailedSourcesResponseBody &&) = default ;
    RetryKnowledgeBaseFailedSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryKnowledgeBaseFailedSourcesResponseBody() = default ;
    RetryKnowledgeBaseFailedSourcesResponseBody& operator=(const RetryKnowledgeBaseFailedSourcesResponseBody &) = default ;
    RetryKnowledgeBaseFailedSourcesResponseBody& operator=(RetryKnowledgeBaseFailedSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailedSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedSources& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, FailedSources& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      };
      FailedSources() = default ;
      FailedSources(const FailedSources &) = default ;
      FailedSources(FailedSources &&) = default ;
      FailedSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedSources() = default ;
      FailedSources& operator=(const FailedSources &) = default ;
      FailedSources& operator=(FailedSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FailedSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline FailedSources& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline FailedSources& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // The file name.
      shared_ptr<string> name_ {};
      // The data source ID.
      shared_ptr<string> sourceId_ {};
      // The data source type.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->directoryId_ == nullptr && this->enqueuedCount_ == nullptr && this->enqueuedIds_ == nullptr && this->failedCount_ == nullptr && this->failedSources_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->skippedCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // enqueuedCount Field Functions 
    bool hasEnqueuedCount() const { return this->enqueuedCount_ != nullptr;};
    void deleteEnqueuedCount() { this->enqueuedCount_ = nullptr;};
    inline int64_t getEnqueuedCount() const { DARABONBA_PTR_GET_DEFAULT(enqueuedCount_, 0L) };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setEnqueuedCount(int64_t enqueuedCount) { DARABONBA_PTR_SET_VALUE(enqueuedCount_, enqueuedCount) };


    // enqueuedIds Field Functions 
    bool hasEnqueuedIds() const { return this->enqueuedIds_ != nullptr;};
    void deleteEnqueuedIds() { this->enqueuedIds_ = nullptr;};
    inline const vector<string> & getEnqueuedIds() const { DARABONBA_PTR_GET_CONST(enqueuedIds_, vector<string>) };
    inline vector<string> getEnqueuedIds() { DARABONBA_PTR_GET(enqueuedIds_, vector<string>) };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setEnqueuedIds(const vector<string> & enqueuedIds) { DARABONBA_PTR_SET_VALUE(enqueuedIds_, enqueuedIds) };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setEnqueuedIds(vector<string> && enqueuedIds) { DARABONBA_PTR_SET_RVALUE(enqueuedIds_, enqueuedIds) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedSources Field Functions 
    bool hasFailedSources() const { return this->failedSources_ != nullptr;};
    void deleteFailedSources() { this->failedSources_ = nullptr;};
    inline const vector<RetryKnowledgeBaseFailedSourcesResponseBody::FailedSources> & getFailedSources() const { DARABONBA_PTR_GET_CONST(failedSources_, vector<RetryKnowledgeBaseFailedSourcesResponseBody::FailedSources>) };
    inline vector<RetryKnowledgeBaseFailedSourcesResponseBody::FailedSources> getFailedSources() { DARABONBA_PTR_GET(failedSources_, vector<RetryKnowledgeBaseFailedSourcesResponseBody::FailedSources>) };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setFailedSources(const vector<RetryKnowledgeBaseFailedSourcesResponseBody::FailedSources> & failedSources) { DARABONBA_PTR_SET_VALUE(failedSources_, failedSources) };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setFailedSources(vector<RetryKnowledgeBaseFailedSourcesResponseBody::FailedSources> && failedSources) { DARABONBA_PTR_SET_RVALUE(failedSources_, failedSources) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skippedCount Field Functions 
    bool hasSkippedCount() const { return this->skippedCount_ != nullptr;};
    void deleteSkippedCount() { this->skippedCount_ = nullptr;};
    inline int64_t getSkippedCount() const { DARABONBA_PTR_GET_DEFAULT(skippedCount_, 0L) };
    inline RetryKnowledgeBaseFailedSourcesResponseBody& setSkippedCount(int64_t skippedCount) { DARABONBA_PTR_SET_VALUE(skippedCount_, skippedCount) };


  protected:
    // The business status code. A value of 200 indicates success. A failure returns a backend error code (ERR.* / InvalidParameter.*).
    shared_ptr<string> code_ {};
    // The enterprise knowledge base directory ID.
    shared_ptr<string> directoryId_ {};
    // The number of resources successfully enqueued for retry.
    shared_ptr<int64_t> enqueuedCount_ {};
    // enqueuedIds。
    shared_ptr<vector<string>> enqueuedIds_ {};
    // The total number of failed resources under the directory.
    shared_ptr<int64_t> failedCount_ {};
    // The list of failed data sources.
    shared_ptr<vector<RetryKnowledgeBaseFailedSourcesResponseBody::FailedSources>> failedSources_ {};
    // The error description. This value is empty on success.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The number of resources skipped because they are not in FAILED status.
    shared_ptr<int64_t> skippedCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
