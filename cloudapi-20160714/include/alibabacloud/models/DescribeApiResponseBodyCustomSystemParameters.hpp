// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYCUSTOMSYSTEMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYCUSTOMSYSTEMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyCustomSystemParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyCustomSystemParameters& obj) { 
      DARABONBA_PTR_TO_JSON(CustomSystemParameter, customSystemParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyCustomSystemParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomSystemParameter, customSystemParameter_);
    };
    DescribeApiResponseBodyCustomSystemParameters() = default ;
    DescribeApiResponseBodyCustomSystemParameters(const DescribeApiResponseBodyCustomSystemParameters &) = default ;
    DescribeApiResponseBodyCustomSystemParameters(DescribeApiResponseBodyCustomSystemParameters &&) = default ;
    DescribeApiResponseBodyCustomSystemParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyCustomSystemParameters() = default ;
    DescribeApiResponseBodyCustomSystemParameters& operator=(const DescribeApiResponseBodyCustomSystemParameters &) = default ;
    DescribeApiResponseBodyCustomSystemParameters& operator=(DescribeApiResponseBodyCustomSystemParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customSystemParameter_ == nullptr; };
    // customSystemParameter Field Functions 
    bool hasCustomSystemParameter() const { return this->customSystemParameter_ != nullptr;};
    void deleteCustomSystemParameter() { this->customSystemParameter_ = nullptr;};
    inline const vector<Models::DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter> & customSystemParameter() const { DARABONBA_PTR_GET_CONST(customSystemParameter_, vector<Models::DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter>) };
    inline vector<Models::DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter> customSystemParameter() { DARABONBA_PTR_GET(customSystemParameter_, vector<Models::DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter>) };
    inline DescribeApiResponseBodyCustomSystemParameters& setCustomSystemParameter(const vector<Models::DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter> & customSystemParameter) { DARABONBA_PTR_SET_VALUE(customSystemParameter_, customSystemParameter) };
    inline DescribeApiResponseBodyCustomSystemParameters& setCustomSystemParameter(vector<Models::DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter> && customSystemParameter) { DARABONBA_PTR_SET_RVALUE(customSystemParameter_, customSystemParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter>> customSystemParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
