// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllClassifyUsers, allClassifyUsers_);
      DARABONBA_PTR_TO_JSON(AllowAutoSetup, allowAutoSetup_);
      DARABONBA_PTR_TO_JSON(AllowBufferCount, allowBufferCount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(BuyDesktopsCount, buyDesktopsCount_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(DataDiskPerLevel, dataDiskPerLevel_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DefaultInitDesktopCount, defaultInitDesktopCount_);
      DARABONBA_PTR_TO_JSON(DefaultLanguage, defaultLanguage_);
      DARABONBA_PTR_TO_JSON(DeleteDuration, deleteDuration_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(ExclusiveType, exclusiveType_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(GroupAmount, groupAmount_);
      DARABONBA_PTR_TO_JSON(GroupVersion, groupVersion_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_TO_JSON(MaxDesktopsCount, maxDesktopsCount_);
      DARABONBA_PTR_TO_JSON(MinDesktopsCount, minDesktopsCount_);
      DARABONBA_PTR_TO_JSON(MultiResource, multiResource_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(ProfileFollowSwitch, profileFollowSwitch_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(ScaleStrategyId, scaleStrategyId_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
      DARABONBA_PTR_TO_JSON(SimpleUserGroupId, simpleUserGroupId_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskPerLevel, systemDiskPerLevel_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_TO_JSON(UserOuPath, userOuPath_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllClassifyUsers, allClassifyUsers_);
      DARABONBA_PTR_FROM_JSON(AllowAutoSetup, allowAutoSetup_);
      DARABONBA_PTR_FROM_JSON(AllowBufferCount, allowBufferCount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(BuyDesktopsCount, buyDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(DataDiskPerLevel, dataDiskPerLevel_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DefaultInitDesktopCount, defaultInitDesktopCount_);
      DARABONBA_PTR_FROM_JSON(DefaultLanguage, defaultLanguage_);
      DARABONBA_PTR_FROM_JSON(DeleteDuration, deleteDuration_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(ExclusiveType, exclusiveType_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(GroupAmount, groupAmount_);
      DARABONBA_PTR_FROM_JSON(GroupVersion, groupVersion_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_FROM_JSON(MaxDesktopsCount, maxDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(MinDesktopsCount, minDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(MultiResource, multiResource_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(ProfileFollowSwitch, profileFollowSwitch_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(ScaleStrategyId, scaleStrategyId_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
      DARABONBA_PTR_FROM_JSON(SimpleUserGroupId, simpleUserGroupId_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPerLevel, systemDiskPerLevel_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_FROM_JSON(UserOuPath, userOuPath_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateDesktopGroupRequest() = default ;
    CreateDesktopGroupRequest(const CreateDesktopGroupRequest &) = default ;
    CreateDesktopGroupRequest(CreateDesktopGroupRequest &&) = default ;
    CreateDesktopGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopGroupRequest() = default ;
    CreateDesktopGroupRequest& operator=(const CreateDesktopGroupRequest &) = default ;
    CreateDesktopGroupRequest& operator=(CreateDesktopGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You cannot specify an empty string as a tag key. A tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value. You can specify an empty string as a tag key. A tag value can be up to 128 characters in length and cannot start with `acs:`. The tag value cannot contain `http://` or `https://`.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->allClassifyUsers_ == nullptr
        && this->allowAutoSetup_ == nullptr && this->allowBufferCount_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bindAmount_ == nullptr
        && this->bundleId_ == nullptr && this->buyDesktopsCount_ == nullptr && this->chargeType_ == nullptr && this->classify_ == nullptr && this->clientToken_ == nullptr
        && this->comments_ == nullptr && this->connectDuration_ == nullptr && this->dataDiskCategory_ == nullptr && this->dataDiskPerLevel_ == nullptr && this->dataDiskSize_ == nullptr
        && this->defaultInitDesktopCount_ == nullptr && this->defaultLanguage_ == nullptr && this->deleteDuration_ == nullptr && this->desktopGroupName_ == nullptr && this->desktopType_ == nullptr
        && this->directoryId_ == nullptr && this->endUserIds_ == nullptr && this->exclusiveType_ == nullptr && this->fileSystemId_ == nullptr && this->groupAmount_ == nullptr
        && this->groupVersion_ == nullptr && this->hostname_ == nullptr && this->idleDisconnectDuration_ == nullptr && this->imageId_ == nullptr && this->keepDuration_ == nullptr
        && this->loadPolicy_ == nullptr && this->maxDesktopsCount_ == nullptr && this->minDesktopsCount_ == nullptr && this->multiResource_ == nullptr && this->officeSiteId_ == nullptr
        && this->ownType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->policyGroupId_ == nullptr && this->profileFollowSwitch_ == nullptr
        && this->promotionId_ == nullptr && this->ratioThreshold_ == nullptr && this->regionId_ == nullptr && this->resellerOwnerUid_ == nullptr && this->resetType_ == nullptr
        && this->scaleStrategyId_ == nullptr && this->sessionType_ == nullptr && this->simpleUserGroupId_ == nullptr && this->snapshotPolicyId_ == nullptr && this->stopDuration_ == nullptr
        && this->systemDiskCategory_ == nullptr && this->systemDiskPerLevel_ == nullptr && this->systemDiskSize_ == nullptr && this->tag_ == nullptr && this->timerGroupId_ == nullptr
        && this->userGroupName_ == nullptr && this->userOuPath_ == nullptr && this->volumeEncryptionEnabled_ == nullptr && this->volumeEncryptionKey_ == nullptr && this->vpcId_ == nullptr; };
    // allClassifyUsers Field Functions 
    bool hasAllClassifyUsers() const { return this->allClassifyUsers_ != nullptr;};
    void deleteAllClassifyUsers() { this->allClassifyUsers_ = nullptr;};
    inline bool getAllClassifyUsers() const { DARABONBA_PTR_GET_DEFAULT(allClassifyUsers_, false) };
    inline CreateDesktopGroupRequest& setAllClassifyUsers(bool allClassifyUsers) { DARABONBA_PTR_SET_VALUE(allClassifyUsers_, allClassifyUsers) };


    // allowAutoSetup Field Functions 
    bool hasAllowAutoSetup() const { return this->allowAutoSetup_ != nullptr;};
    void deleteAllowAutoSetup() { this->allowAutoSetup_ = nullptr;};
    inline int32_t getAllowAutoSetup() const { DARABONBA_PTR_GET_DEFAULT(allowAutoSetup_, 0) };
    inline CreateDesktopGroupRequest& setAllowAutoSetup(int32_t allowAutoSetup) { DARABONBA_PTR_SET_VALUE(allowAutoSetup_, allowAutoSetup) };


    // allowBufferCount Field Functions 
    bool hasAllowBufferCount() const { return this->allowBufferCount_ != nullptr;};
    void deleteAllowBufferCount() { this->allowBufferCount_ = nullptr;};
    inline int32_t getAllowBufferCount() const { DARABONBA_PTR_GET_DEFAULT(allowBufferCount_, 0) };
    inline CreateDesktopGroupRequest& setAllowBufferCount(int32_t allowBufferCount) { DARABONBA_PTR_SET_VALUE(allowBufferCount_, allowBufferCount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateDesktopGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDesktopGroupRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bindAmount Field Functions 
    bool hasBindAmount() const { return this->bindAmount_ != nullptr;};
    void deleteBindAmount() { this->bindAmount_ = nullptr;};
    inline int64_t getBindAmount() const { DARABONBA_PTR_GET_DEFAULT(bindAmount_, 0L) };
    inline CreateDesktopGroupRequest& setBindAmount(int64_t bindAmount) { DARABONBA_PTR_SET_VALUE(bindAmount_, bindAmount) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline CreateDesktopGroupRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // buyDesktopsCount Field Functions 
    bool hasBuyDesktopsCount() const { return this->buyDesktopsCount_ != nullptr;};
    void deleteBuyDesktopsCount() { this->buyDesktopsCount_ = nullptr;};
    inline int32_t getBuyDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(buyDesktopsCount_, 0) };
    inline CreateDesktopGroupRequest& setBuyDesktopsCount(int32_t buyDesktopsCount) { DARABONBA_PTR_SET_VALUE(buyDesktopsCount_, buyDesktopsCount) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateDesktopGroupRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateDesktopGroupRequest& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDesktopGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline CreateDesktopGroupRequest& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // connectDuration Field Functions 
    bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
    void deleteConnectDuration() { this->connectDuration_ = nullptr;};
    inline int64_t getConnectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, 0L) };
    inline CreateDesktopGroupRequest& setConnectDuration(int64_t connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline CreateDesktopGroupRequest& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskPerLevel Field Functions 
    bool hasDataDiskPerLevel() const { return this->dataDiskPerLevel_ != nullptr;};
    void deleteDataDiskPerLevel() { this->dataDiskPerLevel_ = nullptr;};
    inline string getDataDiskPerLevel() const { DARABONBA_PTR_GET_DEFAULT(dataDiskPerLevel_, "") };
    inline CreateDesktopGroupRequest& setDataDiskPerLevel(string dataDiskPerLevel) { DARABONBA_PTR_SET_VALUE(dataDiskPerLevel_, dataDiskPerLevel) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline CreateDesktopGroupRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // defaultInitDesktopCount Field Functions 
    bool hasDefaultInitDesktopCount() const { return this->defaultInitDesktopCount_ != nullptr;};
    void deleteDefaultInitDesktopCount() { this->defaultInitDesktopCount_ = nullptr;};
    inline int32_t getDefaultInitDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(defaultInitDesktopCount_, 0) };
    inline CreateDesktopGroupRequest& setDefaultInitDesktopCount(int32_t defaultInitDesktopCount) { DARABONBA_PTR_SET_VALUE(defaultInitDesktopCount_, defaultInitDesktopCount) };


    // defaultLanguage Field Functions 
    bool hasDefaultLanguage() const { return this->defaultLanguage_ != nullptr;};
    void deleteDefaultLanguage() { this->defaultLanguage_ = nullptr;};
    inline string getDefaultLanguage() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguage_, "") };
    inline CreateDesktopGroupRequest& setDefaultLanguage(string defaultLanguage) { DARABONBA_PTR_SET_VALUE(defaultLanguage_, defaultLanguage) };


    // deleteDuration Field Functions 
    bool hasDeleteDuration() const { return this->deleteDuration_ != nullptr;};
    void deleteDeleteDuration() { this->deleteDuration_ = nullptr;};
    inline int64_t getDeleteDuration() const { DARABONBA_PTR_GET_DEFAULT(deleteDuration_, 0L) };
    inline CreateDesktopGroupRequest& setDeleteDuration(int64_t deleteDuration) { DARABONBA_PTR_SET_VALUE(deleteDuration_, deleteDuration) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline CreateDesktopGroupRequest& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline CreateDesktopGroupRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateDesktopGroupRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline CreateDesktopGroupRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline CreateDesktopGroupRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // exclusiveType Field Functions 
    bool hasExclusiveType() const { return this->exclusiveType_ != nullptr;};
    void deleteExclusiveType() { this->exclusiveType_ = nullptr;};
    inline string getExclusiveType() const { DARABONBA_PTR_GET_DEFAULT(exclusiveType_, "") };
    inline CreateDesktopGroupRequest& setExclusiveType(string exclusiveType) { DARABONBA_PTR_SET_VALUE(exclusiveType_, exclusiveType) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateDesktopGroupRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // groupAmount Field Functions 
    bool hasGroupAmount() const { return this->groupAmount_ != nullptr;};
    void deleteGroupAmount() { this->groupAmount_ = nullptr;};
    inline int32_t getGroupAmount() const { DARABONBA_PTR_GET_DEFAULT(groupAmount_, 0) };
    inline CreateDesktopGroupRequest& setGroupAmount(int32_t groupAmount) { DARABONBA_PTR_SET_VALUE(groupAmount_, groupAmount) };


    // groupVersion Field Functions 
    bool hasGroupVersion() const { return this->groupVersion_ != nullptr;};
    void deleteGroupVersion() { this->groupVersion_ = nullptr;};
    inline int32_t getGroupVersion() const { DARABONBA_PTR_GET_DEFAULT(groupVersion_, 0) };
    inline CreateDesktopGroupRequest& setGroupVersion(int32_t groupVersion) { DARABONBA_PTR_SET_VALUE(groupVersion_, groupVersion) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateDesktopGroupRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // idleDisconnectDuration Field Functions 
    bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
    void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
    inline int64_t getIdleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, 0L) };
    inline CreateDesktopGroupRequest& setIdleDisconnectDuration(int64_t idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateDesktopGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keepDuration Field Functions 
    bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
    void deleteKeepDuration() { this->keepDuration_ = nullptr;};
    inline int64_t getKeepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
    inline CreateDesktopGroupRequest& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


    // loadPolicy Field Functions 
    bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
    void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
    inline int64_t getLoadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0L) };
    inline CreateDesktopGroupRequest& setLoadPolicy(int64_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


    // maxDesktopsCount Field Functions 
    bool hasMaxDesktopsCount() const { return this->maxDesktopsCount_ != nullptr;};
    void deleteMaxDesktopsCount() { this->maxDesktopsCount_ = nullptr;};
    inline int32_t getMaxDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(maxDesktopsCount_, 0) };
    inline CreateDesktopGroupRequest& setMaxDesktopsCount(int32_t maxDesktopsCount) { DARABONBA_PTR_SET_VALUE(maxDesktopsCount_, maxDesktopsCount) };


    // minDesktopsCount Field Functions 
    bool hasMinDesktopsCount() const { return this->minDesktopsCount_ != nullptr;};
    void deleteMinDesktopsCount() { this->minDesktopsCount_ = nullptr;};
    inline int32_t getMinDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(minDesktopsCount_, 0) };
    inline CreateDesktopGroupRequest& setMinDesktopsCount(int32_t minDesktopsCount) { DARABONBA_PTR_SET_VALUE(minDesktopsCount_, minDesktopsCount) };


    // multiResource Field Functions 
    bool hasMultiResource() const { return this->multiResource_ != nullptr;};
    void deleteMultiResource() { this->multiResource_ = nullptr;};
    inline bool getMultiResource() const { DARABONBA_PTR_GET_DEFAULT(multiResource_, false) };
    inline CreateDesktopGroupRequest& setMultiResource(bool multiResource) { DARABONBA_PTR_SET_VALUE(multiResource_, multiResource) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateDesktopGroupRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline int32_t getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0) };
    inline CreateDesktopGroupRequest& setOwnType(int32_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateDesktopGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateDesktopGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateDesktopGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // profileFollowSwitch Field Functions 
    bool hasProfileFollowSwitch() const { return this->profileFollowSwitch_ != nullptr;};
    void deleteProfileFollowSwitch() { this->profileFollowSwitch_ = nullptr;};
    inline bool getProfileFollowSwitch() const { DARABONBA_PTR_GET_DEFAULT(profileFollowSwitch_, false) };
    inline CreateDesktopGroupRequest& setProfileFollowSwitch(bool profileFollowSwitch) { DARABONBA_PTR_SET_VALUE(profileFollowSwitch_, profileFollowSwitch) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateDesktopGroupRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // ratioThreshold Field Functions 
    bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
    void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
    inline float getRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
    inline CreateDesktopGroupRequest& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDesktopGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline CreateDesktopGroupRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline int64_t getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, 0L) };
    inline CreateDesktopGroupRequest& setResetType(int64_t resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // scaleStrategyId Field Functions 
    bool hasScaleStrategyId() const { return this->scaleStrategyId_ != nullptr;};
    void deleteScaleStrategyId() { this->scaleStrategyId_ = nullptr;};
    inline string getScaleStrategyId() const { DARABONBA_PTR_GET_DEFAULT(scaleStrategyId_, "") };
    inline CreateDesktopGroupRequest& setScaleStrategyId(string scaleStrategyId) { DARABONBA_PTR_SET_VALUE(scaleStrategyId_, scaleStrategyId) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline CreateDesktopGroupRequest& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // simpleUserGroupId Field Functions 
    bool hasSimpleUserGroupId() const { return this->simpleUserGroupId_ != nullptr;};
    void deleteSimpleUserGroupId() { this->simpleUserGroupId_ = nullptr;};
    inline string getSimpleUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(simpleUserGroupId_, "") };
    inline CreateDesktopGroupRequest& setSimpleUserGroupId(string simpleUserGroupId) { DARABONBA_PTR_SET_VALUE(simpleUserGroupId_, simpleUserGroupId) };


    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline string getSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
    inline CreateDesktopGroupRequest& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


    // stopDuration Field Functions 
    bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
    void deleteStopDuration() { this->stopDuration_ = nullptr;};
    inline int64_t getStopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0L) };
    inline CreateDesktopGroupRequest& setStopDuration(int64_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline CreateDesktopGroupRequest& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskPerLevel Field Functions 
    bool hasSystemDiskPerLevel() const { return this->systemDiskPerLevel_ != nullptr;};
    void deleteSystemDiskPerLevel() { this->systemDiskPerLevel_ = nullptr;};
    inline string getSystemDiskPerLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerLevel_, "") };
    inline CreateDesktopGroupRequest& setSystemDiskPerLevel(string systemDiskPerLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerLevel_, systemDiskPerLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateDesktopGroupRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDesktopGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDesktopGroupRequest::Tag>) };
    inline vector<CreateDesktopGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDesktopGroupRequest::Tag>) };
    inline CreateDesktopGroupRequest& setTag(const vector<CreateDesktopGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDesktopGroupRequest& setTag(vector<CreateDesktopGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // timerGroupId Field Functions 
    bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
    void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
    inline string getTimerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
    inline CreateDesktopGroupRequest& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline CreateDesktopGroupRequest& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


    // userOuPath Field Functions 
    bool hasUserOuPath() const { return this->userOuPath_ != nullptr;};
    void deleteUserOuPath() { this->userOuPath_ = nullptr;};
    inline string getUserOuPath() const { DARABONBA_PTR_GET_DEFAULT(userOuPath_, "") };
    inline CreateDesktopGroupRequest& setUserOuPath(string userOuPath) { DARABONBA_PTR_SET_VALUE(userOuPath_, userOuPath) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline CreateDesktopGroupRequest& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline CreateDesktopGroupRequest& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDesktopGroupRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The types of the users.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<bool> allClassifyUsers_ {};
    // Specifies whether to enable batch-based automatic creation of subscription cloud computers for the shared group. This parameter is required if you set `ChargeType` to `PrePaid`.
    // 
    // Valid values:
    // 
    // *   0: enables batch-based automatic creation of subscription cloud computers.
    // *   1: disables batch-based automatic creation of subscription cloud computers.
    shared_ptr<int32_t> allowAutoSetup_ {};
    // The maximum number of pay-as-you-go cloud computers that can be reserved in the shared group. This parameter is required if you set `ChargeType` to `PostPaid`. Valid values:
    // 
    // *   0: does not reserve any cloud computers.
    // *   N: reserves N cloud computers (1≤ N ≤ 100).
    // 
    // >  Setting this parameter to 0 means no cloud computers will be reserved in the shared group. In this case, the system must create, start, and assign cloud computers to end users upon request, which can be time-consuming. To improve user experience, we recommend that you reserve a specific number of cloud computers.
    shared_ptr<int32_t> allowBufferCount_ {};
    // Specifies whether to automatically complete the payment for subscription orders.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for the shared subscription group.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> autoRenew_ {};
    // The number of concurrent sessions of the multi-session shared group.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<int64_t> bindAmount_ {};
    // The ID of the cloud computer template.
    shared_ptr<string> bundleId_ {};
    // *   For shared subscription groups, this parameter defines the initial number of cloud computers to be created. Valid values: 0 to 200.
    // *   For shared pay-as-you-go groups, this parameter defines the minimum initial number of cloud computers to be created. Valid values: 0 to `MaxDesktopsCount`. Default value: 1.
    shared_ptr<int32_t> buyDesktopsCount_ {};
    // The billing method of the shared group.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The type of the cloud computers in the shared group.
    // 
    // >  This parameter is not publicly available.
    // 
    // Valid values:
    // 
    // *   teacher: cloud computers designed for teachers.
    // *   student: cloud computers designed for students.
    shared_ptr<string> classify_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The remarks of the shared group.
    shared_ptr<string> comments_ {};
    // The maximum duration for which each session remains connected. The session is automatically disconnected once the specified maximum time limit is reached. Unit: milliseconds. Valid values: 900000 to 345600000. That is, the session can be connected for 15 to 5,760 minutes (4 days).
    shared_ptr<int64_t> connectDuration_ {};
    // The category of the data disk.
    // 
    // Valid values:
    // 
    // *   cloud_auto: the standard SSD.
    // *   cloud_essd: the ESSD.
    shared_ptr<string> dataDiskCategory_ {};
    // The PL of the data disk of the ESSD category. Default value: PL0.
    // 
    // Valid values:
    // 
    // *   PL1
    // *   PL0
    shared_ptr<string> dataDiskPerLevel_ {};
    // The size of the data disk. Unit: GB. Valid values: 0 to 16380. The value must be an integral multiple of 20.
    // 
    // *   A value of 0 means no data disk is attached.
    // *   If the selected plan includes a standard SSD, the data disk size must be at least 20 GB.
    // 
    // Default value: 0.
    shared_ptr<int32_t> dataDiskSize_ {};
    // The default number of cloud computers that you want to create at the same time in the shared group. Default value: 1.
    shared_ptr<int32_t> defaultInitDesktopCount_ {};
    // The language of the OS.
    // 
    // Valid values:
    // 
    // *   en-US: English.
    // *   zh-HK: Traditional Chinese.
    // *   zh-CN: Simplified Chinese
    // *   ja-JP: Japanese.
    shared_ptr<string> defaultLanguage_ {};
    shared_ptr<int64_t> deleteDuration_ {};
    // The name of the shared group. The name can be up to 30 characters in length and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-). It must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> desktopGroupName_ {};
    // The specifications of the cloud computer. You can call the [DescribeDesktopTypes](~~DescribeDesktopTypes~~) operation to query all the supported specifications.
    shared_ptr<string> desktopType_ {};
    // The ID of the directory.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<string> directoryId_ {};
    // The IDs of the end users.
    shared_ptr<vector<string>> endUserIds_ {};
    // Specifies whether the shared group is exclusive. You must set this parameter to `Exclusive` when `SessionType` is set to `MultipleSession`.
    shared_ptr<string> exclusiveType_ {};
    // The ID of the File Storage NAS (NAS) file system for the user data roaming feature.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<string> fileSystemId_ {};
    // The number of shared groups for the single-cloud computer type. You must specify this parameter if you set `MultiResource` to `false`. Valid values: 1 to 5. Default value: 1.
    shared_ptr<int32_t> groupAmount_ {};
    // The version of the shared group.
    shared_ptr<int32_t> groupVersion_ {};
    // The hostname series of the cloud computer. This parameter is supported exclusively when the office network operates on Active Directory (AD) and the cloud computer runs on a Windows operating system.
    // 
    // Naming conventions:
    // 
    // *   A hostname must be 2 to 15 characters in length
    // *   and can contain only letters, digits, and hyphens (-). It cannot start or end with a hyphen (-), contain consecutive hyphens (-), or contain only digits.
    // 
    // If you want to create multiple cloud computers, specify their hostnames in the `name_prefix[begin_number,bits]name_suffix` format. For example, if you set Hostname to ecd-[1,4]-test, the hostnames of the cloud computers will be assigned sequentially as ecd-0001-test, ecd-0002-test, and so on.
    // 
    // *   `name_prefix`: the prefix of the hostname.
    // *   `[begin_number,bits]`: the sequential number in the hostname. The `begin_number` value is the starting number. Valid values of begin_number: 0 to 999999. Default value: 0. The `bits` value is the number of digits. Valid values: 1 to 6. Default value: 6.
    // *   `name_suffix`: the suffix of the hostname.
    shared_ptr<string> hostname_ {};
    // The duration after which a session is terminated if no keyboard or mouse activity is detected. When an end user connects to a cloud computer, a session is initiated. If no input from the keyboard or mouse is detected within this specified timeframe, the session is automatically closed. Unit: milliseconds. Valid values: 360000 to 3600000 (6 minutes to 60 minutes)
    // 
    // The system prompts end users to save their data 30 seconds before a session is disconnected. To avoid data loss, end users must save their session data upon receiving the prompt.
    // 
    // >  This parameter is suitable only for cloud computers whose image version is v1.0.2 or later.
    shared_ptr<int64_t> idleDisconnectDuration_ {};
    // The ID of the image.
    shared_ptr<string> imageId_ {};
    // The duration for which each session remains active after disconnection. Valid values: 180000 (3 minutes) to 345600000 (4 days). Unit: milliseconds. If you set this parameter to 0, the session is permanently retained after disconnection.
    // 
    // When a session is disconnected, take note of the following items: 1. If the end user does not resume the session within the specified duration, the session will close, and all unsaved data will be cleared. 2. If the end user resumes the session within the specified duration, the session data will remain accessible for continued use.
    shared_ptr<int64_t> keepDuration_ {};
    // The load balancing policy of the multi-session shared group.
    // 
    // >  This parameter is not publicly available.
    // 
    // Valid values:
    // 
    // *   0: depth-first
    // *   1: breadth first
    shared_ptr<int64_t> loadPolicy_ {};
    // The maximum number of pay-as-you-go cloud computers that can be automatically provisioned at the same time in the shared group. Valid values: 0 to 500.
    shared_ptr<int32_t> maxDesktopsCount_ {};
    // The minimum number of subscription cloud computers that can be automatically provisioned at the same time in the shared group. This parameter is required if you set `ChargeType` to `PrePaid`. Default value: 1. Valid values: 0 to `MaxDesktopsCount`.
    shared_ptr<int32_t> minDesktopsCount_ {};
    // Specifies whether the shared group is a multi-cloud computer type.
    // 
    // Valid values:
    // 
    // *   true: a multi-cloud computer type.
    // *   false: a single-cloud computer type.
    shared_ptr<bool> multiResource_ {};
    // The ID of the office network.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The session type of the shared group.
    // 
    // >  This parameter is not publicly available.
    // 
    // Valid values:
    // 
    // *   0: single-session.
    // *   1: multi-session.
    shared_ptr<int32_t> ownType_ {};
    // The subscription duration of the shared group. This parameter is required if you set `ChargeType` to `PrePaid`. You must specify the subscription duration unit by using `PeriodUnit`.
    // 
    // *   If you set `PeriodUnit` to `Month`, valid values of this parameter:
    // 
    //     *   1
    //     *   2
    //     *   3
    //     *   6
    // 
    // *   If you set `PeriodUnit` to `Year`, valid values of this parameter:
    // 
    //     *   1
    //     *   2
    //     *   3
    //     *   4
    //     *   5
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration.
    shared_ptr<string> periodUnit_ {};
    // The ID of the policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyGroupId_ {};
    // Specifies whether to enable user data roaming.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<bool> profileFollowSwitch_ {};
    // The ID of the coupon.
    shared_ptr<string> promotionId_ {};
    // The threshold for the ratio of connected sessions. This parameter defines the condition that activates automatic scaling of cloud computers in a multi-session shared group. The ratio of connected sessions is calculated by using the following formula:
    // 
    // `Ratio of connected sessions = Number of connected sessions/(Total number of cloud computers × Maximum number of sessions allowed for each cloud computer) × 100%`.
    // 
    // If the connected session ratio exceeds the specified threshold, new cloud computers are provisioned. If the ratio falls below the threshold, idle cloud computers are deleted.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<float> ratioThreshold_ {};
    // The ID of the region. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resellerOwnerUid_ {};
    // The reset option of the shared group.
    // 
    // Valid values:
    // 
    // *   0: Reset is not required.
    // *   1: Only the system disk is reset.
    // *   2: Only the data disk is reset.
    // *   3: Both the system disk and the data disk are reset.
    shared_ptr<int64_t> resetType_ {};
    // The ID of the scaling policy.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<string> scaleStrategyId_ {};
    // The type of the session.
    // 
    // Valid values:
    // 
    // *   SingleSession
    // *   MultipleSession
    shared_ptr<string> sessionType_ {};
    shared_ptr<string> simpleUserGroupId_ {};
    // The ID of the automatic snapshot policy.
    shared_ptr<string> snapshotPolicyId_ {};
    // The maximum period of inactivity allowed before a cloud computer is automatically stopped. If the idle duration reaches the specified limit, the system stops the cloud computer. When an end user reconnects to the stopped cloud computer, it automatically restarts. Unit: milliseconds.
    shared_ptr<int64_t> stopDuration_ {};
    // The category of the system disk.
    // 
    // Valid values:
    // 
    // *   cloud_auto: the standard SSD.
    // *   cloud_essd: the Enterprise SSD (ESSD).
    shared_ptr<string> systemDiskCategory_ {};
    // The performance level (PL) of the system disk of the ESSD category. Default value: PL0.
    // 
    // Valid values:
    // 
    // *   PL1
    // *   PL0
    shared_ptr<string> systemDiskPerLevel_ {};
    // The size of the system disk. Unit: GiB.
    // 
    // >  The system disk must be at least as large as the image.
    shared_ptr<int32_t> systemDiskSize_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<vector<CreateDesktopGroupRequest::Tag>> tag_ {};
    // The ID of the timer group.
    shared_ptr<string> timerGroupId_ {};
    shared_ptr<string> userGroupName_ {};
    shared_ptr<string> userOuPath_ {};
    // Specifies whether to enable disk encryption.
    shared_ptr<bool> volumeEncryptionEnabled_ {};
    // The ID of the Key Management Service (KMS) key that you want to use when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to obtain a list of KMS keys.
    shared_ptr<string> volumeEncryptionKey_ {};
    // The ID of the virtual private cloud (VPC).
    // 
    // >  This parameter is not publicly available.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
