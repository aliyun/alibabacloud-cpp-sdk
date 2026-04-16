// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDIMPORTTASKTELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDIMPORTTASKTELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudImportTaskTelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudImportTaskTelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BridgeVoicePath, bridgeVoicePath_);
      DARABONBA_PTR_TO_JSON(BridgeVoiceType, bridgeVoiceType_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(ImportTelAutoStart, importTelAutoStart_);
      DARABONBA_PTR_TO_JSON(IsRepeat, isRepeat_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskTelList, taskTelListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CloudImportTaskTelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BridgeVoicePath, bridgeVoicePath_);
      DARABONBA_PTR_FROM_JSON(BridgeVoiceType, bridgeVoiceType_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(ImportTelAutoStart, importTelAutoStart_);
      DARABONBA_PTR_FROM_JSON(IsRepeat, isRepeat_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskTelList, taskTelListShrink_);
    };
    CloudImportTaskTelShrinkRequest() = default ;
    CloudImportTaskTelShrinkRequest(const CloudImportTaskTelShrinkRequest &) = default ;
    CloudImportTaskTelShrinkRequest(CloudImportTaskTelShrinkRequest &&) = default ;
    CloudImportTaskTelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudImportTaskTelShrinkRequest() = default ;
    CloudImportTaskTelShrinkRequest& operator=(const CloudImportTaskTelShrinkRequest &) = default ;
    CloudImportTaskTelShrinkRequest& operator=(CloudImportTaskTelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bridgeVoicePath_ == nullptr
        && this->bridgeVoiceType_ == nullptr && this->enterpriseId_ == nullptr && this->fileId_ == nullptr && this->importTelAutoStart_ == nullptr && this->isRepeat_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->priority_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->taskId_ == nullptr && this->taskTelListShrink_ == nullptr; };
    // bridgeVoicePath Field Functions 
    bool hasBridgeVoicePath() const { return this->bridgeVoicePath_ != nullptr;};
    void deleteBridgeVoicePath() { this->bridgeVoicePath_ = nullptr;};
    inline string getBridgeVoicePath() const { DARABONBA_PTR_GET_DEFAULT(bridgeVoicePath_, "") };
    inline CloudImportTaskTelShrinkRequest& setBridgeVoicePath(string bridgeVoicePath) { DARABONBA_PTR_SET_VALUE(bridgeVoicePath_, bridgeVoicePath) };


    // bridgeVoiceType Field Functions 
    bool hasBridgeVoiceType() const { return this->bridgeVoiceType_ != nullptr;};
    void deleteBridgeVoiceType() { this->bridgeVoiceType_ = nullptr;};
    inline int64_t getBridgeVoiceType() const { DARABONBA_PTR_GET_DEFAULT(bridgeVoiceType_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setBridgeVoiceType(int64_t bridgeVoiceType) { DARABONBA_PTR_SET_VALUE(bridgeVoiceType_, bridgeVoiceType) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // importTelAutoStart Field Functions 
    bool hasImportTelAutoStart() const { return this->importTelAutoStart_ != nullptr;};
    void deleteImportTelAutoStart() { this->importTelAutoStart_ = nullptr;};
    inline int64_t getImportTelAutoStart() const { DARABONBA_PTR_GET_DEFAULT(importTelAutoStart_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setImportTelAutoStart(int64_t importTelAutoStart) { DARABONBA_PTR_SET_VALUE(importTelAutoStart_, importTelAutoStart) };


    // isRepeat Field Functions 
    bool hasIsRepeat() const { return this->isRepeat_ != nullptr;};
    void deleteIsRepeat() { this->isRepeat_ = nullptr;};
    inline int64_t getIsRepeat() const { DARABONBA_PTR_GET_DEFAULT(isRepeat_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setIsRepeat(int64_t isRepeat) { DARABONBA_PTR_SET_VALUE(isRepeat_, isRepeat) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CloudImportTaskTelShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudImportTaskTelShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CloudImportTaskTelShrinkRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskTelListShrink Field Functions 
    bool hasTaskTelListShrink() const { return this->taskTelListShrink_ != nullptr;};
    void deleteTaskTelListShrink() { this->taskTelListShrink_ = nullptr;};
    inline string getTaskTelListShrink() const { DARABONBA_PTR_GET_DEFAULT(taskTelListShrink_, "") };
    inline CloudImportTaskTelShrinkRequest& setTaskTelListShrink(string taskTelListShrink) { DARABONBA_PTR_SET_VALUE(taskTelListShrink_, taskTelListShrink) };


  protected:
    // 座席接听时自动在双侧播放开场白语音，指定语音变量值；企业语音库里的语音变量值
    shared_ptr<string> bridgeVoicePath_ {};
    // 座席接听时自动在双侧播放开场白语音类型；1. 公共语音库；2. 企业语音库，静态话术； 3. 企业语音库，动态话术（座席号），传bridgeVoicePath后生效，默认为3
    shared_ptr<int64_t> bridgeVoiceType_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 批次Id；传此值表示在批次中增加号码
    shared_ptr<int64_t> fileId_ {};
    // 是否自动启动任务；0:不自动启动 1:自动启动，默认为0
    shared_ptr<int64_t> importTelAutoStart_ {};
    // 是否排重；0.不排重 1.任务内排重 2.导入号码排重 3.批次内排重，默认为1。注：任务内排重与批次内排重不能同时支持，如果中途切换，则从本次切换开始进行排重。
    shared_ptr<int64_t> isRepeat_ {};
    // 批次名称
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 优先级；默认0，值越大越优先，最大999999
    shared_ptr<int64_t> priority_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 任务Id
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
    // 任务号码列表；CtiLinkTaskTel中只有Tel是必选字段，长度大小不超过8MB 注：获取导入失败明细，需配置[事件推送](../字段定义/推送变量和值/预测外呼导入号码失败推送变量.md)
    // 
    // This parameter is required.
    shared_ptr<string> taskTelListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
