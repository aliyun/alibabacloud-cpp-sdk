// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUESTSCENECONTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUESTSCENECONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTicketRequestSceneContextGroupMsgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTicketRequestSceneContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequestSceneContext& obj) { 
      DARABONBA_PTR_TO_JSON(GroupMsgs, groupMsgs_);
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(RelevantorUserIds, relevantorUserIds_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequestSceneContext& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupMsgs, groupMsgs_);
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(RelevantorUserIds, relevantorUserIds_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    CreateTicketRequestSceneContext() = default ;
    CreateTicketRequestSceneContext(const CreateTicketRequestSceneContext &) = default ;
    CreateTicketRequestSceneContext(CreateTicketRequestSceneContext &&) = default ;
    CreateTicketRequestSceneContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequestSceneContext() = default ;
    CreateTicketRequestSceneContext& operator=(const CreateTicketRequestSceneContext &) = default ;
    CreateTicketRequestSceneContext& operator=(CreateTicketRequestSceneContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupMsgs_ != nullptr
        && this->openConversationId_ != nullptr && this->relevantorUserIds_ != nullptr && this->topicId_ != nullptr; };
    // groupMsgs Field Functions 
    bool hasGroupMsgs() const { return this->groupMsgs_ != nullptr;};
    void deleteGroupMsgs() { this->groupMsgs_ = nullptr;};
    inline const vector<Models::CreateTicketRequestSceneContextGroupMsgs> & groupMsgs() const { DARABONBA_PTR_GET_CONST(groupMsgs_, vector<Models::CreateTicketRequestSceneContextGroupMsgs>) };
    inline vector<Models::CreateTicketRequestSceneContextGroupMsgs> groupMsgs() { DARABONBA_PTR_GET(groupMsgs_, vector<Models::CreateTicketRequestSceneContextGroupMsgs>) };
    inline CreateTicketRequestSceneContext& setGroupMsgs(const vector<Models::CreateTicketRequestSceneContextGroupMsgs> & groupMsgs) { DARABONBA_PTR_SET_VALUE(groupMsgs_, groupMsgs) };
    inline CreateTicketRequestSceneContext& setGroupMsgs(vector<Models::CreateTicketRequestSceneContextGroupMsgs> && groupMsgs) { DARABONBA_PTR_SET_RVALUE(groupMsgs_, groupMsgs) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string openConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline CreateTicketRequestSceneContext& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // relevantorUserIds Field Functions 
    bool hasRelevantorUserIds() const { return this->relevantorUserIds_ != nullptr;};
    void deleteRelevantorUserIds() { this->relevantorUserIds_ = nullptr;};
    inline const vector<string> & relevantorUserIds() const { DARABONBA_PTR_GET_CONST(relevantorUserIds_, vector<string>) };
    inline vector<string> relevantorUserIds() { DARABONBA_PTR_GET(relevantorUserIds_, vector<string>) };
    inline CreateTicketRequestSceneContext& setRelevantorUserIds(const vector<string> & relevantorUserIds) { DARABONBA_PTR_SET_VALUE(relevantorUserIds_, relevantorUserIds) };
    inline CreateTicketRequestSceneContext& setRelevantorUserIds(vector<string> && relevantorUserIds) { DARABONBA_PTR_SET_RVALUE(relevantorUserIds_, relevantorUserIds) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline CreateTicketRequestSceneContext& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    std::shared_ptr<vector<Models::CreateTicketRequestSceneContextGroupMsgs>> groupMsgs_ = nullptr;
    std::shared_ptr<string> openConversationId_ = nullptr;
    std::shared_ptr<vector<string>> relevantorUserIds_ = nullptr;
    std::shared_ptr<string> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
