// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERTRAFFICLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOSLOGINFODETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERTRAFFICLOGRESPONSEBODYDOMAINLOGDETAILSDOMAINLOGDETAILLOGINFOSLOGINFODETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LogName, logName_);
      DARABONBA_PTR_TO_JSON(LogPath, logPath_);
      DARABONBA_PTR_TO_JSON(LogSize, logSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LogName, logName_);
      DARABONBA_PTR_FROM_JSON(LogPath, logPath_);
      DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail() = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail(const DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail &) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail(DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail &&) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail() = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& operator=(const DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail &) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& operator=(DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail &&) = default ;
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
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // logName Field Functions 
    bool hasLogName() const { return this->logName_ != nullptr;};
    void deleteLogName() { this->logName_ = nullptr;};
    inline string logName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


    // logPath Field Functions 
    bool hasLogPath() const { return this->logPath_ != nullptr;};
    void deleteLogPath() { this->logPath_ = nullptr;};
    inline string logPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


    // logSize Field Functions 
    bool hasLogSize() const { return this->logSize_ != nullptr;};
    void deleteLogSize() { this->logSize_ = nullptr;};
    inline int64_t logSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0L) };
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& setLogSize(int64_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetailLogInfosLogInfoDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> logName_ = nullptr;
    std::shared_ptr<string> logPath_ = nullptr;
    std::shared_ptr<int64_t> logSize_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
