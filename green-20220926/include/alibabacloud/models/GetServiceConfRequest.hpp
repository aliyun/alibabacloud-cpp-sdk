// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetServiceConfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ByDefault, byDefault_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ByDefault, byDefault_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    GetServiceConfRequest() = default ;
    GetServiceConfRequest(const GetServiceConfRequest &) = default ;
    GetServiceConfRequest(GetServiceConfRequest &&) = default ;
    GetServiceConfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConfRequest() = default ;
    GetServiceConfRequest& operator=(const GetServiceConfRequest &) = default ;
    GetServiceConfRequest& operator=(GetServiceConfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->byDefault_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceType_ == nullptr && return this->scene_ == nullptr && return this->serviceCode_ == nullptr; };
    // byDefault Field Functions 
    bool hasByDefault() const { return this->byDefault_ != nullptr;};
    void deleteByDefault() { this->byDefault_ = nullptr;};
    inline bool byDefault() const { DARABONBA_PTR_GET_DEFAULT(byDefault_, false) };
    inline GetServiceConfRequest& setByDefault(bool byDefault) { DARABONBA_PTR_SET_VALUE(byDefault_, byDefault) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceConfRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetServiceConfRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetServiceConfRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetServiceConfRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // Query default configuration
    std::shared_ptr<bool> byDefault_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Audit scenario.
    std::shared_ptr<string> scene_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
