// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterResourceUsageResponseBodyDataAcuInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterResourceUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AcuInfo, acuInfo_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AcuInfo, acuInfo_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeClusterResourceUsageResponseBodyData() = default ;
    DescribeClusterResourceUsageResponseBodyData(const DescribeClusterResourceUsageResponseBodyData &) = default ;
    DescribeClusterResourceUsageResponseBodyData(DescribeClusterResourceUsageResponseBodyData &&) = default ;
    DescribeClusterResourceUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourceUsageResponseBodyData() = default ;
    DescribeClusterResourceUsageResponseBodyData& operator=(const DescribeClusterResourceUsageResponseBodyData &) = default ;
    DescribeClusterResourceUsageResponseBodyData& operator=(DescribeClusterResourceUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acuInfo_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // acuInfo Field Functions 
    bool hasAcuInfo() const { return this->acuInfo_ != nullptr;};
    void deleteAcuInfo() { this->acuInfo_ = nullptr;};
    inline const vector<Models::DescribeClusterResourceUsageResponseBodyDataAcuInfo> & acuInfo() const { DARABONBA_PTR_GET_CONST(acuInfo_, vector<Models::DescribeClusterResourceUsageResponseBodyDataAcuInfo>) };
    inline vector<Models::DescribeClusterResourceUsageResponseBodyDataAcuInfo> acuInfo() { DARABONBA_PTR_GET(acuInfo_, vector<Models::DescribeClusterResourceUsageResponseBodyDataAcuInfo>) };
    inline DescribeClusterResourceUsageResponseBodyData& setAcuInfo(const vector<Models::DescribeClusterResourceUsageResponseBodyDataAcuInfo> & acuInfo) { DARABONBA_PTR_SET_VALUE(acuInfo_, acuInfo) };
    inline DescribeClusterResourceUsageResponseBodyData& setAcuInfo(vector<Models::DescribeClusterResourceUsageResponseBodyDataAcuInfo> && acuInfo) { DARABONBA_PTR_SET_RVALUE(acuInfo_, acuInfo) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeClusterResourceUsageResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeClusterResourceUsageResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeClusterResourceUsageResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The AnalyticDB compute unit (ACU) usage of the cluster.
    std::shared_ptr<vector<Models::DescribeClusterResourceUsageResponseBodyDataAcuInfo>> acuInfo_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The end time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
