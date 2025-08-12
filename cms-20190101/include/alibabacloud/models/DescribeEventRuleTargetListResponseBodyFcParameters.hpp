// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYFCPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYFCPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyFcParametersFCParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyFcParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyFcParameters& obj) { 
      DARABONBA_PTR_TO_JSON(FCParameter, FCParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyFcParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(FCParameter, FCParameter_);
    };
    DescribeEventRuleTargetListResponseBodyFcParameters() = default ;
    DescribeEventRuleTargetListResponseBodyFcParameters(const DescribeEventRuleTargetListResponseBodyFcParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyFcParameters(DescribeEventRuleTargetListResponseBodyFcParameters &&) = default ;
    DescribeEventRuleTargetListResponseBodyFcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyFcParameters() = default ;
    DescribeEventRuleTargetListResponseBodyFcParameters& operator=(const DescribeEventRuleTargetListResponseBodyFcParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyFcParameters& operator=(DescribeEventRuleTargetListResponseBodyFcParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->FCParameter_ != nullptr; };
    // FCParameter Field Functions 
    bool hasFCParameter() const { return this->FCParameter_ != nullptr;};
    void deleteFCParameter() { this->FCParameter_ = nullptr;};
    inline const vector<Models::DescribeEventRuleTargetListResponseBodyFcParametersFCParameter> & FCParameter() const { DARABONBA_PTR_GET_CONST(FCParameter_, vector<Models::DescribeEventRuleTargetListResponseBodyFcParametersFCParameter>) };
    inline vector<Models::DescribeEventRuleTargetListResponseBodyFcParametersFCParameter> FCParameter() { DARABONBA_PTR_GET(FCParameter_, vector<Models::DescribeEventRuleTargetListResponseBodyFcParametersFCParameter>) };
    inline DescribeEventRuleTargetListResponseBodyFcParameters& setFCParameter(const vector<Models::DescribeEventRuleTargetListResponseBodyFcParametersFCParameter> & FCParameter) { DARABONBA_PTR_SET_VALUE(FCParameter_, FCParameter) };
    inline DescribeEventRuleTargetListResponseBodyFcParameters& setFCParameter(vector<Models::DescribeEventRuleTargetListResponseBodyFcParametersFCParameter> && FCParameter) { DARABONBA_PTR_SET_RVALUE(FCParameter_, FCParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventRuleTargetListResponseBodyFcParametersFCParameter>> FCParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
