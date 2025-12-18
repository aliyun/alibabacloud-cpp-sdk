// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCECOUNTSGROUPBYREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDISCOVEREDRESOURCECOUNTSGROUPBYREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetDiscoveredResourceCountsGroupByRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiscoveredResourceCountsGroupByRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiscoveredResourceCountsGroupByRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetDiscoveredResourceCountsGroupByRegionRequest() = default ;
    GetDiscoveredResourceCountsGroupByRegionRequest(const GetDiscoveredResourceCountsGroupByRegionRequest &) = default ;
    GetDiscoveredResourceCountsGroupByRegionRequest(GetDiscoveredResourceCountsGroupByRegionRequest &&) = default ;
    GetDiscoveredResourceCountsGroupByRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiscoveredResourceCountsGroupByRegionRequest() = default ;
    GetDiscoveredResourceCountsGroupByRegionRequest& operator=(const GetDiscoveredResourceCountsGroupByRegionRequest &) = default ;
    GetDiscoveredResourceCountsGroupByRegionRequest& operator=(GetDiscoveredResourceCountsGroupByRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetDiscoveredResourceCountsGroupByRegionRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The resource type.
    // 
    // For more information about how to obtain the type of a resource, see [ListDiscoveredResources](https://help.aliyun.com/document_detail/169620.html).
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
