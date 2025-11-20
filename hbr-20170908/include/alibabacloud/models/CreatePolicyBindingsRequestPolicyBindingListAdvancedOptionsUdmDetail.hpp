// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONSUDMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONSUDMDETAIL_HPP_
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
  class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AppConsistent, appConsistent_);
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
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConsistent, appConsistent_);
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
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail &&) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& operator=(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& operator=(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appConsistent_ == nullptr
        && return this->diskIdList_ == nullptr && return this->enableFsFreeze_ == nullptr && return this->enableWriters_ == nullptr && return this->excludeDiskIdList_ == nullptr && return this->postScriptPath_ == nullptr
        && return this->preScriptPath_ == nullptr && return this->ramRoleName_ == nullptr && return this->snapshotGroup_ == nullptr && return this->timeoutInSeconds_ == nullptr; };
    // appConsistent Field Functions 
    bool hasAppConsistent() const { return this->appConsistent_ != nullptr;};
    void deleteAppConsistent() { this->appConsistent_ = nullptr;};
    inline bool appConsistent() const { DARABONBA_PTR_GET_DEFAULT(appConsistent_, false) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setAppConsistent(bool appConsistent) { DARABONBA_PTR_SET_VALUE(appConsistent_, appConsistent) };


    // diskIdList Field Functions 
    bool hasDiskIdList() const { return this->diskIdList_ != nullptr;};
    void deleteDiskIdList() { this->diskIdList_ = nullptr;};
    inline const vector<string> & diskIdList() const { DARABONBA_PTR_GET_CONST(diskIdList_, vector<string>) };
    inline vector<string> diskIdList() { DARABONBA_PTR_GET(diskIdList_, vector<string>) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setDiskIdList(const vector<string> & diskIdList) { DARABONBA_PTR_SET_VALUE(diskIdList_, diskIdList) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setDiskIdList(vector<string> && diskIdList) { DARABONBA_PTR_SET_RVALUE(diskIdList_, diskIdList) };


    // enableFsFreeze Field Functions 
    bool hasEnableFsFreeze() const { return this->enableFsFreeze_ != nullptr;};
    void deleteEnableFsFreeze() { this->enableFsFreeze_ = nullptr;};
    inline bool enableFsFreeze() const { DARABONBA_PTR_GET_DEFAULT(enableFsFreeze_, false) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setEnableFsFreeze(bool enableFsFreeze) { DARABONBA_PTR_SET_VALUE(enableFsFreeze_, enableFsFreeze) };


    // enableWriters Field Functions 
    bool hasEnableWriters() const { return this->enableWriters_ != nullptr;};
    void deleteEnableWriters() { this->enableWriters_ = nullptr;};
    inline bool enableWriters() const { DARABONBA_PTR_GET_DEFAULT(enableWriters_, false) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setEnableWriters(bool enableWriters) { DARABONBA_PTR_SET_VALUE(enableWriters_, enableWriters) };


    // excludeDiskIdList Field Functions 
    bool hasExcludeDiskIdList() const { return this->excludeDiskIdList_ != nullptr;};
    void deleteExcludeDiskIdList() { this->excludeDiskIdList_ = nullptr;};
    inline const vector<string> & excludeDiskIdList() const { DARABONBA_PTR_GET_CONST(excludeDiskIdList_, vector<string>) };
    inline vector<string> excludeDiskIdList() { DARABONBA_PTR_GET(excludeDiskIdList_, vector<string>) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setExcludeDiskIdList(const vector<string> & excludeDiskIdList) { DARABONBA_PTR_SET_VALUE(excludeDiskIdList_, excludeDiskIdList) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setExcludeDiskIdList(vector<string> && excludeDiskIdList) { DARABONBA_PTR_SET_RVALUE(excludeDiskIdList_, excludeDiskIdList) };


    // postScriptPath Field Functions 
    bool hasPostScriptPath() const { return this->postScriptPath_ != nullptr;};
    void deletePostScriptPath() { this->postScriptPath_ = nullptr;};
    inline string postScriptPath() const { DARABONBA_PTR_GET_DEFAULT(postScriptPath_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setPostScriptPath(string postScriptPath) { DARABONBA_PTR_SET_VALUE(postScriptPath_, postScriptPath) };


    // preScriptPath Field Functions 
    bool hasPreScriptPath() const { return this->preScriptPath_ != nullptr;};
    void deletePreScriptPath() { this->preScriptPath_ = nullptr;};
    inline string preScriptPath() const { DARABONBA_PTR_GET_DEFAULT(preScriptPath_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setPreScriptPath(string preScriptPath) { DARABONBA_PTR_SET_VALUE(preScriptPath_, preScriptPath) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // snapshotGroup Field Functions 
    bool hasSnapshotGroup() const { return this->snapshotGroup_ != nullptr;};
    void deleteSnapshotGroup() { this->snapshotGroup_ = nullptr;};
    inline bool snapshotGroup() const { DARABONBA_PTR_GET_DEFAULT(snapshotGroup_, false) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setSnapshotGroup(bool snapshotGroup) { DARABONBA_PTR_SET_VALUE(snapshotGroup_, snapshotGroup) };


    // timeoutInSeconds Field Functions 
    bool hasTimeoutInSeconds() const { return this->timeoutInSeconds_ != nullptr;};
    void deleteTimeoutInSeconds() { this->timeoutInSeconds_ = nullptr;};
    inline int64_t timeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutInSeconds_, 0L) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail& setTimeoutInSeconds(int64_t timeoutInSeconds) { DARABONBA_PTR_SET_VALUE(timeoutInSeconds_, timeoutInSeconds) };


  protected:
    // Specifies whether to enable application consistency. You can enable application consistency only if all disks are ESSDs.
    std::shared_ptr<bool> appConsistent_ = nullptr;
    // The IDs of the disks that need to be protected. If all disks need to be protected, this parameter is empty.
    std::shared_ptr<vector<string>> diskIdList_ = nullptr;
    // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies whether to enable Linux fsfreeze to put file systems into the read-only state before application-consistent snapshots are created. Default value: true.
    std::shared_ptr<bool> enableFsFreeze_ = nullptr;
    // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies whether to create application-consistent snapshots. Valid values:
    // 
    // *   true: creates application-consistent snapshots.
    // *   false: creates file system-consistent snapshots.
    // 
    // Default value: true.
    std::shared_ptr<bool> enableWriters_ = nullptr;
    // The IDs of the disks that do not need to be protected. If the DiskIdList parameter is not empty, this parameter is ignored.
    std::shared_ptr<vector<string>> excludeDiskIdList_ = nullptr;
    // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the path of the post-thaw scripts that are executed after application-consistent snapshots are created.
    std::shared_ptr<string> postScriptPath_ = nullptr;
    // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the path of the pre-freeze scripts that are executed before application-consistent snapshots are created.
    std::shared_ptr<string> preScriptPath_ = nullptr;
    // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the name of the Resource Access Management (RAM) role that is required to create application-consistent snapshots.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // Specifies whether to create a snapshot-consistent group. You can create a snapshot-consistent group only if all disks are Enterprise SSDs (ESSDs).
    std::shared_ptr<bool> snapshotGroup_ = nullptr;
    // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the I/O freeze timeout period. Default value: 30. Unit: seconds.
    std::shared_ptr<int64_t> timeoutInSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
