// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDDOSSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDdosServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDdosServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_TO_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_TO_JSON(ChangingDomianNum, changingDomianNum_);
      DARABONBA_PTR_TO_JSON(ChangingEdition, changingEdition_);
      DARABONBA_PTR_TO_JSON(ChangingProtectNum, changingProtectNum_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DomianNum, domianNum_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EndingTime, endingTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_TO_JSON(ProtectNum, protectNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDdosServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_FROM_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_FROM_JSON(ChangingDomianNum, changingDomianNum_);
      DARABONBA_PTR_FROM_JSON(ChangingEdition, changingEdition_);
      DARABONBA_PTR_FROM_JSON(ChangingProtectNum, changingProtectNum_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DomianNum, domianNum_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EndingTime, endingTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_FROM_JSON(ProtectNum, protectNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDcdnDdosServiceResponseBody() = default ;
    DescribeDcdnDdosServiceResponseBody(const DescribeDcdnDdosServiceResponseBody &) = default ;
    DescribeDcdnDdosServiceResponseBody(DescribeDcdnDdosServiceResponseBody &&) = default ;
    DescribeDcdnDdosServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDdosServiceResponseBody() = default ;
    DescribeDcdnDdosServiceResponseBody& operator=(const DescribeDcdnDdosServiceResponseBody &) = default ;
    DescribeDcdnDdosServiceResponseBody& operator=(DescribeDcdnDdosServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changingAffectTime_ == nullptr
        && this->changingChargeType_ == nullptr && this->changingDomianNum_ == nullptr && this->changingEdition_ == nullptr && this->changingProtectNum_ == nullptr && this->chargeType_ == nullptr
        && this->domianNum_ == nullptr && this->edition_ == nullptr && this->enabled_ == nullptr && this->endingTime_ == nullptr && this->instanceId_ == nullptr
        && this->openingTime_ == nullptr && this->protectNum_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // changingAffectTime Field Functions 
    bool hasChangingAffectTime() const { return this->changingAffectTime_ != nullptr;};
    void deleteChangingAffectTime() { this->changingAffectTime_ = nullptr;};
    inline string getChangingAffectTime() const { DARABONBA_PTR_GET_DEFAULT(changingAffectTime_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setChangingAffectTime(string changingAffectTime) { DARABONBA_PTR_SET_VALUE(changingAffectTime_, changingAffectTime) };


    // changingChargeType Field Functions 
    bool hasChangingChargeType() const { return this->changingChargeType_ != nullptr;};
    void deleteChangingChargeType() { this->changingChargeType_ = nullptr;};
    inline string getChangingChargeType() const { DARABONBA_PTR_GET_DEFAULT(changingChargeType_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setChangingChargeType(string changingChargeType) { DARABONBA_PTR_SET_VALUE(changingChargeType_, changingChargeType) };


    // changingDomianNum Field Functions 
    bool hasChangingDomianNum() const { return this->changingDomianNum_ != nullptr;};
    void deleteChangingDomianNum() { this->changingDomianNum_ = nullptr;};
    inline int32_t getChangingDomianNum() const { DARABONBA_PTR_GET_DEFAULT(changingDomianNum_, 0) };
    inline DescribeDcdnDdosServiceResponseBody& setChangingDomianNum(int32_t changingDomianNum) { DARABONBA_PTR_SET_VALUE(changingDomianNum_, changingDomianNum) };


    // changingEdition Field Functions 
    bool hasChangingEdition() const { return this->changingEdition_ != nullptr;};
    void deleteChangingEdition() { this->changingEdition_ = nullptr;};
    inline string getChangingEdition() const { DARABONBA_PTR_GET_DEFAULT(changingEdition_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setChangingEdition(string changingEdition) { DARABONBA_PTR_SET_VALUE(changingEdition_, changingEdition) };


    // changingProtectNum Field Functions 
    bool hasChangingProtectNum() const { return this->changingProtectNum_ != nullptr;};
    void deleteChangingProtectNum() { this->changingProtectNum_ = nullptr;};
    inline int32_t getChangingProtectNum() const { DARABONBA_PTR_GET_DEFAULT(changingProtectNum_, 0) };
    inline DescribeDcdnDdosServiceResponseBody& setChangingProtectNum(int32_t changingProtectNum) { DARABONBA_PTR_SET_VALUE(changingProtectNum_, changingProtectNum) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // domianNum Field Functions 
    bool hasDomianNum() const { return this->domianNum_ != nullptr;};
    void deleteDomianNum() { this->domianNum_ = nullptr;};
    inline int32_t getDomianNum() const { DARABONBA_PTR_GET_DEFAULT(domianNum_, 0) };
    inline DescribeDcdnDdosServiceResponseBody& setDomianNum(int32_t domianNum) { DARABONBA_PTR_SET_VALUE(domianNum_, domianNum) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // endingTime Field Functions 
    bool hasEndingTime() const { return this->endingTime_ != nullptr;};
    void deleteEndingTime() { this->endingTime_ = nullptr;};
    inline string getEndingTime() const { DARABONBA_PTR_GET_DEFAULT(endingTime_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setEndingTime(string endingTime) { DARABONBA_PTR_SET_VALUE(endingTime_, endingTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // openingTime Field Functions 
    bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
    void deleteOpeningTime() { this->openingTime_ = nullptr;};
    inline string getOpeningTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setOpeningTime(string openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


    // protectNum Field Functions 
    bool hasProtectNum() const { return this->protectNum_ != nullptr;};
    void deleteProtectNum() { this->protectNum_ = nullptr;};
    inline int32_t getProtectNum() const { DARABONBA_PTR_GET_DEFAULT(protectNum_, 0) };
    inline DescribeDcdnDdosServiceResponseBody& setProtectNum(int32_t protectNum) { DARABONBA_PTR_SET_VALUE(protectNum_, protectNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnDdosServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the renewed service takes effect. The time is displayed in UTC.
    shared_ptr<string> changingAffectTime_ {};
    // The metering method after the configuration changes Valid values:
    // 
    // *   **PayByBandwidth**
    // *   **PayByTraffic**
    // *   **PayByBandwidth95**
    shared_ptr<string> changingChargeType_ {};
    // The number of protected domain names.
    shared_ptr<int32_t> changingDomianNum_ {};
    // The protection edition for which the configuration changes take effect. Valid values:
    // 
    // *   **poc**: POC Edition
    // *   **basic**: Basic Edition
    // *   **insurance**: Insurance Edition
    // *   **unlimited**: Unlimited Edition
    shared_ptr<string> changingEdition_ {};
    // The number of mitigation sessions with configuration changes.
    shared_ptr<int32_t> changingProtectNum_ {};
    // The billing method. Valid values:
    // 
    // *   **PayByBandwidth**
    // *   **PayByTraffic**
    // *   **PayByBandwidth95**
    shared_ptr<string> chargeType_ {};
    // The number of protected domain names.
    shared_ptr<int32_t> domianNum_ {};
    // The protection edition. Valid values:
    // 
    // *   **poc**: POC Edition
    // *   **basic**: Basic Edition
    // *   **insurance**: Insurance Edition
    // *   **unlimited**: Unlimited Edition
    shared_ptr<string> edition_ {};
    // The activation status of the service. Valid values:
    // 
    // *   **on**
    // *   **off**
    shared_ptr<string> enabled_ {};
    // The service expiration time.
    shared_ptr<string> endingTime_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The time when the service was enabled.
    shared_ptr<string> openingTime_ {};
    // The number of mitigation sessions.
    shared_ptr<int32_t> protectNum_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the service. Valid values:
    // 
    // *   **Normal**
    // *   **WaitForExpire**
    // *   **expired**
    // *   **Released**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
