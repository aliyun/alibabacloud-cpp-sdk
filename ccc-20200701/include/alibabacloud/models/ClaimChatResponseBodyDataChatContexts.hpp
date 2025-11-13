// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLAIMCHATRESPONSEBODYDATACHATCONTEXTS_HPP_
#define ALIBABACLOUD_MODELS_CLAIMCHATRESPONSEBODYDATACHATCONTEXTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ClaimChatResponseBodyDataChatContexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClaimChatResponseBodyDataChatContexts& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(AccessChannelName, accessChannelName_);
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(BeingAssigned, beingAssigned_);
      DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_TO_JSON(ChatType, chatType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, ClaimChatResponseBodyDataChatContexts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(AccessChannelName, accessChannelName_);
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(BeingAssigned, beingAssigned_);
      DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_FROM_JSON(ChatType, chatType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    ClaimChatResponseBodyDataChatContexts() = default ;
    ClaimChatResponseBodyDataChatContexts(const ClaimChatResponseBodyDataChatContexts &) = default ;
    ClaimChatResponseBodyDataChatContexts(ClaimChatResponseBodyDataChatContexts &&) = default ;
    ClaimChatResponseBodyDataChatContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClaimChatResponseBodyDataChatContexts() = default ;
    ClaimChatResponseBodyDataChatContexts& operator=(const ClaimChatResponseBodyDataChatContexts &) = default ;
    ClaimChatResponseBodyDataChatContexts& operator=(ClaimChatResponseBodyDataChatContexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && return this->accessChannelName_ == nullptr && return this->accessChannelType_ == nullptr && return this->beingAssigned_ == nullptr && return this->callVariables_ == nullptr && return this->chatType_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobId_ == nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string accessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline ClaimChatResponseBodyDataChatContexts& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // accessChannelName Field Functions 
    bool hasAccessChannelName() const { return this->accessChannelName_ != nullptr;};
    void deleteAccessChannelName() { this->accessChannelName_ = nullptr;};
    inline string accessChannelName() const { DARABONBA_PTR_GET_DEFAULT(accessChannelName_, "") };
    inline ClaimChatResponseBodyDataChatContexts& setAccessChannelName(string accessChannelName) { DARABONBA_PTR_SET_VALUE(accessChannelName_, accessChannelName) };


    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string accessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline ClaimChatResponseBodyDataChatContexts& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // beingAssigned Field Functions 
    bool hasBeingAssigned() const { return this->beingAssigned_ != nullptr;};
    void deleteBeingAssigned() { this->beingAssigned_ = nullptr;};
    inline bool beingAssigned() const { DARABONBA_PTR_GET_DEFAULT(beingAssigned_, false) };
    inline ClaimChatResponseBodyDataChatContexts& setBeingAssigned(bool beingAssigned) { DARABONBA_PTR_SET_VALUE(beingAssigned_, beingAssigned) };


    // callVariables Field Functions 
    bool hasCallVariables() const { return this->callVariables_ != nullptr;};
    void deleteCallVariables() { this->callVariables_ = nullptr;};
    inline string callVariables() const { DARABONBA_PTR_GET_DEFAULT(callVariables_, "") };
    inline ClaimChatResponseBodyDataChatContexts& setCallVariables(string callVariables) { DARABONBA_PTR_SET_VALUE(callVariables_, callVariables) };


    // chatType Field Functions 
    bool hasChatType() const { return this->chatType_ != nullptr;};
    void deleteChatType() { this->chatType_ = nullptr;};
    inline string chatType() const { DARABONBA_PTR_GET_DEFAULT(chatType_, "") };
    inline ClaimChatResponseBodyDataChatContexts& setChatType(string chatType) { DARABONBA_PTR_SET_VALUE(chatType_, chatType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ClaimChatResponseBodyDataChatContexts& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ClaimChatResponseBodyDataChatContexts& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    std::shared_ptr<string> accessChannelId_ = nullptr;
    std::shared_ptr<string> accessChannelName_ = nullptr;
    std::shared_ptr<string> accessChannelType_ = nullptr;
    std::shared_ptr<bool> beingAssigned_ = nullptr;
    std::shared_ptr<string> callVariables_ = nullptr;
    std::shared_ptr<string> chatType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
