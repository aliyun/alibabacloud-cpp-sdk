// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONTASKREQUESTOPERATIONTASKINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONTASKREQUESTOPERATIONTASKINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationTaskRequestOperationTaskInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationTaskRequestOperationTaskInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationTaskRequestOperationTaskInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListOperationTaskRequestOperationTaskInstances() = default ;
    ListOperationTaskRequestOperationTaskInstances(const ListOperationTaskRequestOperationTaskInstances &) = default ;
    ListOperationTaskRequestOperationTaskInstances(ListOperationTaskRequestOperationTaskInstances &&) = default ;
    ListOperationTaskRequestOperationTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationTaskRequestOperationTaskInstances() = default ;
    ListOperationTaskRequestOperationTaskInstances& operator=(const ListOperationTaskRequestOperationTaskInstances &) = default ;
    ListOperationTaskRequestOperationTaskInstances& operator=(ListOperationTaskRequestOperationTaskInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->vendor_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOperationTaskRequestOperationTaskInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOperationTaskRequestOperationTaskInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListOperationTaskRequestOperationTaskInstances& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region where the instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // Cloud asset vendor.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
