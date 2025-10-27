// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONCHECKREQUESTOPERATIONTASKINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONCHECKREQUESTOPERATIONTASKINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationCheckRequestOperationTaskInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationCheckRequestOperationTaskInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationCheckRequestOperationTaskInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListOperationCheckRequestOperationTaskInstances() = default ;
    ListOperationCheckRequestOperationTaskInstances(const ListOperationCheckRequestOperationTaskInstances &) = default ;
    ListOperationCheckRequestOperationTaskInstances(ListOperationCheckRequestOperationTaskInstances &&) = default ;
    ListOperationCheckRequestOperationTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationCheckRequestOperationTaskInstances() = default ;
    ListOperationCheckRequestOperationTaskInstances& operator=(const ListOperationCheckRequestOperationTaskInstances &) = default ;
    ListOperationCheckRequestOperationTaskInstances& operator=(ListOperationCheckRequestOperationTaskInstances &&) = default ;
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
    inline ListOperationCheckRequestOperationTaskInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOperationCheckRequestOperationTaskInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListOperationCheckRequestOperationTaskInstances& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Cloud asset instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Asset vendor. Values:
    // 
    // - **ALIYUN**: Alibaba Cloud
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
