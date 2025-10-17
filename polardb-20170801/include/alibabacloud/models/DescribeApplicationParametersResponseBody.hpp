// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApplicationParametersResponseBodyParameterTemplates.hpp>
#include <alibabacloud/models/DescribeApplicationParametersResponseBodyParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterTemplates, parameterTemplates_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterTemplates, parameterTemplates_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApplicationParametersResponseBody() = default ;
    DescribeApplicationParametersResponseBody(const DescribeApplicationParametersResponseBody &) = default ;
    DescribeApplicationParametersResponseBody(DescribeApplicationParametersResponseBody &&) = default ;
    DescribeApplicationParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersResponseBody() = default ;
    DescribeApplicationParametersResponseBody& operator=(const DescribeApplicationParametersResponseBody &) = default ;
    DescribeApplicationParametersResponseBody& operator=(DescribeApplicationParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterTemplates_ == nullptr
        && return this->parameters_ == nullptr && return this->requestId_ == nullptr; };
    // parameterTemplates Field Functions 
    bool hasParameterTemplates() const { return this->parameterTemplates_ != nullptr;};
    void deleteParameterTemplates() { this->parameterTemplates_ = nullptr;};
    inline const DescribeApplicationParametersResponseBodyParameterTemplates & parameterTemplates() const { DARABONBA_PTR_GET_CONST(parameterTemplates_, DescribeApplicationParametersResponseBodyParameterTemplates) };
    inline DescribeApplicationParametersResponseBodyParameterTemplates parameterTemplates() { DARABONBA_PTR_GET(parameterTemplates_, DescribeApplicationParametersResponseBodyParameterTemplates) };
    inline DescribeApplicationParametersResponseBody& setParameterTemplates(const DescribeApplicationParametersResponseBodyParameterTemplates & parameterTemplates) { DARABONBA_PTR_SET_VALUE(parameterTemplates_, parameterTemplates) };
    inline DescribeApplicationParametersResponseBody& setParameterTemplates(DescribeApplicationParametersResponseBodyParameterTemplates && parameterTemplates) { DARABONBA_PTR_SET_RVALUE(parameterTemplates_, parameterTemplates) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const DescribeApplicationParametersResponseBodyParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, DescribeApplicationParametersResponseBodyParameters) };
    inline DescribeApplicationParametersResponseBodyParameters parameters() { DARABONBA_PTR_GET(parameters_, DescribeApplicationParametersResponseBodyParameters) };
    inline DescribeApplicationParametersResponseBody& setParameters(const DescribeApplicationParametersResponseBodyParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeApplicationParametersResponseBody& setParameters(DescribeApplicationParametersResponseBodyParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeApplicationParametersResponseBodyParameterTemplates> parameterTemplates_ = nullptr;
    std::shared_ptr<DescribeApplicationParametersResponseBodyParameters> parameters_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
