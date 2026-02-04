// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHPHYSICALDTSJOBTOCLOUDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHPHYSICALDTSJOBTOCLOUDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SwitchPhysicalDtsJobToCloudRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchPhysicalDtsJobToCloudRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchPhysicalDtsJobToCloudRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
    };
    SwitchPhysicalDtsJobToCloudRequest() = default ;
    SwitchPhysicalDtsJobToCloudRequest(const SwitchPhysicalDtsJobToCloudRequest &) = default ;
    SwitchPhysicalDtsJobToCloudRequest(SwitchPhysicalDtsJobToCloudRequest &&) = default ;
    SwitchPhysicalDtsJobToCloudRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchPhysicalDtsJobToCloudRequest() = default ;
    SwitchPhysicalDtsJobToCloudRequest& operator=(const SwitchPhysicalDtsJobToCloudRequest &) = default ;
    SwitchPhysicalDtsJobToCloudRequest& operator=(SwitchPhysicalDtsJobToCloudRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsInstanceId_ == nullptr
        && this->dtsJobId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->synchronizationDirection_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline SwitchPhysicalDtsJobToCloudRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline SwitchPhysicalDtsJobToCloudRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SwitchPhysicalDtsJobToCloudRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SwitchPhysicalDtsJobToCloudRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline SwitchPhysicalDtsJobToCloudRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


  protected:
    // Migration, synchronization, or subscription instance ID.
    shared_ptr<string> dtsInstanceId_ {};
    // Data migration or synchronization instance ID, which can be queried by calling the **describedtsjobs** interface.
    shared_ptr<string> dtsJobId_ {};
    // Region ID. Pass this parameter to specify the region where the instance is located. For more details, see the list of supported regions.
    shared_ptr<string> regionId_ {};
    // Resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Synchronization direction, values: - **Forward**: Forward. - **Reverse**: Reverse.
    // > - The default value is **Forward**. - **Reverse** can only be passed when the topology of the data synchronization instance is bidirectional, to release the reverse synchronization link.
    shared_ptr<string> synchronizationDirection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
