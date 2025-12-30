// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATQUESTIONRESPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATQUESTIONRESPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetChatQuestionRespResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatQuestionRespResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatQuestionRespResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetChatQuestionRespResponseBody() = default ;
    GetChatQuestionRespResponseBody(const GetChatQuestionRespResponseBody &) = default ;
    GetChatQuestionRespResponseBody(GetChatQuestionRespResponseBody &&) = default ;
    GetChatQuestionRespResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatQuestionRespResponseBody() = default ;
    GetChatQuestionRespResponseBody& operator=(const GetChatQuestionRespResponseBody &) = default ;
    GetChatQuestionRespResponseBody& operator=(GetChatQuestionRespResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentState, currentState_);
        DARABONBA_PTR_TO_JSON(questionList, questionList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentState, currentState_);
        DARABONBA_PTR_FROM_JSON(questionList, questionList_);
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
      class QuestionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuestionList& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(oriContent, oriContent_);
          DARABONBA_PTR_TO_JSON(reply, reply_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
          DARABONBA_PTR_TO_JSON(userName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, QuestionList& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(oriContent, oriContent_);
          DARABONBA_PTR_FROM_JSON(reply, reply_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
          DARABONBA_PTR_FROM_JSON(userName, userName_);
        };
        QuestionList() = default ;
        QuestionList(const QuestionList &) = default ;
        QuestionList(QuestionList &&) = default ;
        QuestionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuestionList() = default ;
        QuestionList& operator=(const QuestionList &) = default ;
        QuestionList& operator=(QuestionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->gmtCreate_ == nullptr && this->oriContent_ == nullptr && this->reply_ == nullptr && this->sessionId_ == nullptr && this->type_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline QuestionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline QuestionList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // oriContent Field Functions 
        bool hasOriContent() const { return this->oriContent_ != nullptr;};
        void deleteOriContent() { this->oriContent_ = nullptr;};
        inline string getOriContent() const { DARABONBA_PTR_GET_DEFAULT(oriContent_, "") };
        inline QuestionList& setOriContent(string oriContent) { DARABONBA_PTR_SET_VALUE(oriContent_, oriContent) };


        // reply Field Functions 
        bool hasReply() const { return this->reply_ != nullptr;};
        void deleteReply() { this->reply_ = nullptr;};
        inline string getReply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
        inline QuestionList& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline QuestionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline QuestionList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline QuestionList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline QuestionList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> oriContent_ {};
        shared_ptr<string> reply_ {};
        shared_ptr<string> sessionId_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->currentState_ == nullptr
        && this->questionList_ == nullptr; };
      // currentState Field Functions 
      bool hasCurrentState() const { return this->currentState_ != nullptr;};
      void deleteCurrentState() { this->currentState_ = nullptr;};
      inline string getCurrentState() const { DARABONBA_PTR_GET_DEFAULT(currentState_, "") };
      inline Data& setCurrentState(string currentState) { DARABONBA_PTR_SET_VALUE(currentState_, currentState) };


      // questionList Field Functions 
      bool hasQuestionList() const { return this->questionList_ != nullptr;};
      void deleteQuestionList() { this->questionList_ = nullptr;};
      inline const vector<Data::QuestionList> & getQuestionList() const { DARABONBA_PTR_GET_CONST(questionList_, vector<Data::QuestionList>) };
      inline vector<Data::QuestionList> getQuestionList() { DARABONBA_PTR_GET(questionList_, vector<Data::QuestionList>) };
      inline Data& setQuestionList(const vector<Data::QuestionList> & questionList) { DARABONBA_PTR_SET_VALUE(questionList_, questionList) };
      inline Data& setQuestionList(vector<Data::QuestionList> && questionList) { DARABONBA_PTR_SET_RVALUE(questionList_, questionList) };


    protected:
      shared_ptr<string> currentState_ {};
      shared_ptr<vector<Data::QuestionList>> questionList_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetChatQuestionRespResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetChatQuestionRespResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetChatQuestionRespResponseBody::Data) };
    inline GetChatQuestionRespResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetChatQuestionRespResponseBody::Data) };
    inline GetChatQuestionRespResponseBody& setData(const GetChatQuestionRespResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatQuestionRespResponseBody& setData(GetChatQuestionRespResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetChatQuestionRespResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetChatQuestionRespResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChatQuestionRespResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatQuestionRespResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetChatQuestionRespResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetChatQuestionRespResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetChatQuestionRespResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
