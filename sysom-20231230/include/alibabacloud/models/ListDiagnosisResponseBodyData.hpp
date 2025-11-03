// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSISRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSISRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListDiagnosisResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosisResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_ANY_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(created_at, createdAt_);
      DARABONBA_PTR_TO_JSON(err_msg, errMsg_);
      DARABONBA_ANY_TO_JSON(params, params_);
      DARABONBA_ANY_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(service_name, serviceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
      DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosisResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_ANY_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
      DARABONBA_PTR_FROM_JSON(err_msg, errMsg_);
      DARABONBA_ANY_FROM_JSON(params, params_);
      DARABONBA_ANY_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(service_name, serviceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
      DARABONBA_PTR_FROM_JSON(updated_at, updatedAt_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListDiagnosisResponseBodyData() = default ;
    ListDiagnosisResponseBodyData(const ListDiagnosisResponseBodyData &) = default ;
    ListDiagnosisResponseBodyData(ListDiagnosisResponseBodyData &&) = default ;
    ListDiagnosisResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosisResponseBodyData() = default ;
    ListDiagnosisResponseBodyData& operator=(const ListDiagnosisResponseBodyData &) = default ;
    ListDiagnosisResponseBodyData& operator=(ListDiagnosisResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->command_ == nullptr && return this->createdAt_ == nullptr && return this->errMsg_ == nullptr && return this->params_ == nullptr && return this->result_ == nullptr
        && return this->serviceName_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->updatedAt_ == nullptr && return this->url_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListDiagnosisResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline     const Darabonba::Json & command() const { DARABONBA_GET(command_) };
    Darabonba::Json & command() { DARABONBA_GET(command_) };
    inline ListDiagnosisResponseBodyData& setCommand(const Darabonba::Json & command) { DARABONBA_SET_VALUE(command_, command) };
    inline ListDiagnosisResponseBodyData& setCommand(Darabonba::Json & command) { DARABONBA_SET_RVALUE(command_, command) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListDiagnosisResponseBodyData& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline ListDiagnosisResponseBodyData& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline ListDiagnosisResponseBodyData& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline ListDiagnosisResponseBodyData& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & result() const { DARABONBA_GET(result_) };
    Darabonba::Json & result() { DARABONBA_GET(result_) };
    inline ListDiagnosisResponseBodyData& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline ListDiagnosisResponseBodyData& setResult(Darabonba::Json & result) { DARABONBA_SET_RVALUE(result_, result) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListDiagnosisResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDiagnosisResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListDiagnosisResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListDiagnosisResponseBodyData& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListDiagnosisResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    Darabonba::Json command_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    Darabonba::Json params_ = nullptr;
    Darabonba::Json result_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
