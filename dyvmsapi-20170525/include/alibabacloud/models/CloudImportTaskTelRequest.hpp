// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDIMPORTTASKTELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDIMPORTTASKTELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudImportTaskTelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudImportTaskTelRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(TaskTelList, taskTelList_);
    };
    friend void from_json(const Darabonba::Json& j, CloudImportTaskTelRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(TaskTelList, taskTelList_);
    };
    CloudImportTaskTelRequest() = default ;
    CloudImportTaskTelRequest(const CloudImportTaskTelRequest &) = default ;
    CloudImportTaskTelRequest(CloudImportTaskTelRequest &&) = default ;
    CloudImportTaskTelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudImportTaskTelRequest() = default ;
    CloudImportTaskTelRequest& operator=(const CloudImportTaskTelRequest &) = default ;
    CloudImportTaskTelRequest& operator=(CloudImportTaskTelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskTelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskTelList& obj) { 
        DARABONBA_PTR_TO_JSON(BackupTels, backupTels_);
        DARABONBA_PTR_TO_JSON(Clid, clid_);
        DARABONBA_PTR_TO_JSON(ClidGroup, clidGroup_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Property, property_);
        DARABONBA_PTR_TO_JSON(Tel, tel_);
      };
      friend void from_json(const Darabonba::Json& j, TaskTelList& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupTels, backupTels_);
        DARABONBA_PTR_FROM_JSON(Clid, clid_);
        DARABONBA_PTR_FROM_JSON(ClidGroup, clidGroup_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Property, property_);
        DARABONBA_PTR_FROM_JSON(Tel, tel_);
      };
      TaskTelList() = default ;
      TaskTelList(const TaskTelList &) = default ;
      TaskTelList(TaskTelList &&) = default ;
      TaskTelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskTelList() = default ;
      TaskTelList& operator=(const TaskTelList &) = default ;
      TaskTelList& operator=(TaskTelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupTels_ == nullptr
        && this->clid_ == nullptr && this->clidGroup_ == nullptr && this->priority_ == nullptr && this->property_ == nullptr && this->tel_ == nullptr; };
      // backupTels Field Functions 
      bool hasBackupTels() const { return this->backupTels_ != nullptr;};
      void deleteBackupTels() { this->backupTels_ = nullptr;};
      inline string getBackupTels() const { DARABONBA_PTR_GET_DEFAULT(backupTels_, "") };
      inline TaskTelList& setBackupTels(string backupTels) { DARABONBA_PTR_SET_VALUE(backupTels_, backupTels) };


      // clid Field Functions 
      bool hasClid() const { return this->clid_ != nullptr;};
      void deleteClid() { this->clid_ = nullptr;};
      inline string getClid() const { DARABONBA_PTR_GET_DEFAULT(clid_, "") };
      inline TaskTelList& setClid(string clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };


      // clidGroup Field Functions 
      bool hasClidGroup() const { return this->clidGroup_ != nullptr;};
      void deleteClidGroup() { this->clidGroup_ = nullptr;};
      inline string getClidGroup() const { DARABONBA_PTR_GET_DEFAULT(clidGroup_, "") };
      inline TaskTelList& setClidGroup(string clidGroup) { DARABONBA_PTR_SET_VALUE(clidGroup_, clidGroup) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline TaskTelList& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // property Field Functions 
      bool hasProperty() const { return this->property_ != nullptr;};
      void deleteProperty() { this->property_ = nullptr;};
      inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
      inline TaskTelList& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


      // tel Field Functions 
      bool hasTel() const { return this->tel_ != nullptr;};
      void deleteTel() { this->tel_ = nullptr;};
      inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
      inline TaskTelList& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


    protected:
      // 备选号码，tel呼叫不通时，呼叫备选号码最多支持8个，号码之间用英文逗号","分隔
      shared_ptr<string> backupTels_ {};
      // 电话号对应的外显号码
      shared_ptr<string> clid_ {};
      // 使用clidGroup需要账号支持按标识路由，使用此参数是clid参数无效
      shared_ptr<string> clidGroup_ {};
      // 优先级，默认为0，值越大优先级越高，最大999999
      shared_ptr<int64_t> priority_ {};
      // 属性，json格式
      shared_ptr<string> property_ {};
      // 电话号
      shared_ptr<string> tel_ {};
    };

    virtual bool empty() const override { return this->bridgeVoicePath_ == nullptr
        && this->bridgeVoiceType_ == nullptr && this->enterpriseId_ == nullptr && this->fileId_ == nullptr && this->importTelAutoStart_ == nullptr && this->isRepeat_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->priority_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->taskId_ == nullptr && this->taskTelList_ == nullptr; };
    // bridgeVoicePath Field Functions 
    bool hasBridgeVoicePath() const { return this->bridgeVoicePath_ != nullptr;};
    void deleteBridgeVoicePath() { this->bridgeVoicePath_ = nullptr;};
    inline string getBridgeVoicePath() const { DARABONBA_PTR_GET_DEFAULT(bridgeVoicePath_, "") };
    inline CloudImportTaskTelRequest& setBridgeVoicePath(string bridgeVoicePath) { DARABONBA_PTR_SET_VALUE(bridgeVoicePath_, bridgeVoicePath) };


    // bridgeVoiceType Field Functions 
    bool hasBridgeVoiceType() const { return this->bridgeVoiceType_ != nullptr;};
    void deleteBridgeVoiceType() { this->bridgeVoiceType_ = nullptr;};
    inline int64_t getBridgeVoiceType() const { DARABONBA_PTR_GET_DEFAULT(bridgeVoiceType_, 0L) };
    inline CloudImportTaskTelRequest& setBridgeVoiceType(int64_t bridgeVoiceType) { DARABONBA_PTR_SET_VALUE(bridgeVoiceType_, bridgeVoiceType) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudImportTaskTelRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline CloudImportTaskTelRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // importTelAutoStart Field Functions 
    bool hasImportTelAutoStart() const { return this->importTelAutoStart_ != nullptr;};
    void deleteImportTelAutoStart() { this->importTelAutoStart_ = nullptr;};
    inline int64_t getImportTelAutoStart() const { DARABONBA_PTR_GET_DEFAULT(importTelAutoStart_, 0L) };
    inline CloudImportTaskTelRequest& setImportTelAutoStart(int64_t importTelAutoStart) { DARABONBA_PTR_SET_VALUE(importTelAutoStart_, importTelAutoStart) };


    // isRepeat Field Functions 
    bool hasIsRepeat() const { return this->isRepeat_ != nullptr;};
    void deleteIsRepeat() { this->isRepeat_ = nullptr;};
    inline int64_t getIsRepeat() const { DARABONBA_PTR_GET_DEFAULT(isRepeat_, 0L) };
    inline CloudImportTaskTelRequest& setIsRepeat(int64_t isRepeat) { DARABONBA_PTR_SET_VALUE(isRepeat_, isRepeat) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CloudImportTaskTelRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudImportTaskTelRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline CloudImportTaskTelRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudImportTaskTelRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudImportTaskTelRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CloudImportTaskTelRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskTelList Field Functions 
    bool hasTaskTelList() const { return this->taskTelList_ != nullptr;};
    void deleteTaskTelList() { this->taskTelList_ = nullptr;};
    inline const vector<CloudImportTaskTelRequest::TaskTelList> & getTaskTelList() const { DARABONBA_PTR_GET_CONST(taskTelList_, vector<CloudImportTaskTelRequest::TaskTelList>) };
    inline vector<CloudImportTaskTelRequest::TaskTelList> getTaskTelList() { DARABONBA_PTR_GET(taskTelList_, vector<CloudImportTaskTelRequest::TaskTelList>) };
    inline CloudImportTaskTelRequest& setTaskTelList(const vector<CloudImportTaskTelRequest::TaskTelList> & taskTelList) { DARABONBA_PTR_SET_VALUE(taskTelList_, taskTelList) };
    inline CloudImportTaskTelRequest& setTaskTelList(vector<CloudImportTaskTelRequest::TaskTelList> && taskTelList) { DARABONBA_PTR_SET_RVALUE(taskTelList_, taskTelList) };


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
    shared_ptr<vector<CloudImportTaskTelRequest::TaskTelList>> taskTelList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
