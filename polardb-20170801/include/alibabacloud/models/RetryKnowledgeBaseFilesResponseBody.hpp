// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRYKNOWLEDGEBASEFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RetryKnowledgeBaseFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryKnowledgeBaseFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SucceededCount, succeededCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, RetryKnowledgeBaseFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SucceededCount, succeededCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    RetryKnowledgeBaseFilesResponseBody() = default ;
    RetryKnowledgeBaseFilesResponseBody(const RetryKnowledgeBaseFilesResponseBody &) = default ;
    RetryKnowledgeBaseFilesResponseBody(RetryKnowledgeBaseFilesResponseBody &&) = default ;
    RetryKnowledgeBaseFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryKnowledgeBaseFilesResponseBody() = default ;
    RetryKnowledgeBaseFilesResponseBody& operator=(const RetryKnowledgeBaseFilesResponseBody &) = default ;
    RetryKnowledgeBaseFilesResponseBody& operator=(RetryKnowledgeBaseFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->fileId_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Items& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Items& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Items& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Items& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The failure reason.
      shared_ptr<string> errorMessage_ {};
      // The file ID.
      shared_ptr<string> fileId_ {};
      // The request result. Valid values:
      // 
      // - **true**: The request was successful.
      // - **false**: The request failed.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->items_ == nullptr && this->requestId_ == nullptr && this->succeededCount_ == nullptr && this->totalCount_ == nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline RetryKnowledgeBaseFilesResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<RetryKnowledgeBaseFilesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<RetryKnowledgeBaseFilesResponseBody::Items>) };
    inline vector<RetryKnowledgeBaseFilesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<RetryKnowledgeBaseFilesResponseBody::Items>) };
    inline RetryKnowledgeBaseFilesResponseBody& setItems(const vector<RetryKnowledgeBaseFilesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline RetryKnowledgeBaseFilesResponseBody& setItems(vector<RetryKnowledgeBaseFilesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetryKnowledgeBaseFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // succeededCount Field Functions 
    bool hasSucceededCount() const { return this->succeededCount_ != nullptr;};
    void deleteSucceededCount() { this->succeededCount_ = nullptr;};
    inline int32_t getSucceededCount() const { DARABONBA_PTR_GET_DEFAULT(succeededCount_, 0) };
    inline RetryKnowledgeBaseFilesResponseBody& setSucceededCount(int32_t succeededCount) { DARABONBA_PTR_SET_VALUE(succeededCount_, succeededCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline RetryKnowledgeBaseFilesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of failed retries.
    shared_ptr<int32_t> failedCount_ {};
    // The list of retry results.
    shared_ptr<vector<RetryKnowledgeBaseFilesResponseBody::Items>> items_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The number of successful retries.
    shared_ptr<int32_t> succeededCount_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
