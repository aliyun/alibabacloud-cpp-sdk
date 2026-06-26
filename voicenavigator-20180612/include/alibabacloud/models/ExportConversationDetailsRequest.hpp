// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTCONVERSATIONDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTCONVERSATIONDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ExportConversationDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportConversationDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTimeLeftRange, beginTimeLeftRange_);
      DARABONBA_PTR_TO_JSON(BeginTimeRightRange, beginTimeRightRange_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(DebugConversation, debugConversation_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RoundsLeftRange, roundsLeftRange_);
      DARABONBA_PTR_TO_JSON(RoundsRightRange, roundsRightRange_);
    };
    friend void from_json(const Darabonba::Json& j, ExportConversationDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTimeLeftRange, beginTimeLeftRange_);
      DARABONBA_PTR_FROM_JSON(BeginTimeRightRange, beginTimeRightRange_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(DebugConversation, debugConversation_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RoundsLeftRange, roundsLeftRange_);
      DARABONBA_PTR_FROM_JSON(RoundsRightRange, roundsRightRange_);
    };
    ExportConversationDetailsRequest() = default ;
    ExportConversationDetailsRequest(const ExportConversationDetailsRequest &) = default ;
    ExportConversationDetailsRequest(ExportConversationDetailsRequest &&) = default ;
    ExportConversationDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportConversationDetailsRequest() = default ;
    ExportConversationDetailsRequest& operator=(const ExportConversationDetailsRequest &) = default ;
    ExportConversationDetailsRequest& operator=(ExportConversationDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTimeLeftRange_ == nullptr
        && this->beginTimeRightRange_ == nullptr && this->callingNumber_ == nullptr && this->debugConversation_ == nullptr && this->instanceId_ == nullptr && this->options_ == nullptr
        && this->result_ == nullptr && this->roundsLeftRange_ == nullptr && this->roundsRightRange_ == nullptr; };
    // beginTimeLeftRange Field Functions 
    bool hasBeginTimeLeftRange() const { return this->beginTimeLeftRange_ != nullptr;};
    void deleteBeginTimeLeftRange() { this->beginTimeLeftRange_ = nullptr;};
    inline int64_t getBeginTimeLeftRange() const { DARABONBA_PTR_GET_DEFAULT(beginTimeLeftRange_, 0L) };
    inline ExportConversationDetailsRequest& setBeginTimeLeftRange(int64_t beginTimeLeftRange) { DARABONBA_PTR_SET_VALUE(beginTimeLeftRange_, beginTimeLeftRange) };


    // beginTimeRightRange Field Functions 
    bool hasBeginTimeRightRange() const { return this->beginTimeRightRange_ != nullptr;};
    void deleteBeginTimeRightRange() { this->beginTimeRightRange_ = nullptr;};
    inline int64_t getBeginTimeRightRange() const { DARABONBA_PTR_GET_DEFAULT(beginTimeRightRange_, 0L) };
    inline ExportConversationDetailsRequest& setBeginTimeRightRange(int64_t beginTimeRightRange) { DARABONBA_PTR_SET_VALUE(beginTimeRightRange_, beginTimeRightRange) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline ExportConversationDetailsRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // debugConversation Field Functions 
    bool hasDebugConversation() const { return this->debugConversation_ != nullptr;};
    void deleteDebugConversation() { this->debugConversation_ = nullptr;};
    inline int32_t getDebugConversation() const { DARABONBA_PTR_GET_DEFAULT(debugConversation_, 0) };
    inline ExportConversationDetailsRequest& setDebugConversation(int32_t debugConversation) { DARABONBA_PTR_SET_VALUE(debugConversation_, debugConversation) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExportConversationDetailsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<string> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<string>) };
    inline vector<string> getOptions() { DARABONBA_PTR_GET(options_, vector<string>) };
    inline ExportConversationDetailsRequest& setOptions(const vector<string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ExportConversationDetailsRequest& setOptions(vector<string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline ExportConversationDetailsRequest& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // roundsLeftRange Field Functions 
    bool hasRoundsLeftRange() const { return this->roundsLeftRange_ != nullptr;};
    void deleteRoundsLeftRange() { this->roundsLeftRange_ = nullptr;};
    inline int32_t getRoundsLeftRange() const { DARABONBA_PTR_GET_DEFAULT(roundsLeftRange_, 0) };
    inline ExportConversationDetailsRequest& setRoundsLeftRange(int32_t roundsLeftRange) { DARABONBA_PTR_SET_VALUE(roundsLeftRange_, roundsLeftRange) };


    // roundsRightRange Field Functions 
    bool hasRoundsRightRange() const { return this->roundsRightRange_ != nullptr;};
    void deleteRoundsRightRange() { this->roundsRightRange_ = nullptr;};
    inline int32_t getRoundsRightRange() const { DARABONBA_PTR_GET_DEFAULT(roundsRightRange_, 0) };
    inline ExportConversationDetailsRequest& setRoundsRightRange(int32_t roundsRightRange) { DARABONBA_PTR_SET_VALUE(roundsRightRange_, roundsRightRange) };


  protected:
    // The beginning of the time range to query. This value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> beginTimeLeftRange_ {};
    // The end of the time range to query. This value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> beginTimeRightRange_ {};
    // The calling number.
    shared_ptr<string> callingNumber_ {};
    shared_ptr<int32_t> debugConversation_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // An array of optional parameters.
    shared_ptr<vector<string>> options_ {};
    // The result of the conversation.
    shared_ptr<int32_t> result_ {};
    // The minimum number of conversation turns.
    shared_ptr<int32_t> roundsLeftRange_ {};
    // The maximum number of conversation turns.
    shared_ptr<int32_t> roundsRightRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
