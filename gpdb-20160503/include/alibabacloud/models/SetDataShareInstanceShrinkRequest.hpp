// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDATASHAREINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDATASHAREINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class SetDataShareInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDataShareInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceListShrink_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDataShareInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceListShrink_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetDataShareInstanceShrinkRequest() = default ;
    SetDataShareInstanceShrinkRequest(const SetDataShareInstanceShrinkRequest &) = default ;
    SetDataShareInstanceShrinkRequest(SetDataShareInstanceShrinkRequest &&) = default ;
    SetDataShareInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDataShareInstanceShrinkRequest() = default ;
    SetDataShareInstanceShrinkRequest& operator=(const SetDataShareInstanceShrinkRequest &) = default ;
    SetDataShareInstanceShrinkRequest& operator=(SetDataShareInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceListShrink_ == nullptr
        && this->operationType_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // instanceListShrink Field Functions 
    bool hasInstanceListShrink() const { return this->instanceListShrink_ != nullptr;};
    void deleteInstanceListShrink() { this->instanceListShrink_ = nullptr;};
    inline string getInstanceListShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceListShrink_, "") };
    inline SetDataShareInstanceShrinkRequest& setInstanceListShrink(string instanceListShrink) { DARABONBA_PTR_SET_VALUE(instanceListShrink_, instanceListShrink) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline SetDataShareInstanceShrinkRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetDataShareInstanceShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDataShareInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the AnalyticDB for PostgreSQL instance in Serverless mode.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> instanceListShrink_ {};
    // Specifies whether to enable or disable data sharing. Valid values:
    // 
    // *   **add**: enables data sharing.
    // *   **remove**: disables data sharing.
    // 
    // This parameter is required.
    shared_ptr<string> operationType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
