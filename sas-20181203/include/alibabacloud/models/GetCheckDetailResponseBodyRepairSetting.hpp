// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODYREPAIRSETTING_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODYREPAIRSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckDetailResponseBodyRepairSettingFlowStep.hpp>
#include <alibabacloud/models/GetCheckDetailResponseBodyRepairSettingRepairConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckDetailResponseBodyRepairSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckDetailResponseBodyRepairSetting& obj) { 
      DARABONBA_PTR_TO_JSON(FlowStep, flowStep_);
      DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_TO_JSON(RepairReset, repairReset_);
      DARABONBA_PTR_TO_JSON(RepairSupport, repairSupport_);
      DARABONBA_PTR_TO_JSON(RepairSupportType, repairSupportType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckDetailResponseBodyRepairSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowStep, flowStep_);
      DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_FROM_JSON(RepairReset, repairReset_);
      DARABONBA_PTR_FROM_JSON(RepairSupport, repairSupport_);
      DARABONBA_PTR_FROM_JSON(RepairSupportType, repairSupportType_);
    };
    GetCheckDetailResponseBodyRepairSetting() = default ;
    GetCheckDetailResponseBodyRepairSetting(const GetCheckDetailResponseBodyRepairSetting &) = default ;
    GetCheckDetailResponseBodyRepairSetting(GetCheckDetailResponseBodyRepairSetting &&) = default ;
    GetCheckDetailResponseBodyRepairSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckDetailResponseBodyRepairSetting() = default ;
    GetCheckDetailResponseBodyRepairSetting& operator=(const GetCheckDetailResponseBodyRepairSetting &) = default ;
    GetCheckDetailResponseBodyRepairSetting& operator=(GetCheckDetailResponseBodyRepairSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowStep_ != nullptr
        && this->repairConfigs_ != nullptr && this->repairReset_ != nullptr && this->repairSupport_ != nullptr && this->repairSupportType_ != nullptr; };
    // flowStep Field Functions 
    bool hasFlowStep() const { return this->flowStep_ != nullptr;};
    void deleteFlowStep() { this->flowStep_ = nullptr;};
    inline const vector<Models::GetCheckDetailResponseBodyRepairSettingFlowStep> & flowStep() const { DARABONBA_PTR_GET_CONST(flowStep_, vector<Models::GetCheckDetailResponseBodyRepairSettingFlowStep>) };
    inline vector<Models::GetCheckDetailResponseBodyRepairSettingFlowStep> flowStep() { DARABONBA_PTR_GET(flowStep_, vector<Models::GetCheckDetailResponseBodyRepairSettingFlowStep>) };
    inline GetCheckDetailResponseBodyRepairSetting& setFlowStep(const vector<Models::GetCheckDetailResponseBodyRepairSettingFlowStep> & flowStep) { DARABONBA_PTR_SET_VALUE(flowStep_, flowStep) };
    inline GetCheckDetailResponseBodyRepairSetting& setFlowStep(vector<Models::GetCheckDetailResponseBodyRepairSettingFlowStep> && flowStep) { DARABONBA_PTR_SET_RVALUE(flowStep_, flowStep) };


    // repairConfigs Field Functions 
    bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
    void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
    inline const vector<Models::GetCheckDetailResponseBodyRepairSettingRepairConfigs> & repairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<Models::GetCheckDetailResponseBodyRepairSettingRepairConfigs>) };
    inline vector<Models::GetCheckDetailResponseBodyRepairSettingRepairConfigs> repairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<Models::GetCheckDetailResponseBodyRepairSettingRepairConfigs>) };
    inline GetCheckDetailResponseBodyRepairSetting& setRepairConfigs(const vector<Models::GetCheckDetailResponseBodyRepairSettingRepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
    inline GetCheckDetailResponseBodyRepairSetting& setRepairConfigs(vector<Models::GetCheckDetailResponseBodyRepairSettingRepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


    // repairReset Field Functions 
    bool hasRepairReset() const { return this->repairReset_ != nullptr;};
    void deleteRepairReset() { this->repairReset_ = nullptr;};
    inline bool repairReset() const { DARABONBA_PTR_GET_DEFAULT(repairReset_, false) };
    inline GetCheckDetailResponseBodyRepairSetting& setRepairReset(bool repairReset) { DARABONBA_PTR_SET_VALUE(repairReset_, repairReset) };


    // repairSupport Field Functions 
    bool hasRepairSupport() const { return this->repairSupport_ != nullptr;};
    void deleteRepairSupport() { this->repairSupport_ = nullptr;};
    inline bool repairSupport() const { DARABONBA_PTR_GET_DEFAULT(repairSupport_, false) };
    inline GetCheckDetailResponseBodyRepairSetting& setRepairSupport(bool repairSupport) { DARABONBA_PTR_SET_VALUE(repairSupport_, repairSupport) };


    // repairSupportType Field Functions 
    bool hasRepairSupportType() const { return this->repairSupportType_ != nullptr;};
    void deleteRepairSupportType() { this->repairSupportType_ = nullptr;};
    inline int32_t repairSupportType() const { DARABONBA_PTR_GET_DEFAULT(repairSupportType_, 0) };
    inline GetCheckDetailResponseBodyRepairSetting& setRepairSupportType(int32_t repairSupportType) { DARABONBA_PTR_SET_VALUE(repairSupportType_, repairSupportType) };


  protected:
    // The description of the fixing workflow.
    std::shared_ptr<vector<Models::GetCheckDetailResponseBodyRepairSettingFlowStep>> flowStep_ = nullptr;
    // The configurations of the fixing parameters.
    std::shared_ptr<vector<Models::GetCheckDetailResponseBodyRepairSettingRepairConfigs>> repairConfigs_ = nullptr;
    // Indicates whether a restart is required after the fixing. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> repairReset_ = nullptr;
    // Indicates whether the check item supports the quick fix feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> repairSupport_ = nullptr;
    // The fixing type that is supported. Valid values:
    // 
    // *   **1**: The fixing and rollback are supported.
    // *   **2**: The fixing is supported, but the rollback is not supported.
    // *   **3**: The fixing must be performed on a third-party platform.
    std::shared_ptr<int32_t> repairSupportType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
