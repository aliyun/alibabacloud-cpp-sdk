// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(resourceVersion, resourceVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(resourceVersion, resourceVersion_);
    };
    ResourceInfo() = default ;
    ResourceInfo(const ResourceInfo &) = default ;
    ResourceInfo(ResourceInfo &&) = default ;
    ResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceInfo() = default ;
    ResourceInfo& operator=(const ResourceInfo &) = default ;
    ResourceInfo& operator=(ResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceName_ == nullptr && return this->resourceType_ == nullptr && return this->resourceVersion_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ResourceInfo& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ResourceInfo& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ResourceInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceVersion Field Functions 
    bool hasResourceVersion() const { return this->resourceVersion_ != nullptr;};
    void deleteResourceVersion() { this->resourceVersion_ = nullptr;};
    inline string resourceVersion() const { DARABONBA_PTR_GET_DEFAULT(resourceVersion_, "") };
    inline ResourceInfo& setResourceVersion(string resourceVersion) { DARABONBA_PTR_SET_VALUE(resourceVersion_, resourceVersion) };


  protected:
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> resourceVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
