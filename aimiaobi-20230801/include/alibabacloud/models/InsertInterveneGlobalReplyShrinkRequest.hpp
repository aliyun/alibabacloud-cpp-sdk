// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENEGLOBALREPLYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENEGLOBALREPLYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneGlobalReplyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneGlobalReplyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ReplyMessagList, replyMessagListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneGlobalReplyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ReplyMessagList, replyMessagListShrink_);
    };
    InsertInterveneGlobalReplyShrinkRequest() = default ;
    InsertInterveneGlobalReplyShrinkRequest(const InsertInterveneGlobalReplyShrinkRequest &) = default ;
    InsertInterveneGlobalReplyShrinkRequest(InsertInterveneGlobalReplyShrinkRequest &&) = default ;
    InsertInterveneGlobalReplyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneGlobalReplyShrinkRequest() = default ;
    InsertInterveneGlobalReplyShrinkRequest& operator=(const InsertInterveneGlobalReplyShrinkRequest &) = default ;
    InsertInterveneGlobalReplyShrinkRequest& operator=(InsertInterveneGlobalReplyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->replyMessagListShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline InsertInterveneGlobalReplyShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // replyMessagListShrink Field Functions 
    bool hasReplyMessagListShrink() const { return this->replyMessagListShrink_ != nullptr;};
    void deleteReplyMessagListShrink() { this->replyMessagListShrink_ = nullptr;};
    inline string getReplyMessagListShrink() const { DARABONBA_PTR_GET_DEFAULT(replyMessagListShrink_, "") };
    inline InsertInterveneGlobalReplyShrinkRequest& setReplyMessagListShrink(string replyMessagListShrink) { DARABONBA_PTR_SET_VALUE(replyMessagListShrink_, replyMessagListShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> replyMessagListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
