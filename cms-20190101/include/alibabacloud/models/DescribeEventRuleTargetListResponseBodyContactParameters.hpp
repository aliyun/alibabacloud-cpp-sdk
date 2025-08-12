// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYCONTACTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYCONTACTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyContactParametersContactParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyContactParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyContactParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ContactParameter, contactParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyContactParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactParameter, contactParameter_);
    };
    DescribeEventRuleTargetListResponseBodyContactParameters() = default ;
    DescribeEventRuleTargetListResponseBodyContactParameters(const DescribeEventRuleTargetListResponseBodyContactParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyContactParameters(DescribeEventRuleTargetListResponseBodyContactParameters &&) = default ;
    DescribeEventRuleTargetListResponseBodyContactParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyContactParameters() = default ;
    DescribeEventRuleTargetListResponseBodyContactParameters& operator=(const DescribeEventRuleTargetListResponseBodyContactParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyContactParameters& operator=(DescribeEventRuleTargetListResponseBodyContactParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactParameter_ != nullptr; };
    // contactParameter Field Functions 
    bool hasContactParameter() const { return this->contactParameter_ != nullptr;};
    void deleteContactParameter() { this->contactParameter_ = nullptr;};
    inline const vector<Models::DescribeEventRuleTargetListResponseBodyContactParametersContactParameter> & contactParameter() const { DARABONBA_PTR_GET_CONST(contactParameter_, vector<Models::DescribeEventRuleTargetListResponseBodyContactParametersContactParameter>) };
    inline vector<Models::DescribeEventRuleTargetListResponseBodyContactParametersContactParameter> contactParameter() { DARABONBA_PTR_GET(contactParameter_, vector<Models::DescribeEventRuleTargetListResponseBodyContactParametersContactParameter>) };
    inline DescribeEventRuleTargetListResponseBodyContactParameters& setContactParameter(const vector<Models::DescribeEventRuleTargetListResponseBodyContactParametersContactParameter> & contactParameter) { DARABONBA_PTR_SET_VALUE(contactParameter_, contactParameter) };
    inline DescribeEventRuleTargetListResponseBodyContactParameters& setContactParameter(vector<Models::DescribeEventRuleTargetListResponseBodyContactParametersContactParameter> && contactParameter) { DARABONBA_PTR_SET_RVALUE(contactParameter_, contactParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventRuleTargetListResponseBodyContactParametersContactParameter>> contactParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
