// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINEEXECUTIONSRESPONSEBODYIMAGEPIPELINEEXECUTION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINEEXECUTIONSRESPONSEBODYIMAGEPIPELINEEXECUTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution& obj) { 
      DARABONBA_PTR_TO_JSON(ImagePipelineExecutionSet, imagePipelineExecutionSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagePipelineExecutionSet, imagePipelineExecutionSet_);
    };
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution() = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution(const DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution &) = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution(DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution &&) = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution() = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution& operator=(const DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution &) = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution& operator=(DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imagePipelineExecutionSet_ == nullptr; };
    // imagePipelineExecutionSet Field Functions 
    bool hasImagePipelineExecutionSet() const { return this->imagePipelineExecutionSet_ != nullptr;};
    void deleteImagePipelineExecutionSet() { this->imagePipelineExecutionSet_ = nullptr;};
    inline const vector<Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet> & imagePipelineExecutionSet() const { DARABONBA_PTR_GET_CONST(imagePipelineExecutionSet_, vector<Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet>) };
    inline vector<Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet> imagePipelineExecutionSet() { DARABONBA_PTR_GET(imagePipelineExecutionSet_, vector<Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet>) };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution& setImagePipelineExecutionSet(const vector<Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet> & imagePipelineExecutionSet) { DARABONBA_PTR_SET_VALUE(imagePipelineExecutionSet_, imagePipelineExecutionSet) };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution& setImagePipelineExecutionSet(vector<Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet> && imagePipelineExecutionSet) { DARABONBA_PTR_SET_RVALUE(imagePipelineExecutionSet_, imagePipelineExecutionSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet>> imagePipelineExecutionSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
