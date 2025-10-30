// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNODETAILRESPONSEBODYSECRETNOINFODTO_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNODETAILRESPONSEBODYSECRETNOINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoDetailResponseBodySecretNoInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoDetailResponseBodySecretNoInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyStatus, certifyStatus_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(PurchaseTime, purchaseTime_);
      DARABONBA_PTR_TO_JSON(SecretStatus, secretStatus_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoDetailResponseBodySecretNoInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyStatus, certifyStatus_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(PurchaseTime, purchaseTime_);
      DARABONBA_PTR_FROM_JSON(SecretStatus, secretStatus_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    QuerySecretNoDetailResponseBodySecretNoInfoDTO() = default ;
    QuerySecretNoDetailResponseBodySecretNoInfoDTO(const QuerySecretNoDetailResponseBodySecretNoInfoDTO &) = default ;
    QuerySecretNoDetailResponseBodySecretNoInfoDTO(QuerySecretNoDetailResponseBodySecretNoInfoDTO &&) = default ;
    QuerySecretNoDetailResponseBodySecretNoInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoDetailResponseBodySecretNoInfoDTO() = default ;
    QuerySecretNoDetailResponseBodySecretNoInfoDTO& operator=(const QuerySecretNoDetailResponseBodySecretNoInfoDTO &) = default ;
    QuerySecretNoDetailResponseBodySecretNoInfoDTO& operator=(QuerySecretNoDetailResponseBodySecretNoInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyStatus_ == nullptr
        && return this->city_ == nullptr && return this->province_ == nullptr && return this->purchaseTime_ == nullptr && return this->secretStatus_ == nullptr && return this->vendor_ == nullptr; };
    // certifyStatus Field Functions 
    bool hasCertifyStatus() const { return this->certifyStatus_ != nullptr;};
    void deleteCertifyStatus() { this->certifyStatus_ = nullptr;};
    inline int32_t certifyStatus() const { DARABONBA_PTR_GET_DEFAULT(certifyStatus_, 0) };
    inline QuerySecretNoDetailResponseBodySecretNoInfoDTO& setCertifyStatus(int32_t certifyStatus) { DARABONBA_PTR_SET_VALUE(certifyStatus_, certifyStatus) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline QuerySecretNoDetailResponseBodySecretNoInfoDTO& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline QuerySecretNoDetailResponseBodySecretNoInfoDTO& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // purchaseTime Field Functions 
    bool hasPurchaseTime() const { return this->purchaseTime_ != nullptr;};
    void deletePurchaseTime() { this->purchaseTime_ = nullptr;};
    inline string purchaseTime() const { DARABONBA_PTR_GET_DEFAULT(purchaseTime_, "") };
    inline QuerySecretNoDetailResponseBodySecretNoInfoDTO& setPurchaseTime(string purchaseTime) { DARABONBA_PTR_SET_VALUE(purchaseTime_, purchaseTime) };


    // secretStatus Field Functions 
    bool hasSecretStatus() const { return this->secretStatus_ != nullptr;};
    void deleteSecretStatus() { this->secretStatus_ = nullptr;};
    inline int64_t secretStatus() const { DARABONBA_PTR_GET_DEFAULT(secretStatus_, 0L) };
    inline QuerySecretNoDetailResponseBodySecretNoInfoDTO& setSecretStatus(int64_t secretStatus) { DARABONBA_PTR_SET_VALUE(secretStatus_, secretStatus) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int64_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
    inline QuerySecretNoDetailResponseBodySecretNoInfoDTO& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The verification status of the phone number. Valid values:
    // 
    // *   **0**: The phone number is not verified.
    // *   **1**: The phone number is verified.
    std::shared_ptr<int32_t> certifyStatus_ = nullptr;
    // The city.
    std::shared_ptr<string> city_ = nullptr;
    // The province.
    std::shared_ptr<string> province_ = nullptr;
    // The time when the phone number was purchased.
    std::shared_ptr<string> purchaseTime_ = nullptr;
    // The status of the phone number. Valid values:
    // 
    // *   **0**: The phone number is not bound to other phone numbers.
    // *   **1**: The phone number is bound to other phone numbers.
    // *   **2**: The phone number is locked.
    // *   **3**: The phone number is frozen.
    std::shared_ptr<int64_t> secretStatus_ = nullptr;
    // The carrier to which the phone number belongs. Valid values:
    // 
    // *   **1**: China Mobile
    // *   **2**: China Unicom
    // *   **3**: China Telecom
    std::shared_ptr<int64_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
