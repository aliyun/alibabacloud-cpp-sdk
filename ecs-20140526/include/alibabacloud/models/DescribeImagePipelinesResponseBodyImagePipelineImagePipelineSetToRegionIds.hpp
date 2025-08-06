// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETTOREGIONIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETTOREGIONIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds& obj) { 
      DARABONBA_PTR_TO_JSON(ToRegionId, toRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ToRegionId, toRegionId_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->toRegionId_ != nullptr; };
    // toRegionId Field Functions 
    bool hasToRegionId() const { return this->toRegionId_ != nullptr;};
    void deleteToRegionId() { this->toRegionId_ = nullptr;};
    inline const vector<string> & toRegionId() const { DARABONBA_PTR_GET_CONST(toRegionId_, vector<string>) };
    inline vector<string> toRegionId() { DARABONBA_PTR_GET(toRegionId_, vector<string>) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds& setToRegionId(const vector<string> & toRegionId) { DARABONBA_PTR_SET_VALUE(toRegionId_, toRegionId) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds& setToRegionId(vector<string> && toRegionId) { DARABONBA_PTR_SET_RVALUE(toRegionId_, toRegionId) };


  protected:
    std::shared_ptr<vector<string>> toRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
