// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENUMBERMCCMNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENUMBERMCCMNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{
namespace Models
{
  class DescribeNumberMccMncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNumberMccMncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNumberMccMncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNumberMccMncResponseBody() = default ;
    DescribeNumberMccMncResponseBody(const DescribeNumberMccMncResponseBody &) = default ;
    DescribeNumberMccMncResponseBody(DescribeNumberMccMncResponseBody &&) = default ;
    DescribeNumberMccMncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNumberMccMncResponseBody() = default ;
    DescribeNumberMccMncResponseBody& operator=(const DescribeNumberMccMncResponseBody &) = default ;
    DescribeNumberMccMncResponseBody& operator=(DescribeNumberMccMncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CountryIso3, countryIso3_);
        DARABONBA_PTR_TO_JSON(Mcc, mcc_);
        DARABONBA_PTR_TO_JSON(Mnc, mnc_);
        DARABONBA_PTR_TO_JSON(Ported, ported_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CountryIso3, countryIso3_);
        DARABONBA_PTR_FROM_JSON(Mcc, mcc_);
        DARABONBA_PTR_FROM_JSON(Mnc, mnc_);
        DARABONBA_PTR_FROM_JSON(Ported, ported_);
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
      virtual bool empty() const override { return this->countryIso3_ == nullptr
        && this->mcc_ == nullptr && this->mnc_ == nullptr && this->ported_ == nullptr; };
      // countryIso3 Field Functions 
      bool hasCountryIso3() const { return this->countryIso3_ != nullptr;};
      void deleteCountryIso3() { this->countryIso3_ = nullptr;};
      inline string getCountryIso3() const { DARABONBA_PTR_GET_DEFAULT(countryIso3_, "") };
      inline Data& setCountryIso3(string countryIso3) { DARABONBA_PTR_SET_VALUE(countryIso3_, countryIso3) };


      // mcc Field Functions 
      bool hasMcc() const { return this->mcc_ != nullptr;};
      void deleteMcc() { this->mcc_ = nullptr;};
      inline string getMcc() const { DARABONBA_PTR_GET_DEFAULT(mcc_, "") };
      inline Data& setMcc(string mcc) { DARABONBA_PTR_SET_VALUE(mcc_, mcc) };


      // mnc Field Functions 
      bool hasMnc() const { return this->mnc_ != nullptr;};
      void deleteMnc() { this->mnc_ = nullptr;};
      inline string getMnc() const { DARABONBA_PTR_GET_DEFAULT(mnc_, "") };
      inline Data& setMnc(string mnc) { DARABONBA_PTR_SET_VALUE(mnc_, mnc) };


      // ported Field Functions 
      bool hasPorted() const { return this->ported_ != nullptr;};
      void deletePorted() { this->ported_ = nullptr;};
      inline bool getPorted() const { DARABONBA_PTR_GET_DEFAULT(ported_, false) };
      inline Data& setPorted(bool ported) { DARABONBA_PTR_SET_VALUE(ported_, ported) };


    protected:
      shared_ptr<string> countryIso3_ {};
      shared_ptr<string> mcc_ {};
      shared_ptr<string> mnc_ {};
      shared_ptr<bool> ported_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeNumberMccMncResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeNumberMccMncResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeNumberMccMncResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeNumberMccMncResponseBody::Data) };
    inline DescribeNumberMccMncResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeNumberMccMncResponseBody::Data) };
    inline DescribeNumberMccMncResponseBody& setData(const DescribeNumberMccMncResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNumberMccMncResponseBody& setData(DescribeNumberMccMncResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeNumberMccMncResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNumberMccMncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<DescribeNumberMccMncResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101
#endif
