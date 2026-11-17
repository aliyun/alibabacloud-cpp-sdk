// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTDIRECTCONVERSATIONTOWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONVERTDIRECTCONVERSATIONTOWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ConvertDirectConversationToWorkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertDirectConversationToWorkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(conversionId, conversionId_);
      DARABONBA_PTR_TO_JSON(convertedRounds, convertedRounds_);
      DARABONBA_PTR_TO_JSON(historyScope, historyScope_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(retryable, retryable_);
      DARABONBA_PTR_TO_JSON(sourceEpoch, sourceEpoch_);
      DARABONBA_PTR_TO_JSON(sourceSessionId, sourceSessionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(targetSessionId, targetSessionId_);
      DARABONBA_PTR_TO_JSON(throughSequence, throughSequence_);
      DARABONBA_PTR_TO_JSON(workMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertDirectConversationToWorkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(conversionId, conversionId_);
      DARABONBA_PTR_FROM_JSON(convertedRounds, convertedRounds_);
      DARABONBA_PTR_FROM_JSON(historyScope, historyScope_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(retryable, retryable_);
      DARABONBA_PTR_FROM_JSON(sourceEpoch, sourceEpoch_);
      DARABONBA_PTR_FROM_JSON(sourceSessionId, sourceSessionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(targetSessionId, targetSessionId_);
      DARABONBA_PTR_FROM_JSON(throughSequence, throughSequence_);
      DARABONBA_PTR_FROM_JSON(workMode, workMode_);
    };
    ConvertDirectConversationToWorkResponseBody() = default ;
    ConvertDirectConversationToWorkResponseBody(const ConvertDirectConversationToWorkResponseBody &) = default ;
    ConvertDirectConversationToWorkResponseBody(ConvertDirectConversationToWorkResponseBody &&) = default ;
    ConvertDirectConversationToWorkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertDirectConversationToWorkResponseBody() = default ;
    ConvertDirectConversationToWorkResponseBody& operator=(const ConvertDirectConversationToWorkResponseBody &) = default ;
    ConvertDirectConversationToWorkResponseBody& operator=(ConvertDirectConversationToWorkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->conversionId_ == nullptr && this->convertedRounds_ == nullptr && this->historyScope_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->retryable_ == nullptr && this->sourceEpoch_ == nullptr && this->sourceSessionId_ == nullptr && this->status_ == nullptr && this->targetSessionId_ == nullptr
        && this->throughSequence_ == nullptr && this->workMode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // conversionId Field Functions 
    bool hasConversionId() const { return this->conversionId_ != nullptr;};
    void deleteConversionId() { this->conversionId_ = nullptr;};
    inline string getConversionId() const { DARABONBA_PTR_GET_DEFAULT(conversionId_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setConversionId(string conversionId) { DARABONBA_PTR_SET_VALUE(conversionId_, conversionId) };


    // convertedRounds Field Functions 
    bool hasConvertedRounds() const { return this->convertedRounds_ != nullptr;};
    void deleteConvertedRounds() { this->convertedRounds_ = nullptr;};
    inline int32_t getConvertedRounds() const { DARABONBA_PTR_GET_DEFAULT(convertedRounds_, 0) };
    inline ConvertDirectConversationToWorkResponseBody& setConvertedRounds(int32_t convertedRounds) { DARABONBA_PTR_SET_VALUE(convertedRounds_, convertedRounds) };


    // historyScope Field Functions 
    bool hasHistoryScope() const { return this->historyScope_ != nullptr;};
    void deleteHistoryScope() { this->historyScope_ = nullptr;};
    inline string getHistoryScope() const { DARABONBA_PTR_GET_DEFAULT(historyScope_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setHistoryScope(string historyScope) { DARABONBA_PTR_SET_VALUE(historyScope_, historyScope) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retryable Field Functions 
    bool hasRetryable() const { return this->retryable_ != nullptr;};
    void deleteRetryable() { this->retryable_ = nullptr;};
    inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
    inline ConvertDirectConversationToWorkResponseBody& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


    // sourceEpoch Field Functions 
    bool hasSourceEpoch() const { return this->sourceEpoch_ != nullptr;};
    void deleteSourceEpoch() { this->sourceEpoch_ = nullptr;};
    inline int64_t getSourceEpoch() const { DARABONBA_PTR_GET_DEFAULT(sourceEpoch_, 0L) };
    inline ConvertDirectConversationToWorkResponseBody& setSourceEpoch(int64_t sourceEpoch) { DARABONBA_PTR_SET_VALUE(sourceEpoch_, sourceEpoch) };


    // sourceSessionId Field Functions 
    bool hasSourceSessionId() const { return this->sourceSessionId_ != nullptr;};
    void deleteSourceSessionId() { this->sourceSessionId_ = nullptr;};
    inline string getSourceSessionId() const { DARABONBA_PTR_GET_DEFAULT(sourceSessionId_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setSourceSessionId(string sourceSessionId) { DARABONBA_PTR_SET_VALUE(sourceSessionId_, sourceSessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetSessionId Field Functions 
    bool hasTargetSessionId() const { return this->targetSessionId_ != nullptr;};
    void deleteTargetSessionId() { this->targetSessionId_ = nullptr;};
    inline string getTargetSessionId() const { DARABONBA_PTR_GET_DEFAULT(targetSessionId_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setTargetSessionId(string targetSessionId) { DARABONBA_PTR_SET_VALUE(targetSessionId_, targetSessionId) };


    // throughSequence Field Functions 
    bool hasThroughSequence() const { return this->throughSequence_ != nullptr;};
    void deleteThroughSequence() { this->throughSequence_ = nullptr;};
    inline int64_t getThroughSequence() const { DARABONBA_PTR_GET_DEFAULT(throughSequence_, 0L) };
    inline ConvertDirectConversationToWorkResponseBody& setThroughSequence(int64_t throughSequence) { DARABONBA_PTR_SET_VALUE(throughSequence_, throughSequence) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline ConvertDirectConversationToWorkResponseBody& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The session conversion record ID.
    shared_ptr<string> conversionId_ {};
    // The number of converted conversation turns.
    shared_ptr<int32_t> convertedRounds_ {};
    // The scope of the converted historical messages.
    shared_ptr<string> historyScope_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Specifies whether retries are supported.
    shared_ptr<bool> retryable_ {};
    // The source session version identifier.
    shared_ptr<int64_t> sourceEpoch_ {};
    // The source session ID.
    shared_ptr<string> sourceSessionId_ {};
    // The conversion status.
    shared_ptr<string> status_ {};
    // The target work session ID.
    shared_ptr<string> targetSessionId_ {};
    // The cutoff message sequence number for the conversion.
    shared_ptr<int64_t> throughSequence_ {};
    // The work session mode.
    shared_ptr<string> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
