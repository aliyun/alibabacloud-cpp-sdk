// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTagsTag>) };
    inline vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTagsTag>) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags& setTag(const vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags& setTag(vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
