// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeEndpointsRequest() = default ;
    DescribeEndpointsRequest(const DescribeEndpointsRequest &) = default ;
    DescribeEndpointsRequest(DescribeEndpointsRequest &&) = default ;
    DescribeEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndpointsRequest() = default ;
    DescribeEndpointsRequest& operator=(const DescribeEndpointsRequest &) = default ;
    DescribeEndpointsRequest& operator=(DescribeEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingGroupId_ == nullptr
        && this->DBInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // computingGroupId Field Functions 
    bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
    void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
    inline string getComputingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
    inline DescribeEndpointsRequest& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeEndpointsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEndpointsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> computingGroupId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
