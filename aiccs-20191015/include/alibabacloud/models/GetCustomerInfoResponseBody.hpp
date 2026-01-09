// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetCustomerInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomerInfoResponseBody() = default ;
    GetCustomerInfoResponseBody(const GetCustomerInfoResponseBody &) = default ;
    GetCustomerInfoResponseBody(GetCustomerInfoResponseBody &&) = default ;
    GetCustomerInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerInfoResponseBody() = default ;
    GetCustomerInfoResponseBody& operator=(const GetCustomerInfoResponseBody &) = default ;
    GetCustomerInfoResponseBody& operator=(GetCustomerInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(CustomizeFields, customizeFields_);
        DARABONBA_PTR_TO_JSON(Nick, nick_);
        DARABONBA_PTR_TO_JSON(OuterId, outerId_);
        DARABONBA_PTR_TO_JSON(Photo, photo_);
        DARABONBA_PTR_TO_JSON(RealName, realName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(CustomizeFields, customizeFields_);
        DARABONBA_PTR_FROM_JSON(Nick, nick_);
        DARABONBA_PTR_FROM_JSON(OuterId, outerId_);
        DARABONBA_PTR_FROM_JSON(Photo, photo_);
        DARABONBA_PTR_FROM_JSON(RealName, realName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->customizeFields_ == nullptr
        && this->nick_ == nullptr && this->outerId_ == nullptr && this->photo_ == nullptr && this->realName_ == nullptr && this->userId_ == nullptr; };
      // customizeFields Field Functions 
      bool hasCustomizeFields() const { return this->customizeFields_ != nullptr;};
      void deleteCustomizeFields() { this->customizeFields_ = nullptr;};
      inline       const Darabonba::Json & getCustomizeFields() const { DARABONBA_GET(customizeFields_) };
      Darabonba::Json & getCustomizeFields() { DARABONBA_GET(customizeFields_) };
      inline Data& setCustomizeFields(const Darabonba::Json & customizeFields) { DARABONBA_SET_VALUE(customizeFields_, customizeFields) };
      inline Data& setCustomizeFields(Darabonba::Json && customizeFields) { DARABONBA_SET_RVALUE(customizeFields_, customizeFields) };


      // nick Field Functions 
      bool hasNick() const { return this->nick_ != nullptr;};
      void deleteNick() { this->nick_ = nullptr;};
      inline string getNick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
      inline Data& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


      // outerId Field Functions 
      bool hasOuterId() const { return this->outerId_ != nullptr;};
      void deleteOuterId() { this->outerId_ = nullptr;};
      inline string getOuterId() const { DARABONBA_PTR_GET_DEFAULT(outerId_, "") };
      inline Data& setOuterId(string outerId) { DARABONBA_PTR_SET_VALUE(outerId_, outerId) };


      // photo Field Functions 
      bool hasPhoto() const { return this->photo_ != nullptr;};
      void deletePhoto() { this->photo_ = nullptr;};
      inline string getPhoto() const { DARABONBA_PTR_GET_DEFAULT(photo_, "") };
      inline Data& setPhoto(string photo) { DARABONBA_PTR_SET_VALUE(photo_, photo) };


      // realName Field Functions 
      bool hasRealName() const { return this->realName_ != nullptr;};
      void deleteRealName() { this->realName_ = nullptr;};
      inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
      inline Data& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Data& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      Darabonba::Json customizeFields_ {};
      shared_ptr<string> nick_ {};
      shared_ptr<string> outerId_ {};
      shared_ptr<string> photo_ {};
      shared_ptr<string> realName_ {};
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomerInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomerInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomerInfoResponseBody::Data) };
    inline GetCustomerInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomerInfoResponseBody::Data) };
    inline GetCustomerInfoResponseBody& setData(const GetCustomerInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomerInfoResponseBody& setData(GetCustomerInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomerInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomerInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomerInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCustomerInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
