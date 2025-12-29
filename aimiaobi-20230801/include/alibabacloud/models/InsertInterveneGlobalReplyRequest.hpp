// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENEGLOBALREPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENEGLOBALREPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ReplyMessagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReplyMessagList& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ReplyType, replyType_);
      };
      friend void from_json(const Darabonba::Json& j, ReplyMessagList& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ReplyType, replyType_);
      };
      ReplyMessagList() = default ;
      ReplyMessagList(const ReplyMessagList &) = default ;
      ReplyMessagList(ReplyMessagList &&) = default ;
      ReplyMessagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReplyMessagList() = default ;
      ReplyMessagList& operator=(const ReplyMessagList &) = default ;
      ReplyMessagList& operator=(ReplyMessagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->replyType_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ReplyMessagList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // replyType Field Functions 
      bool hasReplyType() const { return this->replyType_ != nullptr;};
      void deleteReplyType() { this->replyType_ = nullptr;};
      inline string getReplyType() const { DARABONBA_PTR_GET_DEFAULT(replyType_, "") };
      inline ReplyMessagList& setReplyType(string replyType) { DARABONBA_PTR_SET_VALUE(replyType_, replyType) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> replyType_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->replyMessagList_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline InsertInterveneGlobalReplyRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // replyMessagList Field Functions 
    bool hasReplyMessagList() const { return this->replyMessagList_ != nullptr;};
    void deleteReplyMessagList() { this->replyMessagList_ = nullptr;};
    inline const vector<InsertInterveneGlobalReplyRequest::ReplyMessagList> & getReplyMessagList() const { DARABONBA_PTR_GET_CONST(replyMessagList_, vector<InsertInterveneGlobalReplyRequest::ReplyMessagList>) };
    inline vector<InsertInterveneGlobalReplyRequest::ReplyMessagList> getReplyMessagList() { DARABONBA_PTR_GET(replyMessagList_, vector<InsertInterveneGlobalReplyRequest::ReplyMessagList>) };
    inline InsertInterveneGlobalReplyRequest& setReplyMessagList(const vector<InsertInterveneGlobalReplyRequest::ReplyMessagList> & replyMessagList) { DARABONBA_PTR_SET_VALUE(replyMessagList_, replyMessagList) };
    inline InsertInterveneGlobalReplyRequest& setReplyMessagList(vector<InsertInterveneGlobalReplyRequest::ReplyMessagList> && replyMessagList) { DARABONBA_PTR_SET_RVALUE(replyMessagList_, replyMessagList) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<vector<InsertInterveneGlobalReplyRequest::ReplyMessagList>> replyMessagList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
