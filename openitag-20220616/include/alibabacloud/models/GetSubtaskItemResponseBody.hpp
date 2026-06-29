// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBTASKITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBTASKITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubtaskItemDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class GetSubtaskItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubtaskItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubtaskItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSubtaskItemResponseBody() = default ;
    GetSubtaskItemResponseBody(const GetSubtaskItemResponseBody &) = default ;
    GetSubtaskItemResponseBody(GetSubtaskItemResponseBody &&) = default ;
    GetSubtaskItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubtaskItemResponseBody() = default ;
    GetSubtaskItemResponseBody& operator=(const GetSubtaskItemResponseBody &) = default ;
    GetSubtaskItemResponseBody& operator=(GetSubtaskItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->details_ == nullptr && this->errorCode_ == nullptr && this->item_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetSubtaskItemResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline GetSubtaskItemResponseBody& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSubtaskItemResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const SubtaskItemDetail & getItem() const { DARABONBA_PTR_GET_CONST(item_, SubtaskItemDetail) };
    inline SubtaskItemDetail getItem() { DARABONBA_PTR_GET(item_, SubtaskItemDetail) };
    inline GetSubtaskItemResponseBody& setItem(const SubtaskItemDetail & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline GetSubtaskItemResponseBody& setItem(SubtaskItemDetail && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubtaskItemResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubtaskItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSubtaskItemResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Return code. The default value is 0, indicating normal execution.
    shared_ptr<int32_t> code_ {};
    // Details.
    shared_ptr<string> details_ {};
    // Error code.
    shared_ptr<string> errorCode_ {};
    // Data item.
    shared_ptr<SubtaskItemDetail> item_ {};
    // Return message of the request.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation succeeded. Valid values:
    // - true: The request succeeded.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
