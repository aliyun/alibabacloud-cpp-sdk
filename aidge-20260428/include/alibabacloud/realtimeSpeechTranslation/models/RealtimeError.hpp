// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_REALTIMEERROR_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_REALTIMEERROR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace RealtimeSpeechTranslation
{
namespace Models
{
  class RealtimeError : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeError& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(error, error_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeError& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(error, error_);
    };
    RealtimeError() = default ;
    RealtimeError(const RealtimeError &) = default ;
    RealtimeError(RealtimeError &&) = default ;
    RealtimeError(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeError() = default ;
    RealtimeError& operator=(const RealtimeError &) = default ;
    RealtimeError& operator=(RealtimeError &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Error : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Error& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(param, param_);
        DARABONBA_PTR_TO_JSON(fatal, fatal_);
        DARABONBA_PTR_TO_JSON(retryable, retryable_);
        DARABONBA_PTR_TO_JSON(caused_by, causedBy_);
      };
      friend void from_json(const Darabonba::Json& j, Error& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(param, param_);
        DARABONBA_PTR_FROM_JSON(fatal, fatal_);
        DARABONBA_PTR_FROM_JSON(retryable, retryable_);
        DARABONBA_PTR_FROM_JSON(caused_by, causedBy_);
      };
      Error() = default ;
      Error(const Error &) = default ;
      Error(Error &&) = default ;
      Error(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Error() = default ;
      Error& operator=(const Error &) = default ;
      Error& operator=(Error &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->param_ == nullptr && this->fatal_ == nullptr && this->retryable_ == nullptr
        && this->causedBy_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Error& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
      inline Error& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


      // fatal Field Functions 
      bool hasFatal() const { return this->fatal_ != nullptr;};
      void deleteFatal() { this->fatal_ = nullptr;};
      inline bool getFatal() const { DARABONBA_PTR_GET_DEFAULT(fatal_, false) };
      inline Error& setFatal(bool fatal) { DARABONBA_PTR_SET_VALUE(fatal_, fatal) };


      // retryable Field Functions 
      bool hasRetryable() const { return this->retryable_ != nullptr;};
      void deleteRetryable() { this->retryable_ = nullptr;};
      inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
      inline Error& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


      // causedBy Field Functions 
      bool hasCausedBy() const { return this->causedBy_ != nullptr;};
      void deleteCausedBy() { this->causedBy_ = nullptr;};
      inline string getCausedBy() const { DARABONBA_PTR_GET_DEFAULT(causedBy_, "") };
      inline Error& setCausedBy(string causedBy) { DARABONBA_PTR_SET_VALUE(causedBy_, causedBy) };


    protected:
      shared_ptr<string> type_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> param_ {};
      shared_ptr<bool> fatal_ {};
      shared_ptr<bool> retryable_ {};
      shared_ptr<string> causedBy_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->error_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RealtimeError& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RealtimeError& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RealtimeError& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const RealtimeError::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, RealtimeError::Error) };
    inline RealtimeError::Error getError() { DARABONBA_PTR_GET(error_, RealtimeError::Error) };
    inline RealtimeError& setError(const RealtimeError::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline RealtimeError& setError(RealtimeError::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<RealtimeError::Error> error_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
