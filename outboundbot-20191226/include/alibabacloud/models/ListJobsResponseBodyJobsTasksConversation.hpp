// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSTASKSCONVERSATION_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSTASKSCONVERSATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobsResponseBodyJobsTasksConversationSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobsResponseBodyJobsTasksConversation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobsTasksConversation& obj) { 
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Speaker, speaker_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobsTasksConversation& obj) { 
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Speaker, speaker_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListJobsResponseBodyJobsTasksConversation() = default ;
    ListJobsResponseBodyJobsTasksConversation(const ListJobsResponseBodyJobsTasksConversation &) = default ;
    ListJobsResponseBodyJobsTasksConversation(ListJobsResponseBodyJobsTasksConversation &&) = default ;
    ListJobsResponseBodyJobsTasksConversation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobsTasksConversation() = default ;
    ListJobsResponseBodyJobsTasksConversation& operator=(const ListJobsResponseBodyJobsTasksConversation &) = default ;
    ListJobsResponseBodyJobsTasksConversation& operator=(ListJobsResponseBodyJobsTasksConversation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->script_ == nullptr
        && return this->speaker_ == nullptr && return this->summary_ == nullptr && return this->timestamp_ == nullptr; };
    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline ListJobsResponseBodyJobsTasksConversation& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // speaker Field Functions 
    bool hasSpeaker() const { return this->speaker_ != nullptr;};
    void deleteSpeaker() { this->speaker_ = nullptr;};
    inline string speaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
    inline ListJobsResponseBodyJobsTasksConversation& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyJobsTasksConversationSummary> & summary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Models::ListJobsResponseBodyJobsTasksConversationSummary>) };
    inline vector<Models::ListJobsResponseBodyJobsTasksConversationSummary> summary() { DARABONBA_PTR_GET(summary_, vector<Models::ListJobsResponseBodyJobsTasksConversationSummary>) };
    inline ListJobsResponseBodyJobsTasksConversation& setSummary(const vector<Models::ListJobsResponseBodyJobsTasksConversationSummary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline ListJobsResponseBodyJobsTasksConversation& setSummary(vector<Models::ListJobsResponseBodyJobsTasksConversationSummary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListJobsResponseBodyJobsTasksConversation& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> script_ = nullptr;
    std::shared_ptr<string> speaker_ = nullptr;
    std::shared_ptr<vector<Models::ListJobsResponseBodyJobsTasksConversationSummary>> summary_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
