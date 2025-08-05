// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYBINDINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYBINDINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdatePolicyBindingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyBindingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptionsShrink_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(PolicyBindingDescription, policyBindingDescription_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyBindingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(PolicyBindingDescription, policyBindingDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
    };
    UpdatePolicyBindingShrinkRequest() = default ;
    UpdatePolicyBindingShrinkRequest(const UpdatePolicyBindingShrinkRequest &) = default ;
    UpdatePolicyBindingShrinkRequest(UpdatePolicyBindingShrinkRequest &&) = default ;
    UpdatePolicyBindingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyBindingShrinkRequest() = default ;
    UpdatePolicyBindingShrinkRequest& operator=(const UpdatePolicyBindingShrinkRequest &) = default ;
    UpdatePolicyBindingShrinkRequest& operator=(UpdatePolicyBindingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advancedOptionsShrink_ != nullptr
        && this->dataSourceId_ != nullptr && this->disabled_ != nullptr && this->exclude_ != nullptr && this->include_ != nullptr && this->policyBindingDescription_ != nullptr
        && this->policyId_ != nullptr && this->source_ != nullptr && this->sourceType_ != nullptr && this->speedLimit_ != nullptr; };
    // advancedOptionsShrink Field Functions 
    bool hasAdvancedOptionsShrink() const { return this->advancedOptionsShrink_ != nullptr;};
    void deleteAdvancedOptionsShrink() { this->advancedOptionsShrink_ = nullptr;};
    inline string advancedOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(advancedOptionsShrink_, "") };
    inline UpdatePolicyBindingShrinkRequest& setAdvancedOptionsShrink(string advancedOptionsShrink) { DARABONBA_PTR_SET_VALUE(advancedOptionsShrink_, advancedOptionsShrink) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline UpdatePolicyBindingShrinkRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline UpdatePolicyBindingShrinkRequest& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline UpdatePolicyBindingShrinkRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline UpdatePolicyBindingShrinkRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // policyBindingDescription Field Functions 
    bool hasPolicyBindingDescription() const { return this->policyBindingDescription_ != nullptr;};
    void deletePolicyBindingDescription() { this->policyBindingDescription_ = nullptr;};
    inline string policyBindingDescription() const { DARABONBA_PTR_GET_DEFAULT(policyBindingDescription_, "") };
    inline UpdatePolicyBindingShrinkRequest& setPolicyBindingDescription(string policyBindingDescription) { DARABONBA_PTR_SET_VALUE(policyBindingDescription_, policyBindingDescription) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdatePolicyBindingShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdatePolicyBindingShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdatePolicyBindingShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline UpdatePolicyBindingShrinkRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


  protected:
    // The advanced options.
    std::shared_ptr<string> advancedOptionsShrink_ = nullptr;
    // The ID of the data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // Specifies whether to disable the backup policy for the data source. Valid values:
    // 
    // *   true: disables the backup policy for the data source
    // *   false: enables the backup policy for the data source
    std::shared_ptr<bool> disabled_ = nullptr;
    // This parameter is required only if you set the **SourceType** parameter to **ECS_FILE** or **File**. This parameter specifies the type of files that do not need to be backed up. No files of the specified type are backed up. The value can be up to 255 characters in length.
    std::shared_ptr<string> exclude_ = nullptr;
    // This parameter is required only if you set the **SourceType** parameter to **ECS_FILE** or **File**. This parameter specifies the type of files to be backed up. All files of the specified type are backed up. The value can be up to 255 characters in length.
    std::shared_ptr<string> include_ = nullptr;
    // The description of the association.
    std::shared_ptr<string> policyBindingDescription_ = nullptr;
    // The ID of the backup policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // *   If the SourceType parameter is set to **OSS**, set the Source parameter to the prefix of the path to the folder that you want to back up. If you do not specify the Source parameter, the entire bucket (root directory) is backed up.
    // *   If the SourceType parameter is set to **ECS_FILE** or **File**, set the Source parameter to the path to the files that you want to back up. If you do not specify the Source parameter, all paths backed up.
    std::shared_ptr<string> source_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: ECS instance backup
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
    // This parameter is required only if you set the **SourceType** parameter to **ECS_FILE** or **File**. This parameter specifies the throttling rules. Format: `{start}{end}{bandwidth}`. Separate multiple throttling rules with vertical bars (|). The time ranges of the throttling rules cannot overlap.
    // 
    // *   **start**: the start hour.
    // *   **end**: the end hour.
    // *   **bandwidth**: the bandwidth. Unit: KB/s.
    std::shared_ptr<string> speedLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
