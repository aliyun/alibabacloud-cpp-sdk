// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALOGUESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALOGUESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDialoguesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDialoguesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bot, bot_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DialogueType, dialogueType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListDialoguesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bot, bot_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DialogueType, dialogueType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListDialoguesResponseBodyData() = default ;
    ListDialoguesResponseBodyData(const ListDialoguesResponseBodyData &) = default ;
    ListDialoguesResponseBodyData(ListDialoguesResponseBodyData &&) = default ;
    ListDialoguesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDialoguesResponseBodyData() = default ;
    ListDialoguesResponseBodyData& operator=(const ListDialoguesResponseBodyData &) = default ;
    ListDialoguesResponseBodyData& operator=(ListDialoguesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bot_ != nullptr
        && this->createTime_ != nullptr && this->createUser_ != nullptr && this->dialogueType_ != nullptr && this->taskId_ != nullptr && this->user_ != nullptr; };
    // bot Field Functions 
    bool hasBot() const { return this->bot_ != nullptr;};
    void deleteBot() { this->bot_ = nullptr;};
    inline string bot() const { DARABONBA_PTR_GET_DEFAULT(bot_, "") };
    inline ListDialoguesResponseBodyData& setBot(string bot) { DARABONBA_PTR_SET_VALUE(bot_, bot) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDialoguesResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDialoguesResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // dialogueType Field Functions 
    bool hasDialogueType() const { return this->dialogueType_ != nullptr;};
    void deleteDialogueType() { this->dialogueType_ = nullptr;};
    inline int32_t dialogueType() const { DARABONBA_PTR_GET_DEFAULT(dialogueType_, 0) };
    inline ListDialoguesResponseBodyData& setDialogueType(int32_t dialogueType) { DARABONBA_PTR_SET_VALUE(dialogueType_, dialogueType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListDialoguesResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ListDialoguesResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    std::shared_ptr<string> bot_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<int32_t> dialogueType_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
