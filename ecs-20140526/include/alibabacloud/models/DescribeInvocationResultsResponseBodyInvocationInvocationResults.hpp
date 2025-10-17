// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODYINVOCATIONINVOCATIONRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODYINVOCATIONINVOCATIONRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationResultsResponseBodyInvocationInvocationResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationResultsResponseBodyInvocationInvocationResults& obj) { 
      DARABONBA_PTR_TO_JSON(InvocationResult, invocationResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationResultsResponseBodyInvocationInvocationResults& obj) { 
      DARABONBA_PTR_FROM_JSON(InvocationResult, invocationResult_);
    };
    DescribeInvocationResultsResponseBodyInvocationInvocationResults() = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResults(const DescribeInvocationResultsResponseBodyInvocationInvocationResults &) = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResults(DescribeInvocationResultsResponseBodyInvocationInvocationResults &&) = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationResultsResponseBodyInvocationInvocationResults() = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResults& operator=(const DescribeInvocationResultsResponseBodyInvocationInvocationResults &) = default ;
    DescribeInvocationResultsResponseBodyInvocationInvocationResults& operator=(DescribeInvocationResultsResponseBodyInvocationInvocationResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invocationResult_ == nullptr; };
    // invocationResult Field Functions 
    bool hasInvocationResult() const { return this->invocationResult_ != nullptr;};
    void deleteInvocationResult() { this->invocationResult_ = nullptr;};
    inline const vector<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult> & invocationResult() const { DARABONBA_PTR_GET_CONST(invocationResult_, vector<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult>) };
    inline vector<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult> invocationResult() { DARABONBA_PTR_GET(invocationResult_, vector<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult>) };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResults& setInvocationResult(const vector<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult> & invocationResult) { DARABONBA_PTR_SET_VALUE(invocationResult_, invocationResult) };
    inline DescribeInvocationResultsResponseBodyInvocationInvocationResults& setInvocationResult(vector<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult> && invocationResult) { DARABONBA_PTR_SET_RVALUE(invocationResult_, invocationResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeInvocationResultsResponseBodyInvocationInvocationResultsInvocationResult>> invocationResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
