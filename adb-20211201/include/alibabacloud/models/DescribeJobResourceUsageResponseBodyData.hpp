// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESOURCEUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESOURCEUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeJobResourceUsageResponseBodyDataJobAcuUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeJobResourceUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResourceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobAcuUsage, jobAcuUsage_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResourceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobAcuUsage, jobAcuUsage_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeJobResourceUsageResponseBodyData() = default ;
    DescribeJobResourceUsageResponseBodyData(const DescribeJobResourceUsageResponseBodyData &) = default ;
    DescribeJobResourceUsageResponseBodyData(DescribeJobResourceUsageResponseBodyData &&) = default ;
    DescribeJobResourceUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResourceUsageResponseBodyData() = default ;
    DescribeJobResourceUsageResponseBodyData& operator=(const DescribeJobResourceUsageResponseBodyData &) = default ;
    DescribeJobResourceUsageResponseBodyData& operator=(DescribeJobResourceUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->endTime_ != nullptr && this->jobAcuUsage_ != nullptr && this->startTime_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeJobResourceUsageResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeJobResourceUsageResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobAcuUsage Field Functions 
    bool hasJobAcuUsage() const { return this->jobAcuUsage_ != nullptr;};
    void deleteJobAcuUsage() { this->jobAcuUsage_ = nullptr;};
    inline const vector<Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsage> & jobAcuUsage() const { DARABONBA_PTR_GET_CONST(jobAcuUsage_, vector<Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsage>) };
    inline vector<Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsage> jobAcuUsage() { DARABONBA_PTR_GET(jobAcuUsage_, vector<Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsage>) };
    inline DescribeJobResourceUsageResponseBodyData& setJobAcuUsage(const vector<Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsage> & jobAcuUsage) { DARABONBA_PTR_SET_VALUE(jobAcuUsage_, jobAcuUsage) };
    inline DescribeJobResourceUsageResponseBodyData& setJobAcuUsage(vector<Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsage> && jobAcuUsage) { DARABONBA_PTR_SET_RVALUE(jobAcuUsage_, jobAcuUsage) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeJobResourceUsageResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The end time of the query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The AnalyticDB compute unit (ACU) usage of the job resource group.
    std::shared_ptr<vector<Models::DescribeJobResourceUsageResponseBodyDataJobAcuUsage>> jobAcuUsage_ = nullptr;
    // The start time of the query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
