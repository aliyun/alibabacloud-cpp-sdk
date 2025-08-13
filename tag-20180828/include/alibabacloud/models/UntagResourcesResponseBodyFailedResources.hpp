// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESRESPONSEBODYFAILEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESRESPONSEBODYFAILEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UntagResourcesResponseBodyFailedResourcesFailedResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class UntagResourcesResponseBodyFailedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesResponseBodyFailedResources& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResource, failedResource_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesResponseBodyFailedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResource, failedResource_);
    };
    UntagResourcesResponseBodyFailedResources() = default ;
    UntagResourcesResponseBodyFailedResources(const UntagResourcesResponseBodyFailedResources &) = default ;
    UntagResourcesResponseBodyFailedResources(UntagResourcesResponseBodyFailedResources &&) = default ;
    UntagResourcesResponseBodyFailedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourcesResponseBodyFailedResources() = default ;
    UntagResourcesResponseBodyFailedResources& operator=(const UntagResourcesResponseBodyFailedResources &) = default ;
    UntagResourcesResponseBodyFailedResources& operator=(UntagResourcesResponseBodyFailedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResource_ != nullptr; };
    // failedResource Field Functions 
    bool hasFailedResource() const { return this->failedResource_ != nullptr;};
    void deleteFailedResource() { this->failedResource_ = nullptr;};
    inline const vector<Models::UntagResourcesResponseBodyFailedResourcesFailedResource> & failedResource() const { DARABONBA_PTR_GET_CONST(failedResource_, vector<Models::UntagResourcesResponseBodyFailedResourcesFailedResource>) };
    inline vector<Models::UntagResourcesResponseBodyFailedResourcesFailedResource> failedResource() { DARABONBA_PTR_GET(failedResource_, vector<Models::UntagResourcesResponseBodyFailedResourcesFailedResource>) };
    inline UntagResourcesResponseBodyFailedResources& setFailedResource(const vector<Models::UntagResourcesResponseBodyFailedResourcesFailedResource> & failedResource) { DARABONBA_PTR_SET_VALUE(failedResource_, failedResource) };
    inline UntagResourcesResponseBodyFailedResources& setFailedResource(vector<Models::UntagResourcesResponseBodyFailedResourcesFailedResource> && failedResource) { DARABONBA_PTR_SET_RVALUE(failedResource_, failedResource) };


  protected:
    std::shared_ptr<vector<Models::UntagResourcesResponseBodyFailedResourcesFailedResource>> failedResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
