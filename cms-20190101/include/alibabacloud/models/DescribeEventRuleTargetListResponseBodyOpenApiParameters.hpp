// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYOPENAPIPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYOPENAPIPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyOpenApiParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyOpenApiParameters& obj) { 
      DARABONBA_PTR_TO_JSON(OpenApiParameters, openApiParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyOpenApiParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenApiParameters, openApiParameters_);
    };
    DescribeEventRuleTargetListResponseBodyOpenApiParameters() = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParameters(const DescribeEventRuleTargetListResponseBodyOpenApiParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParameters(DescribeEventRuleTargetListResponseBodyOpenApiParameters &&) = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyOpenApiParameters() = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParameters& operator=(const DescribeEventRuleTargetListResponseBodyOpenApiParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyOpenApiParameters& operator=(DescribeEventRuleTargetListResponseBodyOpenApiParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openApiParameters_ == nullptr; };
    // openApiParameters Field Functions 
    bool hasOpenApiParameters() const { return this->openApiParameters_ != nullptr;};
    void deleteOpenApiParameters() { this->openApiParameters_ = nullptr;};
    inline const vector<Models::DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters> & openApiParameters() const { DARABONBA_PTR_GET_CONST(openApiParameters_, vector<Models::DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters>) };
    inline vector<Models::DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters> openApiParameters() { DARABONBA_PTR_GET(openApiParameters_, vector<Models::DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters>) };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParameters& setOpenApiParameters(const vector<Models::DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters> & openApiParameters) { DARABONBA_PTR_SET_VALUE(openApiParameters_, openApiParameters) };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParameters& setOpenApiParameters(vector<Models::DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters> && openApiParameters) { DARABONBA_PTR_SET_RVALUE(openApiParameters_, openApiParameters) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventRuleTargetListResponseBodyOpenApiParametersOpenApiParameters>> openApiParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
