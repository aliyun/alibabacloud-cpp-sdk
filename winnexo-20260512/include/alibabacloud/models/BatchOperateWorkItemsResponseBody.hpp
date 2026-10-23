// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHOPERATEWORKITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHOPERATEWORKITEMSRESPONSEBODY_HPP_
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
  class BatchOperateWorkItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchOperateWorkItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(skipped, skipped_);
      DARABONBA_PTR_TO_JSON(succeeded, succeeded_);
    };
    friend void from_json(const Darabonba::Json& j, BatchOperateWorkItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(skipped, skipped_);
      DARABONBA_PTR_FROM_JSON(succeeded, succeeded_);
    };
    BatchOperateWorkItemsResponseBody() = default ;
    BatchOperateWorkItemsResponseBody(const BatchOperateWorkItemsResponseBody &) = default ;
    BatchOperateWorkItemsResponseBody(BatchOperateWorkItemsResponseBody &&) = default ;
    BatchOperateWorkItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchOperateWorkItemsResponseBody() = default ;
    BatchOperateWorkItemsResponseBody& operator=(const BatchOperateWorkItemsResponseBody &) = default ;
    BatchOperateWorkItemsResponseBody& operator=(BatchOperateWorkItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(success, success_);
        DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(success, success_);
        DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
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
      virtual bool empty() const override { return this->reason_ == nullptr
        && this->success_ == nullptr && this->workItemId_ == nullptr; };
      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Items& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Items& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // workItemId Field Functions 
      bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
      void deleteWorkItemId() { this->workItemId_ = nullptr;};
      inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
      inline Items& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


    protected:
      // The reason for skipping or failure.
      shared_ptr<string> reason_ {};
      // Indicates whether the execution was successful.
      shared_ptr<bool> success_ {};
      // The ID of the work item.
      shared_ptr<string> workItemId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->skipped_ == nullptr && this->succeeded_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchOperateWorkItemsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<BatchOperateWorkItemsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<BatchOperateWorkItemsResponseBody::Items>) };
    inline vector<BatchOperateWorkItemsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<BatchOperateWorkItemsResponseBody::Items>) };
    inline BatchOperateWorkItemsResponseBody& setItems(const vector<BatchOperateWorkItemsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline BatchOperateWorkItemsResponseBody& setItems(vector<BatchOperateWorkItemsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchOperateWorkItemsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchOperateWorkItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skipped Field Functions 
    bool hasSkipped() const { return this->skipped_ != nullptr;};
    void deleteSkipped() { this->skipped_ = nullptr;};
    inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
    inline BatchOperateWorkItemsResponseBody& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


    // succeeded Field Functions 
    bool hasSucceeded() const { return this->succeeded_ != nullptr;};
    void deleteSucceeded() { this->succeeded_ = nullptr;};
    inline int64_t getSucceeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0L) };
    inline BatchOperateWorkItemsResponseBody& setSucceeded(int64_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The results for each item. The order of the results matches the order of the items in the request.
    shared_ptr<vector<BatchOperateWorkItemsResponseBody::Items>> items_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of skipped or failed operations.
    shared_ptr<int64_t> skipped_ {};
    // The number of successful operations.
    shared_ptr<int64_t> succeeded_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
