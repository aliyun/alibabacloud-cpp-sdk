// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGINFO_HPP_
#define ALIBABACLOUD_MODELS_LOGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LogInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BizTime, bizTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogContent, logContent_);
      DARABONBA_PTR_TO_JSON(LogId, logId_);
      DARABONBA_PTR_TO_JSON(LogSummary, logSummary_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
    };
    friend void from_json(const Darabonba::Json& j, LogInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTime, bizTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
      DARABONBA_PTR_FROM_JSON(LogId, logId_);
      DARABONBA_PTR_FROM_JSON(LogSummary, logSummary_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
    };
    LogInfo() = default ;
    LogInfo(const LogInfo &) = default ;
    LogInfo(LogInfo &&) = default ;
    LogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogInfo() = default ;
    LogInfo& operator=(const LogInfo &) = default ;
    LogInfo& operator=(LogInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizTime_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->instanceId_ == nullptr && return this->logContent_ == nullptr && return this->logId_ == nullptr && return this->logSummary_ == nullptr
        && return this->logType_ == nullptr; };
    // bizTime Field Functions 
    bool hasBizTime() const { return this->bizTime_ != nullptr;};
    void deleteBizTime() { this->bizTime_ = nullptr;};
    inline string bizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
    inline LogInfo& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline LogInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LogInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logContent Field Functions 
    bool hasLogContent() const { return this->logContent_ != nullptr;};
    void deleteLogContent() { this->logContent_ = nullptr;};
    inline string logContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
    inline LogInfo& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


    // logId Field Functions 
    bool hasLogId() const { return this->logId_ != nullptr;};
    void deleteLogId() { this->logId_ = nullptr;};
    inline string logId() const { DARABONBA_PTR_GET_DEFAULT(logId_, "") };
    inline LogInfo& setLogId(string logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


    // logSummary Field Functions 
    bool hasLogSummary() const { return this->logSummary_ != nullptr;};
    void deleteLogSummary() { this->logSummary_ = nullptr;};
    inline string logSummary() const { DARABONBA_PTR_GET_DEFAULT(logSummary_, "") };
    inline LogInfo& setLogSummary(string logSummary) { DARABONBA_PTR_SET_VALUE(logSummary_, logSummary) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline LogInfo& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


  protected:
    std::shared_ptr<string> bizTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> logContent_ = nullptr;
    std::shared_ptr<string> logId_ = nullptr;
    std::shared_ptr<string> logSummary_ = nullptr;
    std::shared_ptr<string> logType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
