// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDSTRATEGYTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDSTRATEGYTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizedStrategyTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedStrategyTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartegyTargets, startegyTargets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedStrategyTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartegyTargets, startegyTargets_);
    };
    DescribeCustomizedStrategyTargetsResponseBody() = default ;
    DescribeCustomizedStrategyTargetsResponseBody(const DescribeCustomizedStrategyTargetsResponseBody &) = default ;
    DescribeCustomizedStrategyTargetsResponseBody(DescribeCustomizedStrategyTargetsResponseBody &&) = default ;
    DescribeCustomizedStrategyTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedStrategyTargetsResponseBody() = default ;
    DescribeCustomizedStrategyTargetsResponseBody& operator=(const DescribeCustomizedStrategyTargetsResponseBody &) = default ;
    DescribeCustomizedStrategyTargetsResponseBody& operator=(DescribeCustomizedStrategyTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->startegyTargets_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizedStrategyTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startegyTargets Field Functions 
    bool hasStartegyTargets() const { return this->startegyTargets_ != nullptr;};
    void deleteStartegyTargets() { this->startegyTargets_ = nullptr;};
    inline const vector<DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets> & startegyTargets() const { DARABONBA_PTR_GET_CONST(startegyTargets_, vector<DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets>) };
    inline vector<DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets> startegyTargets() { DARABONBA_PTR_GET(startegyTargets_, vector<DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets>) };
    inline DescribeCustomizedStrategyTargetsResponseBody& setStartegyTargets(const vector<DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets> & startegyTargets) { DARABONBA_PTR_SET_VALUE(startegyTargets_, startegyTargets) };
    inline DescribeCustomizedStrategyTargetsResponseBody& setStartegyTargets(vector<DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets> && startegyTargets) { DARABONBA_PTR_SET_RVALUE(startegyTargets_, startegyTargets) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the servers to which custom policies are applied.
    std::shared_ptr<vector<DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets>> startegyTargets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
