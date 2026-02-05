// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALQUESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALQUESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListGlobalQuestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalQuestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GlobalQuestions, globalQuestions_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalQuestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GlobalQuestions, globalQuestions_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGlobalQuestionsResponseBody() = default ;
    ListGlobalQuestionsResponseBody(const ListGlobalQuestionsResponseBody &) = default ;
    ListGlobalQuestionsResponseBody(ListGlobalQuestionsResponseBody &&) = default ;
    ListGlobalQuestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalQuestionsResponseBody() = default ;
    ListGlobalQuestionsResponseBody& operator=(const ListGlobalQuestionsResponseBody &) = default ;
    ListGlobalQuestionsResponseBody& operator=(ListGlobalQuestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalQuestions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalQuestions& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalQuestions& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      GlobalQuestions() = default ;
      GlobalQuestions(const GlobalQuestions &) = default ;
      GlobalQuestions(GlobalQuestions &&) = default ;
      GlobalQuestions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalQuestions() = default ;
      GlobalQuestions& operator=(const GlobalQuestions &) = default ;
      GlobalQuestions& operator=(GlobalQuestions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Answers, answers_);
          DARABONBA_PTR_TO_JSON(GlobalQuestionId, globalQuestionId_);
          DARABONBA_PTR_TO_JSON(GlobalQuestionName, globalQuestionName_);
          DARABONBA_PTR_TO_JSON(GlobalQuestionType, globalQuestionType_);
          DARABONBA_PTR_TO_JSON(Questions, questions_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Answers, answers_);
          DARABONBA_PTR_FROM_JSON(GlobalQuestionId, globalQuestionId_);
          DARABONBA_PTR_FROM_JSON(GlobalQuestionName, globalQuestionName_);
          DARABONBA_PTR_FROM_JSON(GlobalQuestionType, globalQuestionType_);
          DARABONBA_PTR_FROM_JSON(Questions, questions_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answers_ == nullptr
        && this->globalQuestionId_ == nullptr && this->globalQuestionName_ == nullptr && this->globalQuestionType_ == nullptr && this->questions_ == nullptr && this->scriptId_ == nullptr; };
        // answers Field Functions 
        bool hasAnswers() const { return this->answers_ != nullptr;};
        void deleteAnswers() { this->answers_ = nullptr;};
        inline string getAnswers() const { DARABONBA_PTR_GET_DEFAULT(answers_, "") };
        inline List& setAnswers(string answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };


        // globalQuestionId Field Functions 
        bool hasGlobalQuestionId() const { return this->globalQuestionId_ != nullptr;};
        void deleteGlobalQuestionId() { this->globalQuestionId_ = nullptr;};
        inline string getGlobalQuestionId() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionId_, "") };
        inline List& setGlobalQuestionId(string globalQuestionId) { DARABONBA_PTR_SET_VALUE(globalQuestionId_, globalQuestionId) };


        // globalQuestionName Field Functions 
        bool hasGlobalQuestionName() const { return this->globalQuestionName_ != nullptr;};
        void deleteGlobalQuestionName() { this->globalQuestionName_ = nullptr;};
        inline string getGlobalQuestionName() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionName_, "") };
        inline List& setGlobalQuestionName(string globalQuestionName) { DARABONBA_PTR_SET_VALUE(globalQuestionName_, globalQuestionName) };


        // globalQuestionType Field Functions 
        bool hasGlobalQuestionType() const { return this->globalQuestionType_ != nullptr;};
        void deleteGlobalQuestionType() { this->globalQuestionType_ = nullptr;};
        inline string getGlobalQuestionType() const { DARABONBA_PTR_GET_DEFAULT(globalQuestionType_, "") };
        inline List& setGlobalQuestionType(string globalQuestionType) { DARABONBA_PTR_SET_VALUE(globalQuestionType_, globalQuestionType) };


        // questions Field Functions 
        bool hasQuestions() const { return this->questions_ != nullptr;};
        void deleteQuestions() { this->questions_ = nullptr;};
        inline string getQuestions() const { DARABONBA_PTR_GET_DEFAULT(questions_, "") };
        inline List& setQuestions(string questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline List& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      protected:
        shared_ptr<string> answers_ {};
        shared_ptr<string> globalQuestionId_ {};
        shared_ptr<string> globalQuestionName_ {};
        shared_ptr<string> globalQuestionType_ {};
        shared_ptr<string> questions_ {};
        shared_ptr<string> scriptId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<GlobalQuestions::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<GlobalQuestions::List>) };
      inline vector<GlobalQuestions::List> getList() { DARABONBA_PTR_GET(list_, vector<GlobalQuestions::List>) };
      inline GlobalQuestions& setList(const vector<GlobalQuestions::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline GlobalQuestions& setList(vector<GlobalQuestions::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline GlobalQuestions& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline GlobalQuestions& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline GlobalQuestions& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<GlobalQuestions::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->globalQuestions_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGlobalQuestionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // globalQuestions Field Functions 
    bool hasGlobalQuestions() const { return this->globalQuestions_ != nullptr;};
    void deleteGlobalQuestions() { this->globalQuestions_ = nullptr;};
    inline const ListGlobalQuestionsResponseBody::GlobalQuestions & getGlobalQuestions() const { DARABONBA_PTR_GET_CONST(globalQuestions_, ListGlobalQuestionsResponseBody::GlobalQuestions) };
    inline ListGlobalQuestionsResponseBody::GlobalQuestions getGlobalQuestions() { DARABONBA_PTR_GET(globalQuestions_, ListGlobalQuestionsResponseBody::GlobalQuestions) };
    inline ListGlobalQuestionsResponseBody& setGlobalQuestions(const ListGlobalQuestionsResponseBody::GlobalQuestions & globalQuestions) { DARABONBA_PTR_SET_VALUE(globalQuestions_, globalQuestions) };
    inline ListGlobalQuestionsResponseBody& setGlobalQuestions(ListGlobalQuestionsResponseBody::GlobalQuestions && globalQuestions) { DARABONBA_PTR_SET_RVALUE(globalQuestions_, globalQuestions) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGlobalQuestionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGlobalQuestionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGlobalQuestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGlobalQuestionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListGlobalQuestionsResponseBody::GlobalQuestions> globalQuestions_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
