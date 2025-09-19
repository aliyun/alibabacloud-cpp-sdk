// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeCheckConfigRequestAddedCheck.hpp>
#include <alibabacloud/models/ChangeCheckConfigRequestConfigRequirementIds.hpp>
#include <alibabacloud/models/ChangeCheckConfigRequestConfigStandardIds.hpp>
#include <alibabacloud/models/ChangeCheckConfigRequestRemovedCheck.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddedCheck, addedCheck_);
      DARABONBA_PTR_TO_JSON(ConfigRequirementIds, configRequirementIds_);
      DARABONBA_PTR_TO_JSON(ConfigStandardIds, configStandardIds_);
      DARABONBA_PTR_TO_JSON(Configure, configure_);
      DARABONBA_PTR_TO_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_TO_JSON(EnableAddCheck, enableAddCheck_);
      DARABONBA_PTR_TO_JSON(EnableAutoCheck, enableAutoCheck_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemovedCheck, removedCheck_);
      DARABONBA_PTR_TO_JSON(StandardIds, standardIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SystemConfig, systemConfig_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddedCheck, addedCheck_);
      DARABONBA_PTR_FROM_JSON(ConfigRequirementIds, configRequirementIds_);
      DARABONBA_PTR_FROM_JSON(ConfigStandardIds, configStandardIds_);
      DARABONBA_PTR_FROM_JSON(Configure, configure_);
      DARABONBA_PTR_FROM_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_FROM_JSON(EnableAddCheck, enableAddCheck_);
      DARABONBA_PTR_FROM_JSON(EnableAutoCheck, enableAutoCheck_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemovedCheck, removedCheck_);
      DARABONBA_PTR_FROM_JSON(StandardIds, standardIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SystemConfig, systemConfig_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    ChangeCheckConfigRequest() = default ;
    ChangeCheckConfigRequest(const ChangeCheckConfigRequest &) = default ;
    ChangeCheckConfigRequest(ChangeCheckConfigRequest &&) = default ;
    ChangeCheckConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckConfigRequest() = default ;
    ChangeCheckConfigRequest& operator=(const ChangeCheckConfigRequest &) = default ;
    ChangeCheckConfigRequest& operator=(ChangeCheckConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addedCheck_ != nullptr
        && this->configRequirementIds_ != nullptr && this->configStandardIds_ != nullptr && this->configure_ != nullptr && this->cycleDays_ != nullptr && this->enableAddCheck_ != nullptr
        && this->enableAutoCheck_ != nullptr && this->endTime_ != nullptr && this->regionId_ != nullptr && this->removedCheck_ != nullptr && this->standardIds_ != nullptr
        && this->startTime_ != nullptr && this->systemConfig_ != nullptr && this->vendors_ != nullptr; };
    // addedCheck Field Functions 
    bool hasAddedCheck() const { return this->addedCheck_ != nullptr;};
    void deleteAddedCheck() { this->addedCheck_ = nullptr;};
    inline const vector<ChangeCheckConfigRequestAddedCheck> & addedCheck() const { DARABONBA_PTR_GET_CONST(addedCheck_, vector<ChangeCheckConfigRequestAddedCheck>) };
    inline vector<ChangeCheckConfigRequestAddedCheck> addedCheck() { DARABONBA_PTR_GET(addedCheck_, vector<ChangeCheckConfigRequestAddedCheck>) };
    inline ChangeCheckConfigRequest& setAddedCheck(const vector<ChangeCheckConfigRequestAddedCheck> & addedCheck) { DARABONBA_PTR_SET_VALUE(addedCheck_, addedCheck) };
    inline ChangeCheckConfigRequest& setAddedCheck(vector<ChangeCheckConfigRequestAddedCheck> && addedCheck) { DARABONBA_PTR_SET_RVALUE(addedCheck_, addedCheck) };


    // configRequirementIds Field Functions 
    bool hasConfigRequirementIds() const { return this->configRequirementIds_ != nullptr;};
    void deleteConfigRequirementIds() { this->configRequirementIds_ = nullptr;};
    inline const ChangeCheckConfigRequestConfigRequirementIds & configRequirementIds() const { DARABONBA_PTR_GET_CONST(configRequirementIds_, ChangeCheckConfigRequestConfigRequirementIds) };
    inline ChangeCheckConfigRequestConfigRequirementIds configRequirementIds() { DARABONBA_PTR_GET(configRequirementIds_, ChangeCheckConfigRequestConfigRequirementIds) };
    inline ChangeCheckConfigRequest& setConfigRequirementIds(const ChangeCheckConfigRequestConfigRequirementIds & configRequirementIds) { DARABONBA_PTR_SET_VALUE(configRequirementIds_, configRequirementIds) };
    inline ChangeCheckConfigRequest& setConfigRequirementIds(ChangeCheckConfigRequestConfigRequirementIds && configRequirementIds) { DARABONBA_PTR_SET_RVALUE(configRequirementIds_, configRequirementIds) };


    // configStandardIds Field Functions 
    bool hasConfigStandardIds() const { return this->configStandardIds_ != nullptr;};
    void deleteConfigStandardIds() { this->configStandardIds_ = nullptr;};
    inline const ChangeCheckConfigRequestConfigStandardIds & configStandardIds() const { DARABONBA_PTR_GET_CONST(configStandardIds_, ChangeCheckConfigRequestConfigStandardIds) };
    inline ChangeCheckConfigRequestConfigStandardIds configStandardIds() { DARABONBA_PTR_GET(configStandardIds_, ChangeCheckConfigRequestConfigStandardIds) };
    inline ChangeCheckConfigRequest& setConfigStandardIds(const ChangeCheckConfigRequestConfigStandardIds & configStandardIds) { DARABONBA_PTR_SET_VALUE(configStandardIds_, configStandardIds) };
    inline ChangeCheckConfigRequest& setConfigStandardIds(ChangeCheckConfigRequestConfigStandardIds && configStandardIds) { DARABONBA_PTR_SET_RVALUE(configStandardIds_, configStandardIds) };


    // configure Field Functions 
    bool hasConfigure() const { return this->configure_ != nullptr;};
    void deleteConfigure() { this->configure_ = nullptr;};
    inline string configure() const { DARABONBA_PTR_GET_DEFAULT(configure_, "") };
    inline ChangeCheckConfigRequest& setConfigure(string configure) { DARABONBA_PTR_SET_VALUE(configure_, configure) };


    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline const vector<int32_t> & cycleDays() const { DARABONBA_PTR_GET_CONST(cycleDays_, vector<int32_t>) };
    inline vector<int32_t> cycleDays() { DARABONBA_PTR_GET(cycleDays_, vector<int32_t>) };
    inline ChangeCheckConfigRequest& setCycleDays(const vector<int32_t> & cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };
    inline ChangeCheckConfigRequest& setCycleDays(vector<int32_t> && cycleDays) { DARABONBA_PTR_SET_RVALUE(cycleDays_, cycleDays) };


    // enableAddCheck Field Functions 
    bool hasEnableAddCheck() const { return this->enableAddCheck_ != nullptr;};
    void deleteEnableAddCheck() { this->enableAddCheck_ = nullptr;};
    inline bool enableAddCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAddCheck_, false) };
    inline ChangeCheckConfigRequest& setEnableAddCheck(bool enableAddCheck) { DARABONBA_PTR_SET_VALUE(enableAddCheck_, enableAddCheck) };


    // enableAutoCheck Field Functions 
    bool hasEnableAutoCheck() const { return this->enableAutoCheck_ != nullptr;};
    void deleteEnableAutoCheck() { this->enableAutoCheck_ = nullptr;};
    inline bool enableAutoCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAutoCheck_, false) };
    inline ChangeCheckConfigRequest& setEnableAutoCheck(bool enableAutoCheck) { DARABONBA_PTR_SET_VALUE(enableAutoCheck_, enableAutoCheck) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline ChangeCheckConfigRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChangeCheckConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removedCheck Field Functions 
    bool hasRemovedCheck() const { return this->removedCheck_ != nullptr;};
    void deleteRemovedCheck() { this->removedCheck_ = nullptr;};
    inline const vector<ChangeCheckConfigRequestRemovedCheck> & removedCheck() const { DARABONBA_PTR_GET_CONST(removedCheck_, vector<ChangeCheckConfigRequestRemovedCheck>) };
    inline vector<ChangeCheckConfigRequestRemovedCheck> removedCheck() { DARABONBA_PTR_GET(removedCheck_, vector<ChangeCheckConfigRequestRemovedCheck>) };
    inline ChangeCheckConfigRequest& setRemovedCheck(const vector<ChangeCheckConfigRequestRemovedCheck> & removedCheck) { DARABONBA_PTR_SET_VALUE(removedCheck_, removedCheck) };
    inline ChangeCheckConfigRequest& setRemovedCheck(vector<ChangeCheckConfigRequestRemovedCheck> && removedCheck) { DARABONBA_PTR_SET_RVALUE(removedCheck_, removedCheck) };


    // standardIds Field Functions 
    bool hasStandardIds() const { return this->standardIds_ != nullptr;};
    void deleteStandardIds() { this->standardIds_ = nullptr;};
    inline const vector<int64_t> & standardIds() const { DARABONBA_PTR_GET_CONST(standardIds_, vector<int64_t>) };
    inline vector<int64_t> standardIds() { DARABONBA_PTR_GET(standardIds_, vector<int64_t>) };
    inline ChangeCheckConfigRequest& setStandardIds(const vector<int64_t> & standardIds) { DARABONBA_PTR_SET_VALUE(standardIds_, standardIds) };
    inline ChangeCheckConfigRequest& setStandardIds(vector<int64_t> && standardIds) { DARABONBA_PTR_SET_RVALUE(standardIds_, standardIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline ChangeCheckConfigRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // systemConfig Field Functions 
    bool hasSystemConfig() const { return this->systemConfig_ != nullptr;};
    void deleteSystemConfig() { this->systemConfig_ = nullptr;};
    inline bool systemConfig() const { DARABONBA_PTR_GET_DEFAULT(systemConfig_, false) };
    inline ChangeCheckConfigRequest& setSystemConfig(bool systemConfig) { DARABONBA_PTR_SET_VALUE(systemConfig_, systemConfig) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<string> & vendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<string>) };
    inline vector<string> vendors() { DARABONBA_PTR_GET(vendors_, vector<string>) };
    inline ChangeCheckConfigRequest& setVendors(const vector<string> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline ChangeCheckConfigRequest& setVendors(vector<string> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // The list of check items that you want to add to the policy.
    // 
    // >  If the ConfigStandardIds or ConfigRequirementIds parameter is configured, this parameter does not take effect.
    std::shared_ptr<vector<ChangeCheckConfigRequestAddedCheck>> addedCheck_ = nullptr;
    // The requirement IDs that you want to specify for the check policy.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to obtain the requirement ID. If the ConfigStandardIds parameter is configured, this parameter does not take effect.
    std::shared_ptr<ChangeCheckConfigRequestConfigRequirementIds> configRequirementIds_ = nullptr;
    // The standard IDs that you want to specify for the check policy.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to obtain the standard ID.
    std::shared_ptr<ChangeCheckConfigRequestConfigStandardIds> configStandardIds_ = nullptr;
    // The configuration of the check item. Valid value:
    // 
    // *   **all**: Add all check items.
    std::shared_ptr<string> configure_ = nullptr;
    // The days in a week on which a check is performed.
    std::shared_ptr<vector<int32_t>> cycleDays_ = nullptr;
    // Specifies whether to check the new check items in the selected requirement item. Valid values:
    // - **true**
    // - **false**
    std::shared_ptr<bool> enableAddCheck_ = nullptr;
    // Specifies whether to enable the automatic periodical check feature. Valid values:
    // 
    // - **true**
    // - **false**
    std::shared_ptr<bool> enableAutoCheck_ = nullptr;
    // The end time of the check. The value specifies a point in time in a day. The time period that is specified by the start time and end time must be one of the following time periods:
    // 
    // *   **00:00 to 06:00:** If you set the StartTime parameter to 0, you must set the EndTime parameter to 6.
    // *   **06:00 to 12:00**: If you set the StartTime parameter to 6, you must set the EndTime parameter to 12.
    // *   **12:00 to 18:00**: If you set the StartTime parameter to 12, you must set the EndTime parameter to 18.
    // *  **18:00 to 24:00:** If you set the StartTime parameter to 18, you must set the EndTime parameter to 24.
    std::shared_ptr<int32_t> endTime_ = nullptr;
    // The region ID of the bastion host to query.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of the check items that you want to remove from the policy.
    // 
    // >  If the ConfigStandardIds or ConfigRequirementIds parameter is configured, this parameter does not take effect.
    std::shared_ptr<vector<ChangeCheckConfigRequestRemovedCheck>> removedCheck_ = nullptr;
    // An array that consists of the information about the check item.
    std::shared_ptr<vector<int64_t>> standardIds_ = nullptr;
    // The start time of the check. The value specifies a point in time in a day.
    std::shared_ptr<int32_t> startTime_ = nullptr;
    // Specifies whether to use the configuration automatically generated by the system. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> systemConfig_ = nullptr;
    // The cloud service providers.
    std::shared_ptr<vector<string>> vendors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
