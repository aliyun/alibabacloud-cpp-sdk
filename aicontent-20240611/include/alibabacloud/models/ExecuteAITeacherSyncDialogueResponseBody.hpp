// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAITEACHERSYNCDIALOGUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAITEACHERSYNCDIALOGUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteAITeacherSyncDialogueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAITeacherSyncDialogueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAITeacherSyncDialogueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ExecuteAITeacherSyncDialogueResponseBody() = default ;
    ExecuteAITeacherSyncDialogueResponseBody(const ExecuteAITeacherSyncDialogueResponseBody &) = default ;
    ExecuteAITeacherSyncDialogueResponseBody(ExecuteAITeacherSyncDialogueResponseBody &&) = default ;
    ExecuteAITeacherSyncDialogueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAITeacherSyncDialogueResponseBody() = default ;
    ExecuteAITeacherSyncDialogueResponseBody& operator=(const ExecuteAITeacherSyncDialogueResponseBody &) = default ;
    ExecuteAITeacherSyncDialogueResponseBody& operator=(ExecuteAITeacherSyncDialogueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(englishResult, englishResult_);
        DARABONBA_PTR_TO_JSON(isFinish, isFinish_);
        DARABONBA_PTR_TO_JSON(isOnTopic, isOnTopic_);
        DARABONBA_PTR_TO_JSON(questionIndex, questionIndex_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(englishResult, englishResult_);
        DARABONBA_PTR_FROM_JSON(isFinish, isFinish_);
        DARABONBA_PTR_FROM_JSON(isOnTopic, isOnTopic_);
        DARABONBA_PTR_FROM_JSON(questionIndex, questionIndex_);
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
      virtual bool empty() const override { return this->englishResult_ == nullptr
        && this->isFinish_ == nullptr && this->isOnTopic_ == nullptr && this->questionIndex_ == nullptr; };
      // englishResult Field Functions 
      bool hasEnglishResult() const { return this->englishResult_ != nullptr;};
      void deleteEnglishResult() { this->englishResult_ = nullptr;};
      inline string getEnglishResult() const { DARABONBA_PTR_GET_DEFAULT(englishResult_, "") };
      inline Data& setEnglishResult(string englishResult) { DARABONBA_PTR_SET_VALUE(englishResult_, englishResult) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Data& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


      // isOnTopic Field Functions 
      bool hasIsOnTopic() const { return this->isOnTopic_ != nullptr;};
      void deleteIsOnTopic() { this->isOnTopic_ = nullptr;};
      inline bool getIsOnTopic() const { DARABONBA_PTR_GET_DEFAULT(isOnTopic_, false) };
      inline Data& setIsOnTopic(bool isOnTopic) { DARABONBA_PTR_SET_VALUE(isOnTopic_, isOnTopic) };


      // questionIndex Field Functions 
      bool hasQuestionIndex() const { return this->questionIndex_ != nullptr;};
      void deleteQuestionIndex() { this->questionIndex_ = nullptr;};
      inline int32_t getQuestionIndex() const { DARABONBA_PTR_GET_DEFAULT(questionIndex_, 0) };
      inline Data& setQuestionIndex(int32_t questionIndex) { DARABONBA_PTR_SET_VALUE(questionIndex_, questionIndex) };


    protected:
      shared_ptr<string> englishResult_ {};
      shared_ptr<bool> isFinish_ {};
      shared_ptr<bool> isOnTopic_ {};
      shared_ptr<int32_t> questionIndex_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteAITeacherSyncDialogueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteAITeacherSyncDialogueResponseBody::Data) };
    inline ExecuteAITeacherSyncDialogueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteAITeacherSyncDialogueResponseBody::Data) };
    inline ExecuteAITeacherSyncDialogueResponseBody& setData(const ExecuteAITeacherSyncDialogueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteAITeacherSyncDialogueResponseBody& setData(ExecuteAITeacherSyncDialogueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ExecuteAITeacherSyncDialogueResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ExecuteAITeacherSyncDialogueResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ExecuteAITeacherSyncDialogueResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteAITeacherSyncDialogueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteAITeacherSyncDialogueResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ExecuteAITeacherSyncDialogueResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
