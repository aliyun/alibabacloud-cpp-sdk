// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSERVICECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYSERVICECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class CopyServiceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyServiceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ServiceDesc, serviceDesc_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, CopyServiceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ServiceDesc, serviceDesc_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    CopyServiceConfigRequest() = default ;
    CopyServiceConfigRequest(const CopyServiceConfigRequest &) = default ;
    CopyServiceConfigRequest(CopyServiceConfigRequest &&) = default ;
    CopyServiceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyServiceConfigRequest() = default ;
    CopyServiceConfigRequest& operator=(const CopyServiceConfigRequest &) = default ;
    CopyServiceConfigRequest& operator=(CopyServiceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->resourceType_ == nullptr && return this->serviceCode_ == nullptr && return this->serviceDesc_ == nullptr && return this->serviceName_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CopyServiceConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CopyServiceConfigRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline CopyServiceConfigRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceDesc Field Functions 
    bool hasServiceDesc() const { return this->serviceDesc_ != nullptr;};
    void deleteServiceDesc() { this->serviceDesc_ = nullptr;};
    inline string serviceDesc() const { DARABONBA_PTR_GET_DEFAULT(serviceDesc_, "") };
    inline CopyServiceConfigRequest& setServiceDesc(string serviceDesc) { DARABONBA_PTR_SET_VALUE(serviceDesc_, serviceDesc) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CopyServiceConfigRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Service description
    std::shared_ptr<string> serviceDesc_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
