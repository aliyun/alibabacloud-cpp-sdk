// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUESTADVANCEDDATAPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUESTADVANCEDDATAPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyBackupPolicyRequestAdvancedDataPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequestAdvancedDataPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(AutoCreated, autoCreated_);
      DARABONBA_PTR_TO_JSON(BakType, bakType_);
      DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_TO_JSON(DestType, destType_);
      DARABONBA_PTR_TO_JSON(DumpAction, dumpAction_);
      DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
      DARABONBA_PTR_TO_JSON(FilterType, filterType_);
      DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
      DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
      DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachHour, onlyPreserveOneEachHour_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RetentionType, retentionType_);
      DARABONBA_PTR_TO_JSON(RetentionValue, retentionValue_);
      DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_TO_JSON(SrcType, srcType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequestAdvancedDataPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(AutoCreated, autoCreated_);
      DARABONBA_PTR_FROM_JSON(BakType, bakType_);
      DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_FROM_JSON(DestType, destType_);
      DARABONBA_PTR_FROM_JSON(DumpAction, dumpAction_);
      DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
      DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
      DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
      DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
      DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachHour, onlyPreserveOneEachHour_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RetentionType, retentionType_);
      DARABONBA_PTR_FROM_JSON(RetentionValue, retentionValue_);
      DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
    };
    ModifyBackupPolicyRequestAdvancedDataPolicies() = default ;
    ModifyBackupPolicyRequestAdvancedDataPolicies(const ModifyBackupPolicyRequestAdvancedDataPolicies &) = default ;
    ModifyBackupPolicyRequestAdvancedDataPolicies(ModifyBackupPolicyRequestAdvancedDataPolicies &&) = default ;
    ModifyBackupPolicyRequestAdvancedDataPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyRequestAdvancedDataPolicies() = default ;
    ModifyBackupPolicyRequestAdvancedDataPolicies& operator=(const ModifyBackupPolicyRequestAdvancedDataPolicies &) = default ;
    ModifyBackupPolicyRequestAdvancedDataPolicies& operator=(ModifyBackupPolicyRequestAdvancedDataPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->autoCreated_ == nullptr && return this->bakType_ == nullptr && return this->destRegion_ == nullptr && return this->destType_ == nullptr && return this->dumpAction_ == nullptr
        && return this->filterKey_ == nullptr && return this->filterType_ == nullptr && return this->filterValue_ == nullptr && return this->onlyPreserveOneEachDay_ == nullptr && return this->onlyPreserveOneEachHour_ == nullptr
        && return this->policyId_ == nullptr && return this->retentionType_ == nullptr && return this->retentionValue_ == nullptr && return this->srcRegion_ == nullptr && return this->srcType_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // autoCreated Field Functions 
    bool hasAutoCreated() const { return this->autoCreated_ != nullptr;};
    void deleteAutoCreated() { this->autoCreated_ = nullptr;};
    inline bool autoCreated() const { DARABONBA_PTR_GET_DEFAULT(autoCreated_, false) };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setAutoCreated(bool autoCreated) { DARABONBA_PTR_SET_VALUE(autoCreated_, autoCreated) };


    // bakType Field Functions 
    bool hasBakType() const { return this->bakType_ != nullptr;};
    void deleteBakType() { this->bakType_ = nullptr;};
    inline string bakType() const { DARABONBA_PTR_GET_DEFAULT(bakType_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setBakType(string bakType) { DARABONBA_PTR_SET_VALUE(bakType_, bakType) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string destRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // destType Field Functions 
    bool hasDestType() const { return this->destType_ != nullptr;};
    void deleteDestType() { this->destType_ = nullptr;};
    inline string destType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


    // dumpAction Field Functions 
    bool hasDumpAction() const { return this->dumpAction_ != nullptr;};
    void deleteDumpAction() { this->dumpAction_ = nullptr;};
    inline string dumpAction() const { DARABONBA_PTR_GET_DEFAULT(dumpAction_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setDumpAction(string dumpAction) { DARABONBA_PTR_SET_VALUE(dumpAction_, dumpAction) };


    // filterKey Field Functions 
    bool hasFilterKey() const { return this->filterKey_ != nullptr;};
    void deleteFilterKey() { this->filterKey_ = nullptr;};
    inline string filterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


    // filterType Field Functions 
    bool hasFilterType() const { return this->filterType_ != nullptr;};
    void deleteFilterType() { this->filterType_ = nullptr;};
    inline string filterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


    // filterValue Field Functions 
    bool hasFilterValue() const { return this->filterValue_ != nullptr;};
    void deleteFilterValue() { this->filterValue_ = nullptr;};
    inline string filterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


    // onlyPreserveOneEachDay Field Functions 
    bool hasOnlyPreserveOneEachDay() const { return this->onlyPreserveOneEachDay_ != nullptr;};
    void deleteOnlyPreserveOneEachDay() { this->onlyPreserveOneEachDay_ = nullptr;};
    inline bool onlyPreserveOneEachDay() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachDay_, false) };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setOnlyPreserveOneEachDay(bool onlyPreserveOneEachDay) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachDay_, onlyPreserveOneEachDay) };


    // onlyPreserveOneEachHour Field Functions 
    bool hasOnlyPreserveOneEachHour() const { return this->onlyPreserveOneEachHour_ != nullptr;};
    void deleteOnlyPreserveOneEachHour() { this->onlyPreserveOneEachHour_ = nullptr;};
    inline bool onlyPreserveOneEachHour() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachHour_, false) };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setOnlyPreserveOneEachHour(bool onlyPreserveOneEachHour) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachHour_, onlyPreserveOneEachHour) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // retentionType Field Functions 
    bool hasRetentionType() const { return this->retentionType_ != nullptr;};
    void deleteRetentionType() { this->retentionType_ = nullptr;};
    inline string retentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


    // retentionValue Field Functions 
    bool hasRetentionValue() const { return this->retentionValue_ != nullptr;};
    void deleteRetentionValue() { this->retentionValue_ = nullptr;};
    inline string retentionValue() const { DARABONBA_PTR_GET_DEFAULT(retentionValue_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setRetentionValue(string retentionValue) { DARABONBA_PTR_SET_VALUE(retentionValue_, retentionValue) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string srcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


    // srcType Field Functions 
    bool hasSrcType() const { return this->srcType_ != nullptr;};
    void deleteSrcType() { this->srcType_ = nullptr;};
    inline string srcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
    inline ModifyBackupPolicyRequestAdvancedDataPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


  protected:
    std::shared_ptr<string> actionType_ = nullptr;
    std::shared_ptr<bool> autoCreated_ = nullptr;
    std::shared_ptr<string> bakType_ = nullptr;
    std::shared_ptr<string> destRegion_ = nullptr;
    std::shared_ptr<string> destType_ = nullptr;
    std::shared_ptr<string> dumpAction_ = nullptr;
    std::shared_ptr<string> filterKey_ = nullptr;
    std::shared_ptr<string> filterType_ = nullptr;
    std::shared_ptr<string> filterValue_ = nullptr;
    std::shared_ptr<bool> onlyPreserveOneEachDay_ = nullptr;
    std::shared_ptr<bool> onlyPreserveOneEachHour_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> retentionType_ = nullptr;
    std::shared_ptr<string> retentionValue_ = nullptr;
    std::shared_ptr<string> srcRegion_ = nullptr;
    std::shared_ptr<string> srcType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
