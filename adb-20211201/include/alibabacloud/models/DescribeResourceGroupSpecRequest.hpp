// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeResourceGroupSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupType, resourceGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupType, resourceGroupType_);
    };
    DescribeResourceGroupSpecRequest() = default ;
    DescribeResourceGroupSpecRequest(const DescribeResourceGroupSpecRequest &) = default ;
    DescribeResourceGroupSpecRequest(DescribeResourceGroupSpecRequest &&) = default ;
    DescribeResourceGroupSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupSpecRequest() = default ;
    DescribeResourceGroupSpecRequest& operator=(const DescribeResourceGroupSpecRequest &) = default ;
    DescribeResourceGroupSpecRequest& operator=(DescribeResourceGroupSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupType_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeResourceGroupSpecRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeResourceGroupSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupType Field Functions 
    bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
    void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
    inline string resourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, "") };
    inline DescribeResourceGroupSpecRequest& setResourceGroupType(string resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


  protected:
    // The Enterprise Edition, Basic Edition, or Data Lakehouse Edition cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
