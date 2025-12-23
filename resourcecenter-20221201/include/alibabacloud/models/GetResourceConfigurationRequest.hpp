// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetResourceConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetResourceConfigurationRequest() = default ;
    GetResourceConfigurationRequest(const GetResourceConfigurationRequest &) = default ;
    GetResourceConfigurationRequest(GetResourceConfigurationRequest &&) = default ;
    GetResourceConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationRequest() = default ;
    GetResourceConfigurationRequest& operator=(const GetResourceConfigurationRequest &) = default ;
    GetResourceConfigurationRequest& operator=(GetResourceConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceRegionId_ == nullptr && return this->resourceType_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetResourceConfigurationRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline GetResourceConfigurationRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceConfigurationRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The region ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The type of the resource.
    // 
    // For more information about the resource types supported by Resource Center, see [Services that work with Resource Center](https://help.aliyun.com/document_detail/477798.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
