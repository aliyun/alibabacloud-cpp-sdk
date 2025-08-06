// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipeline& obj) { 
      DARABONBA_PTR_TO_JSON(ImagePipelineSet, imagePipelineSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagePipelineSet, imagePipelineSet_);
    };
    DescribeImagePipelinesResponseBodyImagePipeline() = default ;
    DescribeImagePipelinesResponseBodyImagePipeline(const DescribeImagePipelinesResponseBodyImagePipeline &) = default ;
    DescribeImagePipelinesResponseBodyImagePipeline(DescribeImagePipelinesResponseBodyImagePipeline &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipeline() = default ;
    DescribeImagePipelinesResponseBodyImagePipeline& operator=(const DescribeImagePipelinesResponseBodyImagePipeline &) = default ;
    DescribeImagePipelinesResponseBodyImagePipeline& operator=(DescribeImagePipelinesResponseBodyImagePipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imagePipelineSet_ != nullptr; };
    // imagePipelineSet Field Functions 
    bool hasImagePipelineSet() const { return this->imagePipelineSet_ != nullptr;};
    void deleteImagePipelineSet() { this->imagePipelineSet_ = nullptr;};
    inline const vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet> & imagePipelineSet() const { DARABONBA_PTR_GET_CONST(imagePipelineSet_, vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet>) };
    inline vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet> imagePipelineSet() { DARABONBA_PTR_GET(imagePipelineSet_, vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet>) };
    inline DescribeImagePipelinesResponseBodyImagePipeline& setImagePipelineSet(const vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet> & imagePipelineSet) { DARABONBA_PTR_SET_VALUE(imagePipelineSet_, imagePipelineSet) };
    inline DescribeImagePipelinesResponseBodyImagePipeline& setImagePipelineSet(vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet> && imagePipelineSet) { DARABONBA_PTR_SET_RVALUE(imagePipelineSet_, imagePipelineSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet>> imagePipelineSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
