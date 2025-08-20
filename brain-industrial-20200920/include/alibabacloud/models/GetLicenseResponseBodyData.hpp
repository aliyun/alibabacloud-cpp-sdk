// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLICENSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLICENSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLicenseResponseBodyDataActivateRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class GetLicenseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateRecord, activateRecord_);
      DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_TO_JSON(AdaptiveMachine, adaptiveMachine_);
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
      DARABONBA_PTR_TO_JSON(LicenseSpecCode, licenseSpecCode_);
      DARABONBA_PTR_TO_JSON(LicenseSpecName, licenseSpecName_);
      DARABONBA_PTR_TO_JSON(LicenseSpecType, licenseSpecType_);
      DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(Proposal, proposal_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnActivateAllDuration, unActivateAllDuration_);
    };
    friend void from_json(const Darabonba::Json& j, GetLicenseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateRecord, activateRecord_);
      DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_FROM_JSON(AdaptiveMachine, adaptiveMachine_);
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
      DARABONBA_PTR_FROM_JSON(LicenseSpecCode, licenseSpecCode_);
      DARABONBA_PTR_FROM_JSON(LicenseSpecName, licenseSpecName_);
      DARABONBA_PTR_FROM_JSON(LicenseSpecType, licenseSpecType_);
      DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(Proposal, proposal_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnActivateAllDuration, unActivateAllDuration_);
    };
    GetLicenseResponseBodyData() = default ;
    GetLicenseResponseBodyData(const GetLicenseResponseBodyData &) = default ;
    GetLicenseResponseBodyData(GetLicenseResponseBodyData &&) = default ;
    GetLicenseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLicenseResponseBodyData() = default ;
    GetLicenseResponseBodyData& operator=(const GetLicenseResponseBodyData &) = default ;
    GetLicenseResponseBodyData& operator=(GetLicenseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activateRecord_ != nullptr
        && this->activateTime_ != nullptr && this->adaptiveMachine_ != nullptr && this->allDuration_ != nullptr && this->applicableSpecs_ != nullptr && this->buyTime_ != nullptr
        && this->cpuLimit_ != nullptr && this->description_ != nullptr && this->duration_ != nullptr && this->effectTime_ != nullptr && this->expireTime_ != nullptr
        && this->fingerprint_ != nullptr && this->id_ != nullptr && this->instanceId_ != nullptr && this->licenseCode_ != nullptr && this->licenseSpecCode_ != nullptr
        && this->licenseSpecName_ != nullptr && this->licenseSpecType_ != nullptr && this->memoryLimit_ != nullptr && this->proposal_ != nullptr && this->status_ != nullptr
        && this->unActivateAllDuration_ != nullptr; };
    // activateRecord Field Functions 
    bool hasActivateRecord() const { return this->activateRecord_ != nullptr;};
    void deleteActivateRecord() { this->activateRecord_ = nullptr;};
    inline const vector<Models::GetLicenseResponseBodyDataActivateRecord> & activateRecord() const { DARABONBA_PTR_GET_CONST(activateRecord_, vector<Models::GetLicenseResponseBodyDataActivateRecord>) };
    inline vector<Models::GetLicenseResponseBodyDataActivateRecord> activateRecord() { DARABONBA_PTR_GET(activateRecord_, vector<Models::GetLicenseResponseBodyDataActivateRecord>) };
    inline GetLicenseResponseBodyData& setActivateRecord(const vector<Models::GetLicenseResponseBodyDataActivateRecord> & activateRecord) { DARABONBA_PTR_SET_VALUE(activateRecord_, activateRecord) };
    inline GetLicenseResponseBodyData& setActivateRecord(vector<Models::GetLicenseResponseBodyDataActivateRecord> && activateRecord) { DARABONBA_PTR_SET_RVALUE(activateRecord_, activateRecord) };


    // activateTime Field Functions 
    bool hasActivateTime() const { return this->activateTime_ != nullptr;};
    void deleteActivateTime() { this->activateTime_ = nullptr;};
    inline string activateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
    inline GetLicenseResponseBodyData& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


    // adaptiveMachine Field Functions 
    bool hasAdaptiveMachine() const { return this->adaptiveMachine_ != nullptr;};
    void deleteAdaptiveMachine() { this->adaptiveMachine_ = nullptr;};
    inline string adaptiveMachine() const { DARABONBA_PTR_GET_DEFAULT(adaptiveMachine_, "") };
    inline GetLicenseResponseBodyData& setAdaptiveMachine(string adaptiveMachine) { DARABONBA_PTR_SET_VALUE(adaptiveMachine_, adaptiveMachine) };


    // allDuration Field Functions 
    bool hasAllDuration() const { return this->allDuration_ != nullptr;};
    void deleteAllDuration() { this->allDuration_ = nullptr;};
    inline string allDuration() const { DARABONBA_PTR_GET_DEFAULT(allDuration_, "") };
    inline GetLicenseResponseBodyData& setAllDuration(string allDuration) { DARABONBA_PTR_SET_VALUE(allDuration_, allDuration) };


    // applicableSpecs Field Functions 
    bool hasApplicableSpecs() const { return this->applicableSpecs_ != nullptr;};
    void deleteApplicableSpecs() { this->applicableSpecs_ = nullptr;};
    inline string applicableSpecs() const { DARABONBA_PTR_GET_DEFAULT(applicableSpecs_, "") };
    inline GetLicenseResponseBodyData& setApplicableSpecs(string applicableSpecs) { DARABONBA_PTR_SET_VALUE(applicableSpecs_, applicableSpecs) };


    // buyTime Field Functions 
    bool hasBuyTime() const { return this->buyTime_ != nullptr;};
    void deleteBuyTime() { this->buyTime_ = nullptr;};
    inline string buyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
    inline GetLicenseResponseBodyData& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline int32_t cpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
    inline GetLicenseResponseBodyData& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetLicenseResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetLicenseResponseBodyData& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // effectTime Field Functions 
    bool hasEffectTime() const { return this->effectTime_ != nullptr;};
    void deleteEffectTime() { this->effectTime_ = nullptr;};
    inline string effectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
    inline GetLicenseResponseBodyData& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetLicenseResponseBodyData& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline GetLicenseResponseBodyData& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetLicenseResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLicenseResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline GetLicenseResponseBodyData& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // licenseSpecCode Field Functions 
    bool hasLicenseSpecCode() const { return this->licenseSpecCode_ != nullptr;};
    void deleteLicenseSpecCode() { this->licenseSpecCode_ = nullptr;};
    inline string licenseSpecCode() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecCode_, "") };
    inline GetLicenseResponseBodyData& setLicenseSpecCode(string licenseSpecCode) { DARABONBA_PTR_SET_VALUE(licenseSpecCode_, licenseSpecCode) };


    // licenseSpecName Field Functions 
    bool hasLicenseSpecName() const { return this->licenseSpecName_ != nullptr;};
    void deleteLicenseSpecName() { this->licenseSpecName_ = nullptr;};
    inline string licenseSpecName() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecName_, "") };
    inline GetLicenseResponseBodyData& setLicenseSpecName(string licenseSpecName) { DARABONBA_PTR_SET_VALUE(licenseSpecName_, licenseSpecName) };


    // licenseSpecType Field Functions 
    bool hasLicenseSpecType() const { return this->licenseSpecType_ != nullptr;};
    void deleteLicenseSpecType() { this->licenseSpecType_ = nullptr;};
    inline string licenseSpecType() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecType_, "") };
    inline GetLicenseResponseBodyData& setLicenseSpecType(string licenseSpecType) { DARABONBA_PTR_SET_VALUE(licenseSpecType_, licenseSpecType) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline int32_t memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, 0) };
    inline GetLicenseResponseBodyData& setMemoryLimit(int32_t memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // proposal Field Functions 
    bool hasProposal() const { return this->proposal_ != nullptr;};
    void deleteProposal() { this->proposal_ = nullptr;};
    inline string proposal() const { DARABONBA_PTR_GET_DEFAULT(proposal_, "") };
    inline GetLicenseResponseBodyData& setProposal(string proposal) { DARABONBA_PTR_SET_VALUE(proposal_, proposal) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLicenseResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unActivateAllDuration Field Functions 
    bool hasUnActivateAllDuration() const { return this->unActivateAllDuration_ != nullptr;};
    void deleteUnActivateAllDuration() { this->unActivateAllDuration_ = nullptr;};
    inline string unActivateAllDuration() const { DARABONBA_PTR_GET_DEFAULT(unActivateAllDuration_, "") };
    inline GetLicenseResponseBodyData& setUnActivateAllDuration(string unActivateAllDuration) { DARABONBA_PTR_SET_VALUE(unActivateAllDuration_, unActivateAllDuration) };


  protected:
    std::shared_ptr<vector<Models::GetLicenseResponseBodyDataActivateRecord>> activateRecord_ = nullptr;
    // 代表资源一级ID的资源属性字段
    std::shared_ptr<string> activateTime_ = nullptr;
    std::shared_ptr<string> adaptiveMachine_ = nullptr;
    std::shared_ptr<string> allDuration_ = nullptr;
    std::shared_ptr<string> applicableSpecs_ = nullptr;
    // 代表资源名称的资源属性字段
    std::shared_ptr<string> buyTime_ = nullptr;
    std::shared_ptr<int32_t> cpuLimit_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> effectTime_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    // 代表创建时间的资源属性字段
    std::shared_ptr<string> fingerprint_ = nullptr;
    // ID
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> licenseCode_ = nullptr;
    std::shared_ptr<string> licenseSpecCode_ = nullptr;
    // 代表资源组的资源属性字段
    std::shared_ptr<string> licenseSpecName_ = nullptr;
    std::shared_ptr<string> licenseSpecType_ = nullptr;
    std::shared_ptr<int32_t> memoryLimit_ = nullptr;
    std::shared_ptr<string> proposal_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> unActivateAllDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
