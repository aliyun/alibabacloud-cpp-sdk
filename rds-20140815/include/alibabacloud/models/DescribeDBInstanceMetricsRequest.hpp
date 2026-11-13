// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeDBInstanceMetricsRequest() = default ;
    DescribeDBInstanceMetricsRequest(const DescribeDBInstanceMetricsRequest &) = default ;
    DescribeDBInstanceMetricsRequest(DescribeDBInstanceMetricsRequest &&) = default ;
    DescribeDBInstanceMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceMetricsRequest() = default ;
    DescribeDBInstanceMetricsRequest& operator=(const DescribeDBInstanceMetricsRequest &) = default ;
    DescribeDBInstanceMetricsRequest& operator=(DescribeDBInstanceMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceMetricsRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstanceMetricsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBInstanceMetricsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
