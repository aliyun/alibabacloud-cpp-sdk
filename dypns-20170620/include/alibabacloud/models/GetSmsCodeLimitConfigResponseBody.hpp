// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSCODELIMITCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMSCODELIMITCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class GetSmsCodeLimitConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsCodeLimitConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsCodeLimitConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSmsCodeLimitConfigResponseBody() = default ;
    GetSmsCodeLimitConfigResponseBody(const GetSmsCodeLimitConfigResponseBody &) = default ;
    GetSmsCodeLimitConfigResponseBody(GetSmsCodeLimitConfigResponseBody &&) = default ;
    GetSmsCodeLimitConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsCodeLimitConfigResponseBody() = default ;
    GetSmsCodeLimitConfigResponseBody& operator=(const GetSmsCodeLimitConfigResponseBody &) = default ;
    GetSmsCodeLimitConfigResponseBody& operator=(GetSmsCodeLimitConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LimitDay, limitDay_);
        DARABONBA_PTR_TO_JSON(LimitHour, limitHour_);
        DARABONBA_PTR_TO_JSON(LimitId, limitId_);
        DARABONBA_PTR_TO_JSON(LimitMinute, limitMinute_);
        DARABONBA_PTR_TO_JSON(LimitOther, limitOther_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LimitDay, limitDay_);
        DARABONBA_PTR_FROM_JSON(LimitHour, limitHour_);
        DARABONBA_PTR_FROM_JSON(LimitId, limitId_);
        DARABONBA_PTR_FROM_JSON(LimitMinute, limitMinute_);
        DARABONBA_PTR_FROM_JSON(LimitOther, limitOther_);
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
      virtual bool empty() const override { return this->limitDay_ == nullptr
        && this->limitHour_ == nullptr && this->limitId_ == nullptr && this->limitMinute_ == nullptr && this->limitOther_ == nullptr; };
      // limitDay Field Functions 
      bool hasLimitDay() const { return this->limitDay_ != nullptr;};
      void deleteLimitDay() { this->limitDay_ = nullptr;};
      inline int32_t getLimitDay() const { DARABONBA_PTR_GET_DEFAULT(limitDay_, 0) };
      inline Data& setLimitDay(int32_t limitDay) { DARABONBA_PTR_SET_VALUE(limitDay_, limitDay) };


      // limitHour Field Functions 
      bool hasLimitHour() const { return this->limitHour_ != nullptr;};
      void deleteLimitHour() { this->limitHour_ = nullptr;};
      inline int32_t getLimitHour() const { DARABONBA_PTR_GET_DEFAULT(limitHour_, 0) };
      inline Data& setLimitHour(int32_t limitHour) { DARABONBA_PTR_SET_VALUE(limitHour_, limitHour) };


      // limitId Field Functions 
      bool hasLimitId() const { return this->limitId_ != nullptr;};
      void deleteLimitId() { this->limitId_ = nullptr;};
      inline int64_t getLimitId() const { DARABONBA_PTR_GET_DEFAULT(limitId_, 0L) };
      inline Data& setLimitId(int64_t limitId) { DARABONBA_PTR_SET_VALUE(limitId_, limitId) };


      // limitMinute Field Functions 
      bool hasLimitMinute() const { return this->limitMinute_ != nullptr;};
      void deleteLimitMinute() { this->limitMinute_ = nullptr;};
      inline int32_t getLimitMinute() const { DARABONBA_PTR_GET_DEFAULT(limitMinute_, 0) };
      inline Data& setLimitMinute(int32_t limitMinute) { DARABONBA_PTR_SET_VALUE(limitMinute_, limitMinute) };


      // limitOther Field Functions 
      bool hasLimitOther() const { return this->limitOther_ != nullptr;};
      void deleteLimitOther() { this->limitOther_ = nullptr;};
      inline string getLimitOther() const { DARABONBA_PTR_GET_DEFAULT(limitOther_, "") };
      inline Data& setLimitOther(string limitOther) { DARABONBA_PTR_SET_VALUE(limitOther_, limitOther) };


    protected:
      shared_ptr<int32_t> limitDay_ {};
      shared_ptr<int32_t> limitHour_ {};
      shared_ptr<int64_t> limitId_ {};
      shared_ptr<int32_t> limitMinute_ {};
      shared_ptr<string> limitOther_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmsCodeLimitConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSmsCodeLimitConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSmsCodeLimitConfigResponseBody::Data) };
    inline GetSmsCodeLimitConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSmsCodeLimitConfigResponseBody::Data) };
    inline GetSmsCodeLimitConfigResponseBody& setData(const GetSmsCodeLimitConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSmsCodeLimitConfigResponseBody& setData(GetSmsCodeLimitConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmsCodeLimitConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmsCodeLimitConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSmsCodeLimitConfigResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
