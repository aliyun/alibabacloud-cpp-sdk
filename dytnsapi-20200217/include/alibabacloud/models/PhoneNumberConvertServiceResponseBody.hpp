// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PHONENUMBERCONVERTSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PHONENUMBERCONVERTSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class PhoneNumberConvertServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PhoneNumberConvertServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PhoneNumberConvertServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PhoneNumberConvertServiceResponseBody() = default ;
    PhoneNumberConvertServiceResponseBody(const PhoneNumberConvertServiceResponseBody &) = default ;
    PhoneNumberConvertServiceResponseBody(PhoneNumberConvertServiceResponseBody &&) = default ;
    PhoneNumberConvertServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PhoneNumberConvertServiceResponseBody() = default ;
    PhoneNumberConvertServiceResponseBody& operator=(const PhoneNumberConvertServiceResponseBody &) = default ;
    PhoneNumberConvertServiceResponseBody& operator=(PhoneNumberConvertServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConverResult, converResult_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(NumberMd5, numberMd5_);
        DARABONBA_PTR_TO_JSON(NumberSha256, numberSha256_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConverResult, converResult_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(NumberMd5, numberMd5_);
        DARABONBA_PTR_FROM_JSON(NumberSha256, numberSha256_);
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
      virtual bool empty() const override { return this->converResult_ == nullptr
        && this->number_ == nullptr && this->numberMd5_ == nullptr && this->numberSha256_ == nullptr; };
      // converResult Field Functions 
      bool hasConverResult() const { return this->converResult_ != nullptr;};
      void deleteConverResult() { this->converResult_ = nullptr;};
      inline bool getConverResult() const { DARABONBA_PTR_GET_DEFAULT(converResult_, false) };
      inline Data& setConverResult(bool converResult) { DARABONBA_PTR_SET_VALUE(converResult_, converResult) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Data& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // numberMd5 Field Functions 
      bool hasNumberMd5() const { return this->numberMd5_ != nullptr;};
      void deleteNumberMd5() { this->numberMd5_ = nullptr;};
      inline string getNumberMd5() const { DARABONBA_PTR_GET_DEFAULT(numberMd5_, "") };
      inline Data& setNumberMd5(string numberMd5) { DARABONBA_PTR_SET_VALUE(numberMd5_, numberMd5) };


      // numberSha256 Field Functions 
      bool hasNumberSha256() const { return this->numberSha256_ != nullptr;};
      void deleteNumberSha256() { this->numberSha256_ = nullptr;};
      inline string getNumberSha256() const { DARABONBA_PTR_GET_DEFAULT(numberSha256_, "") };
      inline Data& setNumberSha256(string numberSha256) { DARABONBA_PTR_SET_VALUE(numberSha256_, numberSha256) };


    protected:
      shared_ptr<bool> converResult_ {};
      shared_ptr<string> number_ {};
      shared_ptr<string> numberMd5_ {};
      shared_ptr<string> numberSha256_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PhoneNumberConvertServiceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PhoneNumberConvertServiceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PhoneNumberConvertServiceResponseBody::Data>) };
    inline vector<PhoneNumberConvertServiceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<PhoneNumberConvertServiceResponseBody::Data>) };
    inline PhoneNumberConvertServiceResponseBody& setData(const vector<PhoneNumberConvertServiceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PhoneNumberConvertServiceResponseBody& setData(vector<PhoneNumberConvertServiceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PhoneNumberConvertServiceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PhoneNumberConvertServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<PhoneNumberConvertServiceResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
