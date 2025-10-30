// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceIPArrayListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIPArrayListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIPArrayListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceIPArrayName, DBInstanceIPArrayName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeDBInstanceIPArrayListRequest() = default ;
    DescribeDBInstanceIPArrayListRequest(const DescribeDBInstanceIPArrayListRequest &) = default ;
    DescribeDBInstanceIPArrayListRequest(DescribeDBInstanceIPArrayListRequest &&) = default ;
    DescribeDBInstanceIPArrayListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIPArrayListRequest() = default ;
    DescribeDBInstanceIPArrayListRequest& operator=(const DescribeDBInstanceIPArrayListRequest &) = default ;
    DescribeDBInstanceIPArrayListRequest& operator=(DescribeDBInstanceIPArrayListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceIPArrayName_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // DBInstanceIPArrayName Field Functions 
    bool hasDBInstanceIPArrayName() const { return this->DBInstanceIPArrayName_ != nullptr;};
    void deleteDBInstanceIPArrayName() { this->DBInstanceIPArrayName_ = nullptr;};
    inline string DBInstanceIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIPArrayName_, "") };
    inline DescribeDBInstanceIPArrayListRequest& setDBInstanceIPArrayName(string DBInstanceIPArrayName) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArrayName_, DBInstanceIPArrayName) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceIPArrayListRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstanceIPArrayListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The name of the IP address whitelist. If you do not specify this parameter, the default whitelist is queried.
    // 
    // >  Each instance supports up to 50 IP address whitelists.
    std::shared_ptr<string> DBInstanceIPArrayName_ = nullptr;
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query details about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The ID of the resource group to which the instance belongs. For information about how to obtain the ID of a resource group, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
