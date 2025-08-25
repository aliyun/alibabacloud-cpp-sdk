// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGCHATSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGCHATSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWaitingChatsResponseBodyDataMessages.hpp>
#include <alibabacloud/models/ListWaitingChatsResponseBodyDataUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListWaitingChatsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingChatsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(BeingAssigned, beingAssigned_);
      DARABONBA_PTR_TO_JSON(ChatConversationId, chatConversationId_);
      DARABONBA_PTR_TO_JSON(EnqueueTime, enqueueTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingChatsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(BeingAssigned, beingAssigned_);
      DARABONBA_PTR_FROM_JSON(ChatConversationId, chatConversationId_);
      DARABONBA_PTR_FROM_JSON(EnqueueTime, enqueueTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    ListWaitingChatsResponseBodyData() = default ;
    ListWaitingChatsResponseBodyData(const ListWaitingChatsResponseBodyData &) = default ;
    ListWaitingChatsResponseBodyData(ListWaitingChatsResponseBodyData &&) = default ;
    ListWaitingChatsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingChatsResponseBodyData() = default ;
    ListWaitingChatsResponseBodyData& operator=(const ListWaitingChatsResponseBodyData &) = default ;
    ListWaitingChatsResponseBodyData& operator=(ListWaitingChatsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessChannelId_ != nullptr
        && this->accessChannelType_ != nullptr && this->beingAssigned_ != nullptr && this->chatConversationId_ != nullptr && this->enqueueTime_ != nullptr && this->jobId_ != nullptr
        && this->messages_ != nullptr && this->skillGroupId_ != nullptr && this->userList_ != nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string accessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline ListWaitingChatsResponseBodyData& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string accessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline ListWaitingChatsResponseBodyData& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // beingAssigned Field Functions 
    bool hasBeingAssigned() const { return this->beingAssigned_ != nullptr;};
    void deleteBeingAssigned() { this->beingAssigned_ = nullptr;};
    inline bool beingAssigned() const { DARABONBA_PTR_GET_DEFAULT(beingAssigned_, false) };
    inline ListWaitingChatsResponseBodyData& setBeingAssigned(bool beingAssigned) { DARABONBA_PTR_SET_VALUE(beingAssigned_, beingAssigned) };


    // chatConversationId Field Functions 
    bool hasChatConversationId() const { return this->chatConversationId_ != nullptr;};
    void deleteChatConversationId() { this->chatConversationId_ = nullptr;};
    inline string chatConversationId() const { DARABONBA_PTR_GET_DEFAULT(chatConversationId_, "") };
    inline ListWaitingChatsResponseBodyData& setChatConversationId(string chatConversationId) { DARABONBA_PTR_SET_VALUE(chatConversationId_, chatConversationId) };


    // enqueueTime Field Functions 
    bool hasEnqueueTime() const { return this->enqueueTime_ != nullptr;};
    void deleteEnqueueTime() { this->enqueueTime_ = nullptr;};
    inline int64_t enqueueTime() const { DARABONBA_PTR_GET_DEFAULT(enqueueTime_, 0L) };
    inline ListWaitingChatsResponseBodyData& setEnqueueTime(int64_t enqueueTime) { DARABONBA_PTR_SET_VALUE(enqueueTime_, enqueueTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListWaitingChatsResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::ListWaitingChatsResponseBodyDataMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::ListWaitingChatsResponseBodyDataMessages>) };
    inline vector<Models::ListWaitingChatsResponseBodyDataMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::ListWaitingChatsResponseBodyDataMessages>) };
    inline ListWaitingChatsResponseBodyData& setMessages(const vector<Models::ListWaitingChatsResponseBodyDataMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ListWaitingChatsResponseBodyData& setMessages(vector<Models::ListWaitingChatsResponseBodyDataMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListWaitingChatsResponseBodyData& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::ListWaitingChatsResponseBodyDataUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::ListWaitingChatsResponseBodyDataUserList>) };
    inline vector<Models::ListWaitingChatsResponseBodyDataUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::ListWaitingChatsResponseBodyDataUserList>) };
    inline ListWaitingChatsResponseBodyData& setUserList(const vector<Models::ListWaitingChatsResponseBodyDataUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline ListWaitingChatsResponseBodyData& setUserList(vector<Models::ListWaitingChatsResponseBodyDataUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<string> accessChannelId_ = nullptr;
    std::shared_ptr<string> accessChannelType_ = nullptr;
    std::shared_ptr<bool> beingAssigned_ = nullptr;
    std::shared_ptr<string> chatConversationId_ = nullptr;
    std::shared_ptr<int64_t> enqueueTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<vector<Models::ListWaitingChatsResponseBodyDataMessages>> messages_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<vector<Models::ListWaitingChatsResponseBodyDataUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
