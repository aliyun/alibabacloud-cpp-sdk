// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODYOPERATIONPROGRESSSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODYOPERATIONPROGRESSSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTaskAttributeResponseBodyOperationProgressSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskAttributeResponseBodyOperationProgressSet& obj) { 
      DARABONBA_PTR_TO_JSON(OperationProgress, operationProgress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskAttributeResponseBodyOperationProgressSet& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationProgress, operationProgress_);
    };
    DescribeTaskAttributeResponseBodyOperationProgressSet() = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSet(const DescribeTaskAttributeResponseBodyOperationProgressSet &) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSet(DescribeTaskAttributeResponseBodyOperationProgressSet &&) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskAttributeResponseBodyOperationProgressSet() = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSet& operator=(const DescribeTaskAttributeResponseBodyOperationProgressSet &) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSet& operator=(DescribeTaskAttributeResponseBodyOperationProgressSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationProgress_ != nullptr; };
    // operationProgress Field Functions 
    bool hasOperationProgress() const { return this->operationProgress_ != nullptr;};
    void deleteOperationProgress() { this->operationProgress_ = nullptr;};
    inline const vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress> & operationProgress() const { DARABONBA_PTR_GET_CONST(operationProgress_, vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress>) };
    inline vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress> operationProgress() { DARABONBA_PTR_GET(operationProgress_, vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress>) };
    inline DescribeTaskAttributeResponseBodyOperationProgressSet& setOperationProgress(const vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress> & operationProgress) { DARABONBA_PTR_SET_VALUE(operationProgress_, operationProgress) };
    inline DescribeTaskAttributeResponseBodyOperationProgressSet& setOperationProgress(vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress> && operationProgress) { DARABONBA_PTR_SET_RVALUE(operationProgress_, operationProgress) };


  protected:
    std::shared_ptr<vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgress>> operationProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
