// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCONVERSATIONTIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCONVERSATIONTIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetAgentConversationTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentConversationTimelineResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(replayCursor, replayCursor_);
      DARABONBA_ANY_TO_JSON(responseFeedback, responseFeedback_);
      DARABONBA_ANY_TO_JSON(runs, runs_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentConversationTimelineResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(replayCursor, replayCursor_);
      DARABONBA_ANY_FROM_JSON(responseFeedback, responseFeedback_);
      DARABONBA_ANY_FROM_JSON(runs, runs_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    GetAgentConversationTimelineResponseBody() = default ;
    GetAgentConversationTimelineResponseBody(const GetAgentConversationTimelineResponseBody &) = default ;
    GetAgentConversationTimelineResponseBody(GetAgentConversationTimelineResponseBody &&) = default ;
    GetAgentConversationTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentConversationTimelineResponseBody() = default ;
    GetAgentConversationTimelineResponseBody& operator=(const GetAgentConversationTimelineResponseBody &) = default ;
    GetAgentConversationTimelineResponseBody& operator=(GetAgentConversationTimelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && this->replayCursor_ == nullptr && this->responseFeedback_ == nullptr && this->runs_ == nullptr && this->source_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline     const Darabonba::Json & getItems() const { DARABONBA_GET(items_) };
    Darabonba::Json & getItems() { DARABONBA_GET(items_) };
    inline GetAgentConversationTimelineResponseBody& setItems(const Darabonba::Json & items) { DARABONBA_SET_VALUE(items_, items) };
    inline GetAgentConversationTimelineResponseBody& setItems(Darabonba::Json && items) { DARABONBA_SET_RVALUE(items_, items) };


    // replayCursor Field Functions 
    bool hasReplayCursor() const { return this->replayCursor_ != nullptr;};
    void deleteReplayCursor() { this->replayCursor_ = nullptr;};
    inline int64_t getReplayCursor() const { DARABONBA_PTR_GET_DEFAULT(replayCursor_, 0L) };
    inline GetAgentConversationTimelineResponseBody& setReplayCursor(int64_t replayCursor) { DARABONBA_PTR_SET_VALUE(replayCursor_, replayCursor) };


    // responseFeedback Field Functions 
    bool hasResponseFeedback() const { return this->responseFeedback_ != nullptr;};
    void deleteResponseFeedback() { this->responseFeedback_ = nullptr;};
    inline     const Darabonba::Json & getResponseFeedback() const { DARABONBA_GET(responseFeedback_) };
    Darabonba::Json & getResponseFeedback() { DARABONBA_GET(responseFeedback_) };
    inline GetAgentConversationTimelineResponseBody& setResponseFeedback(const Darabonba::Json & responseFeedback) { DARABONBA_SET_VALUE(responseFeedback_, responseFeedback) };
    inline GetAgentConversationTimelineResponseBody& setResponseFeedback(Darabonba::Json && responseFeedback) { DARABONBA_SET_RVALUE(responseFeedback_, responseFeedback) };


    // runs Field Functions 
    bool hasRuns() const { return this->runs_ != nullptr;};
    void deleteRuns() { this->runs_ = nullptr;};
    inline     const Darabonba::Json & getRuns() const { DARABONBA_GET(runs_) };
    Darabonba::Json & getRuns() { DARABONBA_GET(runs_) };
    inline GetAgentConversationTimelineResponseBody& setRuns(const Darabonba::Json & runs) { DARABONBA_SET_VALUE(runs_, runs) };
    inline GetAgentConversationTimelineResponseBody& setRuns(Darabonba::Json && runs) { DARABONBA_SET_RVALUE(runs_, runs) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAgentConversationTimelineResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    Darabonba::Json items_ {};
    shared_ptr<int64_t> replayCursor_ {};
    Darabonba::Json responseFeedback_ {};
    Darabonba::Json runs_ {};
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
