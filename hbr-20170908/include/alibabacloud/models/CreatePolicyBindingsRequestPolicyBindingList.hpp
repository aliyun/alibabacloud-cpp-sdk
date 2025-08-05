// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyBindingsRequestPolicyBindingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsRequestPolicyBindingList& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(PolicyBindingDescription, policyBindingDescription_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsRequestPolicyBindingList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(PolicyBindingDescription, policyBindingDescription_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
    };
    CreatePolicyBindingsRequestPolicyBindingList() = default ;
    CreatePolicyBindingsRequestPolicyBindingList(const CreatePolicyBindingsRequestPolicyBindingList &) = default ;
    CreatePolicyBindingsRequestPolicyBindingList(CreatePolicyBindingsRequestPolicyBindingList &&) = default ;
    CreatePolicyBindingsRequestPolicyBindingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsRequestPolicyBindingList() = default ;
    CreatePolicyBindingsRequestPolicyBindingList& operator=(const CreatePolicyBindingsRequestPolicyBindingList &) = default ;
    CreatePolicyBindingsRequestPolicyBindingList& operator=(CreatePolicyBindingsRequestPolicyBindingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advancedOptions_ != nullptr
        && this->crossAccountRoleName_ != nullptr && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->dataSourceId_ != nullptr && this->disabled_ != nullptr
        && this->exclude_ != nullptr && this->include_ != nullptr && this->policyBindingDescription_ != nullptr && this->source_ != nullptr && this->sourceType_ != nullptr
        && this->speedLimit_ != nullptr; };
    // advancedOptions Field Functions 
    bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
    void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
    inline const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions & advancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions) };
    inline Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions advancedOptions() { DARABONBA_PTR_GET(advancedOptions_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions) };
    inline CreatePolicyBindingsRequestPolicyBindingList& setAdvancedOptions(const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
    inline CreatePolicyBindingsRequestPolicyBindingList& setAdvancedOptions(Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreatePolicyBindingsRequestPolicyBindingList& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline string disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setDisabled(string disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // policyBindingDescription Field Functions 
    bool hasPolicyBindingDescription() const { return this->policyBindingDescription_ != nullptr;};
    void deletePolicyBindingDescription() { this->policyBindingDescription_ = nullptr;};
    inline string policyBindingDescription() const { DARABONBA_PTR_GET_DEFAULT(policyBindingDescription_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setPolicyBindingDescription(string policyBindingDescription) { DARABONBA_PTR_SET_VALUE(policyBindingDescription_, policyBindingDescription) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingList& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


  protected:
    // The advanced options.
    std::shared_ptr<Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions> advancedOptions_ = nullptr;
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether to back up and restore data within the same Alibaba Cloud account or across Alibaba Cloud accounts. Default value: SELF_ACCOUNT. Valid values:
    // 
    // *   **SELF_ACCOUNT**: backs up data within the same Alibaba Cloud account.
    // *   **CROSS_ACCOUNT**: backs up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The ID of the data source. The meaning of this parameter depends on the **SourceType** parameter. Valid values:
    // 
    // *   **UDM_ECS**: the ID of the Elastic Compute Service (ECS) instance
    // *   **OSS**: the name of the Object Storage Service (OSS) bucket
    // *   **NAS**: the ID of the File Storage NAS (NAS) file system
    // *   **COMMON_NAS**: the ID of the on-premises NAS file system
    // *   **ECS_FILE**: the ID of the ECS instance
    // *   **File**: the ID of the Cloud Backup client
    // *   **COMMON_FILE_SYSTEM**: the ID of the Cloud Parallel File Storage (CPFS) backup data source
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // Specifies whether to disable the backup policy for the data source. Valid values:
    // 
    // *   true: disables the backup policy for the data source
    // *   false: enables the backup policy for the data source
    std::shared_ptr<string> disabled_ = nullptr;
    // This parameter is required only if you set the **SourceType** parameter to **ECS_FILE**, **File**, **NAS**, **COMMON_NAS**, or **COMMON_FILE_SYSTEM**. This parameter specifies the type of files that do not need to be backed up. No files of the specified type are backed up. The value can be up to 255 characters in length.
    std::shared_ptr<string> exclude_ = nullptr;
    // This parameter is required only if you set the **SourceType** parameter to **ECS_FILE**, **File**, **NAS**, **COMMON_NAS**, or **COMMON_FILE_SYSTEM**. This parameter specifies the type of files to be backed up. All files of the specified type are backed up. The value can be up to 255 characters in length.
    std::shared_ptr<string> include_ = nullptr;
    // The description of the association.
    std::shared_ptr<string> policyBindingDescription_ = nullptr;
    // *   If the SourceType parameter is set to **OSS**, set the Source parameter to the prefix of the path to the folder that you want to back up. If you do not specify the Source parameter, the entire bucket (root directory) is backed up.
    // *   If the SourceType parameter is set to **ECS_FILE** or **File**, set the Source parameter to the path to the files that you want to back up. If you do not specify the Source parameter, all paths are backed up.
    // *   This parameter is required if the SourceType parameter is set to **COMMON_FILE_SYSTEM**. This parameter specifies the path to be backed up. To back up the /src path, enter ["/src"]. To back up the root path, enter ["/"].
    std::shared_ptr<string> source_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: ECS instance
    // *   **OSS**: OSS bucket
    // *   **NAS**: NAS file system
    // *   **COMMON_NAS**: on-premises NAS file system
    // *   **ECS_FILE**: ECS file
    // *   **File**: on-premises file
    // *   **COMMON_FILE_SYSTEM**: CPFS file system
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
