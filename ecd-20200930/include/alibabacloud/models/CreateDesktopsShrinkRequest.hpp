// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPSSHRINKREQUEST_HPP_
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
  class CreateDesktopsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(BundleModels, bundleModels_);
      DARABONBA_PTR_TO_JSON(ChannelCookie, channelCookie_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DesktopAttachment, desktopAttachmentShrink_);
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
      DARABONBA_PTR_TO_JSON(OuPath, ouPath_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(PurchaseOptions, purchaseOptionsShrink_);
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
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
    friend void from_json(const Darabonba::Json& j, CreateDesktopsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(BundleModels, bundleModels_);
      DARABONBA_PTR_FROM_JSON(ChannelCookie, channelCookie_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DesktopAttachment, desktopAttachmentShrink_);
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
      DARABONBA_PTR_FROM_JSON(OuPath, ouPath_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(PurchaseOptions, purchaseOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
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
    CreateDesktopsShrinkRequest() = default ;
    CreateDesktopsShrinkRequest(const CreateDesktopsShrinkRequest &) = default ;
    CreateDesktopsShrinkRequest(CreateDesktopsShrinkRequest &&) = default ;
    CreateDesktopsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopsShrinkRequest() = default ;
    CreateDesktopsShrinkRequest& operator=(const CreateDesktopsShrinkRequest &) = default ;
    CreateDesktopsShrinkRequest& operator=(CreateDesktopsShrinkRequest &&) = default ;
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
      // The command content.
      shared_ptr<string> content_ {};
      // The encoding method of the command content (CommandContent).
      shared_ptr<string> contentEncoding_ {};
      // The language type of the command.
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
      // The tag key. You can specify 1 to 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value. You can specify 1 to 20 tag values.
      shared_ptr<string> value_ {};
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
      // > This field is not available for use.
      shared_ptr<int64_t> buyerId_ {};
      // > This field is not available for use.
      shared_ptr<string> desktopId_ {};
      // The package option when purchasing a monthly hourly package. Valid values: 120, 250, and 360.
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
      // Specifies whether to allow end users to configure scheduled tasks.
      shared_ptr<bool> allowClientSetting_ {};
      // The cron expression of the scheduled task.
      // 
      // >Notice: Specify the time in UTC. For example, to schedule a task at 00:00 (UTC+8) every day, set the value to 0 0 16 ? * 1,2,3,4,5,6,7.</notice>
      shared_ptr<string> cronExpression_ {};
      // Specifies whether to forcefully execute the task.
      shared_ptr<bool> enforce_ {};
      // The time interval, in minutes.
      shared_ptr<int32_t> interval_ {};
      // The operation type of the scheduled task. Currently, only the disconnection scheduled task is supported.
      shared_ptr<string> operationType_ {};
      // The reset type of the cloud desktop.
      shared_ptr<string> resetType_ {};
      // The type of the scheduled task.
      shared_ptr<string> timerType_ {};
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
      // The cloud desktop template ID.
      shared_ptr<string> bundleId_ {};
      // The cloud desktop name. The naming rules are as follows:
      // 
      // - The name can be up to 64 characters in length.
      // - The name must start with a letter or a Chinese character and cannot start with `http://` or `https://`.
      // - The name can contain Chinese characters, letters, digits, colons (:), underscores (_), periods (.), or hyphens (-).
      shared_ptr<string> desktopName_ {};
      // The list of users to whom the cloud desktops are assigned.
      shared_ptr<vector<string>> endUserIds_ {};
      // The custom hostname of the cloud desktop. Settings for this parameter are supported only for cloud desktops that run the Windows operating system in an AD office network.
      // 
      // The naming rules for the hostname are as follows:
      // 
      // - The hostname must be 2 to 15 characters in length.
      // - The hostname can contain uppercase letters, lowercase letters, digits, or hyphens (-). It cannot start or end with a hyphen, contain consecutive hyphens, or consist of only digits.
      // 
      // When you create multiple cloud desktops, you can use the `name_prefix[begin_number,bits]name_suffix` format to uniformly name the cloud desktops. For example, if you set Hostname to ecd-[1,4]-test, the hostname of the first cloud desktop is ecd-0001-test, the hostname of the second cloud desktop is ecd-0002-test, and so on.
      // 
      // - `name_prefix`: the prefix of the hostname.
      // - `[begin_number,bits]`: the sequential number in the hostname. `begin_number` is the starting number. Valid values: 0 to 999999. Default value: 0. `bits` is the number of digits. Valid values: 1 to 6. Default value: 6.
      // - `name_suffix`: the suffix of the hostname.
      shared_ptr<string> hostname_ {};
      // Specifies whether to enable cloud disk encryption.
      shared_ptr<bool> volumeEncryptionEnabled_ {};
      // The ID of the Key Management Service (KMS) key used for cloud disk encryption. You can call [ListKeys](https://help.aliyun.com/document_detail/28951.html) to obtain the key ID.
      shared_ptr<string> volumeEncryptionKey_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->appRuleId_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bundleId_ == nullptr && this->bundleModels_ == nullptr
        && this->channelCookie_ == nullptr && this->chargeType_ == nullptr && this->desktopAttachmentShrink_ == nullptr && this->desktopMemberIp_ == nullptr && this->desktopName_ == nullptr
        && this->desktopNameSuffix_ == nullptr && this->desktopTimers_ == nullptr && this->directoryId_ == nullptr && this->endUserId_ == nullptr && this->extendInfo_ == nullptr
        && this->groupId_ == nullptr && this->hostname_ == nullptr && this->monthDesktopSetting_ == nullptr && this->officeSiteId_ == nullptr && this->ouPath_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->policyGroupId_ == nullptr && this->promotionId_ == nullptr && this->purchaseOptionsShrink_ == nullptr
        && this->qosRuleId_ == nullptr && this->regionId_ == nullptr && this->resellerOwnerUid_ == nullptr && this->resourceGroupId_ == nullptr && this->savingPlanId_ == nullptr
        && this->snapshotPolicyId_ == nullptr && this->subPayType_ == nullptr && this->subnetId_ == nullptr && this->tag_ == nullptr && this->timerGroupId_ == nullptr
        && this->userAssignMode_ == nullptr && this->userCommands_ == nullptr && this->userName_ == nullptr && this->volumeEncryptionEnabled_ == nullptr && this->volumeEncryptionKey_ == nullptr
        && this->vpcId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateDesktopsShrinkRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appRuleId Field Functions 
    bool hasAppRuleId() const { return this->appRuleId_ != nullptr;};
    void deleteAppRuleId() { this->appRuleId_ = nullptr;};
    inline string getAppRuleId() const { DARABONBA_PTR_GET_DEFAULT(appRuleId_, "") };
    inline CreateDesktopsShrinkRequest& setAppRuleId(string appRuleId) { DARABONBA_PTR_SET_VALUE(appRuleId_, appRuleId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateDesktopsShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDesktopsShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline CreateDesktopsShrinkRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // bundleModels Field Functions 
    bool hasBundleModels() const { return this->bundleModels_ != nullptr;};
    void deleteBundleModels() { this->bundleModels_ = nullptr;};
    inline const vector<CreateDesktopsShrinkRequest::BundleModels> & getBundleModels() const { DARABONBA_PTR_GET_CONST(bundleModels_, vector<CreateDesktopsShrinkRequest::BundleModels>) };
    inline vector<CreateDesktopsShrinkRequest::BundleModels> getBundleModels() { DARABONBA_PTR_GET(bundleModels_, vector<CreateDesktopsShrinkRequest::BundleModels>) };
    inline CreateDesktopsShrinkRequest& setBundleModels(const vector<CreateDesktopsShrinkRequest::BundleModels> & bundleModels) { DARABONBA_PTR_SET_VALUE(bundleModels_, bundleModels) };
    inline CreateDesktopsShrinkRequest& setBundleModels(vector<CreateDesktopsShrinkRequest::BundleModels> && bundleModels) { DARABONBA_PTR_SET_RVALUE(bundleModels_, bundleModels) };


    // channelCookie Field Functions 
    bool hasChannelCookie() const { return this->channelCookie_ != nullptr;};
    void deleteChannelCookie() { this->channelCookie_ = nullptr;};
    inline string getChannelCookie() const { DARABONBA_PTR_GET_DEFAULT(channelCookie_, "") };
    inline CreateDesktopsShrinkRequest& setChannelCookie(string channelCookie) { DARABONBA_PTR_SET_VALUE(channelCookie_, channelCookie) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateDesktopsShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // desktopAttachmentShrink Field Functions 
    bool hasDesktopAttachmentShrink() const { return this->desktopAttachmentShrink_ != nullptr;};
    void deleteDesktopAttachmentShrink() { this->desktopAttachmentShrink_ = nullptr;};
    inline string getDesktopAttachmentShrink() const { DARABONBA_PTR_GET_DEFAULT(desktopAttachmentShrink_, "") };
    inline CreateDesktopsShrinkRequest& setDesktopAttachmentShrink(string desktopAttachmentShrink) { DARABONBA_PTR_SET_VALUE(desktopAttachmentShrink_, desktopAttachmentShrink) };


    // desktopMemberIp Field Functions 
    bool hasDesktopMemberIp() const { return this->desktopMemberIp_ != nullptr;};
    void deleteDesktopMemberIp() { this->desktopMemberIp_ = nullptr;};
    inline string getDesktopMemberIp() const { DARABONBA_PTR_GET_DEFAULT(desktopMemberIp_, "") };
    inline CreateDesktopsShrinkRequest& setDesktopMemberIp(string desktopMemberIp) { DARABONBA_PTR_SET_VALUE(desktopMemberIp_, desktopMemberIp) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline CreateDesktopsShrinkRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopNameSuffix Field Functions 
    bool hasDesktopNameSuffix() const { return this->desktopNameSuffix_ != nullptr;};
    void deleteDesktopNameSuffix() { this->desktopNameSuffix_ = nullptr;};
    inline bool getDesktopNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(desktopNameSuffix_, false) };
    inline CreateDesktopsShrinkRequest& setDesktopNameSuffix(bool desktopNameSuffix) { DARABONBA_PTR_SET_VALUE(desktopNameSuffix_, desktopNameSuffix) };


    // desktopTimers Field Functions 
    bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
    void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
    inline const vector<CreateDesktopsShrinkRequest::DesktopTimers> & getDesktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<CreateDesktopsShrinkRequest::DesktopTimers>) };
    inline vector<CreateDesktopsShrinkRequest::DesktopTimers> getDesktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<CreateDesktopsShrinkRequest::DesktopTimers>) };
    inline CreateDesktopsShrinkRequest& setDesktopTimers(const vector<CreateDesktopsShrinkRequest::DesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
    inline CreateDesktopsShrinkRequest& setDesktopTimers(vector<CreateDesktopsShrinkRequest::DesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateDesktopsShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & getEndUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> getEndUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline CreateDesktopsShrinkRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline CreateDesktopsShrinkRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline CreateDesktopsShrinkRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateDesktopsShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateDesktopsShrinkRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // monthDesktopSetting Field Functions 
    bool hasMonthDesktopSetting() const { return this->monthDesktopSetting_ != nullptr;};
    void deleteMonthDesktopSetting() { this->monthDesktopSetting_ = nullptr;};
    inline const CreateDesktopsShrinkRequest::MonthDesktopSetting & getMonthDesktopSetting() const { DARABONBA_PTR_GET_CONST(monthDesktopSetting_, CreateDesktopsShrinkRequest::MonthDesktopSetting) };
    inline CreateDesktopsShrinkRequest::MonthDesktopSetting getMonthDesktopSetting() { DARABONBA_PTR_GET(monthDesktopSetting_, CreateDesktopsShrinkRequest::MonthDesktopSetting) };
    inline CreateDesktopsShrinkRequest& setMonthDesktopSetting(const CreateDesktopsShrinkRequest::MonthDesktopSetting & monthDesktopSetting) { DARABONBA_PTR_SET_VALUE(monthDesktopSetting_, monthDesktopSetting) };
    inline CreateDesktopsShrinkRequest& setMonthDesktopSetting(CreateDesktopsShrinkRequest::MonthDesktopSetting && monthDesktopSetting) { DARABONBA_PTR_SET_RVALUE(monthDesktopSetting_, monthDesktopSetting) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateDesktopsShrinkRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // ouPath Field Functions 
    bool hasOuPath() const { return this->ouPath_ != nullptr;};
    void deleteOuPath() { this->ouPath_ = nullptr;};
    inline string getOuPath() const { DARABONBA_PTR_GET_DEFAULT(ouPath_, "") };
    inline CreateDesktopsShrinkRequest& setOuPath(string ouPath) { DARABONBA_PTR_SET_VALUE(ouPath_, ouPath) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateDesktopsShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateDesktopsShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateDesktopsShrinkRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateDesktopsShrinkRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // purchaseOptionsShrink Field Functions 
    bool hasPurchaseOptionsShrink() const { return this->purchaseOptionsShrink_ != nullptr;};
    void deletePurchaseOptionsShrink() { this->purchaseOptionsShrink_ = nullptr;};
    inline string getPurchaseOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(purchaseOptionsShrink_, "") };
    inline CreateDesktopsShrinkRequest& setPurchaseOptionsShrink(string purchaseOptionsShrink) { DARABONBA_PTR_SET_VALUE(purchaseOptionsShrink_, purchaseOptionsShrink) };


    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline CreateDesktopsShrinkRequest& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDesktopsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline CreateDesktopsShrinkRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDesktopsShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // savingPlanId Field Functions 
    bool hasSavingPlanId() const { return this->savingPlanId_ != nullptr;};
    void deleteSavingPlanId() { this->savingPlanId_ = nullptr;};
    inline string getSavingPlanId() const { DARABONBA_PTR_GET_DEFAULT(savingPlanId_, "") };
    inline CreateDesktopsShrinkRequest& setSavingPlanId(string savingPlanId) { DARABONBA_PTR_SET_VALUE(savingPlanId_, savingPlanId) };


    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline string getSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
    inline CreateDesktopsShrinkRequest& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline CreateDesktopsShrinkRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline CreateDesktopsShrinkRequest& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDesktopsShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDesktopsShrinkRequest::Tag>) };
    inline vector<CreateDesktopsShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDesktopsShrinkRequest::Tag>) };
    inline CreateDesktopsShrinkRequest& setTag(const vector<CreateDesktopsShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDesktopsShrinkRequest& setTag(vector<CreateDesktopsShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // timerGroupId Field Functions 
    bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
    void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
    inline string getTimerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
    inline CreateDesktopsShrinkRequest& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


    // userAssignMode Field Functions 
    bool hasUserAssignMode() const { return this->userAssignMode_ != nullptr;};
    void deleteUserAssignMode() { this->userAssignMode_ = nullptr;};
    inline string getUserAssignMode() const { DARABONBA_PTR_GET_DEFAULT(userAssignMode_, "") };
    inline CreateDesktopsShrinkRequest& setUserAssignMode(string userAssignMode) { DARABONBA_PTR_SET_VALUE(userAssignMode_, userAssignMode) };


    // userCommands Field Functions 
    bool hasUserCommands() const { return this->userCommands_ != nullptr;};
    void deleteUserCommands() { this->userCommands_ = nullptr;};
    inline const vector<CreateDesktopsShrinkRequest::UserCommands> & getUserCommands() const { DARABONBA_PTR_GET_CONST(userCommands_, vector<CreateDesktopsShrinkRequest::UserCommands>) };
    inline vector<CreateDesktopsShrinkRequest::UserCommands> getUserCommands() { DARABONBA_PTR_GET(userCommands_, vector<CreateDesktopsShrinkRequest::UserCommands>) };
    inline CreateDesktopsShrinkRequest& setUserCommands(const vector<CreateDesktopsShrinkRequest::UserCommands> & userCommands) { DARABONBA_PTR_SET_VALUE(userCommands_, userCommands) };
    inline CreateDesktopsShrinkRequest& setUserCommands(vector<CreateDesktopsShrinkRequest::UserCommands> && userCommands) { DARABONBA_PTR_SET_RVALUE(userCommands_, userCommands) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateDesktopsShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool getVolumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline CreateDesktopsShrinkRequest& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline CreateDesktopsShrinkRequest& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDesktopsShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of cloud desktops to create. Valid values: 1 to 300. Default value: 1.
    shared_ptr<int32_t> amount_ {};
    // The application control policy ID.
    shared_ptr<string> appRuleId_ {};
    // Specifies whether to enable automatic payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. This parameter takes effect only when `ChargeType` is set to `PrePaid`.
    shared_ptr<bool> autoRenew_ {};
    // The cloud desktop template ID. If no template ID is specified, you can create a cloud desktop by specifying the required fields.
    shared_ptr<string> bundleId_ {};
    // The list of cloud desktop templates.
    shared_ptr<vector<CreateDesktopsShrinkRequest::BundleModels>> bundleModels_ {};
    // > This field is not available for use.
    shared_ptr<string> channelCookie_ {};
    // The billing method of the cloud desktop.
    shared_ptr<string> chargeType_ {};
    // The parameters for creating a cloud desktop without a template. This parameter is invalid when the BundleId parameter is specified.
    shared_ptr<string> desktopAttachmentShrink_ {};
    // The private IP address of the cloud desktop.
    shared_ptr<string> desktopMemberIp_ {};
    // The cloud desktop name. The naming rules are as follows:
    // 
    // - The name can be up to 64 characters in length.
    // - The name must start with a letter or a Chinese character and cannot start with `http://` or `https://`.
    // - The name can contain Chinese characters, letters, digits, colons (:), underscores (_), periods (.), or hyphens (-).
    shared_ptr<string> desktopName_ {};
    // Specifies whether to automatically append a suffix to the cloud desktop name when you create multiple cloud desktops in a batch.
    shared_ptr<bool> desktopNameSuffix_ {};
    // The scheduled task details of the cloud desktop. This parameter is being deprecated. Use the TimerGroupId parameter instead.
    shared_ptr<vector<CreateDesktopsShrinkRequest::DesktopTimers>> desktopTimers_ {};
    // > This parameter is not available for use.
    shared_ptr<string> directoryId_ {};
    // The list of authorized user IDs to add to the cloud desktops. You can specify 1 to 100 user IDs.
    shared_ptr<vector<string>> endUserId_ {};
    // The extended information in JSON string format. This parameter is available only for internal customers.
    shared_ptr<string> extendInfo_ {};
    // The cloud desktop pool ID.
    shared_ptr<string> groupId_ {};
    // The custom hostname of the cloud desktop. Settings for this parameter are supported only for cloud desktops that run the Windows operating system in an AD office network.
    // 
    // The naming rules for the hostname are as follows:
    // 
    // - The hostname must be 2 to 15 characters in length.
    // - The hostname can contain uppercase letters, lowercase letters, digits, or hyphens (-). It cannot start or end with a hyphen, contain consecutive hyphens, or consist of only digits.
    // 
    // When you create multiple cloud desktops, you can use the `name_prefix[begin_number,bits]name_suffix` format to uniformly name the cloud desktops. For example, if you set Hostname to ecd-[1,4]-test, the hostname of the first cloud desktop is ecd-0001-test, the hostname of the second cloud desktop is ecd-0002-test, and so on.
    // 
    // - `name_prefix`: the prefix of the hostname.
    // - `[begin_number,bits]`: the sequential number in the hostname. `begin_number` is the starting number. Valid values: 0 to 999999. Default value: 0. `bits` is the number of digits. Valid values: 1 to 6. Default value: 6.
    // - `name_suffix`: the suffix of the hostname.
    shared_ptr<string> hostname_ {};
    // The purchase parameters for the monthly hourly package.
    shared_ptr<CreateDesktopsShrinkRequest::MonthDesktopSetting> monthDesktopSetting_ {};
    // The office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The OU path. If specified, the cloud desktop is added to the corresponding organizational unit (OU) in Active Directory (AD).
    shared_ptr<string> ouPath_ {};
    // The subscription duration of the resource. The unit is specified by `PeriodUnit`. This parameter takes effect and is required only when `ChargeType` is set to `PrePaid`.
    // 
    // - If `PeriodUnit` is set to `Month`, valid values of this parameter:
    // 
    //      - 1
    //     -  2
    //     - 3
    //     - 6
    // 
    // - If `PeriodUnit` is set to `Year`, valid values of this parameter:
    // 
    //     - 1
    //     - 2
    //     - 3
    //     - 4
    //     - 5
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration.
    shared_ptr<string> periodUnit_ {};
    // The policy ID.
    shared_ptr<string> policyGroupId_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
    // The additional parameters for a specific purchase type.
    shared_ptr<string> purchaseOptionsShrink_ {};
    // The public network rate limiting rule ID.
    shared_ptr<string> qosRuleId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by WUYING Workspace.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The user ID for resource ownership in reseller pattern. This parameter is not required in non-reseller pattern.
    shared_ptr<int64_t> resellerOwnerUid_ {};
    // The WUYING resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // > This field is not available for use.
    shared_ptr<string> savingPlanId_ {};
    // The WUYING automatic snapshot policy ID.
    shared_ptr<string> snapshotPolicyId_ {};
    shared_ptr<string> subPayType_ {};
    // The subnet ID.
    shared_ptr<string> subnetId_ {};
    // The tags.
    shared_ptr<vector<CreateDesktopsShrinkRequest::Tag>> tag_ {};
    // The scheduled task group ID.
    shared_ptr<string> timerGroupId_ {};
    // The cloud desktop assignment mode.
    // 
    // > If `EndUserId` is not specified, the created cloud desktops are not assigned to any user.
    shared_ptr<string> userAssignMode_ {};
    // The custom command script data.
    shared_ptr<vector<CreateDesktopsShrinkRequest::UserCommands>> userCommands_ {};
    // > This parameter is not available for use.
    shared_ptr<string> userName_ {};
    // Specifies whether to enable cloud disk encryption.
    shared_ptr<bool> volumeEncryptionEnabled_ {};
    // The ID of the Key Management Service (KMS) key used for cloud disk encryption. You can call [ListKeys](https://help.aliyun.com/document_detail/28951.html) to obtain the key ID.
    shared_ptr<string> volumeEncryptionKey_ {};
    // > This parameter is not available for use.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
