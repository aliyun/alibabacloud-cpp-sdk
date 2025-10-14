// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyMnsParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyMnsParameters& obj) { 
      DARABONBA_PTR_TO_JSON(MnsParameter, mnsParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyMnsParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(MnsParameter, mnsParameter_);
    };
    DescribeEventRuleTargetListResponseBodyMnsParameters() = default ;
    DescribeEventRuleTargetListResponseBodyMnsParameters(const DescribeEventRuleTargetListResponseBodyMnsParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyMnsParameters(DescribeEventRuleTargetListResponseBodyMnsParameters &&) = default ;
    DescribeEventRuleTargetListResponseBodyMnsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyMnsParameters() = default ;
    DescribeEventRuleTargetListResponseBodyMnsParameters& operator=(const DescribeEventRuleTargetListResponseBodyMnsParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyMnsParameters& operator=(DescribeEventRuleTargetListResponseBodyMnsParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mnsParameter_ == nullptr; };
    // mnsParameter Field Functions 
    bool hasMnsParameter() const { return this->mnsParameter_ != nullptr;};
    void deleteMnsParameter() { this->mnsParameter_ = nullptr;};
    inline const vector<Models::DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter> & mnsParameter() const { DARABONBA_PTR_GET_CONST(mnsParameter_, vector<Models::DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter>) };
    inline vector<Models::DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter> mnsParameter() { DARABONBA_PTR_GET(mnsParameter_, vector<Models::DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter>) };
    inline DescribeEventRuleTargetListResponseBodyMnsParameters& setMnsParameter(const vector<Models::DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter> & mnsParameter) { DARABONBA_PTR_SET_VALUE(mnsParameter_, mnsParameter) };
    inline DescribeEventRuleTargetListResponseBodyMnsParameters& setMnsParameter(vector<Models::DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter> && mnsParameter) { DARABONBA_PTR_SET_RVALUE(mnsParameter_, mnsParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter>> mnsParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
