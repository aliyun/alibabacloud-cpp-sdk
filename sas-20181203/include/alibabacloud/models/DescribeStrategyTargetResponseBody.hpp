// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStrategyTargetResponseBodyStrategyTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyTargets, strategyTargets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyTargets, strategyTargets_);
    };
    DescribeStrategyTargetResponseBody() = default ;
    DescribeStrategyTargetResponseBody(const DescribeStrategyTargetResponseBody &) = default ;
    DescribeStrategyTargetResponseBody(DescribeStrategyTargetResponseBody &&) = default ;
    DescribeStrategyTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyTargetResponseBody() = default ;
    DescribeStrategyTargetResponseBody& operator=(const DescribeStrategyTargetResponseBody &) = default ;
    DescribeStrategyTargetResponseBody& operator=(DescribeStrategyTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->strategyTargets_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStrategyTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyTargets Field Functions 
    bool hasStrategyTargets() const { return this->strategyTargets_ != nullptr;};
    void deleteStrategyTargets() { this->strategyTargets_ = nullptr;};
    inline const vector<DescribeStrategyTargetResponseBodyStrategyTargets> & strategyTargets() const { DARABONBA_PTR_GET_CONST(strategyTargets_, vector<DescribeStrategyTargetResponseBodyStrategyTargets>) };
    inline vector<DescribeStrategyTargetResponseBodyStrategyTargets> strategyTargets() { DARABONBA_PTR_GET(strategyTargets_, vector<DescribeStrategyTargetResponseBodyStrategyTargets>) };
    inline DescribeStrategyTargetResponseBody& setStrategyTargets(const vector<DescribeStrategyTargetResponseBodyStrategyTargets> & strategyTargets) { DARABONBA_PTR_SET_VALUE(strategyTargets_, strategyTargets) };
    inline DescribeStrategyTargetResponseBody& setStrategyTargets(vector<DescribeStrategyTargetResponseBodyStrategyTargets> && strategyTargets) { DARABONBA_PTR_SET_RVALUE(strategyTargets_, strategyTargets) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the assets to which the baseline check policy is applied.
    std::shared_ptr<vector<DescribeStrategyTargetResponseBodyStrategyTargets>> strategyTargets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
