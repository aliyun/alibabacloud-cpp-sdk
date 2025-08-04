// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENEGLOBALREPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENEGLOBALREPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsertInterveneGlobalReplyRequestReplyMessagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneGlobalReplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneGlobalReplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ReplyMessagList, replyMessagList_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneGlobalReplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ReplyMessagList, replyMessagList_);
    };
    InsertInterveneGlobalReplyRequest() = default ;
    InsertInterveneGlobalReplyRequest(const InsertInterveneGlobalReplyRequest &) = default ;
    InsertInterveneGlobalReplyRequest(InsertInterveneGlobalReplyRequest &&) = default ;
    InsertInterveneGlobalReplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneGlobalReplyRequest() = default ;
    InsertInterveneGlobalReplyRequest& operator=(const InsertInterveneGlobalReplyRequest &) = default ;
    InsertInterveneGlobalReplyRequest& operator=(InsertInterveneGlobalReplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->replyMessagList_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline InsertInterveneGlobalReplyRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // replyMessagList Field Functions 
    bool hasReplyMessagList() const { return this->replyMessagList_ != nullptr;};
    void deleteReplyMessagList() { this->replyMessagList_ = nullptr;};
    inline const vector<InsertInterveneGlobalReplyRequestReplyMessagList> & replyMessagList() const { DARABONBA_PTR_GET_CONST(replyMessagList_, vector<InsertInterveneGlobalReplyRequestReplyMessagList>) };
    inline vector<InsertInterveneGlobalReplyRequestReplyMessagList> replyMessagList() { DARABONBA_PTR_GET(replyMessagList_, vector<InsertInterveneGlobalReplyRequestReplyMessagList>) };
    inline InsertInterveneGlobalReplyRequest& setReplyMessagList(const vector<InsertInterveneGlobalReplyRequestReplyMessagList> & replyMessagList) { DARABONBA_PTR_SET_VALUE(replyMessagList_, replyMessagList) };
    inline InsertInterveneGlobalReplyRequest& setReplyMessagList(vector<InsertInterveneGlobalReplyRequestReplyMessagList> && replyMessagList) { DARABONBA_PTR_SET_RVALUE(replyMessagList_, replyMessagList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<vector<InsertInterveneGlobalReplyRequestReplyMessagList>> replyMessagList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
