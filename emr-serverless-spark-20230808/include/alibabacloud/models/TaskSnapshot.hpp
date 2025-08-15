// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_TASKSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Task.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class TaskSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(commiter, commiter_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(item, item_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, TaskSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(commiter, commiter_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(item, item_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    TaskSnapshot() = default ;
    TaskSnapshot(const TaskSnapshot &) = default ;
    TaskSnapshot(TaskSnapshot &&) = default ;
    TaskSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskSnapshot() = default ;
    TaskSnapshot& operator=(const TaskSnapshot &) = default ;
    TaskSnapshot& operator=(TaskSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->commiter_ != nullptr && this->gmtCreated_ != nullptr && this->item_ != nullptr && this->message_ != nullptr && this->taskBizId_ != nullptr
        && this->version_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline TaskSnapshot& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // commiter Field Functions 
    bool hasCommiter() const { return this->commiter_ != nullptr;};
    void deleteCommiter() { this->commiter_ = nullptr;};
    inline int64_t commiter() const { DARABONBA_PTR_GET_DEFAULT(commiter_, 0L) };
    inline TaskSnapshot& setCommiter(int64_t commiter) { DARABONBA_PTR_SET_VALUE(commiter_, commiter) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline TaskSnapshot& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const Task & item() const { DARABONBA_PTR_GET_CONST(item_, Task) };
    inline Task item() { DARABONBA_PTR_GET(item_, Task) };
    inline TaskSnapshot& setItem(const Task & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline TaskSnapshot& setItem(Task && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TaskSnapshot& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // taskBizId Field Functions 
    bool hasTaskBizId() const { return this->taskBizId_ != nullptr;};
    void deleteTaskBizId() { this->taskBizId_ = nullptr;};
    inline string taskBizId() const { DARABONBA_PTR_GET_DEFAULT(taskBizId_, "") };
    inline TaskSnapshot& setTaskBizId(string taskBizId) { DARABONBA_PTR_SET_VALUE(taskBizId_, taskBizId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline TaskSnapshot& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<int64_t> commiter_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<Task> item_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> taskBizId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
