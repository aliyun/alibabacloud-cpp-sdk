// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIALDIALOGUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIALDIALOGUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class TrialDialogueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrialDialogueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TrialDialogueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TrialDialogueResponseBody() = default ;
    TrialDialogueResponseBody(const TrialDialogueResponseBody &) = default ;
    TrialDialogueResponseBody(TrialDialogueResponseBody &&) = default ;
    TrialDialogueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrialDialogueResponseBody() = default ;
    TrialDialogueResponseBody& operator=(const TrialDialogueResponseBody &) = default ;
    TrialDialogueResponseBody& operator=(TrialDialogueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Answer, answer_);
        DARABONBA_PTR_TO_JSON(ControlParamsList, controlParamsList_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Extras, extras_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StreamEnd, streamEnd_);
        DARABONBA_PTR_TO_JSON(StreamId, streamId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Answer, answer_);
        DARABONBA_PTR_FROM_JSON(ControlParamsList, controlParamsList_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Extras, extras_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StreamEnd, streamEnd_);
        DARABONBA_PTR_FROM_JSON(StreamId, streamId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Extras : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Extras& obj) { 
          DARABONBA_PTR_TO_JSON(DebugInfo, debugInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Extras& obj) { 
          DARABONBA_PTR_FROM_JSON(DebugInfo, debugInfo_);
        };
        Extras() = default ;
        Extras(const Extras &) = default ;
        Extras(Extras &&) = default ;
        Extras(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Extras() = default ;
        Extras& operator=(const Extras &) = default ;
        Extras& operator=(Extras &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->debugInfo_ == nullptr; };
        // debugInfo Field Functions 
        bool hasDebugInfo() const { return this->debugInfo_ != nullptr;};
        void deleteDebugInfo() { this->debugInfo_ = nullptr;};
        inline string getDebugInfo() const { DARABONBA_PTR_GET_DEFAULT(debugInfo_, "") };
        inline Extras& setDebugInfo(string debugInfo) { DARABONBA_PTR_SET_VALUE(debugInfo_, debugInfo) };


      protected:
        // The debug information returned by the dialogue engine as a JSON string. It is returned only when the engine provides the debug information, and may be returned with supplementary events after the reply ends. The internal structure is determined by the engine. The example empty object string does not declare any fixed debug fields.
        shared_ptr<string> debugInfo_ {};
      };

      class ControlParamsList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ControlParamsList& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ControlParamsList& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ControlParamsList() = default ;
        ControlParamsList(const ControlParamsList &) = default ;
        ControlParamsList(ControlParamsList &&) = default ;
        ControlParamsList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ControlParamsList() = default ;
        ControlParamsList& operator=(const ControlParamsList &) = default ;
        ControlParamsList& operator=(ControlParamsList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ControlParamsList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The values declared in the control command type include Voice (voice reply), HangUp (hang up), Transfer (transfer), GatherDtmf (collect key presses), and SendSms (send SMS). This update supplements SendSms, which was omitted in the original description, without changing the backend structure or runtime enumeration constraints.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->answer_ == nullptr
        && this->controlParamsList_ == nullptr && this->endTime_ == nullptr && this->extras_ == nullptr && this->sessionId_ == nullptr && this->startTime_ == nullptr
        && this->streamEnd_ == nullptr && this->streamId_ == nullptr; };
      // answer Field Functions 
      bool hasAnswer() const { return this->answer_ != nullptr;};
      void deleteAnswer() { this->answer_ = nullptr;};
      inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
      inline Data& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


      // controlParamsList Field Functions 
      bool hasControlParamsList() const { return this->controlParamsList_ != nullptr;};
      void deleteControlParamsList() { this->controlParamsList_ = nullptr;};
      inline const vector<Data::ControlParamsList> & getControlParamsList() const { DARABONBA_PTR_GET_CONST(controlParamsList_, vector<Data::ControlParamsList>) };
      inline vector<Data::ControlParamsList> getControlParamsList() { DARABONBA_PTR_GET(controlParamsList_, vector<Data::ControlParamsList>) };
      inline Data& setControlParamsList(const vector<Data::ControlParamsList> & controlParamsList) { DARABONBA_PTR_SET_VALUE(controlParamsList_, controlParamsList) };
      inline Data& setControlParamsList(vector<Data::ControlParamsList> && controlParamsList) { DARABONBA_PTR_SET_RVALUE(controlParamsList_, controlParamsList) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // extras Field Functions 
      bool hasExtras() const { return this->extras_ != nullptr;};
      void deleteExtras() { this->extras_ = nullptr;};
      inline const Data::Extras & getExtras() const { DARABONBA_PTR_GET_CONST(extras_, Data::Extras) };
      inline Data::Extras getExtras() { DARABONBA_PTR_GET(extras_, Data::Extras) };
      inline Data& setExtras(const Data::Extras & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
      inline Data& setExtras(Data::Extras && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // streamEnd Field Functions 
      bool hasStreamEnd() const { return this->streamEnd_ != nullptr;};
      void deleteStreamEnd() { this->streamEnd_ = nullptr;};
      inline bool getStreamEnd() const { DARABONBA_PTR_GET_DEFAULT(streamEnd_, false) };
      inline Data& setStreamEnd(bool streamEnd) { DARABONBA_PTR_SET_VALUE(streamEnd_, streamEnd) };


      // streamId Field Functions 
      bool hasStreamId() const { return this->streamId_ != nullptr;};
      void deleteStreamId() { this->streamId_ = nullptr;};
      inline string getStreamId() const { DARABONBA_PTR_GET_DEFAULT(streamId_, "") };
      inline Data& setStreamId(string streamId) { DARABONBA_PTR_SET_VALUE(streamId_, streamId) };


    protected:
      // The robot reply text in the current streaming event. It may be returned across multiple SSE events, or it may be empty in the end event or debug event. Do not equate missing text with session failure. Whether the content is incremental or cumulative is determined by the output convention of the dialogue engine. The current general callback directly forwards the engine content.
      shared_ptr<string> answer_ {};
      // The robot control commands attached to this reply. The current POP structure only expands the command Type and does not add other command fields in this document. When no control commands are generated, the text service supplements a Voice type command.
      shared_ptr<vector<Data::ControlParamsList>> controlParamsList_ {};
      // The UNIX timestamp of the current streaming reply callback event, in milliseconds. It is generated based on the current callback time. It may also be returned when StreamEnd=false, and should not be directly interpreted as the end time of the entire conversation or call.
      shared_ptr<int64_t> endTime_ {};
      // The extended information object attached to the robot reply, which is different from the JSON event array of the request parameter Extras. The current POP expands the DebugInfo field. Whether it is actually returned depends on the engine used and the current turn of reply.
      shared_ptr<Data::Extras> extras_ {};
      // The session ID used to uniquely associate this interaction. For a text conversation, it is the text- identifier returned when the conversation is started. For web voice, it is the ws- identifier. For real number outbound call tests, it is the test- identifier. Subsequent calls must use the actual return value.
      shared_ptr<string> sessionId_ {};
      // The UNIX timestamp recorded when the streaming reply callback is entered for the first time in this turn, in milliseconds. Subsequent events in this turn use this time. It is not the session creation time, nor is it an update time in the general sense.
      shared_ptr<int64_t> startTime_ {};
      // Indicates whether the streaming output for the current reply turn has ended. A value of true indicates that the streaming output has ended and the service has completed the corresponding SSE response. A value of false indicates that there may still be subsequent events in this turn. This field does not indicate that the entire conversation or voice call has ended.
      shared_ptr<bool> streamEnd_ {};
      // The ID of the conversation turn to which this robot reply belongs. The same turn of reply can contain multiple streaming events. The text conversation context starts from 0 and increments during subsequent Dialogue calls. The actual return value of the engine shall prevail.
      shared_ptr<string> streamId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrialDialogueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TrialDialogueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TrialDialogueResponseBody::Data) };
    inline TrialDialogueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TrialDialogueResponseBody::Data) };
    inline TrialDialogueResponseBody& setData(const TrialDialogueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TrialDialogueResponseBody& setData(TrialDialogueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline TrialDialogueResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrialDialogueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline TrialDialogueResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline TrialDialogueResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrialDialogueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The business processing status code. OK indicates success. When an exception occurs, the corresponding business error code is returned. The error types and mapping rules follow the current API configuration, and no error codes are added or modified in this update.
    shared_ptr<string> code_ {};
    // The robot reply, turn ID, time, and control commands carried by the current SSE event. A single turn may have multiple events.
    shared_ptr<TrialDialogueResponseBody::Data> data_ {};
    // The HTTP status code recorded in the business response body. A normal return is 200. To determine whether the business is successful, you should also check Code. You cannot determine that the call is successful solely based on the presence of this field.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The business response or error description. It is usually empty or not returned upon success, and you cannot require a fixed text to be returned upon success. Upon failure, it is an error description used to assist troubleshooting, and should be combined with Code and Params to understand the cause of the error. The example is an error message when the experience link visitor token expires (corresponding to Code Expired.VisitorToken), and is for format reference only.
    shared_ptr<string> message_ {};
    // The list of parameters used for the localized display of error messages, which are not scenario variables or business results. A normal successful response is usually an empty array. When an error occurs, parameters corresponding to the error template may be returned.
    shared_ptr<vector<string>> params_ {};
    // The ID used to associate and troubleshoot this POP request. The value in the response corresponds to this request. System request parameters are injected by the gateway, and the caller does not need to fill in system fields.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
