// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESRESPONSEBODYFAILEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESRESPONSEBODYFAILEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagResourcesResponseBodyFailedResourcesFailedResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class TagResourcesResponseBodyFailedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesResponseBodyFailedResources& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResource, failedResource_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesResponseBodyFailedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResource, failedResource_);
    };
    TagResourcesResponseBodyFailedResources() = default ;
    TagResourcesResponseBodyFailedResources(const TagResourcesResponseBodyFailedResources &) = default ;
    TagResourcesResponseBodyFailedResources(TagResourcesResponseBodyFailedResources &&) = default ;
    TagResourcesResponseBodyFailedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesResponseBodyFailedResources() = default ;
    TagResourcesResponseBodyFailedResources& operator=(const TagResourcesResponseBodyFailedResources &) = default ;
    TagResourcesResponseBodyFailedResources& operator=(TagResourcesResponseBodyFailedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResource_ != nullptr; };
    // failedResource Field Functions 
    bool hasFailedResource() const { return this->failedResource_ != nullptr;};
    void deleteFailedResource() { this->failedResource_ = nullptr;};
    inline const vector<Models::TagResourcesResponseBodyFailedResourcesFailedResource> & failedResource() const { DARABONBA_PTR_GET_CONST(failedResource_, vector<Models::TagResourcesResponseBodyFailedResourcesFailedResource>) };
    inline vector<Models::TagResourcesResponseBodyFailedResourcesFailedResource> failedResource() { DARABONBA_PTR_GET(failedResource_, vector<Models::TagResourcesResponseBodyFailedResourcesFailedResource>) };
    inline TagResourcesResponseBodyFailedResources& setFailedResource(const vector<Models::TagResourcesResponseBodyFailedResourcesFailedResource> & failedResource) { DARABONBA_PTR_SET_VALUE(failedResource_, failedResource) };
    inline TagResourcesResponseBodyFailedResources& setFailedResource(vector<Models::TagResourcesResponseBodyFailedResourcesFailedResource> && failedResource) { DARABONBA_PTR_SET_RVALUE(failedResource_, failedResource) };


  protected:
    std::shared_ptr<vector<Models::TagResourcesResponseBodyFailedResourcesFailedResource>> failedResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
