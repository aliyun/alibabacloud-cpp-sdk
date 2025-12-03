// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGVMDEPLOYMACHINERESPONSEBODYDEPLOYMACHINELOG_HPP_
#define ALIBABACLOUD_MODELS_LOGVMDEPLOYMACHINERESPONSEBODYDEPLOYMACHINELOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class LogVMDeployMachineResponseBodyDeployMachineLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogVMDeployMachineResponseBodyDeployMachineLog& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunRegion, aliyunRegion_);
      DARABONBA_PTR_TO_JSON(deployBeginTime, deployBeginTime_);
      DARABONBA_PTR_TO_JSON(deployEndTime, deployEndTime_);
      DARABONBA_PTR_TO_JSON(deployLog, deployLog_);
      DARABONBA_PTR_TO_JSON(deployLogPath, deployLogPath_);
    };
    friend void from_json(const Darabonba::Json& j, LogVMDeployMachineResponseBodyDeployMachineLog& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunRegion, aliyunRegion_);
      DARABONBA_PTR_FROM_JSON(deployBeginTime, deployBeginTime_);
      DARABONBA_PTR_FROM_JSON(deployEndTime, deployEndTime_);
      DARABONBA_PTR_FROM_JSON(deployLog, deployLog_);
      DARABONBA_PTR_FROM_JSON(deployLogPath, deployLogPath_);
    };
    LogVMDeployMachineResponseBodyDeployMachineLog() = default ;
    LogVMDeployMachineResponseBodyDeployMachineLog(const LogVMDeployMachineResponseBodyDeployMachineLog &) = default ;
    LogVMDeployMachineResponseBodyDeployMachineLog(LogVMDeployMachineResponseBodyDeployMachineLog &&) = default ;
    LogVMDeployMachineResponseBodyDeployMachineLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogVMDeployMachineResponseBodyDeployMachineLog() = default ;
    LogVMDeployMachineResponseBodyDeployMachineLog& operator=(const LogVMDeployMachineResponseBodyDeployMachineLog &) = default ;
    LogVMDeployMachineResponseBodyDeployMachineLog& operator=(LogVMDeployMachineResponseBodyDeployMachineLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunRegion_ == nullptr
        && return this->deployBeginTime_ == nullptr && return this->deployEndTime_ == nullptr && return this->deployLog_ == nullptr && return this->deployLogPath_ == nullptr; };
    // aliyunRegion Field Functions 
    bool hasAliyunRegion() const { return this->aliyunRegion_ != nullptr;};
    void deleteAliyunRegion() { this->aliyunRegion_ = nullptr;};
    inline string aliyunRegion() const { DARABONBA_PTR_GET_DEFAULT(aliyunRegion_, "") };
    inline LogVMDeployMachineResponseBodyDeployMachineLog& setAliyunRegion(string aliyunRegion) { DARABONBA_PTR_SET_VALUE(aliyunRegion_, aliyunRegion) };


    // deployBeginTime Field Functions 
    bool hasDeployBeginTime() const { return this->deployBeginTime_ != nullptr;};
    void deleteDeployBeginTime() { this->deployBeginTime_ = nullptr;};
    inline int64_t deployBeginTime() const { DARABONBA_PTR_GET_DEFAULT(deployBeginTime_, 0L) };
    inline LogVMDeployMachineResponseBodyDeployMachineLog& setDeployBeginTime(int64_t deployBeginTime) { DARABONBA_PTR_SET_VALUE(deployBeginTime_, deployBeginTime) };


    // deployEndTime Field Functions 
    bool hasDeployEndTime() const { return this->deployEndTime_ != nullptr;};
    void deleteDeployEndTime() { this->deployEndTime_ = nullptr;};
    inline int64_t deployEndTime() const { DARABONBA_PTR_GET_DEFAULT(deployEndTime_, 0L) };
    inline LogVMDeployMachineResponseBodyDeployMachineLog& setDeployEndTime(int64_t deployEndTime) { DARABONBA_PTR_SET_VALUE(deployEndTime_, deployEndTime) };


    // deployLog Field Functions 
    bool hasDeployLog() const { return this->deployLog_ != nullptr;};
    void deleteDeployLog() { this->deployLog_ = nullptr;};
    inline string deployLog() const { DARABONBA_PTR_GET_DEFAULT(deployLog_, "") };
    inline LogVMDeployMachineResponseBodyDeployMachineLog& setDeployLog(string deployLog) { DARABONBA_PTR_SET_VALUE(deployLog_, deployLog) };


    // deployLogPath Field Functions 
    bool hasDeployLogPath() const { return this->deployLogPath_ != nullptr;};
    void deleteDeployLogPath() { this->deployLogPath_ = nullptr;};
    inline string deployLogPath() const { DARABONBA_PTR_GET_DEFAULT(deployLogPath_, "") };
    inline LogVMDeployMachineResponseBodyDeployMachineLog& setDeployLogPath(string deployLogPath) { DARABONBA_PTR_SET_VALUE(deployLogPath_, deployLogPath) };


  protected:
    std::shared_ptr<string> aliyunRegion_ = nullptr;
    std::shared_ptr<int64_t> deployBeginTime_ = nullptr;
    std::shared_ptr<int64_t> deployEndTime_ = nullptr;
    std::shared_ptr<string> deployLog_ = nullptr;
    std::shared_ptr<string> deployLogPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
