// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSUDMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONSUDMDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AppConsistent, appConsistent_);
      DARABONBA_PTR_TO_JSON(DestinationKmsKeyId, destinationKmsKeyId_);
      DARABONBA_PTR_TO_JSON(DiskIdList, diskIdList_);
      DARABONBA_PTR_TO_JSON(EnableFsFreeze, enableFsFreeze_);
      DARABONBA_PTR_TO_JSON(EnableWriters, enableWriters_);
      DARABONBA_PTR_TO_JSON(ExcludeDiskIdList, excludeDiskIdList_);
      DARABONBA_PTR_TO_JSON(PostScriptPath, postScriptPath_);
      DARABONBA_PTR_TO_JSON(PreScriptPath, preScriptPath_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(SnapshotGroup, snapshotGroup_);
      DARABONBA_PTR_TO_JSON(TimeoutInSeconds, timeoutInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConsistent, appConsistent_);
      DARABONBA_PTR_FROM_JSON(DestinationKmsKeyId, destinationKmsKeyId_);
      DARABONBA_PTR_FROM_JSON(DiskIdList, diskIdList_);
      DARABONBA_PTR_FROM_JSON(EnableFsFreeze, enableFsFreeze_);
      DARABONBA_PTR_FROM_JSON(EnableWriters, enableWriters_);
      DARABONBA_PTR_FROM_JSON(ExcludeDiskIdList, excludeDiskIdList_);
      DARABONBA_PTR_FROM_JSON(PostScriptPath, postScriptPath_);
      DARABONBA_PTR_FROM_JSON(PreScriptPath, preScriptPath_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(SnapshotGroup, snapshotGroup_);
      DARABONBA_PTR_FROM_JSON(TimeoutInSeconds, timeoutInSeconds_);
    };
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail &&) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& operator=(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& operator=(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appConsistent_ == nullptr
        && return this->destinationKmsKeyId_ == nullptr && return this->diskIdList_ == nullptr && return this->enableFsFreeze_ == nullptr && return this->enableWriters_ == nullptr && return this->excludeDiskIdList_ == nullptr
        && return this->postScriptPath_ == nullptr && return this->preScriptPath_ == nullptr && return this->ramRoleName_ == nullptr && return this->snapshotGroup_ == nullptr && return this->timeoutInSeconds_ == nullptr; };
    // appConsistent Field Functions 
    bool hasAppConsistent() const { return this->appConsistent_ != nullptr;};
    void deleteAppConsistent() { this->appConsistent_ = nullptr;};
    inline bool appConsistent() const { DARABONBA_PTR_GET_DEFAULT(appConsistent_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setAppConsistent(bool appConsistent) { DARABONBA_PTR_SET_VALUE(appConsistent_, appConsistent) };


    // destinationKmsKeyId Field Functions 
    bool hasDestinationKmsKeyId() const { return this->destinationKmsKeyId_ != nullptr;};
    void deleteDestinationKmsKeyId() { this->destinationKmsKeyId_ = nullptr;};
    inline string destinationKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(destinationKmsKeyId_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setDestinationKmsKeyId(string destinationKmsKeyId) { DARABONBA_PTR_SET_VALUE(destinationKmsKeyId_, destinationKmsKeyId) };


    // diskIdList Field Functions 
    bool hasDiskIdList() const { return this->diskIdList_ != nullptr;};
    void deleteDiskIdList() { this->diskIdList_ = nullptr;};
    inline const vector<string> & diskIdList() const { DARABONBA_PTR_GET_CONST(diskIdList_, vector<string>) };
    inline vector<string> diskIdList() { DARABONBA_PTR_GET(diskIdList_, vector<string>) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setDiskIdList(const vector<string> & diskIdList) { DARABONBA_PTR_SET_VALUE(diskIdList_, diskIdList) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setDiskIdList(vector<string> && diskIdList) { DARABONBA_PTR_SET_RVALUE(diskIdList_, diskIdList) };


    // enableFsFreeze Field Functions 
    bool hasEnableFsFreeze() const { return this->enableFsFreeze_ != nullptr;};
    void deleteEnableFsFreeze() { this->enableFsFreeze_ = nullptr;};
    inline bool enableFsFreeze() const { DARABONBA_PTR_GET_DEFAULT(enableFsFreeze_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setEnableFsFreeze(bool enableFsFreeze) { DARABONBA_PTR_SET_VALUE(enableFsFreeze_, enableFsFreeze) };


    // enableWriters Field Functions 
    bool hasEnableWriters() const { return this->enableWriters_ != nullptr;};
    void deleteEnableWriters() { this->enableWriters_ = nullptr;};
    inline bool enableWriters() const { DARABONBA_PTR_GET_DEFAULT(enableWriters_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setEnableWriters(bool enableWriters) { DARABONBA_PTR_SET_VALUE(enableWriters_, enableWriters) };


    // excludeDiskIdList Field Functions 
    bool hasExcludeDiskIdList() const { return this->excludeDiskIdList_ != nullptr;};
    void deleteExcludeDiskIdList() { this->excludeDiskIdList_ = nullptr;};
    inline const vector<string> & excludeDiskIdList() const { DARABONBA_PTR_GET_CONST(excludeDiskIdList_, vector<string>) };
    inline vector<string> excludeDiskIdList() { DARABONBA_PTR_GET(excludeDiskIdList_, vector<string>) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setExcludeDiskIdList(const vector<string> & excludeDiskIdList) { DARABONBA_PTR_SET_VALUE(excludeDiskIdList_, excludeDiskIdList) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setExcludeDiskIdList(vector<string> && excludeDiskIdList) { DARABONBA_PTR_SET_RVALUE(excludeDiskIdList_, excludeDiskIdList) };


    // postScriptPath Field Functions 
    bool hasPostScriptPath() const { return this->postScriptPath_ != nullptr;};
    void deletePostScriptPath() { this->postScriptPath_ = nullptr;};
    inline string postScriptPath() const { DARABONBA_PTR_GET_DEFAULT(postScriptPath_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setPostScriptPath(string postScriptPath) { DARABONBA_PTR_SET_VALUE(postScriptPath_, postScriptPath) };


    // preScriptPath Field Functions 
    bool hasPreScriptPath() const { return this->preScriptPath_ != nullptr;};
    void deletePreScriptPath() { this->preScriptPath_ = nullptr;};
    inline string preScriptPath() const { DARABONBA_PTR_GET_DEFAULT(preScriptPath_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setPreScriptPath(string preScriptPath) { DARABONBA_PTR_SET_VALUE(preScriptPath_, preScriptPath) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // snapshotGroup Field Functions 
    bool hasSnapshotGroup() const { return this->snapshotGroup_ != nullptr;};
    void deleteSnapshotGroup() { this->snapshotGroup_ = nullptr;};
    inline bool snapshotGroup() const { DARABONBA_PTR_GET_DEFAULT(snapshotGroup_, false) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setSnapshotGroup(bool snapshotGroup) { DARABONBA_PTR_SET_VALUE(snapshotGroup_, snapshotGroup) };


    // timeoutInSeconds Field Functions 
    bool hasTimeoutInSeconds() const { return this->timeoutInSeconds_ != nullptr;};
    void deleteTimeoutInSeconds() { this->timeoutInSeconds_ = nullptr;};
    inline int64_t timeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutInSeconds_, 0L) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail& setTimeoutInSeconds(int64_t timeoutInSeconds) { DARABONBA_PTR_SET_VALUE(timeoutInSeconds_, timeoutInSeconds) };


  protected:
    // 是否创建应用一致性。仅云盘类型全部为ESSD时，支持创建快照应用一致性。
    std::shared_ptr<bool> appConsistent_ = nullptr;
    // The custom KMS key ID in the destination region. When this field is not empty and cross-region replication is enabled, the specified key will be used for encrypting the cross-region replication.
    std::shared_ptr<string> destinationKmsKeyId_ = nullptr;
    // List of disk IDs that need protection. This value is empty when protecting all disks.
    std::shared_ptr<vector<string>> diskIdList_ = nullptr;
    // This parameter is required when **AppConsistent** is **true**. It indicates whether to use the Linux FsFreeze mechanism to ensure the file system is in a read-only consistent state before creating an application-consistent snapshot. The default value is true.
    std::shared_ptr<bool> enableFsFreeze_ = nullptr;
    // This parameter is required when **AppConsistent** is **true**. It determines whether to set an application-consistent snapshot:
    // - **true**: Create an application-consistent snapshot
    // - **false**: Create a file system-consistent snapshot
    // 
    // The default value is true.
    std::shared_ptr<bool> enableWriters_ = nullptr;
    // List of disk IDs that do not need protection. This parameter is ignored if DiskIdList is not empty.
    std::shared_ptr<vector<string>> excludeDiskIdList_ = nullptr;
    // This parameter is required when **AppConsistent** is **true**. It specifies the path of the unfreeze script to be executed after creating an application-consistent snapshot.
    std::shared_ptr<string> postScriptPath_ = nullptr;
    // This parameter is required when **AppConsistent** is **true**. It specifies the path of the freeze script to be executed before creating an application-consistent snapshot.
    std::shared_ptr<string> preScriptPath_ = nullptr;
    // This parameter is required when **AppConsistent** is **true**. It specifies the RAM role name needed for creating an application-consistent snapshot.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // Indicates whether to create a snapshot consistency group. Only supported when all disk types are ESSD.
    std::shared_ptr<bool> snapshotGroup_ = nullptr;
    // This parameter is required when **AppConsistent** is **true**. It specifies the IO freeze timeout duration. The default value is 30 seconds.
    std::shared_ptr<int64_t> timeoutInSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
