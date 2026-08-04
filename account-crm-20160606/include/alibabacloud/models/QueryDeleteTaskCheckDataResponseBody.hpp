// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDELETETASKCHECKDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDELETETASKCHECKDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryDeleteTaskCheckDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeleteTaskCheckDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskCheckDataDtoList, taskCheckDataDtoList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeleteTaskCheckDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskCheckDataDtoList, taskCheckDataDtoList_);
    };
    QueryDeleteTaskCheckDataResponseBody() = default ;
    QueryDeleteTaskCheckDataResponseBody(const QueryDeleteTaskCheckDataResponseBody &) = default ;
    QueryDeleteTaskCheckDataResponseBody(QueryDeleteTaskCheckDataResponseBody &&) = default ;
    QueryDeleteTaskCheckDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeleteTaskCheckDataResponseBody() = default ;
    QueryDeleteTaskCheckDataResponseBody& operator=(const QueryDeleteTaskCheckDataResponseBody &) = default ;
    QueryDeleteTaskCheckDataResponseBody& operator=(QueryDeleteTaskCheckDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskCheckDataDtoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskCheckDataDtoList& obj) { 
        DARABONBA_PTR_TO_JSON(CheckerDesc, checkerDesc_);
        DARABONBA_PTR_TO_JSON(CheckerName, checkerName_);
        DARABONBA_PTR_TO_JSON(CheckerUniKey, checkerUniKey_);
        DARABONBA_PTR_TO_JSON(DependencyLevel, dependencyLevel_);
      };
      friend void from_json(const Darabonba::Json& j, TaskCheckDataDtoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckerDesc, checkerDesc_);
        DARABONBA_PTR_FROM_JSON(CheckerName, checkerName_);
        DARABONBA_PTR_FROM_JSON(CheckerUniKey, checkerUniKey_);
        DARABONBA_PTR_FROM_JSON(DependencyLevel, dependencyLevel_);
      };
      TaskCheckDataDtoList() = default ;
      TaskCheckDataDtoList(const TaskCheckDataDtoList &) = default ;
      TaskCheckDataDtoList(TaskCheckDataDtoList &&) = default ;
      TaskCheckDataDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskCheckDataDtoList() = default ;
      TaskCheckDataDtoList& operator=(const TaskCheckDataDtoList &) = default ;
      TaskCheckDataDtoList& operator=(TaskCheckDataDtoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkerDesc_ == nullptr
        && this->checkerName_ == nullptr && this->checkerUniKey_ == nullptr && this->dependencyLevel_ == nullptr; };
      // checkerDesc Field Functions 
      bool hasCheckerDesc() const { return this->checkerDesc_ != nullptr;};
      void deleteCheckerDesc() { this->checkerDesc_ = nullptr;};
      inline string getCheckerDesc() const { DARABONBA_PTR_GET_DEFAULT(checkerDesc_, "") };
      inline TaskCheckDataDtoList& setCheckerDesc(string checkerDesc) { DARABONBA_PTR_SET_VALUE(checkerDesc_, checkerDesc) };


      // checkerName Field Functions 
      bool hasCheckerName() const { return this->checkerName_ != nullptr;};
      void deleteCheckerName() { this->checkerName_ = nullptr;};
      inline string getCheckerName() const { DARABONBA_PTR_GET_DEFAULT(checkerName_, "") };
      inline TaskCheckDataDtoList& setCheckerName(string checkerName) { DARABONBA_PTR_SET_VALUE(checkerName_, checkerName) };


      // checkerUniKey Field Functions 
      bool hasCheckerUniKey() const { return this->checkerUniKey_ != nullptr;};
      void deleteCheckerUniKey() { this->checkerUniKey_ = nullptr;};
      inline string getCheckerUniKey() const { DARABONBA_PTR_GET_DEFAULT(checkerUniKey_, "") };
      inline TaskCheckDataDtoList& setCheckerUniKey(string checkerUniKey) { DARABONBA_PTR_SET_VALUE(checkerUniKey_, checkerUniKey) };


      // dependencyLevel Field Functions 
      bool hasDependencyLevel() const { return this->dependencyLevel_ != nullptr;};
      void deleteDependencyLevel() { this->dependencyLevel_ = nullptr;};
      inline string getDependencyLevel() const { DARABONBA_PTR_GET_DEFAULT(dependencyLevel_, "") };
      inline TaskCheckDataDtoList& setDependencyLevel(string dependencyLevel) { DARABONBA_PTR_SET_VALUE(dependencyLevel_, dependencyLevel) };


    protected:
      shared_ptr<string> checkerDesc_ {};
      shared_ptr<string> checkerName_ {};
      shared_ptr<string> checkerUniKey_ {};
      shared_ptr<string> dependencyLevel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskCheckDataDtoList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDeleteTaskCheckDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryDeleteTaskCheckDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDeleteTaskCheckDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDeleteTaskCheckDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskCheckDataDtoList Field Functions 
    bool hasTaskCheckDataDtoList() const { return this->taskCheckDataDtoList_ != nullptr;};
    void deleteTaskCheckDataDtoList() { this->taskCheckDataDtoList_ = nullptr;};
    inline const vector<QueryDeleteTaskCheckDataResponseBody::TaskCheckDataDtoList> & getTaskCheckDataDtoList() const { DARABONBA_PTR_GET_CONST(taskCheckDataDtoList_, vector<QueryDeleteTaskCheckDataResponseBody::TaskCheckDataDtoList>) };
    inline vector<QueryDeleteTaskCheckDataResponseBody::TaskCheckDataDtoList> getTaskCheckDataDtoList() { DARABONBA_PTR_GET(taskCheckDataDtoList_, vector<QueryDeleteTaskCheckDataResponseBody::TaskCheckDataDtoList>) };
    inline QueryDeleteTaskCheckDataResponseBody& setTaskCheckDataDtoList(const vector<QueryDeleteTaskCheckDataResponseBody::TaskCheckDataDtoList> & taskCheckDataDtoList) { DARABONBA_PTR_SET_VALUE(taskCheckDataDtoList_, taskCheckDataDtoList) };
    inline QueryDeleteTaskCheckDataResponseBody& setTaskCheckDataDtoList(vector<QueryDeleteTaskCheckDataResponseBody::TaskCheckDataDtoList> && taskCheckDataDtoList) { DARABONBA_PTR_SET_RVALUE(taskCheckDataDtoList_, taskCheckDataDtoList) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<QueryDeleteTaskCheckDataResponseBody::TaskCheckDataDtoList>> taskCheckDataDtoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
