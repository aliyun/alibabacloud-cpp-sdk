// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYCONSTANTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYCONSTANTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiResponseBodyConstantParametersConstantParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyConstantParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyConstantParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConstantParameter, constantParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyConstantParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConstantParameter, constantParameter_);
    };
    DescribeApiResponseBodyConstantParameters() = default ;
    DescribeApiResponseBodyConstantParameters(const DescribeApiResponseBodyConstantParameters &) = default ;
    DescribeApiResponseBodyConstantParameters(DescribeApiResponseBodyConstantParameters &&) = default ;
    DescribeApiResponseBodyConstantParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyConstantParameters() = default ;
    DescribeApiResponseBodyConstantParameters& operator=(const DescribeApiResponseBodyConstantParameters &) = default ;
    DescribeApiResponseBodyConstantParameters& operator=(DescribeApiResponseBodyConstantParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constantParameter_ == nullptr; };
    // constantParameter Field Functions 
    bool hasConstantParameter() const { return this->constantParameter_ != nullptr;};
    void deleteConstantParameter() { this->constantParameter_ = nullptr;};
    inline const vector<Models::DescribeApiResponseBodyConstantParametersConstantParameter> & constantParameter() const { DARABONBA_PTR_GET_CONST(constantParameter_, vector<Models::DescribeApiResponseBodyConstantParametersConstantParameter>) };
    inline vector<Models::DescribeApiResponseBodyConstantParametersConstantParameter> constantParameter() { DARABONBA_PTR_GET(constantParameter_, vector<Models::DescribeApiResponseBodyConstantParametersConstantParameter>) };
    inline DescribeApiResponseBodyConstantParameters& setConstantParameter(const vector<Models::DescribeApiResponseBodyConstantParametersConstantParameter> & constantParameter) { DARABONBA_PTR_SET_VALUE(constantParameter_, constantParameter) };
    inline DescribeApiResponseBodyConstantParameters& setConstantParameter(vector<Models::DescribeApiResponseBodyConstantParametersConstantParameter> && constantParameter) { DARABONBA_PTR_SET_RVALUE(constantParameter_, constantParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiResponseBodyConstantParametersConstantParameter>> constantParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
