// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLICENSESRESPONSEBODYLICENSELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLICENSESRESPONSEBODYLICENSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class ListLicensesResponseBodyLicenseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLicensesResponseBodyLicenseList& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_TO_JSON(AdaptiveMachine, adaptiveMachine_);
      DARABONBA_PTR_TO_JSON(AllDuration, allDuration_);
      DARABONBA_PTR_TO_JSON(BuyTime, buyTime_);
      DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LicenseSpecCode, licenseSpecCode_);
      DARABONBA_PTR_TO_JSON(LicenseSpecName, licenseSpecName_);
      DARABONBA_PTR_TO_JSON(LicenseSpecType, licenseSpecType_);
      DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnActivateAllDuration, unActivateAllDuration_);
    };
    friend void from_json(const Darabonba::Json& j, ListLicensesResponseBodyLicenseList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
      DARABONBA_PTR_FROM_JSON(AdaptiveMachine, adaptiveMachine_);
      DARABONBA_PTR_FROM_JSON(AllDuration, allDuration_);
      DARABONBA_PTR_FROM_JSON(BuyTime, buyTime_);
      DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LicenseSpecCode, licenseSpecCode_);
      DARABONBA_PTR_FROM_JSON(LicenseSpecName, licenseSpecName_);
      DARABONBA_PTR_FROM_JSON(LicenseSpecType, licenseSpecType_);
      DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnActivateAllDuration, unActivateAllDuration_);
    };
    ListLicensesResponseBodyLicenseList() = default ;
    ListLicensesResponseBodyLicenseList(const ListLicensesResponseBodyLicenseList &) = default ;
    ListLicensesResponseBodyLicenseList(ListLicensesResponseBodyLicenseList &&) = default ;
    ListLicensesResponseBodyLicenseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLicensesResponseBodyLicenseList() = default ;
    ListLicensesResponseBodyLicenseList& operator=(const ListLicensesResponseBodyLicenseList &) = default ;
    ListLicensesResponseBodyLicenseList& operator=(ListLicensesResponseBodyLicenseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activateTime_ == nullptr
        && return this->adaptiveMachine_ == nullptr && return this->allDuration_ == nullptr && return this->buyTime_ == nullptr && return this->cpuLimit_ == nullptr && return this->description_ == nullptr
        && return this->duration_ == nullptr && return this->effectTime_ == nullptr && return this->expireTime_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr
        && return this->licenseSpecCode_ == nullptr && return this->licenseSpecName_ == nullptr && return this->licenseSpecType_ == nullptr && return this->memoryLimit_ == nullptr && return this->status_ == nullptr
        && return this->unActivateAllDuration_ == nullptr; };
    // activateTime Field Functions 
    bool hasActivateTime() const { return this->activateTime_ != nullptr;};
    void deleteActivateTime() { this->activateTime_ = nullptr;};
    inline string activateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
    inline ListLicensesResponseBodyLicenseList& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


    // adaptiveMachine Field Functions 
    bool hasAdaptiveMachine() const { return this->adaptiveMachine_ != nullptr;};
    void deleteAdaptiveMachine() { this->adaptiveMachine_ = nullptr;};
    inline int32_t adaptiveMachine() const { DARABONBA_PTR_GET_DEFAULT(adaptiveMachine_, 0) };
    inline ListLicensesResponseBodyLicenseList& setAdaptiveMachine(int32_t adaptiveMachine) { DARABONBA_PTR_SET_VALUE(adaptiveMachine_, adaptiveMachine) };


    // allDuration Field Functions 
    bool hasAllDuration() const { return this->allDuration_ != nullptr;};
    void deleteAllDuration() { this->allDuration_ = nullptr;};
    inline string allDuration() const { DARABONBA_PTR_GET_DEFAULT(allDuration_, "") };
    inline ListLicensesResponseBodyLicenseList& setAllDuration(string allDuration) { DARABONBA_PTR_SET_VALUE(allDuration_, allDuration) };


    // buyTime Field Functions 
    bool hasBuyTime() const { return this->buyTime_ != nullptr;};
    void deleteBuyTime() { this->buyTime_ = nullptr;};
    inline string buyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
    inline ListLicensesResponseBodyLicenseList& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline int32_t cpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
    inline ListLicensesResponseBodyLicenseList& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLicensesResponseBodyLicenseList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ListLicensesResponseBodyLicenseList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // effectTime Field Functions 
    bool hasEffectTime() const { return this->effectTime_ != nullptr;};
    void deleteEffectTime() { this->effectTime_ = nullptr;};
    inline string effectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
    inline ListLicensesResponseBodyLicenseList& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListLicensesResponseBodyLicenseList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListLicensesResponseBodyLicenseList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListLicensesResponseBodyLicenseList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // licenseSpecCode Field Functions 
    bool hasLicenseSpecCode() const { return this->licenseSpecCode_ != nullptr;};
    void deleteLicenseSpecCode() { this->licenseSpecCode_ = nullptr;};
    inline string licenseSpecCode() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecCode_, "") };
    inline ListLicensesResponseBodyLicenseList& setLicenseSpecCode(string licenseSpecCode) { DARABONBA_PTR_SET_VALUE(licenseSpecCode_, licenseSpecCode) };


    // licenseSpecName Field Functions 
    bool hasLicenseSpecName() const { return this->licenseSpecName_ != nullptr;};
    void deleteLicenseSpecName() { this->licenseSpecName_ = nullptr;};
    inline string licenseSpecName() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecName_, "") };
    inline ListLicensesResponseBodyLicenseList& setLicenseSpecName(string licenseSpecName) { DARABONBA_PTR_SET_VALUE(licenseSpecName_, licenseSpecName) };


    // licenseSpecType Field Functions 
    bool hasLicenseSpecType() const { return this->licenseSpecType_ != nullptr;};
    void deleteLicenseSpecType() { this->licenseSpecType_ = nullptr;};
    inline string licenseSpecType() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecType_, "") };
    inline ListLicensesResponseBodyLicenseList& setLicenseSpecType(string licenseSpecType) { DARABONBA_PTR_SET_VALUE(licenseSpecType_, licenseSpecType) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline int32_t memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, 0) };
    inline ListLicensesResponseBodyLicenseList& setMemoryLimit(int32_t memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLicensesResponseBodyLicenseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unActivateAllDuration Field Functions 
    bool hasUnActivateAllDuration() const { return this->unActivateAllDuration_ != nullptr;};
    void deleteUnActivateAllDuration() { this->unActivateAllDuration_ = nullptr;};
    inline string unActivateAllDuration() const { DARABONBA_PTR_GET_DEFAULT(unActivateAllDuration_, "") };
    inline ListLicensesResponseBodyLicenseList& setUnActivateAllDuration(string unActivateAllDuration) { DARABONBA_PTR_SET_VALUE(unActivateAllDuration_, unActivateAllDuration) };


  protected:
    std::shared_ptr<string> activateTime_ = nullptr;
    std::shared_ptr<int32_t> adaptiveMachine_ = nullptr;
    std::shared_ptr<string> allDuration_ = nullptr;
    std::shared_ptr<string> buyTime_ = nullptr;
    std::shared_ptr<int32_t> cpuLimit_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> effectTime_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> licenseSpecCode_ = nullptr;
    std::shared_ptr<string> licenseSpecName_ = nullptr;
    std::shared_ptr<string> licenseSpecType_ = nullptr;
    std::shared_ptr<int32_t> memoryLimit_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> unActivateAllDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
