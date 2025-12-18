// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISCOVEREDRESOURCEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISCOVEREDRESOURCEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DescribeDiscoveredResourceBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiscoveredResourceBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiscoveredResourceBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    DescribeDiscoveredResourceBatchRequest() = default ;
    DescribeDiscoveredResourceBatchRequest(const DescribeDiscoveredResourceBatchRequest &) = default ;
    DescribeDiscoveredResourceBatchRequest(DescribeDiscoveredResourceBatchRequest &&) = default ;
    DescribeDiscoveredResourceBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiscoveredResourceBatchRequest() = default ;
    DescribeDiscoveredResourceBatchRequest& operator=(const DescribeDiscoveredResourceBatchRequest &) = default ;
    DescribeDiscoveredResourceBatchRequest& operator=(DescribeDiscoveredResourceBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regions_ == nullptr
        && return this->resourceIds_ == nullptr && return this->resourceTypes_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline string regions() const { DARABONBA_PTR_GET_DEFAULT(regions_, "") };
    inline DescribeDiscoveredResourceBatchRequest& setRegions(string regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string resourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline DescribeDiscoveredResourceBatchRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string resourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline DescribeDiscoveredResourceBatchRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


  protected:
    std::shared_ptr<string> regions_ = nullptr;
    std::shared_ptr<string> resourceIds_ = nullptr;
    std::shared_ptr<string> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
