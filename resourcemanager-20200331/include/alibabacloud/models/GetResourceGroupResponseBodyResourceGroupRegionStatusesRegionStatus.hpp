// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUPREGIONSTATUSESREGIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUPREGIONSTATUSESREGIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus &) = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus &&) = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& operator=(const GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus &) = default ;
    GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& operator=(GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->status_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the resource group. Valid values:
    // 
    // *   Creating: The resource group is being created.
    // *   OK: The resource group is created.
    // *   PendingDelete: The resource group is waiting to be deleted.
    // *   Deleting: The resource group is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
