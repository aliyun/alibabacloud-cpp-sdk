// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARYCONVERSATIONALSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYRESPONSEBODYSUMMARYCONVERSATIONALSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesSummaryResponseBodySummaryConversationalSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesSummaryResponseBodySummaryConversationalSummary& obj) { 
      DARABONBA_PTR_TO_JSON(SpeakerId, speakerId_);
      DARABONBA_PTR_TO_JSON(SpeakerName, speakerName_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesSummaryResponseBodySummaryConversationalSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(SpeakerId, speakerId_);
      DARABONBA_PTR_FROM_JSON(SpeakerName, speakerName_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    QueryMinutesSummaryResponseBodySummaryConversationalSummary() = default ;
    QueryMinutesSummaryResponseBodySummaryConversationalSummary(const QueryMinutesSummaryResponseBodySummaryConversationalSummary &) = default ;
    QueryMinutesSummaryResponseBodySummaryConversationalSummary(QueryMinutesSummaryResponseBodySummaryConversationalSummary &&) = default ;
    QueryMinutesSummaryResponseBodySummaryConversationalSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesSummaryResponseBodySummaryConversationalSummary() = default ;
    QueryMinutesSummaryResponseBodySummaryConversationalSummary& operator=(const QueryMinutesSummaryResponseBodySummaryConversationalSummary &) = default ;
    QueryMinutesSummaryResponseBodySummaryConversationalSummary& operator=(QueryMinutesSummaryResponseBodySummaryConversationalSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->speakerId_ == nullptr
        && return this->speakerName_ == nullptr && return this->summary_ == nullptr; };
    // speakerId Field Functions 
    bool hasSpeakerId() const { return this->speakerId_ != nullptr;};
    void deleteSpeakerId() { this->speakerId_ = nullptr;};
    inline string speakerId() const { DARABONBA_PTR_GET_DEFAULT(speakerId_, "") };
    inline QueryMinutesSummaryResponseBodySummaryConversationalSummary& setSpeakerId(string speakerId) { DARABONBA_PTR_SET_VALUE(speakerId_, speakerId) };


    // speakerName Field Functions 
    bool hasSpeakerName() const { return this->speakerName_ != nullptr;};
    void deleteSpeakerName() { this->speakerName_ = nullptr;};
    inline string speakerName() const { DARABONBA_PTR_GET_DEFAULT(speakerName_, "") };
    inline QueryMinutesSummaryResponseBodySummaryConversationalSummary& setSpeakerName(string speakerName) { DARABONBA_PTR_SET_VALUE(speakerName_, speakerName) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline QueryMinutesSummaryResponseBodySummaryConversationalSummary& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<string> speakerId_ = nullptr;
    std::shared_ptr<string> speakerName_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
