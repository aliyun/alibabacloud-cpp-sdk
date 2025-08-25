// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODYDATACHATCONTEXTS_HPP_
#define ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODYDATACHATCONTEXTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PollUserStatusResponseBodyDataChatContextsMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class PollUserStatusResponseBodyDataChatContexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PollUserStatusResponseBodyDataChatContexts& obj) { 
      DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_TO_JSON(ChatType, chatType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Members, members_);
    };
    friend void from_json(const Darabonba::Json& j, PollUserStatusResponseBodyDataChatContexts& obj) { 
      DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_FROM_JSON(ChatType, chatType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
    };
    PollUserStatusResponseBodyDataChatContexts() = default ;
    PollUserStatusResponseBodyDataChatContexts(const PollUserStatusResponseBodyDataChatContexts &) = default ;
    PollUserStatusResponseBodyDataChatContexts(PollUserStatusResponseBodyDataChatContexts &&) = default ;
    PollUserStatusResponseBodyDataChatContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PollUserStatusResponseBodyDataChatContexts() = default ;
    PollUserStatusResponseBodyDataChatContexts& operator=(const PollUserStatusResponseBodyDataChatContexts &) = default ;
    PollUserStatusResponseBodyDataChatContexts& operator=(PollUserStatusResponseBodyDataChatContexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callVariables_ != nullptr
        && this->chatType_ != nullptr && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->members_ != nullptr; };
    // callVariables Field Functions 
    bool hasCallVariables() const { return this->callVariables_ != nullptr;};
    void deleteCallVariables() { this->callVariables_ = nullptr;};
    inline string callVariables() const { DARABONBA_PTR_GET_DEFAULT(callVariables_, "") };
    inline PollUserStatusResponseBodyDataChatContexts& setCallVariables(string callVariables) { DARABONBA_PTR_SET_VALUE(callVariables_, callVariables) };


    // chatType Field Functions 
    bool hasChatType() const { return this->chatType_ != nullptr;};
    void deleteChatType() { this->chatType_ = nullptr;};
    inline string chatType() const { DARABONBA_PTR_GET_DEFAULT(chatType_, "") };
    inline PollUserStatusResponseBodyDataChatContexts& setChatType(string chatType) { DARABONBA_PTR_SET_VALUE(chatType_, chatType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PollUserStatusResponseBodyDataChatContexts& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline PollUserStatusResponseBodyDataChatContexts& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<Models::PollUserStatusResponseBodyDataChatContextsMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<Models::PollUserStatusResponseBodyDataChatContextsMembers>) };
    inline vector<Models::PollUserStatusResponseBodyDataChatContextsMembers> members() { DARABONBA_PTR_GET(members_, vector<Models::PollUserStatusResponseBodyDataChatContextsMembers>) };
    inline PollUserStatusResponseBodyDataChatContexts& setMembers(const vector<Models::PollUserStatusResponseBodyDataChatContextsMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline PollUserStatusResponseBodyDataChatContexts& setMembers(vector<Models::PollUserStatusResponseBodyDataChatContextsMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


  protected:
    std::shared_ptr<string> callVariables_ = nullptr;
    std::shared_ptr<string> chatType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<vector<Models::PollUserStatusResponseBodyDataChatContextsMembers>> members_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
