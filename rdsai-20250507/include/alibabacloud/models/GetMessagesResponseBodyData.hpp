// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetMessagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RetrieverResources, retrieverResources_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RetrieverResources, retrieverResources_);
    };
    GetMessagesResponseBodyData() = default ;
    GetMessagesResponseBodyData(const GetMessagesResponseBodyData &) = default ;
    GetMessagesResponseBodyData(GetMessagesResponseBodyData &&) = default ;
    GetMessagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessagesResponseBodyData() = default ;
    GetMessagesResponseBodyData& operator=(const GetMessagesResponseBodyData &) = default ;
    GetMessagesResponseBodyData& operator=(GetMessagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->conversationId_ == nullptr && return this->createdAt_ == nullptr && return this->feedback_ == nullptr && return this->id_ == nullptr && return this->query_ == nullptr
        && return this->retrieverResources_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline GetMessagesResponseBodyData& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string conversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetMessagesResponseBodyData& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetMessagesResponseBodyData& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline GetMessagesResponseBodyData& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetMessagesResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetMessagesResponseBodyData& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // retrieverResources Field Functions 
    bool hasRetrieverResources() const { return this->retrieverResources_ != nullptr;};
    void deleteRetrieverResources() { this->retrieverResources_ = nullptr;};
    inline const vector<Darabonba::Json> & retrieverResources() const { DARABONBA_PTR_GET_CONST(retrieverResources_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> retrieverResources() { DARABONBA_PTR_GET(retrieverResources_, vector<Darabonba::Json>) };
    inline GetMessagesResponseBodyData& setRetrieverResources(const vector<Darabonba::Json> & retrieverResources) { DARABONBA_PTR_SET_VALUE(retrieverResources_, retrieverResources) };
    inline GetMessagesResponseBodyData& setRetrieverResources(vector<Darabonba::Json> && retrieverResources) { DARABONBA_PTR_SET_RVALUE(retrieverResources_, retrieverResources) };


  protected:
    std::shared_ptr<string> answer_ = nullptr;
    std::shared_ptr<string> conversationId_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> feedback_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> retrieverResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
