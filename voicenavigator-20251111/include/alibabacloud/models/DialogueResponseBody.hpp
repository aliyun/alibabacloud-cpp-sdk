// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIALOGUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DIALOGUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class DialogueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DialogueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DialogueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DialogueResponseBody() = default ;
    DialogueResponseBody(const DialogueResponseBody &) = default ;
    DialogueResponseBody(DialogueResponseBody &&) = default ;
    DialogueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DialogueResponseBody() = default ;
    DialogueResponseBody& operator=(const DialogueResponseBody &) = default ;
    DialogueResponseBody& operator=(DialogueResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StreamEnd, streamEnd_);
        DARABONBA_PTR_TO_JSON(StreamId, streamId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Answer, answer_);
        DARABONBA_PTR_FROM_JSON(ControlParamsList, controlParamsList_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
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
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->answer_ == nullptr
        && this->controlParamsList_ == nullptr && this->endTime_ == nullptr && this->sessionId_ == nullptr && this->startTime_ == nullptr && this->streamEnd_ == nullptr
        && this->streamId_ == nullptr; };
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
      shared_ptr<string> answer_ {};
      shared_ptr<vector<Data::ControlParamsList>> controlParamsList_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<bool> streamEnd_ {};
      shared_ptr<string> streamId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DialogueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DialogueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DialogueResponseBody::Data) };
    inline DialogueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DialogueResponseBody::Data) };
    inline DialogueResponseBody& setData(const DialogueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DialogueResponseBody& setData(DialogueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DialogueResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DialogueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline DialogueResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline DialogueResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DialogueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DialogueResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
