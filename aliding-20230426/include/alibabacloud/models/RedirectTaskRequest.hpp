// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REDIRECTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REDIRECTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RedirectTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RedirectTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(ByManager, byManager_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(NowActionExecutorId, nowActionExecutorId_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RedirectTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(ByManager, byManager_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(NowActionExecutorId, nowActionExecutorId_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RedirectTaskRequest() = default ;
    RedirectTaskRequest(const RedirectTaskRequest &) = default ;
    RedirectTaskRequest(RedirectTaskRequest &&) = default ;
    RedirectTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RedirectTaskRequest() = default ;
    RedirectTaskRequest& operator=(const RedirectTaskRequest &) = default ;
    RedirectTaskRequest& operator=(RedirectTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->byManager_ == nullptr && return this->language_ == nullptr && return this->nowActionExecutorId_ == nullptr && return this->processInstanceId_ == nullptr && return this->remark_ == nullptr
        && return this->systemToken_ == nullptr && return this->taskId_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline RedirectTaskRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // byManager Field Functions 
    bool hasByManager() const { return this->byManager_ != nullptr;};
    void deleteByManager() { this->byManager_ = nullptr;};
    inline string byManager() const { DARABONBA_PTR_GET_DEFAULT(byManager_, "") };
    inline RedirectTaskRequest& setByManager(string byManager) { DARABONBA_PTR_SET_VALUE(byManager_, byManager) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RedirectTaskRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // nowActionExecutorId Field Functions 
    bool hasNowActionExecutorId() const { return this->nowActionExecutorId_ != nullptr;};
    void deleteNowActionExecutorId() { this->nowActionExecutorId_ = nullptr;};
    inline string nowActionExecutorId() const { DARABONBA_PTR_GET_DEFAULT(nowActionExecutorId_, "") };
    inline RedirectTaskRequest& setNowActionExecutorId(string nowActionExecutorId) { DARABONBA_PTR_SET_VALUE(nowActionExecutorId_, nowActionExecutorId) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline RedirectTaskRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline RedirectTaskRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline RedirectTaskRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline RedirectTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> byManager_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nowActionExecutorId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
