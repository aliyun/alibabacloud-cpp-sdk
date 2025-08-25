// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETERMINALLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETERMINALLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class SaveTerminalLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTerminalLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UniqueRequestId, uniqueRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTerminalLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UniqueRequestId, uniqueRequestId_);
    };
    SaveTerminalLogRequest() = default ;
    SaveTerminalLogRequest(const SaveTerminalLogRequest &) = default ;
    SaveTerminalLogRequest(SaveTerminalLogRequest &&) = default ;
    SaveTerminalLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTerminalLogRequest() = default ;
    SaveTerminalLogRequest& operator=(const SaveTerminalLogRequest &) = default ;
    SaveTerminalLogRequest& operator=(SaveTerminalLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->callId_ != nullptr && this->content_ != nullptr && this->dataType_ != nullptr && this->instanceId_ != nullptr && this->jobId_ != nullptr
        && this->methodName_ != nullptr && this->status_ != nullptr && this->uniqueRequestId_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SaveTerminalLogRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline SaveTerminalLogRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SaveTerminalLogRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int32_t dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
    inline SaveTerminalLogRequest& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveTerminalLogRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SaveTerminalLogRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline SaveTerminalLogRequest& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SaveTerminalLogRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uniqueRequestId Field Functions 
    bool hasUniqueRequestId() const { return this->uniqueRequestId_ != nullptr;};
    void deleteUniqueRequestId() { this->uniqueRequestId_ = nullptr;};
    inline string uniqueRequestId() const { DARABONBA_PTR_GET_DEFAULT(uniqueRequestId_, "") };
    inline SaveTerminalLogRequest& setUniqueRequestId(string uniqueRequestId) { DARABONBA_PTR_SET_VALUE(uniqueRequestId_, uniqueRequestId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> dataType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> methodName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uniqueRequestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
