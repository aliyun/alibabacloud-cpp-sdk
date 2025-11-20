// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYBINDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYBINDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdatePolicyBindingRequestAdvancedOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdatePolicyBindingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyBindingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
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
    friend void from_json(const Darabonba::Json& j, UpdatePolicyBindingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
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
    UpdatePolicyBindingRequest() = default ;
    UpdatePolicyBindingRequest(const UpdatePolicyBindingRequest &) = default ;
    UpdatePolicyBindingRequest(UpdatePolicyBindingRequest &&) = default ;
    UpdatePolicyBindingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyBindingRequest() = default ;
    UpdatePolicyBindingRequest& operator=(const UpdatePolicyBindingRequest &) = default ;
    UpdatePolicyBindingRequest& operator=(UpdatePolicyBindingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedOptions_ == nullptr
        && return this->dataSourceId_ == nullptr && return this->disabled_ == nullptr && return this->exclude_ == nullptr && return this->include_ == nullptr && return this->policyBindingDescription_ == nullptr
        && return this->policyId_ == nullptr && return this->source_ == nullptr && return this->sourceType_ == nullptr && return this->speedLimit_ == nullptr; };
    // advancedOptions Field Functions 
    bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
    void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
    inline const UpdatePolicyBindingRequestAdvancedOptions & advancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, UpdatePolicyBindingRequestAdvancedOptions) };
    inline UpdatePolicyBindingRequestAdvancedOptions advancedOptions() { DARABONBA_PTR_GET(advancedOptions_, UpdatePolicyBindingRequestAdvancedOptions) };
    inline UpdatePolicyBindingRequest& setAdvancedOptions(const UpdatePolicyBindingRequestAdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
    inline UpdatePolicyBindingRequest& setAdvancedOptions(UpdatePolicyBindingRequestAdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline UpdatePolicyBindingRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline UpdatePolicyBindingRequest& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline UpdatePolicyBindingRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline UpdatePolicyBindingRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // policyBindingDescription Field Functions 
    bool hasPolicyBindingDescription() const { return this->policyBindingDescription_ != nullptr;};
    void deletePolicyBindingDescription() { this->policyBindingDescription_ = nullptr;};
    inline string policyBindingDescription() const { DARABONBA_PTR_GET_DEFAULT(policyBindingDescription_, "") };
    inline UpdatePolicyBindingRequest& setPolicyBindingDescription(string policyBindingDescription) { DARABONBA_PTR_SET_VALUE(policyBindingDescription_, policyBindingDescription) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdatePolicyBindingRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdatePolicyBindingRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdatePolicyBindingRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline UpdatePolicyBindingRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


  protected:
    // The advanced options.
    std::shared_ptr<UpdatePolicyBindingRequestAdvancedOptions> advancedOptions_ = nullptr;
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
