// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINESTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINESTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageBaselineStrategyResponseBodyStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    DescribeImageBaselineStrategyResponseBody() = default ;
    DescribeImageBaselineStrategyResponseBody(const DescribeImageBaselineStrategyResponseBody &) = default ;
    DescribeImageBaselineStrategyResponseBody(DescribeImageBaselineStrategyResponseBody &&) = default ;
    DescribeImageBaselineStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineStrategyResponseBody() = default ;
    DescribeImageBaselineStrategyResponseBody& operator=(const DescribeImageBaselineStrategyResponseBody &) = default ;
    DescribeImageBaselineStrategyResponseBody& operator=(DescribeImageBaselineStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->strategy_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const DescribeImageBaselineStrategyResponseBodyStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, DescribeImageBaselineStrategyResponseBodyStrategy) };
    inline DescribeImageBaselineStrategyResponseBodyStrategy strategy() { DARABONBA_PTR_GET(strategy_, DescribeImageBaselineStrategyResponseBodyStrategy) };
    inline DescribeImageBaselineStrategyResponseBody& setStrategy(const DescribeImageBaselineStrategyResponseBodyStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline DescribeImageBaselineStrategyResponseBody& setStrategy(DescribeImageBaselineStrategyResponseBodyStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the baseline check policy.
    std::shared_ptr<DescribeImageBaselineStrategyResponseBodyStrategy> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
