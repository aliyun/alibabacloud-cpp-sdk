// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERSCOMPONENTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODYPARAMETERSCOMPONENTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationParametersResponseBodyParametersComponentParametersParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationParametersResponseBodyParametersComponentParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersResponseBodyParametersComponentParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersResponseBodyParametersComponentParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    DescribeApplicationParametersResponseBodyParametersComponentParameters() = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParameters(const DescribeApplicationParametersResponseBodyParametersComponentParameters &) = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParameters(DescribeApplicationParametersResponseBodyParametersComponentParameters &&) = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersResponseBodyParametersComponentParameters() = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParameters& operator=(const DescribeApplicationParametersResponseBodyParametersComponentParameters &) = default ;
    DescribeApplicationParametersResponseBodyParametersComponentParameters& operator=(DescribeApplicationParametersResponseBodyParametersComponentParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentId_ == nullptr
        && return this->componentType_ == nullptr && return this->parameters_ == nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParameters& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline DescribeApplicationParametersResponseBodyParametersComponentParameters& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParametersParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParametersParameters>) };
    inline vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParametersParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParametersParameters>) };
    inline DescribeApplicationParametersResponseBodyParametersComponentParameters& setParameters(const vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParametersParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeApplicationParametersResponseBodyParametersComponentParameters& setParameters(vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParametersParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    std::shared_ptr<string> componentId_ = nullptr;
    std::shared_ptr<string> componentType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeApplicationParametersResponseBodyParametersComponentParametersParameters>> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
