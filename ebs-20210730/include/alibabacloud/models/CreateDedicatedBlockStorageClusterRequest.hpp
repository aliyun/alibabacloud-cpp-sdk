// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEDICATEDBLOCKSTORAGECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEDICATEDBLOCKSTORAGECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDedicatedBlockStorageClusterRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateDedicatedBlockStorageClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDedicatedBlockStorageClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Azone, azone_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(DbscId, dbscId_);
      DARABONBA_PTR_TO_JSON(DbscName, dbscName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDedicatedBlockStorageClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Azone, azone_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(DbscId, dbscId_);
      DARABONBA_PTR_FROM_JSON(DbscName, dbscName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateDedicatedBlockStorageClusterRequest() = default ;
    CreateDedicatedBlockStorageClusterRequest(const CreateDedicatedBlockStorageClusterRequest &) = default ;
    CreateDedicatedBlockStorageClusterRequest(CreateDedicatedBlockStorageClusterRequest &&) = default ;
    CreateDedicatedBlockStorageClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDedicatedBlockStorageClusterRequest() = default ;
    CreateDedicatedBlockStorageClusterRequest& operator=(const CreateDedicatedBlockStorageClusterRequest &) = default ;
    CreateDedicatedBlockStorageClusterRequest& operator=(CreateDedicatedBlockStorageClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->azone_ == nullptr
        && return this->capacity_ == nullptr && return this->dbscId_ == nullptr && return this->dbscName_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tag_ == nullptr && return this->type_ == nullptr; };
    // azone Field Functions 
    bool hasAzone() const { return this->azone_ != nullptr;};
    void deleteAzone() { this->azone_ = nullptr;};
    inline string azone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
    inline CreateDedicatedBlockStorageClusterRequest& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline CreateDedicatedBlockStorageClusterRequest& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // dbscId Field Functions 
    bool hasDbscId() const { return this->dbscId_ != nullptr;};
    void deleteDbscId() { this->dbscId_ = nullptr;};
    inline string dbscId() const { DARABONBA_PTR_GET_DEFAULT(dbscId_, "") };
    inline CreateDedicatedBlockStorageClusterRequest& setDbscId(string dbscId) { DARABONBA_PTR_SET_VALUE(dbscId_, dbscId) };


    // dbscName Field Functions 
    bool hasDbscName() const { return this->dbscName_ != nullptr;};
    void deleteDbscName() { this->dbscName_ = nullptr;};
    inline string dbscName() const { DARABONBA_PTR_GET_DEFAULT(dbscName_, "") };
    inline CreateDedicatedBlockStorageClusterRequest& setDbscName(string dbscName) { DARABONBA_PTR_SET_VALUE(dbscName_, dbscName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateDedicatedBlockStorageClusterRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateDedicatedBlockStorageClusterRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDedicatedBlockStorageClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDedicatedBlockStorageClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDedicatedBlockStorageClusterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDedicatedBlockStorageClusterRequestTag>) };
    inline vector<CreateDedicatedBlockStorageClusterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDedicatedBlockStorageClusterRequestTag>) };
    inline CreateDedicatedBlockStorageClusterRequest& setTag(const vector<CreateDedicatedBlockStorageClusterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDedicatedBlockStorageClusterRequest& setTag(vector<CreateDedicatedBlockStorageClusterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDedicatedBlockStorageClusterRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the zone in which to create the dedicated block storage cluster. You can call the [DescribeZones](https://help.aliyun.com/document_detail/25610.html) operation to query the most recent zone list.
    // 
    // This parameter is required.
    std::shared_ptr<string> azone_ = nullptr;
    // The capacity of the dedicated block storage cluster. Valid values: 61440 to 2334720. Unit: GiB. 2,334,720 GiB is equal to 2,280 TiB. The capacity increases in a minimum increment of 12,288 GiB.
    // 
    // >  If the capacity of a dedicated block storage cluster is less than 576 TiB, the maximum throughput per TiB cannot exceed 52 MB/s. If the capacity of a dedicated block storage cluster is greater than 576 TiB, the maximum throughput per TiB cannot exceed 26 MB/s.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> dbscId_ = nullptr;
    // The name of the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbscName_ = nullptr;
    // The subscription duration of the dedicated block storage cluster. Valid values: 6, 7, 8, 9, 10, 11, 12, 24, and 36.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration specified by `Period`. Set the value to Month.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The ID of the region in which to create the dedicated block storage cluster. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which to assign the dedicated block storage cluster.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags to add to the dedicated block storage cluster. You can specify up to 20 tags.
    std::shared_ptr<vector<CreateDedicatedBlockStorageClusterRequestTag>> tag_ = nullptr;
    // The type of the dedicated block storage cluster. Valid values:
    // 
    // *   Standard: basic dedicated block storage cluster. Enterprise SSDs (ESSDs) at performance level 0 (PL0 ESSDs) can be created in basic dedicated block storage clusters.
    // *   Premium: performance dedicated block storage cluster. ESSDs at performance level 1 (PL1 ESSDs) can be created in performance dedicated block storage clusters.
    // 
    // Default value: Premium.
    // 
    // For more information about ESSDs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
