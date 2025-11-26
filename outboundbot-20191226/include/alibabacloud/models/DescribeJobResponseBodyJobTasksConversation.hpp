// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBTASKSCONVERSATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBTASKSCONVERSATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeJobResponseBodyJobTasksConversationSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobResponseBodyJobTasksConversation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBodyJobTasksConversation& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(SequenceId, sequenceId_);
      DARABONBA_PTR_TO_JSON(Speaker, speaker_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBodyJobTasksConversation& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(SequenceId, sequenceId_);
      DARABONBA_PTR_FROM_JSON(Speaker, speaker_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeJobResponseBodyJobTasksConversation() = default ;
    DescribeJobResponseBodyJobTasksConversation(const DescribeJobResponseBodyJobTasksConversation &) = default ;
    DescribeJobResponseBodyJobTasksConversation(DescribeJobResponseBodyJobTasksConversation &&) = default ;
    DescribeJobResponseBodyJobTasksConversation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBodyJobTasksConversation() = default ;
    DescribeJobResponseBodyJobTasksConversation& operator=(const DescribeJobResponseBodyJobTasksConversation &) = default ;
    DescribeJobResponseBodyJobTasksConversation& operator=(DescribeJobResponseBodyJobTasksConversation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->actionParams_ == nullptr && return this->script_ == nullptr && return this->sequenceId_ == nullptr && return this->speaker_ == nullptr && return this->summary_ == nullptr
        && return this->timestamp_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeJobResponseBodyJobTasksConversation& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionParams Field Functions 
    bool hasActionParams() const { return this->actionParams_ != nullptr;};
    void deleteActionParams() { this->actionParams_ = nullptr;};
    inline string actionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
    inline DescribeJobResponseBodyJobTasksConversation& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline DescribeJobResponseBodyJobTasksConversation& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // sequenceId Field Functions 
    bool hasSequenceId() const { return this->sequenceId_ != nullptr;};
    void deleteSequenceId() { this->sequenceId_ = nullptr;};
    inline string sequenceId() const { DARABONBA_PTR_GET_DEFAULT(sequenceId_, "") };
    inline DescribeJobResponseBodyJobTasksConversation& setSequenceId(string sequenceId) { DARABONBA_PTR_SET_VALUE(sequenceId_, sequenceId) };


    // speaker Field Functions 
    bool hasSpeaker() const { return this->speaker_ != nullptr;};
    void deleteSpeaker() { this->speaker_ = nullptr;};
    inline string speaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
    inline DescribeJobResponseBodyJobTasksConversation& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const vector<Models::DescribeJobResponseBodyJobTasksConversationSummary> & summary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Models::DescribeJobResponseBodyJobTasksConversationSummary>) };
    inline vector<Models::DescribeJobResponseBodyJobTasksConversationSummary> summary() { DARABONBA_PTR_GET(summary_, vector<Models::DescribeJobResponseBodyJobTasksConversationSummary>) };
    inline DescribeJobResponseBodyJobTasksConversation& setSummary(const vector<Models::DescribeJobResponseBodyJobTasksConversationSummary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline DescribeJobResponseBodyJobTasksConversation& setSummary(vector<Models::DescribeJobResponseBodyJobTasksConversationSummary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeJobResponseBodyJobTasksConversation& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> actionParams_ = nullptr;
    std::shared_ptr<string> script_ = nullptr;
    std::shared_ptr<string> sequenceId_ = nullptr;
    std::shared_ptr<string> speaker_ = nullptr;
    std::shared_ptr<vector<Models::DescribeJobResponseBodyJobTasksConversationSummary>> summary_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
