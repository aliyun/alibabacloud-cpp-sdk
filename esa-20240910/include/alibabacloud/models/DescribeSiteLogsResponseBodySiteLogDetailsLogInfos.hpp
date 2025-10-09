// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODYSITELOGDETAILSLOGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODYSITELOGDETAILSLOGINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteLogsResponseBodySiteLogDetailsLogInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LogName, logName_);
      DARABONBA_PTR_TO_JSON(LogPath, logPath_);
      DARABONBA_PTR_TO_JSON(LogSize, logSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LogName, logName_);
      DARABONBA_PTR_FROM_JSON(LogPath, logPath_);
      DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSiteLogsResponseBodySiteLogDetailsLogInfos() = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsLogInfos(const DescribeSiteLogsResponseBodySiteLogDetailsLogInfos &) = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsLogInfos(DescribeSiteLogsResponseBodySiteLogDetailsLogInfos &&) = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsLogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteLogsResponseBodySiteLogDetailsLogInfos() = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& operator=(const DescribeSiteLogsResponseBodySiteLogDetailsLogInfos &) = default ;
    DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& operator=(DescribeSiteLogsResponseBodySiteLogDetailsLogInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->logName_ != nullptr && this->logPath_ != nullptr && this->logSize_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // logName Field Functions 
    bool hasLogName() const { return this->logName_ != nullptr;};
    void deleteLogName() { this->logName_ = nullptr;};
    inline string logName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
    inline DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


    // logPath Field Functions 
    bool hasLogPath() const { return this->logPath_ != nullptr;};
    void deleteLogPath() { this->logPath_ = nullptr;};
    inline string logPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
    inline DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


    // logSize Field Functions 
    bool hasLogSize() const { return this->logSize_ != nullptr;};
    void deleteLogSize() { this->logSize_ = nullptr;};
    inline int32_t logSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0) };
    inline DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& setLogSize(int32_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteLogsResponseBodySiteLogDetailsLogInfos& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the log file.
    std::shared_ptr<string> logName_ = nullptr;
    // The log path.
    // 
    // >  Take note of the Expires field (expiration timestamp) in this parameter. If the log download URL expires, you must reobtain the URL.
    std::shared_ptr<string> logPath_ = nullptr;
    // The size of the log file. Unit: bytes.
    std::shared_ptr<int32_t> logSize_ = nullptr;
    // The create time.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
