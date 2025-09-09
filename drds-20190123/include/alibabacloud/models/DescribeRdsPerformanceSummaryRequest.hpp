// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSPERFORMANCESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSPERFORMANCESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRdsPerformanceSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsPerformanceSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RdsInstanceId, rdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsPerformanceSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RdsInstanceId, rdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeRdsPerformanceSummaryRequest() = default ;
    DescribeRdsPerformanceSummaryRequest(const DescribeRdsPerformanceSummaryRequest &) = default ;
    DescribeRdsPerformanceSummaryRequest(DescribeRdsPerformanceSummaryRequest &&) = default ;
    DescribeRdsPerformanceSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsPerformanceSummaryRequest() = default ;
    DescribeRdsPerformanceSummaryRequest& operator=(const DescribeRdsPerformanceSummaryRequest &) = default ;
    DescribeRdsPerformanceSummaryRequest& operator=(DescribeRdsPerformanceSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceId_ != nullptr
        && this->rdsInstanceId_ != nullptr && this->regionId_ != nullptr; };
    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeRdsPerformanceSummaryRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // rdsInstanceId Field Functions 
    bool hasRdsInstanceId() const { return this->rdsInstanceId_ != nullptr;};
    void deleteRdsInstanceId() { this->rdsInstanceId_ = nullptr;};
    inline const vector<string> & rdsInstanceId() const { DARABONBA_PTR_GET_CONST(rdsInstanceId_, vector<string>) };
    inline vector<string> rdsInstanceId() { DARABONBA_PTR_GET(rdsInstanceId_, vector<string>) };
    inline DescribeRdsPerformanceSummaryRequest& setRdsInstanceId(const vector<string> & rdsInstanceId) { DARABONBA_PTR_SET_VALUE(rdsInstanceId_, rdsInstanceId) };
    inline DescribeRdsPerformanceSummaryRequest& setRdsInstanceId(vector<string> && rdsInstanceId) { DARABONBA_PTR_SET_RVALUE(rdsInstanceId_, rdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRdsPerformanceSummaryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of a DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> rdsInstanceId_ = nullptr;
    // The ID of the region where the streaming domain resides.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
