// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHOPPINGASSISTANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SHOPPINGASSISTANTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ShoppingAssistantResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShoppingAssistantResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Citation, citation_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StopReason, stopReason_);
    };
    friend void from_json(const Darabonba::Json& j, ShoppingAssistantResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Citation, citation_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StopReason, stopReason_);
    };
    ShoppingAssistantResponseBody() = default ;
    ShoppingAssistantResponseBody(const ShoppingAssistantResponseBody &) = default ;
    ShoppingAssistantResponseBody(ShoppingAssistantResponseBody &&) = default ;
    ShoppingAssistantResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShoppingAssistantResponseBody() = default ;
    ShoppingAssistantResponseBody& operator=(const ShoppingAssistantResponseBody &) = default ;
    ShoppingAssistantResponseBody& operator=(ShoppingAssistantResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Citation, citation_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(StepInfo, stepInfo_);
        DARABONBA_PTR_TO_JSON(StopReason, stopReason_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Citation, citation_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(StepInfo, stepInfo_);
        DARABONBA_PTR_FROM_JSON(StopReason, stopReason_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StepInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StepInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Step, step_);
        };
        friend void from_json(const Darabonba::Json& j, StepInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Step, step_);
        };
        StepInfo() = default ;
        StepInfo(const StepInfo &) = default ;
        StepInfo(StepInfo &&) = default ;
        StepInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StepInfo() = default ;
        StepInfo& operator=(const StepInfo &) = default ;
        StepInfo& operator=(StepInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->step_ == nullptr; };
        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
        inline StepInfo& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      protected:
        // The step.
        shared_ptr<string> step_ {};
      };

      class Citation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Citation& obj) { 
          DARABONBA_PTR_TO_JSON(ItemId, itemId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Citation& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Citation() = default ;
        Citation(const Citation &) = default ;
        Citation(Citation &&) = default ;
        Citation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Citation() = default ;
        Citation& operator=(const Citation &) = default ;
        Citation& operator=(Citation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->itemId_ == nullptr
        && this->type_ == nullptr; };
        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline Citation& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Citation& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the item.
        shared_ptr<string> itemId_ {};
        // The reference data type. Fixed value: item.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->citation_ == nullptr
        && this->content_ == nullptr && this->errorCode_ == nullptr && this->stepInfo_ == nullptr && this->stopReason_ == nullptr; };
      // citation Field Functions 
      bool hasCitation() const { return this->citation_ != nullptr;};
      void deleteCitation() { this->citation_ = nullptr;};
      inline const Result::Citation & getCitation() const { DARABONBA_PTR_GET_CONST(citation_, Result::Citation) };
      inline Result::Citation getCitation() { DARABONBA_PTR_GET(citation_, Result::Citation) };
      inline Result& setCitation(const Result::Citation & citation) { DARABONBA_PTR_SET_VALUE(citation_, citation) };
      inline Result& setCitation(Result::Citation && citation) { DARABONBA_PTR_SET_RVALUE(citation_, citation) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Result& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // stepInfo Field Functions 
      bool hasStepInfo() const { return this->stepInfo_ != nullptr;};
      void deleteStepInfo() { this->stepInfo_ = nullptr;};
      inline const Result::StepInfo & getStepInfo() const { DARABONBA_PTR_GET_CONST(stepInfo_, Result::StepInfo) };
      inline Result::StepInfo getStepInfo() { DARABONBA_PTR_GET(stepInfo_, Result::StepInfo) };
      inline Result& setStepInfo(const Result::StepInfo & stepInfo) { DARABONBA_PTR_SET_VALUE(stepInfo_, stepInfo) };
      inline Result& setStepInfo(Result::StepInfo && stepInfo) { DARABONBA_PTR_SET_RVALUE(stepInfo_, stepInfo) };


      // stopReason Field Functions 
      bool hasStopReason() const { return this->stopReason_ != nullptr;};
      void deleteStopReason() { this->stopReason_ = nullptr;};
      inline string getStopReason() const { DARABONBA_PTR_GET_DEFAULT(stopReason_, "") };
      inline Result& setStopReason(string stopReason) { DARABONBA_PTR_SET_VALUE(stopReason_, stopReason) };


    protected:
      // The citation information.
      shared_ptr<Result::Citation> citation_ {};
      // The returned content.
      shared_ptr<string> content_ {};
      // The error message.
      shared_ptr<string> errorCode_ {};
      // The step information.
      shared_ptr<Result::StepInfo> stepInfo_ {};
      // The stop reason.
      shared_ptr<string> stopReason_ {};
    };

    class Citation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Citation& obj) { 
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Citation& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Citation() = default ;
      Citation(const Citation &) = default ;
      Citation(Citation &&) = default ;
      Citation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Citation() = default ;
      Citation& operator=(const Citation &) = default ;
      Citation& operator=(Citation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->itemId_ == nullptr
        && this->type_ == nullptr; };
      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline Citation& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Citation& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the `item`.
      shared_ptr<string> itemId_ {};
      // The reference data type. Fixed value: `item`.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->citation_ == nullptr
        && this->content_ == nullptr && this->conversationId_ == nullptr && this->errorCode_ == nullptr && this->event_ == nullptr && this->requestId_ == nullptr
        && this->result_ == nullptr && this->sessionId_ == nullptr && this->stopReason_ == nullptr; };
    // citation Field Functions 
    bool hasCitation() const { return this->citation_ != nullptr;};
    void deleteCitation() { this->citation_ = nullptr;};
    inline const ShoppingAssistantResponseBody::Citation & getCitation() const { DARABONBA_PTR_GET_CONST(citation_, ShoppingAssistantResponseBody::Citation) };
    inline ShoppingAssistantResponseBody::Citation getCitation() { DARABONBA_PTR_GET(citation_, ShoppingAssistantResponseBody::Citation) };
    inline ShoppingAssistantResponseBody& setCitation(const ShoppingAssistantResponseBody::Citation & citation) { DARABONBA_PTR_SET_VALUE(citation_, citation) };
    inline ShoppingAssistantResponseBody& setCitation(ShoppingAssistantResponseBody::Citation && citation) { DARABONBA_PTR_SET_RVALUE(citation_, citation) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ShoppingAssistantResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ShoppingAssistantResponseBody& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ShoppingAssistantResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline ShoppingAssistantResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ShoppingAssistantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ShoppingAssistantResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ShoppingAssistantResponseBody::Result) };
    inline ShoppingAssistantResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ShoppingAssistantResponseBody::Result) };
    inline ShoppingAssistantResponseBody& setResult(const ShoppingAssistantResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ShoppingAssistantResponseBody& setResult(ShoppingAssistantResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ShoppingAssistantResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stopReason Field Functions 
    bool hasStopReason() const { return this->stopReason_ != nullptr;};
    void deleteStopReason() { this->stopReason_ = nullptr;};
    inline string getStopReason() const { DARABONBA_PTR_GET_DEFAULT(stopReason_, "") };
    inline ShoppingAssistantResponseBody& setStopReason(string stopReason) { DARABONBA_PTR_SET_VALUE(stopReason_, stopReason) };


  protected:
    // The citation information.
    shared_ptr<ShoppingAssistantResponseBody::Citation> citation_ {};
    // The returned content.
    shared_ptr<string> content_ {};
    // The session ID.
    shared_ptr<string> conversationId_ {};
    // The error message.
    shared_ptr<string> errorCode_ {};
    // The event.
    shared_ptr<string> event_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result details.
    shared_ptr<ShoppingAssistantResponseBody::Result> result_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
    // The stop reason.
    shared_ptr<string> stopReason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
