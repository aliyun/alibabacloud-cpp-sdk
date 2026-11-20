// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNODETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNODETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretNoInfoDTO, secretNoInfoDTO_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretNoInfoDTO, secretNoInfoDTO_);
    };
    QuerySecretNoDetailResponseBody() = default ;
    QuerySecretNoDetailResponseBody(const QuerySecretNoDetailResponseBody &) = default ;
    QuerySecretNoDetailResponseBody(QuerySecretNoDetailResponseBody &&) = default ;
    QuerySecretNoDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoDetailResponseBody() = default ;
    QuerySecretNoDetailResponseBody& operator=(const QuerySecretNoDetailResponseBody &) = default ;
    QuerySecretNoDetailResponseBody& operator=(QuerySecretNoDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretNoInfoDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretNoInfoDTO& obj) { 
        DARABONBA_PTR_TO_JSON(CertifyStatus, certifyStatus_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(Province, province_);
        DARABONBA_PTR_TO_JSON(PurchaseTime, purchaseTime_);
        DARABONBA_PTR_TO_JSON(SecretStatus, secretStatus_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, SecretNoInfoDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(CertifyStatus, certifyStatus_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
        DARABONBA_PTR_FROM_JSON(PurchaseTime, purchaseTime_);
        DARABONBA_PTR_FROM_JSON(SecretStatus, secretStatus_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      SecretNoInfoDTO() = default ;
      SecretNoInfoDTO(const SecretNoInfoDTO &) = default ;
      SecretNoInfoDTO(SecretNoInfoDTO &&) = default ;
      SecretNoInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretNoInfoDTO() = default ;
      SecretNoInfoDTO& operator=(const SecretNoInfoDTO &) = default ;
      SecretNoInfoDTO& operator=(SecretNoInfoDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certifyStatus_ == nullptr
        && this->city_ == nullptr && this->province_ == nullptr && this->purchaseTime_ == nullptr && this->secretStatus_ == nullptr && this->vendor_ == nullptr; };
      // certifyStatus Field Functions 
      bool hasCertifyStatus() const { return this->certifyStatus_ != nullptr;};
      void deleteCertifyStatus() { this->certifyStatus_ = nullptr;};
      inline int32_t getCertifyStatus() const { DARABONBA_PTR_GET_DEFAULT(certifyStatus_, 0) };
      inline SecretNoInfoDTO& setCertifyStatus(int32_t certifyStatus) { DARABONBA_PTR_SET_VALUE(certifyStatus_, certifyStatus) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline SecretNoInfoDTO& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline SecretNoInfoDTO& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      // purchaseTime Field Functions 
      bool hasPurchaseTime() const { return this->purchaseTime_ != nullptr;};
      void deletePurchaseTime() { this->purchaseTime_ = nullptr;};
      inline string getPurchaseTime() const { DARABONBA_PTR_GET_DEFAULT(purchaseTime_, "") };
      inline SecretNoInfoDTO& setPurchaseTime(string purchaseTime) { DARABONBA_PTR_SET_VALUE(purchaseTime_, purchaseTime) };


      // secretStatus Field Functions 
      bool hasSecretStatus() const { return this->secretStatus_ != nullptr;};
      void deleteSecretStatus() { this->secretStatus_ = nullptr;};
      inline int64_t getSecretStatus() const { DARABONBA_PTR_GET_DEFAULT(secretStatus_, 0L) };
      inline SecretNoInfoDTO& setSecretStatus(int64_t secretStatus) { DARABONBA_PTR_SET_VALUE(secretStatus_, secretStatus) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int64_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
      inline SecretNoInfoDTO& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The number verification status. Valid values:
      // 
      // - **0**: Unverified.
      // - **1**: Verified.
      shared_ptr<int32_t> certifyStatus_ {};
      // The city.
      shared_ptr<string> city_ {};
      // The province.
      shared_ptr<string> province_ {};
      // The purchase time of the number, in the format of YYYY-MM-DD HH:mm:ss.
      shared_ptr<string> purchaseTime_ {};
      // The number status. Valid values:
      // 
      // - **0**: Unbound.
      // - **1**: Bound.
      // - **2**: Locked.
      // - **3**: Frozen.
      shared_ptr<int64_t> secretStatus_ {};
      // The carrier. Valid values:
      // 
      // - **1**: China Mobile
      // - **2**: China Unicom
      // - **3**: China Telecom
      shared_ptr<int64_t> vendor_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->secretNoInfoDTO_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySecretNoDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySecretNoDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySecretNoDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretNoInfoDTO Field Functions 
    bool hasSecretNoInfoDTO() const { return this->secretNoInfoDTO_ != nullptr;};
    void deleteSecretNoInfoDTO() { this->secretNoInfoDTO_ = nullptr;};
    inline const QuerySecretNoDetailResponseBody::SecretNoInfoDTO & getSecretNoInfoDTO() const { DARABONBA_PTR_GET_CONST(secretNoInfoDTO_, QuerySecretNoDetailResponseBody::SecretNoInfoDTO) };
    inline QuerySecretNoDetailResponseBody::SecretNoInfoDTO getSecretNoInfoDTO() { DARABONBA_PTR_GET(secretNoInfoDTO_, QuerySecretNoDetailResponseBody::SecretNoInfoDTO) };
    inline QuerySecretNoDetailResponseBody& setSecretNoInfoDTO(const QuerySecretNoDetailResponseBody::SecretNoInfoDTO & secretNoInfoDTO) { DARABONBA_PTR_SET_VALUE(secretNoInfoDTO_, secretNoInfoDTO) };
    inline QuerySecretNoDetailResponseBody& setSecretNoInfoDTO(QuerySecretNoDetailResponseBody::SecretNoInfoDTO && secretNoInfoDTO) { DARABONBA_PTR_SET_RVALUE(secretNoInfoDTO_, secretNoInfoDTO) };


  protected:
    // The request status code.
    // 
    // - OK indicates that the request was successful.
    // - For other error codes, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number properties.
    shared_ptr<QuerySecretNoDetailResponseBody::SecretNoInfoDTO> secretNoInfoDTO_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
