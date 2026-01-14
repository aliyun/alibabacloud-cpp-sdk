// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKRECOVERCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TASKRECOVERCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class TaskRecoverCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskRecoverCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginImportTime, beginImportTime_);
      DARABONBA_PTR_TO_JSON(EndImportTime, endImportTime_);
      DARABONBA_PTR_TO_JSON(Numbers, numbers_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, TaskRecoverCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginImportTime, beginImportTime_);
      DARABONBA_PTR_FROM_JSON(EndImportTime, endImportTime_);
      DARABONBA_PTR_FROM_JSON(Numbers, numbers_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    TaskRecoverCallRequest() = default ;
    TaskRecoverCallRequest(const TaskRecoverCallRequest &) = default ;
    TaskRecoverCallRequest(TaskRecoverCallRequest &&) = default ;
    TaskRecoverCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskRecoverCallRequest() = default ;
    TaskRecoverCallRequest& operator=(const TaskRecoverCallRequest &) = default ;
    TaskRecoverCallRequest& operator=(TaskRecoverCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginImportTime_ == nullptr
        && this->endImportTime_ == nullptr && this->numbers_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tags_ == nullptr && this->taskId_ == nullptr; };
    // beginImportTime Field Functions 
    bool hasBeginImportTime() const { return this->beginImportTime_ != nullptr;};
    void deleteBeginImportTime() { this->beginImportTime_ = nullptr;};
    inline string getBeginImportTime() const { DARABONBA_PTR_GET_DEFAULT(beginImportTime_, "") };
    inline TaskRecoverCallRequest& setBeginImportTime(string beginImportTime) { DARABONBA_PTR_SET_VALUE(beginImportTime_, beginImportTime) };


    // endImportTime Field Functions 
    bool hasEndImportTime() const { return this->endImportTime_ != nullptr;};
    void deleteEndImportTime() { this->endImportTime_ = nullptr;};
    inline string getEndImportTime() const { DARABONBA_PTR_GET_DEFAULT(endImportTime_, "") };
    inline TaskRecoverCallRequest& setEndImportTime(string endImportTime) { DARABONBA_PTR_SET_VALUE(endImportTime_, endImportTime) };


    // numbers Field Functions 
    bool hasNumbers() const { return this->numbers_ != nullptr;};
    void deleteNumbers() { this->numbers_ = nullptr;};
    inline const vector<string> & getNumbers() const { DARABONBA_PTR_GET_CONST(numbers_, vector<string>) };
    inline vector<string> getNumbers() { DARABONBA_PTR_GET(numbers_, vector<string>) };
    inline TaskRecoverCallRequest& setNumbers(const vector<string> & numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };
    inline TaskRecoverCallRequest& setNumbers(vector<string> && numbers) { DARABONBA_PTR_SET_RVALUE(numbers_, numbers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TaskRecoverCallRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TaskRecoverCallRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TaskRecoverCallRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline TaskRecoverCallRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TaskRecoverCallRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline TaskRecoverCallRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // 查询开始导入时间
    shared_ptr<string> beginImportTime_ {};
    // 查询结束导入时间
    shared_ptr<string> endImportTime_ {};
    // 号码列表
    shared_ptr<vector<string>> numbers_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 用户自定义标签列表
    shared_ptr<vector<string>> tags_ {};
    // 任务ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
