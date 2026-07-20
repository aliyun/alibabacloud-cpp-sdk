// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTIFICATIONCLICKRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNOTIFICATIONCLICKRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetNotificationClickRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotificationClickRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNotificationClickRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNotificationClickRecordResponseBody() = default ;
    GetNotificationClickRecordResponseBody(const GetNotificationClickRecordResponseBody &) = default ;
    GetNotificationClickRecordResponseBody(GetNotificationClickRecordResponseBody &&) = default ;
    GetNotificationClickRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotificationClickRecordResponseBody() = default ;
    GetNotificationClickRecordResponseBody& operator=(const GetNotificationClickRecordResponseBody &) = default ;
    GetNotificationClickRecordResponseBody& operator=(GetNotificationClickRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(UserCancel, userCancel_);
        DARABONBA_PTR_TO_JSON(UserConfirm, userConfirm_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(UserCancel, userCancel_);
        DARABONBA_PTR_FROM_JSON(UserConfirm, userConfirm_);
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
      virtual bool empty() const override { return this->userCancel_ == nullptr
        && this->userConfirm_ == nullptr; };
      // userCancel Field Functions 
      bool hasUserCancel() const { return this->userCancel_ != nullptr;};
      void deleteUserCancel() { this->userCancel_ = nullptr;};
      inline string getUserCancel() const { DARABONBA_PTR_GET_DEFAULT(userCancel_, "") };
      inline Data& setUserCancel(string userCancel) { DARABONBA_PTR_SET_VALUE(userCancel_, userCancel) };


      // userConfirm Field Functions 
      bool hasUserConfirm() const { return this->userConfirm_ != nullptr;};
      void deleteUserConfirm() { this->userConfirm_ = nullptr;};
      inline string getUserConfirm() const { DARABONBA_PTR_GET_DEFAULT(userConfirm_, "") };
      inline Data& setUserConfirm(string userConfirm) { DARABONBA_PTR_SET_VALUE(userConfirm_, userConfirm) };


    protected:
      shared_ptr<string> userCancel_ {};
      shared_ptr<string> userConfirm_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetNotificationClickRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNotificationClickRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNotificationClickRecordResponseBody::Data) };
    inline GetNotificationClickRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNotificationClickRecordResponseBody::Data) };
    inline GetNotificationClickRecordResponseBody& setData(const GetNotificationClickRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNotificationClickRecordResponseBody& setData(GetNotificationClickRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNotificationClickRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNotificationClickRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNotificationClickRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetNotificationClickRecordResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
