// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AITEACHERSYNCPRACTICETASKGENERATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AITEACHERSYNCPRACTICETASKGENERATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class AITeacherSyncPracticeTaskGenerateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AITeacherSyncPracticeTaskGenerateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AITeacherSyncPracticeTaskGenerateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    AITeacherSyncPracticeTaskGenerateResponseBody() = default ;
    AITeacherSyncPracticeTaskGenerateResponseBody(const AITeacherSyncPracticeTaskGenerateResponseBody &) = default ;
    AITeacherSyncPracticeTaskGenerateResponseBody(AITeacherSyncPracticeTaskGenerateResponseBody &&) = default ;
    AITeacherSyncPracticeTaskGenerateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AITeacherSyncPracticeTaskGenerateResponseBody() = default ;
    AITeacherSyncPracticeTaskGenerateResponseBody& operator=(const AITeacherSyncPracticeTaskGenerateResponseBody &) = default ;
    AITeacherSyncPracticeTaskGenerateResponseBody& operator=(AITeacherSyncPracticeTaskGenerateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(taskContent, taskContent_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(taskContent, taskContent_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
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
      class TaskContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskContent& obj) { 
          DARABONBA_PTR_TO_JSON(assistant, assistant_);
          DARABONBA_PTR_TO_JSON(user, user_);
        };
        friend void from_json(const Darabonba::Json& j, TaskContent& obj) { 
          DARABONBA_PTR_FROM_JSON(assistant, assistant_);
          DARABONBA_PTR_FROM_JSON(user, user_);
        };
        TaskContent() = default ;
        TaskContent(const TaskContent &) = default ;
        TaskContent(TaskContent &&) = default ;
        TaskContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskContent() = default ;
        TaskContent& operator=(const TaskContent &) = default ;
        TaskContent& operator=(TaskContent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assistant_ == nullptr
        && this->user_ == nullptr; };
        // assistant Field Functions 
        bool hasAssistant() const { return this->assistant_ != nullptr;};
        void deleteAssistant() { this->assistant_ = nullptr;};
        inline string getAssistant() const { DARABONBA_PTR_GET_DEFAULT(assistant_, "") };
        inline TaskContent& setAssistant(string assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline TaskContent& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        shared_ptr<string> assistant_ {};
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->taskContent_ == nullptr
        && this->taskType_ == nullptr; };
      // taskContent Field Functions 
      bool hasTaskContent() const { return this->taskContent_ != nullptr;};
      void deleteTaskContent() { this->taskContent_ = nullptr;};
      inline const vector<Data::TaskContent> & getTaskContent() const { DARABONBA_PTR_GET_CONST(taskContent_, vector<Data::TaskContent>) };
      inline vector<Data::TaskContent> getTaskContent() { DARABONBA_PTR_GET(taskContent_, vector<Data::TaskContent>) };
      inline Data& setTaskContent(const vector<Data::TaskContent> & taskContent) { DARABONBA_PTR_SET_VALUE(taskContent_, taskContent) };
      inline Data& setTaskContent(vector<Data::TaskContent> && taskContent) { DARABONBA_PTR_SET_RVALUE(taskContent_, taskContent) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      shared_ptr<vector<Data::TaskContent>> taskContent_ {};
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AITeacherSyncPracticeTaskGenerateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AITeacherSyncPracticeTaskGenerateResponseBody::Data) };
    inline AITeacherSyncPracticeTaskGenerateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AITeacherSyncPracticeTaskGenerateResponseBody::Data) };
    inline AITeacherSyncPracticeTaskGenerateResponseBody& setData(const AITeacherSyncPracticeTaskGenerateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AITeacherSyncPracticeTaskGenerateResponseBody& setData(AITeacherSyncPracticeTaskGenerateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline AITeacherSyncPracticeTaskGenerateResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline AITeacherSyncPracticeTaskGenerateResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AITeacherSyncPracticeTaskGenerateResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AITeacherSyncPracticeTaskGenerateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AITeacherSyncPracticeTaskGenerateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<AITeacherSyncPracticeTaskGenerateResponseBody::Data> data_ {};
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
