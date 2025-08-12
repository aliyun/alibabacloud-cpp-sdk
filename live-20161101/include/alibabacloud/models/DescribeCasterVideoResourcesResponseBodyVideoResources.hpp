// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERVIDEORESOURCESRESPONSEBODYVIDEORESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERVIDEORESOURCESRESPONSEBODYVIDEORESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterVideoResourcesResponseBodyVideoResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterVideoResourcesResponseBodyVideoResources& obj) { 
      DARABONBA_PTR_TO_JSON(VideoResource, videoResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterVideoResourcesResponseBodyVideoResources& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoResource, videoResource_);
    };
    DescribeCasterVideoResourcesResponseBodyVideoResources() = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResources(const DescribeCasterVideoResourcesResponseBodyVideoResources &) = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResources(DescribeCasterVideoResourcesResponseBodyVideoResources &&) = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterVideoResourcesResponseBodyVideoResources() = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResources& operator=(const DescribeCasterVideoResourcesResponseBodyVideoResources &) = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResources& operator=(DescribeCasterVideoResourcesResponseBodyVideoResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoResource_ != nullptr; };
    // videoResource Field Functions 
    bool hasVideoResource() const { return this->videoResource_ != nullptr;};
    void deleteVideoResource() { this->videoResource_ = nullptr;};
    inline const vector<Models::DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource> & videoResource() const { DARABONBA_PTR_GET_CONST(videoResource_, vector<Models::DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource>) };
    inline vector<Models::DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource> videoResource() { DARABONBA_PTR_GET(videoResource_, vector<Models::DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource>) };
    inline DescribeCasterVideoResourcesResponseBodyVideoResources& setVideoResource(const vector<Models::DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource> & videoResource) { DARABONBA_PTR_SET_VALUE(videoResource_, videoResource) };
    inline DescribeCasterVideoResourcesResponseBodyVideoResources& setVideoResource(vector<Models::DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource> && videoResource) { DARABONBA_PTR_SET_RVALUE(videoResource_, videoResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource>> videoResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
