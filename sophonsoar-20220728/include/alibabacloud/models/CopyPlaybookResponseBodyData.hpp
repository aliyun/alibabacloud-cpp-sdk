// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYPLAYBOOKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_COPYPLAYBOOKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class CopyPlaybookResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyPlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FailNum, failNum_);
      DARABONBA_PTR_TO_JSON(FailRate, failRate_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HistoryMd5, historyMd5_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(LastRuntime, lastRuntime_);
      DARABONBA_PTR_TO_JSON(LogicReleaseTaskflowMd5, logicReleaseTaskflowMd5_);
      DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(PlaybookStatus, playbookStatus_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(SuccNum, succNum_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyPlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FailNum, failNum_);
      DARABONBA_PTR_FROM_JSON(FailRate, failRate_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HistoryMd5, historyMd5_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(LastRuntime, lastRuntime_);
      DARABONBA_PTR_FROM_JSON(LogicReleaseTaskflowMd5, logicReleaseTaskflowMd5_);
      DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(PlaybookStatus, playbookStatus_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(SuccNum, succNum_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    CopyPlaybookResponseBodyData() = default ;
    CopyPlaybookResponseBodyData(const CopyPlaybookResponseBodyData &) = default ;
    CopyPlaybookResponseBodyData(CopyPlaybookResponseBodyData &&) = default ;
    CopyPlaybookResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyPlaybookResponseBodyData() = default ;
    CopyPlaybookResponseBodyData& operator=(const CopyPlaybookResponseBodyData &) = default ;
    CopyPlaybookResponseBodyData& operator=(CopyPlaybookResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->failNum_ == nullptr && return this->failRate_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->historyMd5_ == nullptr && return this->inputParams_ == nullptr && return this->lastRuntime_ == nullptr && return this->logicReleaseTaskflowMd5_ == nullptr
        && return this->outputParams_ == nullptr && return this->ownType_ == nullptr && return this->permission_ == nullptr && return this->playbookStatus_ == nullptr && return this->playbookUuid_ == nullptr
        && return this->succNum_ == nullptr && return this->tenantId_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline CopyPlaybookResponseBodyData& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CopyPlaybookResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CopyPlaybookResponseBodyData& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // failNum Field Functions 
    bool hasFailNum() const { return this->failNum_ != nullptr;};
    void deleteFailNum() { this->failNum_ = nullptr;};
    inline int32_t failNum() const { DARABONBA_PTR_GET_DEFAULT(failNum_, 0) };
    inline CopyPlaybookResponseBodyData& setFailNum(int32_t failNum) { DARABONBA_PTR_SET_VALUE(failNum_, failNum) };


    // failRate Field Functions 
    bool hasFailRate() const { return this->failRate_ != nullptr;};
    void deleteFailRate() { this->failRate_ = nullptr;};
    inline double failRate() const { DARABONBA_PTR_GET_DEFAULT(failRate_, 0.0) };
    inline CopyPlaybookResponseBodyData& setFailRate(double failRate) { DARABONBA_PTR_SET_VALUE(failRate_, failRate) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline CopyPlaybookResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline CopyPlaybookResponseBodyData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // historyMd5 Field Functions 
    bool hasHistoryMd5() const { return this->historyMd5_ != nullptr;};
    void deleteHistoryMd5() { this->historyMd5_ = nullptr;};
    inline int32_t historyMd5() const { DARABONBA_PTR_GET_DEFAULT(historyMd5_, 0) };
    inline CopyPlaybookResponseBodyData& setHistoryMd5(int32_t historyMd5) { DARABONBA_PTR_SET_VALUE(historyMd5_, historyMd5) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline CopyPlaybookResponseBodyData& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // lastRuntime Field Functions 
    bool hasLastRuntime() const { return this->lastRuntime_ != nullptr;};
    void deleteLastRuntime() { this->lastRuntime_ = nullptr;};
    inline int64_t lastRuntime() const { DARABONBA_PTR_GET_DEFAULT(lastRuntime_, 0L) };
    inline CopyPlaybookResponseBodyData& setLastRuntime(int64_t lastRuntime) { DARABONBA_PTR_SET_VALUE(lastRuntime_, lastRuntime) };


    // logicReleaseTaskflowMd5 Field Functions 
    bool hasLogicReleaseTaskflowMd5() const { return this->logicReleaseTaskflowMd5_ != nullptr;};
    void deleteLogicReleaseTaskflowMd5() { this->logicReleaseTaskflowMd5_ = nullptr;};
    inline string logicReleaseTaskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(logicReleaseTaskflowMd5_, "") };
    inline CopyPlaybookResponseBodyData& setLogicReleaseTaskflowMd5(string logicReleaseTaskflowMd5) { DARABONBA_PTR_SET_VALUE(logicReleaseTaskflowMd5_, logicReleaseTaskflowMd5) };


    // outputParams Field Functions 
    bool hasOutputParams() const { return this->outputParams_ != nullptr;};
    void deleteOutputParams() { this->outputParams_ = nullptr;};
    inline string outputParams() const { DARABONBA_PTR_GET_DEFAULT(outputParams_, "") };
    inline CopyPlaybookResponseBodyData& setOutputParams(string outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline string ownType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
    inline CopyPlaybookResponseBodyData& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline int32_t permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, 0) };
    inline CopyPlaybookResponseBodyData& setPermission(int32_t permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // playbookStatus Field Functions 
    bool hasPlaybookStatus() const { return this->playbookStatus_ != nullptr;};
    void deletePlaybookStatus() { this->playbookStatus_ = nullptr;};
    inline int32_t playbookStatus() const { DARABONBA_PTR_GET_DEFAULT(playbookStatus_, 0) };
    inline CopyPlaybookResponseBodyData& setPlaybookStatus(int32_t playbookStatus) { DARABONBA_PTR_SET_VALUE(playbookStatus_, playbookStatus) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline CopyPlaybookResponseBodyData& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // succNum Field Functions 
    bool hasSuccNum() const { return this->succNum_ != nullptr;};
    void deleteSuccNum() { this->succNum_ = nullptr;};
    inline int32_t succNum() const { DARABONBA_PTR_GET_DEFAULT(succNum_, 0) };
    inline CopyPlaybookResponseBodyData& setSuccNum(int32_t succNum) { DARABONBA_PTR_SET_VALUE(succNum_, succNum) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CopyPlaybookResponseBodyData& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The status of the playbook. Valid values:
    // 
    // *   1: enabled.
    // *   0: disabled.
    std::shared_ptr<int32_t> active_ = nullptr;
    // The description of the playbook.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the new playbook.
    std::shared_ptr<string> displayName_ = nullptr;
    // The number of playbook execution failures.
    std::shared_ptr<int32_t> failNum_ = nullptr;
    // The failure rate of playbook execution.
    std::shared_ptr<double> failRate_ = nullptr;
    // The time when the playbook was created. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The time when the playbook was modified. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The number of historical versions of the playbook.
    std::shared_ptr<int32_t> historyMd5_ = nullptr;
    // The input parameters of the playbook.
    std::shared_ptr<string> inputParams_ = nullptr;
    // The time when the playbook was last run. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> lastRuntime_ = nullptr;
    // The online version MD5 of the playbook.
    std::shared_ptr<string> logicReleaseTaskflowMd5_ = nullptr;
    // The output parameters of the playbook.
    std::shared_ptr<string> outputParams_ = nullptr;
    // The type of the playbook. Valid values:
    // 
    // *   preset: predefined playbook.
    // *   user: custom playbook.
    std::shared_ptr<string> ownType_ = nullptr;
    // The permission to operate the playbook. Valid values:
    // 
    // *   1: view.
    // *   2: edit.
    std::shared_ptr<int32_t> permission_ = nullptr;
    // The status of the playbook.
    std::shared_ptr<int32_t> playbookStatus_ = nullptr;
    // The UUID of the new playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The number of successful playbook executions.
    std::shared_ptr<int32_t> succNum_ = nullptr;
    // The ID of the user to which the playbook belongs.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
