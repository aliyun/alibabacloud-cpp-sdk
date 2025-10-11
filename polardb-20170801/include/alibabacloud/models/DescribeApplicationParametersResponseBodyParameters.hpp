// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationParametersResponseBodyParametersComponentParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationParametersResponseBodyParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersResponseBodyParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentParameters, componentParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersResponseBodyParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentParameters, componentParameters_);
    };
    DescribeApplicationParametersResponseBodyParameters() = default ;
    DescribeApplicationParametersResponseBodyParameters(const DescribeApplicationParametersResponseBodyParameters &) = default ;
    DescribeApplicationParametersResponseBodyParameters(DescribeApplicationParametersResponseBodyParameters &&) = default ;
    DescribeApplicationParametersResponseBodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersResponseBodyParameters() = default ;
    DescribeApplicationParametersResponseBodyParameters& operator=(const DescribeApplicationParametersResponseBodyParameters &) = default ;
    DescribeApplicationParametersResponseBodyParameters& operator=(DescribeApplicationParametersResponseBodyParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentParameters_ != nullptr; };
    // componentParameters Field Functions 
    bool hasComponentParameters() const { return this->componentParameters_ != nullptr;};
    void deleteComponentParameters() { this->componentParameters_ = nullptr;};
    inline const vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParameters> & componentParameters() const { DARABONBA_PTR_GET_CONST(componentParameters_, vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParameters>) };
    inline vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParameters> componentParameters() { DARABONBA_PTR_GET(componentParameters_, vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParameters>) };
    inline DescribeApplicationParametersResponseBodyParameters& setComponentParameters(const vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParameters> & componentParameters) { DARABONBA_PTR_SET_VALUE(componentParameters_, componentParameters) };
    inline DescribeApplicationParametersResponseBodyParameters& setComponentParameters(vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParameters> && componentParameters) { DARABONBA_PTR_SET_RVALUE(componentParameters_, componentParameters) };


  protected:
    std::shared_ptr<vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParameters>> componentParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
