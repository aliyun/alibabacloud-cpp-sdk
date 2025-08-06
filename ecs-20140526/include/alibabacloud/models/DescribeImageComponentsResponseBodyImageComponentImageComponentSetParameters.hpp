// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODYIMAGECOMPONENTIMAGECOMPONENTSETPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODYIMAGECOMPONENTIMAGECOMPONENTSETPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
    };
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters() = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters(const DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters &) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters(DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters &&) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters() = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters& operator=(const DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters &) = default ;
    DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters& operator=(DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameter_ != nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter> & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter>) };
    inline vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter> parameter() { DARABONBA_PTR_GET(parameter_, vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter>) };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters& setParameter(const vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter> & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline DescribeImageComponentsResponseBodyImageComponentImageComponentSetParameters& setParameter(vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter> && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSetParametersParameter>> parameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
