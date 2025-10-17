// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETIMAGEOPTIONSIMAGETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETIMAGEOPTIONSIMAGETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTagsImageTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags& obj) { 
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageTag_ == nullptr; };
    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline const vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTagsImageTag> & imageTag() const { DARABONBA_PTR_GET_CONST(imageTag_, vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTagsImageTag>) };
    inline vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTagsImageTag> imageTag() { DARABONBA_PTR_GET(imageTag_, vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTagsImageTag>) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags& setImageTag(const vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTagsImageTag> & imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTags& setImageTag(vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTagsImageTag> && imageTag) { DARABONBA_PTR_SET_RVALUE(imageTag_, imageTag) };


  protected:
    std::shared_ptr<vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptionsImageTagsImageTag>> imageTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
