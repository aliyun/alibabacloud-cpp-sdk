// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSPECIFICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSPECIFICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlanSpecificationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanSpecificationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanSpecificationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeElasticPlanSpecificationsRequest() = default ;
    DescribeElasticPlanSpecificationsRequest(const DescribeElasticPlanSpecificationsRequest &) = default ;
    DescribeElasticPlanSpecificationsRequest(DescribeElasticPlanSpecificationsRequest &&) = default ;
    DescribeElasticPlanSpecificationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanSpecificationsRequest() = default ;
    DescribeElasticPlanSpecificationsRequest& operator=(const DescribeElasticPlanSpecificationsRequest &) = default ;
    DescribeElasticPlanSpecificationsRequest& operator=(DescribeElasticPlanSpecificationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->resourceGroupName_ == nullptr && this->type_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeElasticPlanSpecificationsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeElasticPlanSpecificationsRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeElasticPlanSpecificationsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the cluster.
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the resource group.
    // 
    // >- To query the specifications supported by the elastic plan of an Interactive resource group (compute resource type), you must specify the resource group name. To query the specifications supported by the elastic plan of the storage acceleration service (EIU), you do not need to specify the resource group name.
    // - You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/459446.html) operation to query the resource group name of a specific cluster.
    shared_ptr<string> resourceGroupName_ {};
    // The type of the elastic plan. Valid values:
    // 
    // - EXECUTOR: Interactive resource group, which is the compute resource type.
    // - WORKER: storage acceleration service (EIU).
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
