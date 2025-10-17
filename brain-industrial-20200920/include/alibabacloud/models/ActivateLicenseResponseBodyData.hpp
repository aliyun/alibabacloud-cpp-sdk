// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATELICENSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATELICENSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ActivateLicenseResponseBodyDataActivateRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class ActivateLicenseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateRecord, activateRecord_);
      DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_TO_JSON(AllDuration, allDuration_);
      DARABONBA_PTR_TO_JSON(ApplicableSpecs, applicableSpecs_);
      DARABONBA_PTR_TO_JSON(BuyTime, buyTime_);
      DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(LicenseSpecName, licenseSpecName_);
      DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnActivateAllDuration, unActivateAllDuration_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateRecord, activateRecord_);
      DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_FROM_JSON(AllDuration, allDuration_);
      DARABONBA_PTR_FROM_JSON(ApplicableSpecs, applicableSpecs_);
      DARABONBA_PTR_FROM_JSON(BuyTime, buyTime_);
      DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(LicenseSpecName, licenseSpecName_);
      DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnActivateAllDuration, unActivateAllDuration_);
    };
    ActivateLicenseResponseBodyData() = default ;
    ActivateLicenseResponseBodyData(const ActivateLicenseResponseBodyData &) = default ;
    ActivateLicenseResponseBodyData(ActivateLicenseResponseBodyData &&) = default ;
    ActivateLicenseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateLicenseResponseBodyData() = default ;
    ActivateLicenseResponseBodyData& operator=(const ActivateLicenseResponseBodyData &) = default ;
    ActivateLicenseResponseBodyData& operator=(ActivateLicenseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activateRecord_ == nullptr
        && return this->activateTime_ == nullptr && return this->allDuration_ == nullptr && return this->applicableSpecs_ == nullptr && return this->buyTime_ == nullptr && return this->cpuLimit_ == nullptr
        && return this->description_ == nullptr && return this->duration_ == nullptr && return this->effectTime_ == nullptr && return this->expireTime_ == nullptr && return this->fingerprint_ == nullptr
        && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->licenseCode_ == nullptr && return this->licenseSpecName_ == nullptr && return this->memoryLimit_ == nullptr
        && return this->status_ == nullptr && return this->unActivateAllDuration_ == nullptr; };
    // activateRecord Field Functions 
    bool hasActivateRecord() const { return this->activateRecord_ != nullptr;};
    void deleteActivateRecord() { this->activateRecord_ = nullptr;};
    inline const vector<Models::ActivateLicenseResponseBodyDataActivateRecord> & activateRecord() const { DARABONBA_PTR_GET_CONST(activateRecord_, vector<Models::ActivateLicenseResponseBodyDataActivateRecord>) };
    inline vector<Models::ActivateLicenseResponseBodyDataActivateRecord> activateRecord() { DARABONBA_PTR_GET(activateRecord_, vector<Models::ActivateLicenseResponseBodyDataActivateRecord>) };
    inline ActivateLicenseResponseBodyData& setActivateRecord(const vector<Models::ActivateLicenseResponseBodyDataActivateRecord> & activateRecord) { DARABONBA_PTR_SET_VALUE(activateRecord_, activateRecord) };
    inline ActivateLicenseResponseBodyData& setActivateRecord(vector<Models::ActivateLicenseResponseBodyDataActivateRecord> && activateRecord) { DARABONBA_PTR_SET_RVALUE(activateRecord_, activateRecord) };


    // activateTime Field Functions 
    bool hasActivateTime() const { return this->activateTime_ != nullptr;};
    void deleteActivateTime() { this->activateTime_ = nullptr;};
    inline string activateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
    inline ActivateLicenseResponseBodyData& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


    // allDuration Field Functions 
    bool hasAllDuration() const { return this->allDuration_ != nullptr;};
    void deleteAllDuration() { this->allDuration_ = nullptr;};
    inline string allDuration() const { DARABONBA_PTR_GET_DEFAULT(allDuration_, "") };
    inline ActivateLicenseResponseBodyData& setAllDuration(string allDuration) { DARABONBA_PTR_SET_VALUE(allDuration_, allDuration) };


    // applicableSpecs Field Functions 
    bool hasApplicableSpecs() const { return this->applicableSpecs_ != nullptr;};
    void deleteApplicableSpecs() { this->applicableSpecs_ = nullptr;};
    inline string applicableSpecs() const { DARABONBA_PTR_GET_DEFAULT(applicableSpecs_, "") };
    inline ActivateLicenseResponseBodyData& setApplicableSpecs(string applicableSpecs) { DARABONBA_PTR_SET_VALUE(applicableSpecs_, applicableSpecs) };


    // buyTime Field Functions 
    bool hasBuyTime() const { return this->buyTime_ != nullptr;};
    void deleteBuyTime() { this->buyTime_ = nullptr;};
    inline string buyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
    inline ActivateLicenseResponseBodyData& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline int32_t cpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
    inline ActivateLicenseResponseBodyData& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ActivateLicenseResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ActivateLicenseResponseBodyData& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // effectTime Field Functions 
    bool hasEffectTime() const { return this->effectTime_ != nullptr;};
    void deleteEffectTime() { this->effectTime_ = nullptr;};
    inline string effectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
    inline ActivateLicenseResponseBodyData& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ActivateLicenseResponseBodyData& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline ActivateLicenseResponseBodyData& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ActivateLicenseResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ActivateLicenseResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline ActivateLicenseResponseBodyData& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // licenseSpecName Field Functions 
    bool hasLicenseSpecName() const { return this->licenseSpecName_ != nullptr;};
    void deleteLicenseSpecName() { this->licenseSpecName_ = nullptr;};
    inline string licenseSpecName() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecName_, "") };
    inline ActivateLicenseResponseBodyData& setLicenseSpecName(string licenseSpecName) { DARABONBA_PTR_SET_VALUE(licenseSpecName_, licenseSpecName) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline int32_t memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, 0) };
    inline ActivateLicenseResponseBodyData& setMemoryLimit(int32_t memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ActivateLicenseResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unActivateAllDuration Field Functions 
    bool hasUnActivateAllDuration() const { return this->unActivateAllDuration_ != nullptr;};
    void deleteUnActivateAllDuration() { this->unActivateAllDuration_ = nullptr;};
    inline string unActivateAllDuration() const { DARABONBA_PTR_GET_DEFAULT(unActivateAllDuration_, "") };
    inline ActivateLicenseResponseBodyData& setUnActivateAllDuration(string unActivateAllDuration) { DARABONBA_PTR_SET_VALUE(unActivateAllDuration_, unActivateAllDuration) };


  protected:
    std::shared_ptr<vector<Models::ActivateLicenseResponseBodyDataActivateRecord>> activateRecord_ = nullptr;
    std::shared_ptr<string> activateTime_ = nullptr;
    std::shared_ptr<string> allDuration_ = nullptr;
    std::shared_ptr<string> applicableSpecs_ = nullptr;
    std::shared_ptr<string> buyTime_ = nullptr;
    std::shared_ptr<int32_t> cpuLimit_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> effectTime_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> fingerprint_ = nullptr;
    // Id
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> licenseCode_ = nullptr;
    std::shared_ptr<string> licenseSpecName_ = nullptr;
    std::shared_ptr<int32_t> memoryLimit_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> unActivateAllDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
