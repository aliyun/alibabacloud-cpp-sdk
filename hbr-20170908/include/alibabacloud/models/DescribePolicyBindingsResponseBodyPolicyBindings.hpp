// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyBindingsResponseBodyPolicyBindingsHitTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsResponseBodyPolicyBindings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBodyPolicyBindings& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_TO_JSON(CreatedByTag, createdByTag_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(HitTags, hitTags_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(PolicyBindingDescription, policyBindingDescription_);
      DARABONBA_PTR_TO_JSON(PolicyBindingId, policyBindingId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBodyPolicyBindings& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_FROM_JSON(CreatedByTag, createdByTag_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(HitTags, hitTags_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(PolicyBindingDescription, policyBindingDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyBindingId, policyBindingId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    DescribePolicyBindingsResponseBodyPolicyBindings() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindings(const DescribePolicyBindingsResponseBodyPolicyBindings &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindings(DescribePolicyBindingsResponseBodyPolicyBindings &&) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBodyPolicyBindings() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindings& operator=(const DescribePolicyBindingsResponseBodyPolicyBindings &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindings& operator=(DescribePolicyBindingsResponseBodyPolicyBindings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedOptions_ == nullptr
        && return this->createdByTag_ == nullptr && return this->createdTime_ == nullptr && return this->crossAccountRoleName_ == nullptr && return this->crossAccountType_ == nullptr && return this->crossAccountUserId_ == nullptr
        && return this->dataSourceId_ == nullptr && return this->disabled_ == nullptr && return this->exclude_ == nullptr && return this->hitTags_ == nullptr && return this->include_ == nullptr
        && return this->policyBindingDescription_ == nullptr && return this->policyBindingId_ == nullptr && return this->policyId_ == nullptr && return this->source_ == nullptr && return this->sourceType_ == nullptr
        && return this->speedLimit_ == nullptr && return this->updatedTime_ == nullptr; };
    // advancedOptions Field Functions 
    bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
    void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
    inline const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions & advancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions) };
    inline Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions advancedOptions() { DARABONBA_PTR_GET(advancedOptions_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setAdvancedOptions(const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setAdvancedOptions(Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


    // createdByTag Field Functions 
    bool hasCreatedByTag() const { return this->createdByTag_ != nullptr;};
    void deleteCreatedByTag() { this->createdByTag_ = nullptr;};
    inline bool createdByTag() const { DARABONBA_PTR_GET_DEFAULT(createdByTag_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setCreatedByTag(bool createdByTag) { DARABONBA_PTR_SET_VALUE(createdByTag_, createdByTag) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // hitTags Field Functions 
    bool hasHitTags() const { return this->hitTags_ != nullptr;};
    void deleteHitTags() { this->hitTags_ = nullptr;};
    inline const vector<Models::DescribePolicyBindingsResponseBodyPolicyBindingsHitTags> & hitTags() const { DARABONBA_PTR_GET_CONST(hitTags_, vector<Models::DescribePolicyBindingsResponseBodyPolicyBindingsHitTags>) };
    inline vector<Models::DescribePolicyBindingsResponseBodyPolicyBindingsHitTags> hitTags() { DARABONBA_PTR_GET(hitTags_, vector<Models::DescribePolicyBindingsResponseBodyPolicyBindingsHitTags>) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setHitTags(const vector<Models::DescribePolicyBindingsResponseBodyPolicyBindingsHitTags> & hitTags) { DARABONBA_PTR_SET_VALUE(hitTags_, hitTags) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setHitTags(vector<Models::DescribePolicyBindingsResponseBodyPolicyBindingsHitTags> && hitTags) { DARABONBA_PTR_SET_RVALUE(hitTags_, hitTags) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // policyBindingDescription Field Functions 
    bool hasPolicyBindingDescription() const { return this->policyBindingDescription_ != nullptr;};
    void deletePolicyBindingDescription() { this->policyBindingDescription_ = nullptr;};
    inline string policyBindingDescription() const { DARABONBA_PTR_GET_DEFAULT(policyBindingDescription_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setPolicyBindingDescription(string policyBindingDescription) { DARABONBA_PTR_SET_VALUE(policyBindingDescription_, policyBindingDescription) };


    // policyBindingId Field Functions 
    bool hasPolicyBindingId() const { return this->policyBindingId_ != nullptr;};
    void deletePolicyBindingId() { this->policyBindingId_ = nullptr;};
    inline string policyBindingId() const { DARABONBA_PTR_GET_DEFAULT(policyBindingId_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setPolicyBindingId(string policyBindingId) { DARABONBA_PTR_SET_VALUE(policyBindingId_, policyBindingId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribePolicyBindingsResponseBodyPolicyBindings& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    // Advanced options.
    std::shared_ptr<Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions> advancedOptions_ = nullptr;
    // Whether the resource is automatically associated through the backup policy resource tag.
    std::shared_ptr<bool> createdByTag_ = nullptr;
    // Creation time. UNIX timestamp, in seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The name of the role created in the RAM of the original account for cross-account backup.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Cross-account backup type. Supported values: 
    // - SELF_ACCOUNT: Backup within the same account
    // - CROSS_ACCOUNT: Cross-account backup
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the original account for cross-account backup.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // Data source ID.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // Whether the policy is disbaled for this data source.
    // - true: disabled
    // - false: Not disabled
    std::shared_ptr<bool> disabled_ = nullptr;
    // This parameter is required only when **SourceType** is **ECS_FILE** or **File**. It specifies the file types that should not be backed up, and all files of these types will be excluded. Supports up to 255 characters.
    std::shared_ptr<string> exclude_ = nullptr;
    // Hit tag rules.
    std::shared_ptr<vector<Models::DescribePolicyBindingsResponseBodyPolicyBindingsHitTags>> hitTags_ = nullptr;
    // This parameter is required only when **SourceType** is **ECS_FILE** or **File**. It specifies the file types to be backed up, and all files of these types will be backed up. Supports up to 255 characters.
    std::shared_ptr<string> include_ = nullptr;
    // Bound policy description.
    std::shared_ptr<string> policyBindingDescription_ = nullptr;
    // Bound policy ID.
    std::shared_ptr<string> policyBindingId_ = nullptr;
    // Policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // - When **SourceType** is **OSS**, it indicates the prefix to be backed up. If not specified, it means backing up the entire root directory of the Bucket.
    // - When **SourceType** is **ECS_FILE** or **File**, it indicates the file directory to be backed up. If not specified, it means backing up all directories.
    std::shared_ptr<string> source_ = nullptr;
    // Data source type, with the value range:
    // - **UDM_ECS**: indicates ECS full machine backup
    std::shared_ptr<string> sourceType_ = nullptr;
    // This parameter is required only when **SourceType** is **ECS_FILE** or **File**. It specifies the backup traffic control. The format is `{start}{end}{bandwidth}`. Multiple traffic control configurations are separated by commas, and the configured times must not overlap.
    // 
    // - **start**: Start hour.
    // - **end**: End hour.
    // - **bandwidth**: Limit rate, in KB/s.
    std::shared_ptr<string> speedLimit_ = nullptr;
    // Update time. UNIX timestamp, in seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
