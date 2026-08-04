// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDELETETASKCHECKDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDELETETASKCHECKDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryDeleteTaskCheckDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeleteTaskCheckDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgAccountType, agAccountType_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(LongLang, longLang_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeleteTaskCheckDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgAccountType, agAccountType_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(LongLang, longLang_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    QueryDeleteTaskCheckDataRequest() = default ;
    QueryDeleteTaskCheckDataRequest(const QueryDeleteTaskCheckDataRequest &) = default ;
    QueryDeleteTaskCheckDataRequest(QueryDeleteTaskCheckDataRequest &&) = default ;
    QueryDeleteTaskCheckDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeleteTaskCheckDataRequest() = default ;
    QueryDeleteTaskCheckDataRequest& operator=(const QueryDeleteTaskCheckDataRequest &) = default ;
    QueryDeleteTaskCheckDataRequest& operator=(QueryDeleteTaskCheckDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agAccountType_ == nullptr
        && this->appName_ == nullptr && this->longLang_ == nullptr && this->mpk_ == nullptr && this->pk_ == nullptr && this->taskId_ == nullptr
        && this->taskType_ == nullptr; };
    // agAccountType Field Functions 
    bool hasAgAccountType() const { return this->agAccountType_ != nullptr;};
    void deleteAgAccountType() { this->agAccountType_ = nullptr;};
    inline string getAgAccountType() const { DARABONBA_PTR_GET_DEFAULT(agAccountType_, "") };
    inline QueryDeleteTaskCheckDataRequest& setAgAccountType(string agAccountType) { DARABONBA_PTR_SET_VALUE(agAccountType_, agAccountType) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryDeleteTaskCheckDataRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // longLang Field Functions 
    bool hasLongLang() const { return this->longLang_ != nullptr;};
    void deleteLongLang() { this->longLang_ = nullptr;};
    inline string getLongLang() const { DARABONBA_PTR_GET_DEFAULT(longLang_, "") };
    inline QueryDeleteTaskCheckDataRequest& setLongLang(string longLang) { DARABONBA_PTR_SET_VALUE(longLang_, longLang) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline QueryDeleteTaskCheckDataRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline QueryDeleteTaskCheckDataRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryDeleteTaskCheckDataRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline QueryDeleteTaskCheckDataRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // This parameter is required.
    shared_ptr<string> agAccountType_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> longLang_ {};
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
