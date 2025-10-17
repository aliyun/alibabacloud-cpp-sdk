// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCEUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCEUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeComputeResourceUsageResponseBodyDataAcuInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeComputeResourceUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComputeResourceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AcuInfo, acuInfo_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupType, resourceGroupType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComputeResourceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AcuInfo, acuInfo_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupType, resourceGroupType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeComputeResourceUsageResponseBodyData() = default ;
    DescribeComputeResourceUsageResponseBodyData(const DescribeComputeResourceUsageResponseBodyData &) = default ;
    DescribeComputeResourceUsageResponseBodyData(DescribeComputeResourceUsageResponseBodyData &&) = default ;
    DescribeComputeResourceUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComputeResourceUsageResponseBodyData() = default ;
    DescribeComputeResourceUsageResponseBodyData& operator=(const DescribeComputeResourceUsageResponseBodyData &) = default ;
    DescribeComputeResourceUsageResponseBodyData& operator=(DescribeComputeResourceUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acuInfo_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->endTime_ == nullptr && return this->resourceGroupName_ == nullptr && return this->resourceGroupType_ == nullptr && return this->startTime_ == nullptr; };
    // acuInfo Field Functions 
    bool hasAcuInfo() const { return this->acuInfo_ != nullptr;};
    void deleteAcuInfo() { this->acuInfo_ = nullptr;};
    inline const vector<Models::DescribeComputeResourceUsageResponseBodyDataAcuInfo> & acuInfo() const { DARABONBA_PTR_GET_CONST(acuInfo_, vector<Models::DescribeComputeResourceUsageResponseBodyDataAcuInfo>) };
    inline vector<Models::DescribeComputeResourceUsageResponseBodyDataAcuInfo> acuInfo() { DARABONBA_PTR_GET(acuInfo_, vector<Models::DescribeComputeResourceUsageResponseBodyDataAcuInfo>) };
    inline DescribeComputeResourceUsageResponseBodyData& setAcuInfo(const vector<Models::DescribeComputeResourceUsageResponseBodyDataAcuInfo> & acuInfo) { DARABONBA_PTR_SET_VALUE(acuInfo_, acuInfo) };
    inline DescribeComputeResourceUsageResponseBodyData& setAcuInfo(vector<Models::DescribeComputeResourceUsageResponseBodyDataAcuInfo> && acuInfo) { DARABONBA_PTR_SET_RVALUE(acuInfo_, acuInfo) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeComputeResourceUsageResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeComputeResourceUsageResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeComputeResourceUsageResponseBodyData& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // resourceGroupType Field Functions 
    bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
    void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
    inline string resourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, "") };
    inline DescribeComputeResourceUsageResponseBodyData& setResourceGroupType(string resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeComputeResourceUsageResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The AnalyticDB compute unit (ACU) usage of the cluster.
    std::shared_ptr<vector<Models::DescribeComputeResourceUsageResponseBodyDataAcuInfo>> acuInfo_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The end time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The type of the resource group.
    std::shared_ptr<string> resourceGroupType_ = nullptr;
    // The start time of the query. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
