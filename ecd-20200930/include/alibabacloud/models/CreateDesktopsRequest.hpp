// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPSREQUEST_HPP_
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
  class CreateDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(BundleModels, bundleModels_);
      DARABONBA_PTR_TO_JSON(ChannelCookie, channelCookie_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DesktopAttachment, desktopAttachment_);
      DARABONBA_PTR_TO_JSON(DesktopMemberIp, desktopMemberIp_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopNameSuffix, desktopNameSuffix_);
      DARABONBA_PTR_TO_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(MonthDesktopSetting, monthDesktopSetting_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(PurchaseOptions, purchaseOptions_);
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_TO_JSON(UserAssignMode, userAssignMode_);
      DARABONBA_PTR_TO_JSON(UserCommands, userCommands_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(BundleModels, bundleModels_);
      DARABONBA_PTR_FROM_JSON(ChannelCookie, channelCookie_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DesktopAttachment, desktopAttachment_);
      DARABONBA_PTR_FROM_JSON(DesktopMemberIp, desktopMemberIp_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopNameSuffix, desktopNameSuffix_);
      DARABONBA_PTR_FROM_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(MonthDesktopSetting, monthDesktopSetting_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(PurchaseOptions, purchaseOptions_);
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_FROM_JSON(UserAssignMode, userAssignMode_);
      DARABONBA_PTR_FROM_JSON(UserCommands, userCommands_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateDesktopsRequest() = default ;
    CreateDesktopsRequest(const CreateDesktopsRequest &) = default ;
    CreateDesktopsRequest(CreateDesktopsRequest &&) = default ;
    CreateDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopsRequest() = default ;
    CreateDesktopsRequest& operator=(const CreateDesktopsRequest &) = default ;
    CreateDesktopsRequest& operator=(CreateDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserCommands : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserCommands& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      };
      friend void from_json(const Darabonba::Json& j, UserCommands& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      };
      UserCommands() = default ;
      UserCommands(const UserCommands &) = default ;
      UserCommands(UserCommands &&) = default ;
      UserCommands(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserCommands() = default ;
      UserCommands& operator=(const UserCommands &) = default ;
      UserCommands& operator=(UserCommands &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentEncoding_ == nullptr && this->contentType_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline UserCommands& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentEncoding Field Functions 
      bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
      void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
      inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
      inline UserCommands& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline UserCommands& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    protected:
      // The content of the script.
      shared_ptr<string> content_ {};
      // The encoding format of the script content specified in the `Content` parameter.
      shared_ptr<string> contentEncoding_ {};
      // The script type.
      shared_ptr<string> contentType_ {};
    };

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
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    class PurchaseOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PurchaseOptions& obj) { 
        DARABONBA_PTR_TO_JSON(MonthlyCredits, monthlyCredits_);
      };
      friend void from_json(const Darabonba::Json& j, PurchaseOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(MonthlyCredits, monthlyCredits_);
      };
      PurchaseOptions() = default ;
      PurchaseOptions(const PurchaseOptions &) = default ;
      PurchaseOptions(PurchaseOptions &&) = default ;
      PurchaseOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PurchaseOptions() = default ;
      PurchaseOptions& operator=(const PurchaseOptions &) = default ;
      PurchaseOptions& operator=(PurchaseOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->monthlyCredits_ == nullptr; };
      // monthlyCredits Field Functions 
      bool hasMonthlyCredits() const { return this->monthlyCredits_ != nullptr;};
      void deleteMonthlyCredits() { this->monthlyCredits_ = nullptr;};
      inline int32_t getMonthlyCredits() const { DARABONBA_PTR_GET_DEFAULT(monthlyCredits_, 0) };
      inline PurchaseOptions& setMonthlyCredits(int32_t monthlyCredits) { DARABONBA_PTR_SET_VALUE(monthlyCredits_, monthlyCredits) };


    protected:
      // The monthly credit package. This parameter is used to select a credit package when you purchase agent resources. Valid values: 200, 1600, and 4000.
      shared_ptr<int32_t> monthlyCredits_ {};
    };

    class MonthDesktopSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonthDesktopSetting& obj) { 
        DARABONBA_PTR_TO_JSON(BuyerId, buyerId_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(UseDuration, useDuration_);
      };
      friend void from_json(const Darabonba::Json& j, MonthDesktopSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(BuyerId, buyerId_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(UseDuration, useDuration_);
      };
      MonthDesktopSetting() = default ;
      MonthDesktopSetting(const MonthDesktopSetting &) = default ;
      MonthDesktopSetting(MonthDesktopSetting &&) = default ;
      MonthDesktopSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonthDesktopSetting() = default ;
      MonthDesktopSetting& operator=(const MonthDesktopSetting &) = default ;
      MonthDesktopSetting& operator=(MonthDesktopSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buyerId_ == nullptr
        && this->desktopId_ == nullptr && this->useDuration_ == nullptr; };
      // buyerId Field Functions 
      bool hasBuyerId() const { return this->buyerId_ != nullptr;};
      void deleteBuyerId() { this->buyerId_ = nullptr;};
      inline int64_t getBuyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, 0L) };
      inline MonthDesktopSetting& setBuyerId(int64_t buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline MonthDesktopSetting& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // useDuration Field Functions 
      bool hasUseDuration() const { return this->useDuration_ != nullptr;};
      void deleteUseDuration() { this->useDuration_ = nullptr;};
      inline int32_t getUseDuration() const { DARABONBA_PTR_GET_DEFAULT(useDuration_, 0) };
      inline MonthDesktopSetting& setUseDuration(int32_t useDuration) { DARABONBA_PTR_SET_VALUE(useDuration_, useDuration) };


    protected:
      // > This parameter is for internal use only.
      shared_ptr<int64_t> buyerId_ {};
      // > This parameter is for internal use only.
      shared_ptr<string> desktopId_ {};
      // The duration in hours for the monthly usage package. Valid values: 120, 250, and 360.
      shared_ptr<int32_t> useDuration_ {};
    };

    class DesktopTimers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesktopTimers& obj) { 
        DARABONBA_PTR_TO_JSON(AllowClientSetting, allowClientSetting_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(Enforce, enforce_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(ResetType, resetType_);
        DARABONBA_PTR_TO_JSON(TimerType, timerType_);
      };
      friend void from_json(const Darabonba::Json& j, DesktopTimers& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowClientSetting, allowClientSetting_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
        DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
      };
      DesktopTimers() = default ;
      DesktopTimers(const DesktopTimers &) = default ;
      DesktopTimers(DesktopTimers &&) = default ;
      DesktopTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesktopTimers() = default ;
      DesktopTimers& operator=(const DesktopTimers &) = default ;
      DesktopTimers& operator=(DesktopTimers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowClientSetting_ == nullptr
        && this->cronExpression_ == nullptr && this->enforce_ == nullptr && this->interval_ == nullptr && this->operationType_ == nullptr && this->resetType_ == nullptr
        && this->timerType_ == nullptr; };
      // allowClientSetting Field Functions 
      bool hasAllowClientSetting() const { return this->allowClientSetting_ != nullptr;};
      void deleteAllowClientSetting() { this->allowClientSetting_ = nullptr;};
      inline bool getAllowClientSetting() const { DARABONBA_PTR_GET_DEFAULT(allowClientSetting_, false) };
      inline DesktopTimers& setAllowClientSetting(bool allowClientSetting) { DARABONBA_PTR_SET_VALUE(allowClientSetting_, allowClientSetting) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline DesktopTimers& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // enforce Field Functions 
      bool hasEnforce() const { return this->enforce_ != nullptr;};
      void deleteEnforce() { this->enforce_ = nullptr;};
      inline bool getEnforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
      inline DesktopTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline DesktopTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline DesktopTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // resetType Field Functions 
      bool hasResetType() const { return this->resetType_ != nullptr;};
      void deleteResetType() { this->resetType_ = nullptr;};
      inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
      inline DesktopTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


      // timerType Field Functions 
      bool hasTimerType() const { return this->timerType_ != nullptr;};
      void deleteTimerType() { this->timerType_ = nullptr;};
      inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
      inline DesktopTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


    protected:
      // Specifies whether to allow end users to configure the scheduled task.
      shared_ptr<bool> allowClientSetting_ {};
      // The cron expression for the scheduled task.
      // 
      // >Notice: 
      // 
      // The cron expression is evaluated in UTC. For example, to specify 00:00 (UTC+8) every day, set the value to `0 0 16 ? * 1,2,3,4,5,6,7`.
      shared_ptr<string> cronExpression_ {};
      // Specifies whether to forcibly execute the scheduled task.
      shared_ptr<bool> enforce_ {};
      // The interval in minutes.
      shared_ptr<int32_t> interval_ {};
      // The operation to perform for the scheduled task. This parameter is valid only for scheduled tasks that are triggered by user disconnection.
      shared_ptr<string> operationType_ {};
      // The disk reset type.
      shared_ptr<string> resetType_ {};
      // The type of the scheduled task.
      shared_ptr<string> timerType_ {};
    };

    class DesktopAttachment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesktopAttachment& obj) { 
        DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_TO_JSON(DataDiskPerLevel, dataDiskPerLevel_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(DefaultLanguage, defaultLanguage_);
        DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskPerLevel, systemDiskPerLevel_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, DesktopAttachment& obj) { 
        DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_FROM_JSON(DataDiskPerLevel, dataDiskPerLevel_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(DefaultLanguage, defaultLanguage_);
        DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskPerLevel, systemDiskPerLevel_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      };
      DesktopAttachment() = default ;
      DesktopAttachment(const DesktopAttachment &) = default ;
      DesktopAttachment(DesktopAttachment &&) = default ;
      DesktopAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesktopAttachment() = default ;
      DesktopAttachment& operator=(const DesktopAttachment &) = default ;
      DesktopAttachment& operator=(DesktopAttachment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataDiskCategory_ == nullptr
        && this->dataDiskPerLevel_ == nullptr && this->dataDiskSize_ == nullptr && this->defaultLanguage_ == nullptr && this->desktopType_ == nullptr && this->imageId_ == nullptr
        && this->systemDiskCategory_ == nullptr && this->systemDiskPerLevel_ == nullptr && this->systemDiskSize_ == nullptr; };
      // dataDiskCategory Field Functions 
      bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
      void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
      inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
      inline DesktopAttachment& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


      // dataDiskPerLevel Field Functions 
      bool hasDataDiskPerLevel() const { return this->dataDiskPerLevel_ != nullptr;};
      void deleteDataDiskPerLevel() { this->dataDiskPerLevel_ = nullptr;};
      inline string getDataDiskPerLevel() const { DARABONBA_PTR_GET_DEFAULT(dataDiskPerLevel_, "") };
      inline DesktopAttachment& setDataDiskPerLevel(string dataDiskPerLevel) { DARABONBA_PTR_SET_VALUE(dataDiskPerLevel_, dataDiskPerLevel) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
      inline DesktopAttachment& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // defaultLanguage Field Functions 
      bool hasDefaultLanguage() const { return this->defaultLanguage_ != nullptr;};
      void deleteDefaultLanguage() { this->defaultLanguage_ = nullptr;};
      inline string getDefaultLanguage() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguage_, "") };
      inline DesktopAttachment& setDefaultLanguage(string defaultLanguage) { DARABONBA_PTR_SET_VALUE(defaultLanguage_, defaultLanguage) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline DesktopAttachment& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline DesktopAttachment& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline DesktopAttachment& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskPerLevel Field Functions 
      bool hasSystemDiskPerLevel() const { return this->systemDiskPerLevel_ != nullptr;};
      void deleteSystemDiskPerLevel() { this->systemDiskPerLevel_ = nullptr;};
      inline string getSystemDiskPerLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerLevel_, "") };
      inline DesktopAttachment& setSystemDiskPerLevel(string systemDiskPerLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerLevel_, systemDiskPerLevel) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline DesktopAttachment& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      // The type of the data disk. The system disk and data disk must be of the same type. Valid values:
      // 
      // - cloud_auto: AutoPL SSD
      // 
      // - cloud_essd: enhanced SSD (ESSD)
      shared_ptr<string> dataDiskCategory_ {};
      // The PL of the ESSD. This parameter is required only when `DataDiskCategory` is set to `cloud_essd`. Valid values:
      // 
      // - PL0
      // 
      // - PL1
      shared_ptr<string> dataDiskPerLevel_ {};
      // The capacity of the data disk, in GiB. Valid values: 40 to 2,040. The value must be a multiple of 10.
      shared_ptr<int32_t> dataDiskSize_ {};
      // The display language of the cloud desktop\\"s operating system. Valid values:
      // 
      // - zh-CN: Simplified Chinese
      // 
      // - zh-HK: Traditional Chinese (Hong Kong)
      // 
      // - en-US: American English
      // 
      // - ja-JP: Japanese
      shared_ptr<string> defaultLanguage_ {};
      // The desktop type. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the supported desktop types.
      shared_ptr<string> desktopType_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The type of the system disk. The system disk and data disk must be of the same type. Valid values:
      // 
      // - cloud_auto: AutoPL SSD
      // 
      // - cloud_essd: enhanced SSD (ESSD)
      shared_ptr<string> systemDiskCategory_ {};
      // The performance level (PL) of the ESSD. This parameter is required only when `SystemDiskCategory` is set to `cloud_essd`. Valid values:
      // 
      // - PL0
      // 
      // - PL1
      shared_ptr<string> systemDiskPerLevel_ {};
      // The capacity of the system disk, in GiB. Valid values: 60 to 500. The value must be a multiple of 10.
      shared_ptr<int32_t> systemDiskSize_ {};
    };

    class BundleModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BundleModels& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      friend void from_json(const Darabonba::Json& j, BundleModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      BundleModels() = default ;
      BundleModels(const BundleModels &) = default ;
      BundleModels(BundleModels &&) = default ;
      BundleModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BundleModels() = default ;
      BundleModels& operator=(const BundleModels &) = default ;
      BundleModels& operator=(BundleModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->amount_ == nullptr
        && this->bundleId_ == nullptr && this->desktopName_ == nullptr && this->endUserIds_ == nullptr && this->hostname_ == nullptr && this->volumeEncryptionEnabled_ == nullptr
        && this->volumeEncryptionKey_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
      inline BundleModels& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // bundleId Field Functions 
      bool hasBundleId() const { return this->bundleId_ != nullptr;};
      void deleteBundleId() { this->bundleId_ = nullptr;};
      inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
      inline BundleModels& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline BundleModels& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // endUserIds Field Functions 
      bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
      void deleteEndUserIds() { this->endUserIds_ = nullptr;};
      inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
      inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
      inline BundleModels& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
      inline BundleModels& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline BundleModels& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // volumeEncryptionEnabled Field Functions 
      bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
      void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
      inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
      inline BundleModels& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


      // volumeEncryptionKey Field Functions 
      bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
      void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
      inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
      inline BundleModels& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    protected:
      // The number of cloud desktops to create. Valid values: 1 to 300. Default value: 0.
      shared_ptr<int32_t> amount_ {};
      // The bundle ID.
      shared_ptr<string> bundleId_ {};
      // The name of the cloud desktop. The name must meet the following requirements:
      // 
      // - The name must be 1 to 64 characters in length.
      // 
      // - The name must start with a letter or a Chinese character. It cannot start with `http://` or `https://`.
      // 
      // - The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
      shared_ptr<string> desktopName_ {};
      // The list of end user IDs to whom the cloud desktops are assigned.
      shared_ptr<vector<string>> endUserIds_ {};
      // The custom hostname of the cloud desktop. This parameter is supported only for Windows cloud desktops that are in an AD office network.
      // 
      // The hostname must meet the following requirements:
      // 
      // - The hostname must be 2 to 15 characters in length.
      // 
      // - The hostname can contain letters, digits, and hyphens (-). The hostname cannot start or end with a hyphen, contain consecutive hyphens, or consist of only digits.
      // 
      // If you create multiple cloud desktops, you can use the `name_prefix[begin_number,bits]name_suffix` format to specify sequential hostnames for the cloud desktops. For example, if you set the `Hostname` parameter to `ecd-[1,4]-test`, the hostname of the first cloud desktop is `ecd-0001-test`, the second is `ecd-0002-test`, and so on.
      // 
      // - `name_prefix`: the prefix of the hostname.
      // 
      // - `[begin_number,bits]`: The sequential part of the hostname.
      // 
      // - `name_suffix`: the suffix of the hostname.
      shared_ptr<string> hostname_ {};
      // Specifies whether to enable disk encryption.
      shared_ptr<bool> volumeEncryptionEnabled_ {};
      // The ID of the KMS key to use for disk encryption. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to obtain a list of key IDs.
      shared_ptr<string> volumeEncryptionKey_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->appRuleId_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bundleId_ == nullptr && this->bundleModels_ == nullptr
        && this->channelCookie_ == nullptr && this->chargeType_ == nullptr && this->desktopAttachment_ == nullptr && this->desktopMemberIp_ == nullptr && this->desktopName_ == nullptr
        && this->desktopNameSuffix_ == nullptr && this->desktopTimers_ == nullptr && this->directoryId_ == nullptr && this->endUserId_ == nullptr && this->extendInfo_ == nullptr
        && this->groupId_ == nullptr && this->hostname_ == nullptr && this->monthDesktopSetting_ == nullptr && this->officeSiteId_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->policyGroupId_ == nullptr && this->promotionId_ == nullptr && this->purchaseOptions_ == nullptr && this->qosRuleId_ == nullptr
        && this->regionId_ == nullptr && this->resellerOwnerUid_ == nullptr && this->resourceGroupId_ == nullptr && this->savingPlanId_ == nullptr && this->snapshotPolicyId_ == nullptr
        && this->subnetId_ == nullptr && this->tag_ == nullptr && this->timerGroupId_ == nullptr && this->userAssignMode_ == nullptr && this->userCommands_ == nullptr
        && this->userName_ == nullptr && this->volumeEncryptionEnabled_ == nullptr && this->volumeEncryptionKey_ == nullptr && this->vpcId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateDesktopsRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appRuleId Field Functions 
    bool hasAppRuleId() const { return this->appRuleId_ != nullptr;};
    void deleteAppRuleId() { this->appRuleId_ = nullptr;};
    inline string getAppRuleId() const { DARABONBA_PTR_GET_DEFAULT(appRuleId_, "") };
    inline CreateDesktopsRequest& setAppRuleId(string appRuleId) { DARABONBA_PTR_SET_VALUE(appRuleId_, appRuleId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateDesktopsRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDesktopsRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline CreateDesktopsRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // bundleModels Field Functions 
    bool hasBundleModels() const { return this->bundleModels_ != nullptr;};
    void deleteBundleModels() { this->bundleModels_ = nullptr;};
    inline const vector<CreateDesktopsRequest::BundleModels> & getBundleModels() const { DARABONBA_PTR_GET_CONST(bundleModels_, vector<CreateDesktopsRequest::BundleModels>) };
    inline vector<CreateDesktopsRequest::BundleModels> getBundleModels() { DARABONBA_PTR_GET(bundleModels_, vector<CreateDesktopsRequest::BundleModels>) };
    inline CreateDesktopsRequest& setBundleModels(const vector<CreateDesktopsRequest::BundleModels> & bundleModels) { DARABONBA_PTR_SET_VALUE(bundleModels_, bundleModels) };
    inline CreateDesktopsRequest& setBundleModels(vector<CreateDesktopsRequest::BundleModels> && bundleModels) { DARABONBA_PTR_SET_RVALUE(bundleModels_, bundleModels) };


    // channelCookie Field Functions 
    bool hasChannelCookie() const { return this->channelCookie_ != nullptr;};
    void deleteChannelCookie() { this->channelCookie_ = nullptr;};
    inline string getChannelCookie() const { DARABONBA_PTR_GET_DEFAULT(channelCookie_, "") };
    inline CreateDesktopsRequest& setChannelCookie(string channelCookie) { DARABONBA_PTR_SET_VALUE(channelCookie_, channelCookie) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateDesktopsRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // desktopAttachment Field Functions 
    bool hasDesktopAttachment() const { return this->desktopAttachment_ != nullptr;};
    void deleteDesktopAttachment() { this->desktopAttachment_ = nullptr;};
    inline const CreateDesktopsRequest::DesktopAttachment & getDesktopAttachment() const { DARABONBA_PTR_GET_CONST(desktopAttachment_, CreateDesktopsRequest::DesktopAttachment) };
    inline CreateDesktopsRequest::DesktopAttachment getDesktopAttachment() { DARABONBA_PTR_GET(desktopAttachment_, CreateDesktopsRequest::DesktopAttachment) };
    inline CreateDesktopsRequest& setDesktopAttachment(const CreateDesktopsRequest::DesktopAttachment & desktopAttachment) { DARABONBA_PTR_SET_VALUE(desktopAttachment_, desktopAttachment) };
    inline CreateDesktopsRequest& setDesktopAttachment(CreateDesktopsRequest::DesktopAttachment && desktopAttachment) { DARABONBA_PTR_SET_RVALUE(desktopAttachment_, desktopAttachment) };


    // desktopMemberIp Field Functions 
    bool hasDesktopMemberIp() const { return this->desktopMemberIp_ != nullptr;};
    void deleteDesktopMemberIp() { this->desktopMemberIp_ = nullptr;};
    inline string getDesktopMemberIp() const { DARABONBA_PTR_GET_DEFAULT(desktopMemberIp_, "") };
    inline CreateDesktopsRequest& setDesktopMemberIp(string desktopMemberIp) { DARABONBA_PTR_SET_VALUE(desktopMemberIp_, desktopMemberIp) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline CreateDesktopsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopNameSuffix Field Functions 
    bool hasDesktopNameSuffix() const { return this->desktopNameSuffix_ != nullptr;};
    void deleteDesktopNameSuffix() { this->desktopNameSuffix_ = nullptr;};
    inline bool getDesktopNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(desktopNameSuffix_, false) };
    inline CreateDesktopsRequest& setDesktopNameSuffix(bool desktopNameSuffix) { DARABONBA_PTR_SET_VALUE(desktopNameSuffix_, desktopNameSuffix) };


    // desktopTimers Field Functions 
    bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
    void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
    inline const vector<CreateDesktopsRequest::DesktopTimers> & getDesktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<CreateDesktopsRequest::DesktopTimers>) };
    inline vector<CreateDesktopsRequest::DesktopTimers> getDesktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<CreateDesktopsRequest::DesktopTimers>) };
    inline CreateDesktopsRequest& setDesktopTimers(const vector<CreateDesktopsRequest::DesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
    inline CreateDesktopsRequest& setDesktopTimers(vector<CreateDesktopsRequest::DesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateDesktopsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & getEndUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> getEndUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline CreateDesktopsRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline CreateDesktopsRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline CreateDesktopsRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateDesktopsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateDesktopsRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // monthDesktopSetting Field Functions 
    bool hasMonthDesktopSetting() const { return this->monthDesktopSetting_ != nullptr;};
    void deleteMonthDesktopSetting() { this->monthDesktopSetting_ = nullptr;};
    inline const CreateDesktopsRequest::MonthDesktopSetting & getMonthDesktopSetting() const { DARABONBA_PTR_GET_CONST(monthDesktopSetting_, CreateDesktopsRequest::MonthDesktopSetting) };
    inline CreateDesktopsRequest::MonthDesktopSetting getMonthDesktopSetting() { DARABONBA_PTR_GET(monthDesktopSetting_, CreateDesktopsRequest::MonthDesktopSetting) };
    inline CreateDesktopsRequest& setMonthDesktopSetting(const CreateDesktopsRequest::MonthDesktopSetting & monthDesktopSetting) { DARABONBA_PTR_SET_VALUE(monthDesktopSetting_, monthDesktopSetting) };
    inline CreateDesktopsRequest& setMonthDesktopSetting(CreateDesktopsRequest::MonthDesktopSetting && monthDesktopSetting) { DARABONBA_PTR_SET_RVALUE(monthDesktopSetting_, monthDesktopSetting) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateDesktopsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateDesktopsRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateDesktopsRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateDesktopsRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateDesktopsRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // purchaseOptions Field Functions 
    bool hasPurchaseOptions() const { return this->purchaseOptions_ != nullptr;};
    void deletePurchaseOptions() { this->purchaseOptions_ = nullptr;};
    inline const CreateDesktopsRequest::PurchaseOptions & getPurchaseOptions() const { DARABONBA_PTR_GET_CONST(purchaseOptions_, CreateDesktopsRequest::PurchaseOptions) };
    inline CreateDesktopsRequest::PurchaseOptions getPurchaseOptions() { DARABONBA_PTR_GET(purchaseOptions_, CreateDesktopsRequest::PurchaseOptions) };
    inline CreateDesktopsRequest& setPurchaseOptions(const CreateDesktopsRequest::PurchaseOptions & purchaseOptions) { DARABONBA_PTR_SET_VALUE(purchaseOptions_, purchaseOptions) };
    inline CreateDesktopsRequest& setPurchaseOptions(CreateDesktopsRequest::PurchaseOptions && purchaseOptions) { DARABONBA_PTR_SET_RVALUE(purchaseOptions_, purchaseOptions) };


    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline CreateDesktopsRequest& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline CreateDesktopsRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDesktopsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // savingPlanId Field Functions 
    bool hasSavingPlanId() const { return this->savingPlanId_ != nullptr;};
    void deleteSavingPlanId() { this->savingPlanId_ = nullptr;};
    inline string getSavingPlanId() const { DARABONBA_PTR_GET_DEFAULT(savingPlanId_, "") };
    inline CreateDesktopsRequest& setSavingPlanId(string savingPlanId) { DARABONBA_PTR_SET_VALUE(savingPlanId_, savingPlanId) };


    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline string getSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
    inline CreateDesktopsRequest& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline CreateDesktopsRequest& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDesktopsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDesktopsRequest::Tag>) };
    inline vector<CreateDesktopsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDesktopsRequest::Tag>) };
    inline CreateDesktopsRequest& setTag(const vector<CreateDesktopsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDesktopsRequest& setTag(vector<CreateDesktopsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // timerGroupId Field Functions 
    bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
    void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
    inline string getTimerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
    inline CreateDesktopsRequest& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


    // userAssignMode Field Functions 
    bool hasUserAssignMode() const { return this->userAssignMode_ != nullptr;};
    void deleteUserAssignMode() { this->userAssignMode_ = nullptr;};
    inline string getUserAssignMode() const { DARABONBA_PTR_GET_DEFAULT(userAssignMode_, "") };
    inline CreateDesktopsRequest& setUserAssignMode(string userAssignMode) { DARABONBA_PTR_SET_VALUE(userAssignMode_, userAssignMode) };


    // userCommands Field Functions 
    bool hasUserCommands() const { return this->userCommands_ != nullptr;};
    void deleteUserCommands() { this->userCommands_ = nullptr;};
    inline const vector<CreateDesktopsRequest::UserCommands> & getUserCommands() const { DARABONBA_PTR_GET_CONST(userCommands_, vector<CreateDesktopsRequest::UserCommands>) };
    inline vector<CreateDesktopsRequest::UserCommands> getUserCommands() { DARABONBA_PTR_GET(userCommands_, vector<CreateDesktopsRequest::UserCommands>) };
    inline CreateDesktopsRequest& setUserCommands(const vector<CreateDesktopsRequest::UserCommands> & userCommands) { DARABONBA_PTR_SET_VALUE(userCommands_, userCommands) };
    inline CreateDesktopsRequest& setUserCommands(vector<CreateDesktopsRequest::UserCommands> && userCommands) { DARABONBA_PTR_SET_RVALUE(userCommands_, userCommands) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateDesktopsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline CreateDesktopsRequest& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline CreateDesktopsRequest& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDesktopsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of cloud desktops to create. Valid values: 1 to 300. Default value: 1.
    shared_ptr<int32_t> amount_ {};
    // The ID of the application control policy.
    shared_ptr<string> appRuleId_ {};
    // Specifies whether to enable automatic payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for the cloud desktops. This parameter is valid only when `ChargeType` is set to `PrePaid`.
    shared_ptr<bool> autoRenew_ {};
    // The bundle ID. If you do not specify this parameter, you must use the `DesktopAttachment` parameter to configure the cloud desktop.
    shared_ptr<string> bundleId_ {};
    // An array of bundle objects. Use this parameter to create cloud desktops from one or more bundles in a single call.
    shared_ptr<vector<CreateDesktopsRequest::BundleModels>> bundleModels_ {};
    // > This parameter is for internal use only.
    shared_ptr<string> channelCookie_ {};
    // The billing method of the cloud desktops.
    shared_ptr<string> chargeType_ {};
    // The parameters for creating a cloud desktop without a bundle. This parameter is used only if `BundleId` is not specified.
    shared_ptr<CreateDesktopsRequest::DesktopAttachment> desktopAttachment_ {};
    // The private IP address of the cloud desktop.
    shared_ptr<string> desktopMemberIp_ {};
    // The name of the cloud desktop. The name must meet the following requirements:
    // 
    // - The name must be 1 to 64 characters in length.
    // 
    // - The name must start with a letter or a Chinese character. It cannot start with `http://` or `https://`.
    // 
    // - The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    shared_ptr<string> desktopName_ {};
    // Specifies whether to automatically append a suffix to the value of `DesktopName` when you create multiple cloud desktops.
    shared_ptr<bool> desktopNameSuffix_ {};
    // The details of the scheduled tasks for the cloud desktops. This parameter is being deprecated. We recommend that you use `TimerGroupId` instead.
    shared_ptr<vector<CreateDesktopsRequest::DesktopTimers>> desktopTimers_ {};
    // > This parameter is for internal use only.
    shared_ptr<string> directoryId_ {};
    // The IDs of the end users to assign to the cloud desktops. You can specify up to 100 IDs.
    shared_ptr<vector<string>> endUserId_ {};
    // The extended information in a JSON string. This parameter is for internal use only.
    shared_ptr<string> extendInfo_ {};
    // The ID of the desktop pool.
    shared_ptr<string> groupId_ {};
    // The custom hostname of the cloud desktop. This parameter is supported only for Windows cloud desktops that are in an AD office network.
    // 
    // The hostname must meet the following requirements:
    // 
    // - The hostname must be 2 to 15 characters in length.
    // 
    // - The hostname can contain letters, digits, and hyphens (-). The hostname cannot start or end with a hyphen, contain consecutive hyphens, or consist of only digits.
    // 
    // If you create multiple cloud desktops, you can use the `name_prefix[begin_number,bits]name_suffix` format to specify sequential hostnames for the cloud desktops. For example, if you set the `Hostname` parameter to `ecd-[1,4]-test`, the hostname of the first cloud desktop is `ecd-0001-test`, the second is `ecd-0002-test`, and so on.
    // 
    // - `name_prefix`: the prefix of the hostname.
    // 
    // - `[begin_number,bits]`: The sequential part of the hostname.
    // 
    // - `name_suffix`: the suffix of the hostname.
    shared_ptr<string> hostname_ {};
    // The parameters for purchasing a monthly usage package.
    shared_ptr<CreateDesktopsRequest::MonthDesktopSetting> monthDesktopSetting_ {};
    // The ID of the office network.
    shared_ptr<string> officeSiteId_ {};
    // The subscription duration. The unit is specified by the `PeriodUnit` parameter. This parameter is required only when `ChargeType` is set to `PrePaid`.
    // 
    // - If `PeriodUnit` is set to `Month`, valid values are:
    // 
    //   - 1
    // 
    //   - 2
    // 
    //   - 3
    // 
    //   - 6
    // 
    // - If `PeriodUnit` is set to `Year`, valid values are:
    // 
    //   - 1
    // 
    //   - 2
    // 
    //   - 3
    // 
    //   - 4
    // 
    //   - 5
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration.
    shared_ptr<string> periodUnit_ {};
    // The ID of the policy.
    shared_ptr<string> policyGroupId_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
    // The additional parameters for a specific purchase type.
    shared_ptr<CreateDesktopsRequest::PurchaseOptions> purchaseOptions_ {};
    // The ID of the bandwidth QoS policy.
    shared_ptr<string> qosRuleId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions that support Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The UID of the resource owner in reseller mode. This parameter is required only in reseller mode.
    shared_ptr<int64_t> resellerOwnerUid_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // > This parameter is for internal use only.
    shared_ptr<string> savingPlanId_ {};
    // The ID of the automatic snapshot policy.
    shared_ptr<string> snapshotPolicyId_ {};
    // The ID of the vSwitch.
    shared_ptr<string> subnetId_ {};
    // The tags to add to the cloud desktops. A resource can have up to 20 tags.
    shared_ptr<vector<CreateDesktopsRequest::Tag>> tag_ {};
    // The ID of the scheduled task group.
    shared_ptr<string> timerGroupId_ {};
    // The user assignment mode for the cloud desktops.
    // 
    // > If you do not specify the `EndUserId` parameter, the created cloud desktops are unassigned.
    shared_ptr<string> userAssignMode_ {};
    // The custom scripts to run on the cloud desktops after they start.
    shared_ptr<vector<CreateDesktopsRequest::UserCommands>> userCommands_ {};
    // > This parameter is for internal use only.
    shared_ptr<string> userName_ {};
    // Specifies whether to enable disk encryption.
    shared_ptr<bool> volumeEncryptionEnabled_ {};
    // The ID of the KMS key to use for disk encryption. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to obtain a list of key IDs.
    shared_ptr<string> volumeEncryptionKey_ {};
    // > This parameter is for internal use only.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
