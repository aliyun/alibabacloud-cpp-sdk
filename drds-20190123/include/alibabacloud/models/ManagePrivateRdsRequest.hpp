// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGEPRIVATERDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGEPRIVATERDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ManagePrivateRdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManagePrivateRdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RdsAction, rdsAction_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ManagePrivateRdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RdsAction, rdsAction_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ManagePrivateRdsRequest() = default ;
    ManagePrivateRdsRequest(const ManagePrivateRdsRequest &) = default ;
    ManagePrivateRdsRequest(ManagePrivateRdsRequest &&) = default ;
    ManagePrivateRdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManagePrivateRdsRequest() = default ;
    ManagePrivateRdsRequest& operator=(const ManagePrivateRdsRequest &) = default ;
    ManagePrivateRdsRequest& operator=(ManagePrivateRdsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->params_ != nullptr && this->rdsAction_ != nullptr && this->regionId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ManagePrivateRdsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ManagePrivateRdsRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ManagePrivateRdsRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // rdsAction Field Functions 
    bool hasRdsAction() const { return this->rdsAction_ != nullptr;};
    void deleteRdsAction() { this->rdsAction_ = nullptr;};
    inline string rdsAction() const { DARABONBA_PTR_GET_DEFAULT(rdsAction_, "") };
    inline ManagePrivateRdsRequest& setRdsAction(string rdsAction) { DARABONBA_PTR_SET_VALUE(rdsAction_, rdsAction) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ManagePrivateRdsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the custom ApsaraDB RDS instance at the storage layer.
    // 
    // > You can call the [DescribeDrdsRdsInstances](https://help.aliyun.com/document_detail/215526.html) operation to query the details of all ApsaraDB RDS instances, including the ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // > You can call the [DescribeDrdsInstances](https://help.aliyun.com/document_detail/139284.html) operation to query the details of all PolarDB-X 1.0 instances within an Alibaba Cloud account, including the IDs of the instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The JSON string that consists of request parameters and the values of the request parameters of an operation that you need to call for the custom ApsaraDB RDS instance. The value of a request parameter is of the STRING type. Example: `{NodeId:"1797****"}`.
    // 
    // For more information about the request parameters and valid values of the request parameters of each operation, see the request parameter sections in the following topics:
    // 
    // *   [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/26231.html)
    // *   [DescribeAvailableClasses](https://help.aliyun.com/document_detail/196546.html)
    // *   [DescribeSQLCollectorPolicy](https://help.aliyun.com/document_detail/26292.html)
    // *   [ModifySQLCollectorPolicy](https://help.aliyun.com/document_detail/26293.html)
    // *   [DescribeParameters](https://help.aliyun.com/document_detail/26285.html)
    // *   [ModifyParameter](https://help.aliyun.com/document_detail/26286.html)
    // *   [DescribeDBInstanceHAConfig](https://help.aliyun.com/document_detail/26244.html)
    // *   [SwitchDBInstanceHA](https://help.aliyun.com/document_detail/26251.html)
    // 
    // > Among the required request parameters of the preceding operations, you do not need to specify the `Action` and `DBInstanceId` parameters. You must specify all the other required request parameters.
    std::shared_ptr<string> params_ = nullptr;
    // The operation that you want to perform on the custom ApsaraDB RDS instance. Valid values:
    // 
    // *   **DescribeDBInstanceAttribute**: queries the details of the custom ApsaraDB RDS instance.
    // *   **DescribeAvailableClasses**: queries the specifications that are supported for a custom ApsaraDB RDS instance. The specifications include the instance type and the storage capacity.
    // *   **DescribeSQLCollectorPolicy**: queries whether the SQL Explorer (SQL Audit) feature is enabled for custom ApsaraDB RDS instance.
    // *   **ModifySQLCollectorPolicy**: enables or disables the SQL Explorer (SQL Audit) feature for the custom ApsaraDB RDS instance.
    // *   **DescribeParameters**: queries the parameter settings of the custom ApsaraDB RDS instance.
    // *   **ModifyParameter**: modifies the parameters of the custom ApsaraDB RDS instance.
    // *   **DescribeDBInstanceHAConfig**: queries the high availability mode and data replication mode of the custom ApsaraDB RDS instance.
    // *   **SwitchDBInstanceHA**: switches workloads between the primary and secondary custom ApsaraDB RDS instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> rdsAction_ = nullptr;
    // The ID of the region in which the PolarDB-X 1.0 instance resides.
    // 
    // > You can call the [DescribeDrdsInstances](https://help.aliyun.com/document_detail/139284.html) operation to query the details of all PolarDB-X 1.0 instances within an Alibaba Cloud account, including the IDs of regions in which the instances reside.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
