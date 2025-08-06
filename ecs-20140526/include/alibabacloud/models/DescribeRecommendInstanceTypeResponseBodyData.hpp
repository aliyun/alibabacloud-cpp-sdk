// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRecommendInstanceTypeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendInstanceTypeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RecommendInstanceType, recommendInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendInstanceTypeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RecommendInstanceType, recommendInstanceType_);
    };
    DescribeRecommendInstanceTypeResponseBodyData() = default ;
    DescribeRecommendInstanceTypeResponseBodyData(const DescribeRecommendInstanceTypeResponseBodyData &) = default ;
    DescribeRecommendInstanceTypeResponseBodyData(DescribeRecommendInstanceTypeResponseBodyData &&) = default ;
    DescribeRecommendInstanceTypeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendInstanceTypeResponseBodyData() = default ;
    DescribeRecommendInstanceTypeResponseBodyData& operator=(const DescribeRecommendInstanceTypeResponseBodyData &) = default ;
    DescribeRecommendInstanceTypeResponseBodyData& operator=(DescribeRecommendInstanceTypeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recommendInstanceType_ != nullptr; };
    // recommendInstanceType Field Functions 
    bool hasRecommendInstanceType() const { return this->recommendInstanceType_ != nullptr;};
    void deleteRecommendInstanceType() { this->recommendInstanceType_ = nullptr;};
    inline const vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType> & recommendInstanceType() const { DARABONBA_PTR_GET_CONST(recommendInstanceType_, vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType>) };
    inline vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType> recommendInstanceType() { DARABONBA_PTR_GET(recommendInstanceType_, vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType>) };
    inline DescribeRecommendInstanceTypeResponseBodyData& setRecommendInstanceType(const vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType> & recommendInstanceType) { DARABONBA_PTR_SET_VALUE(recommendInstanceType_, recommendInstanceType) };
    inline DescribeRecommendInstanceTypeResponseBodyData& setRecommendInstanceType(vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType> && recommendInstanceType) { DARABONBA_PTR_SET_RVALUE(recommendInstanceType_, recommendInstanceType) };


  protected:
    std::shared_ptr<vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceType>> recommendInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
