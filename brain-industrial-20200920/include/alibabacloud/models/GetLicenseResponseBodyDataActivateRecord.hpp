// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLICENSERESPONSEBODYDATAACTIVATERECORD_HPP_
#define ALIBABACLOUD_MODELS_GETLICENSERESPONSEBODYDATAACTIVATERECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class GetLicenseResponseBodyDataActivateRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLicenseResponseBodyDataActivateRecord& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_TO_JSON(BuyTime, buyTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLicenseResponseBodyDataActivateRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_FROM_JSON(BuyTime, buyTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetLicenseResponseBodyDataActivateRecord() = default ;
    GetLicenseResponseBodyDataActivateRecord(const GetLicenseResponseBodyDataActivateRecord &) = default ;
    GetLicenseResponseBodyDataActivateRecord(GetLicenseResponseBodyDataActivateRecord &&) = default ;
    GetLicenseResponseBodyDataActivateRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLicenseResponseBodyDataActivateRecord() = default ;
    GetLicenseResponseBodyDataActivateRecord& operator=(const GetLicenseResponseBodyDataActivateRecord &) = default ;
    GetLicenseResponseBodyDataActivateRecord& operator=(GetLicenseResponseBodyDataActivateRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activateTime_ == nullptr
        && return this->buyTime_ == nullptr && return this->duration_ == nullptr && return this->expireTime_ == nullptr && return this->licenseCode_ == nullptr && return this->orderId_ == nullptr
        && return this->status_ == nullptr; };
    // activateTime Field Functions 
    bool hasActivateTime() const { return this->activateTime_ != nullptr;};
    void deleteActivateTime() { this->activateTime_ = nullptr;};
    inline string activateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
    inline GetLicenseResponseBodyDataActivateRecord& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


    // buyTime Field Functions 
    bool hasBuyTime() const { return this->buyTime_ != nullptr;};
    void deleteBuyTime() { this->buyTime_ = nullptr;};
    inline string buyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
    inline GetLicenseResponseBodyDataActivateRecord& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetLicenseResponseBodyDataActivateRecord& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetLicenseResponseBodyDataActivateRecord& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline GetLicenseResponseBodyDataActivateRecord& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetLicenseResponseBodyDataActivateRecord& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLicenseResponseBodyDataActivateRecord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> activateTime_ = nullptr;
    std::shared_ptr<string> buyTime_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> licenseCode_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
