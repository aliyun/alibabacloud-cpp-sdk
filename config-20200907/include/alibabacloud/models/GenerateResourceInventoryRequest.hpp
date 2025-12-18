// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATERESOURCEINVENTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATERESOURCEINVENTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateResourceInventoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateResourceInventoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateResourceInventoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    GenerateResourceInventoryRequest() = default ;
    GenerateResourceInventoryRequest(const GenerateResourceInventoryRequest &) = default ;
    GenerateResourceInventoryRequest(GenerateResourceInventoryRequest &&) = default ;
    GenerateResourceInventoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateResourceInventoryRequest() = default ;
    GenerateResourceInventoryRequest& operator=(const GenerateResourceInventoryRequest &) = default ;
    GenerateResourceInventoryRequest& operator=(GenerateResourceInventoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr
        && return this->resourceDeleted_ == nullptr && return this->resourceTypes_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline string regions() const { DARABONBA_PTR_GET_DEFAULT(regions_, "") };
    inline GenerateResourceInventoryRequest& setRegions(string regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };


    // resourceDeleted Field Functions 
    bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
    void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
    inline int32_t resourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, 0) };
    inline GenerateResourceInventoryRequest& setResourceDeleted(int32_t resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string resourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline GenerateResourceInventoryRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


  protected:
    // The region IDs of the resources. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> regions_ = nullptr;
    // Indicates whether the resource is deleted. Valid values:
    // 
    // *   1 (default): The resource is retained.
    // *   0: The resource is deleted.
    std::shared_ptr<int32_t> resourceDeleted_ = nullptr;
    // The resource types. Separate multiple resource types with commas (,).
    std::shared_ptr<string> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
