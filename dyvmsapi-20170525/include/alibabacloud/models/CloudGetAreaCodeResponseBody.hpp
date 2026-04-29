// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETAREACODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETAREACODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudGetAreaCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetAreaCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetAreaCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudGetAreaCodeResponseBody() = default ;
    CloudGetAreaCodeResponseBody(const CloudGetAreaCodeResponseBody &) = default ;
    CloudGetAreaCodeResponseBody(CloudGetAreaCodeResponseBody &&) = default ;
    CloudGetAreaCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetAreaCodeResponseBody() = default ;
    CloudGetAreaCodeResponseBody& operator=(const CloudGetAreaCodeResponseBody &) = default ;
    CloudGetAreaCodeResponseBody& operator=(CloudGetAreaCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(Province, province_);
        DARABONBA_PTR_TO_JSON(Tel, tel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
        DARABONBA_PTR_FROM_JSON(Tel, tel_);
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
      virtual bool empty() const override { return this->areaCode_ == nullptr
        && this->city_ == nullptr && this->province_ == nullptr && this->tel_ == nullptr; };
      // areaCode Field Functions 
      bool hasAreaCode() const { return this->areaCode_ != nullptr;};
      void deleteAreaCode() { this->areaCode_ = nullptr;};
      inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
      inline Data& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline Data& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline Data& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      // tel Field Functions 
      bool hasTel() const { return this->tel_ != nullptr;};
      void deleteTel() { this->tel_ = nullptr;};
      inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
      inline Data& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


    protected:
      // 区号
      shared_ptr<string> areaCode_ {};
      // 号码所属城市
      shared_ptr<string> city_ {};
      // 号码所属省份
      shared_ptr<string> province_ {};
      // 手机号
      shared_ptr<string> tel_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudGetAreaCodeResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudGetAreaCodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudGetAreaCodeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudGetAreaCodeResponseBody::Data) };
    inline CloudGetAreaCodeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudGetAreaCodeResponseBody::Data) };
    inline CloudGetAreaCodeResponseBody& setData(const CloudGetAreaCodeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudGetAreaCodeResponseBody& setData(CloudGetAreaCodeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudGetAreaCodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudGetAreaCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudGetAreaCodeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
