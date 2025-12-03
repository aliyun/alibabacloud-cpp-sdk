// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGVMDEPLOYMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOGVMDEPLOYMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LogVMDeployMachineResponseBodyDeployMachineLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class LogVMDeployMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogVMDeployMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deployMachineLog, deployMachineLog_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, LogVMDeployMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deployMachineLog, deployMachineLog_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    LogVMDeployMachineResponseBody() = default ;
    LogVMDeployMachineResponseBody(const LogVMDeployMachineResponseBody &) = default ;
    LogVMDeployMachineResponseBody(LogVMDeployMachineResponseBody &&) = default ;
    LogVMDeployMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogVMDeployMachineResponseBody() = default ;
    LogVMDeployMachineResponseBody& operator=(const LogVMDeployMachineResponseBody &) = default ;
    LogVMDeployMachineResponseBody& operator=(LogVMDeployMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployMachineLog_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // deployMachineLog Field Functions 
    bool hasDeployMachineLog() const { return this->deployMachineLog_ != nullptr;};
    void deleteDeployMachineLog() { this->deployMachineLog_ = nullptr;};
    inline const LogVMDeployMachineResponseBodyDeployMachineLog & deployMachineLog() const { DARABONBA_PTR_GET_CONST(deployMachineLog_, LogVMDeployMachineResponseBodyDeployMachineLog) };
    inline LogVMDeployMachineResponseBodyDeployMachineLog deployMachineLog() { DARABONBA_PTR_GET(deployMachineLog_, LogVMDeployMachineResponseBodyDeployMachineLog) };
    inline LogVMDeployMachineResponseBody& setDeployMachineLog(const LogVMDeployMachineResponseBodyDeployMachineLog & deployMachineLog) { DARABONBA_PTR_SET_VALUE(deployMachineLog_, deployMachineLog) };
    inline LogVMDeployMachineResponseBody& setDeployMachineLog(LogVMDeployMachineResponseBodyDeployMachineLog && deployMachineLog) { DARABONBA_PTR_SET_RVALUE(deployMachineLog_, deployMachineLog) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline LogVMDeployMachineResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline LogVMDeployMachineResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LogVMDeployMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline LogVMDeployMachineResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<LogVMDeployMachineResponseBodyDeployMachineLog> deployMachineLog_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
