// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ExecuteTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(DigitalSignUrl, digitalSignUrl_);
      DARABONBA_PTR_TO_JSON(FormDataJson, formDataJson_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(NoExecuteExpressions, noExecuteExpressions_);
      DARABONBA_PTR_TO_JSON(OutResult, outResult_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(DigitalSignUrl, digitalSignUrl_);
      DARABONBA_PTR_FROM_JSON(FormDataJson, formDataJson_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(NoExecuteExpressions, noExecuteExpressions_);
      DARABONBA_PTR_FROM_JSON(OutResult, outResult_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ExecuteTaskRequest() = default ;
    ExecuteTaskRequest(const ExecuteTaskRequest &) = default ;
    ExecuteTaskRequest(ExecuteTaskRequest &&) = default ;
    ExecuteTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTaskRequest() = default ;
    ExecuteTaskRequest& operator=(const ExecuteTaskRequest &) = default ;
    ExecuteTaskRequest& operator=(ExecuteTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->digitalSignUrl_ == nullptr && this->formDataJson_ == nullptr && this->language_ == nullptr && this->noExecuteExpressions_ == nullptr && this->outResult_ == nullptr
        && this->processInstanceId_ == nullptr && this->remark_ == nullptr && this->systemToken_ == nullptr && this->taskId_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ExecuteTaskRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // digitalSignUrl Field Functions 
    bool hasDigitalSignUrl() const { return this->digitalSignUrl_ != nullptr;};
    void deleteDigitalSignUrl() { this->digitalSignUrl_ = nullptr;};
    inline string getDigitalSignUrl() const { DARABONBA_PTR_GET_DEFAULT(digitalSignUrl_, "") };
    inline ExecuteTaskRequest& setDigitalSignUrl(string digitalSignUrl) { DARABONBA_PTR_SET_VALUE(digitalSignUrl_, digitalSignUrl) };


    // formDataJson Field Functions 
    bool hasFormDataJson() const { return this->formDataJson_ != nullptr;};
    void deleteFormDataJson() { this->formDataJson_ = nullptr;};
    inline string getFormDataJson() const { DARABONBA_PTR_GET_DEFAULT(formDataJson_, "") };
    inline ExecuteTaskRequest& setFormDataJson(string formDataJson) { DARABONBA_PTR_SET_VALUE(formDataJson_, formDataJson) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ExecuteTaskRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // noExecuteExpressions Field Functions 
    bool hasNoExecuteExpressions() const { return this->noExecuteExpressions_ != nullptr;};
    void deleteNoExecuteExpressions() { this->noExecuteExpressions_ = nullptr;};
    inline string getNoExecuteExpressions() const { DARABONBA_PTR_GET_DEFAULT(noExecuteExpressions_, "") };
    inline ExecuteTaskRequest& setNoExecuteExpressions(string noExecuteExpressions) { DARABONBA_PTR_SET_VALUE(noExecuteExpressions_, noExecuteExpressions) };


    // outResult Field Functions 
    bool hasOutResult() const { return this->outResult_ != nullptr;};
    void deleteOutResult() { this->outResult_ = nullptr;};
    inline string getOutResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
    inline ExecuteTaskRequest& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline ExecuteTaskRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ExecuteTaskRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline ExecuteTaskRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ExecuteTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> appType_ {};
    shared_ptr<string> digitalSignUrl_ {};
    shared_ptr<string> formDataJson_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> noExecuteExpressions_ {};
    shared_ptr<string> outResult_ {};
    shared_ptr<string> processInstanceId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> systemToken_ {};
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
