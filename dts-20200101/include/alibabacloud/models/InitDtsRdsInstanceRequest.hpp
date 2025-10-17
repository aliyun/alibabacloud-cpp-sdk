// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITDTSRDSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITDTSRDSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class InitDtsRdsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitDtsRdsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(EndpointCenId, endpointCenId_);
      DARABONBA_PTR_TO_JSON(EndpointInstanceId, endpointInstanceId_);
      DARABONBA_PTR_TO_JSON(EndpointInstanceType, endpointInstanceType_);
      DARABONBA_PTR_TO_JSON(EndpointRegion, endpointRegion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, InitDtsRdsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndpointCenId, endpointCenId_);
      DARABONBA_PTR_FROM_JSON(EndpointInstanceId, endpointInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndpointInstanceType, endpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(EndpointRegion, endpointRegion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    InitDtsRdsInstanceRequest() = default ;
    InitDtsRdsInstanceRequest(const InitDtsRdsInstanceRequest &) = default ;
    InitDtsRdsInstanceRequest(InitDtsRdsInstanceRequest &&) = default ;
    InitDtsRdsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitDtsRdsInstanceRequest() = default ;
    InitDtsRdsInstanceRequest& operator=(const InitDtsRdsInstanceRequest &) = default ;
    InitDtsRdsInstanceRequest& operator=(InitDtsRdsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsInstanceId_ == nullptr
        && return this->endpointCenId_ == nullptr && return this->endpointInstanceId_ == nullptr && return this->endpointInstanceType_ == nullptr && return this->endpointRegion_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline InitDtsRdsInstanceRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // endpointCenId Field Functions 
    bool hasEndpointCenId() const { return this->endpointCenId_ != nullptr;};
    void deleteEndpointCenId() { this->endpointCenId_ = nullptr;};
    inline string endpointCenId() const { DARABONBA_PTR_GET_DEFAULT(endpointCenId_, "") };
    inline InitDtsRdsInstanceRequest& setEndpointCenId(string endpointCenId) { DARABONBA_PTR_SET_VALUE(endpointCenId_, endpointCenId) };


    // endpointInstanceId Field Functions 
    bool hasEndpointInstanceId() const { return this->endpointInstanceId_ != nullptr;};
    void deleteEndpointInstanceId() { this->endpointInstanceId_ = nullptr;};
    inline string endpointInstanceId() const { DARABONBA_PTR_GET_DEFAULT(endpointInstanceId_, "") };
    inline InitDtsRdsInstanceRequest& setEndpointInstanceId(string endpointInstanceId) { DARABONBA_PTR_SET_VALUE(endpointInstanceId_, endpointInstanceId) };


    // endpointInstanceType Field Functions 
    bool hasEndpointInstanceType() const { return this->endpointInstanceType_ != nullptr;};
    void deleteEndpointInstanceType() { this->endpointInstanceType_ = nullptr;};
    inline string endpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(endpointInstanceType_, "") };
    inline InitDtsRdsInstanceRequest& setEndpointInstanceType(string endpointInstanceType) { DARABONBA_PTR_SET_VALUE(endpointInstanceType_, endpointInstanceType) };


    // endpointRegion Field Functions 
    bool hasEndpointRegion() const { return this->endpointRegion_ != nullptr;};
    void deleteEndpointRegion() { this->endpointRegion_ = nullptr;};
    inline string endpointRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointRegion_, "") };
    inline InitDtsRdsInstanceRequest& setEndpointRegion(string endpointRegion) { DARABONBA_PTR_SET_VALUE(endpointRegion_, endpointRegion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InitDtsRdsInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InitDtsRdsInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the data synchronization task.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // If the node is a self-managed MySQL database that is connected over CEN, you must specify the ID of the CEN instance.
    // 
    // > You must specify the **EndpointRegion** and **EndpointInstanceId** parameters or the EndpointCenId parameter based on the type of the node.
    std::shared_ptr<string> endpointCenId_ = nullptr;
    // If the node is an ApsaraDB RDS for MySQL instance, you must specify the ID of the ApsaraDB RDS for MySQL instance.
    // 
    // > *   You must also specify the **EndpointRegion** parameter.
    // >*   You must specify the EndpointInstanceId parameter or the **EndpointCenId** parameter based on the type of the node.
    std::shared_ptr<string> endpointInstanceId_ = nullptr;
    // The type of the node. Valid values:
    // 
    // *   **RDS**: an ApsaraDB RDS for MySQL instance
    // *   **CEN**: a self-managed MySQL database that is connected over CEN
    std::shared_ptr<string> endpointInstanceType_ = nullptr;
    // If the node is an ApsaraDB RDS for MySQL instance, you must specify the region in which the ApsaraDB RDS for MySQL instance resides.
    // 
    // > *   You must also specify the **EndpointInstanceId** parameter.
    // >*   You must specify the EndpointRegion parameter or the **EndpointCenId** parameter based on the type of the node.
    std::shared_ptr<string> endpointRegion_ = nullptr;
    // The ID of the region in which the active geo-redundancy database cluster resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
