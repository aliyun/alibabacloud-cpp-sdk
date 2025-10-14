// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYSLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYSLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodySlsParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodySlsParameters& obj) { 
      DARABONBA_PTR_TO_JSON(SlsParameter, slsParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodySlsParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(SlsParameter, slsParameter_);
    };
    DescribeEventRuleTargetListResponseBodySlsParameters() = default ;
    DescribeEventRuleTargetListResponseBodySlsParameters(const DescribeEventRuleTargetListResponseBodySlsParameters &) = default ;
    DescribeEventRuleTargetListResponseBodySlsParameters(DescribeEventRuleTargetListResponseBodySlsParameters &&) = default ;
    DescribeEventRuleTargetListResponseBodySlsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodySlsParameters() = default ;
    DescribeEventRuleTargetListResponseBodySlsParameters& operator=(const DescribeEventRuleTargetListResponseBodySlsParameters &) = default ;
    DescribeEventRuleTargetListResponseBodySlsParameters& operator=(DescribeEventRuleTargetListResponseBodySlsParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slsParameter_ == nullptr; };
    // slsParameter Field Functions 
    bool hasSlsParameter() const { return this->slsParameter_ != nullptr;};
    void deleteSlsParameter() { this->slsParameter_ = nullptr;};
    inline const vector<Models::DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter> & slsParameter() const { DARABONBA_PTR_GET_CONST(slsParameter_, vector<Models::DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter>) };
    inline vector<Models::DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter> slsParameter() { DARABONBA_PTR_GET(slsParameter_, vector<Models::DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter>) };
    inline DescribeEventRuleTargetListResponseBodySlsParameters& setSlsParameter(const vector<Models::DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter> & slsParameter) { DARABONBA_PTR_SET_VALUE(slsParameter_, slsParameter) };
    inline DescribeEventRuleTargetListResponseBodySlsParameters& setSlsParameter(vector<Models::DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter> && slsParameter) { DARABONBA_PTR_SET_RVALUE(slsParameter_, slsParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter>> slsParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
