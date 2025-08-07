// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceTemplateParameterConstraintsRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateParameterConstraintsRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateParameterConstraintsRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    GetServiceTemplateParameterConstraintsRequestParameters() = default ;
    GetServiceTemplateParameterConstraintsRequestParameters(const GetServiceTemplateParameterConstraintsRequestParameters &) = default ;
    GetServiceTemplateParameterConstraintsRequestParameters(GetServiceTemplateParameterConstraintsRequestParameters &&) = default ;
    GetServiceTemplateParameterConstraintsRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateParameterConstraintsRequestParameters() = default ;
    GetServiceTemplateParameterConstraintsRequestParameters& operator=(const GetServiceTemplateParameterConstraintsRequestParameters &) = default ;
    GetServiceTemplateParameterConstraintsRequestParameters& operator=(GetServiceTemplateParameterConstraintsRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterKey_ != nullptr
        && this->parameterValue_ != nullptr; };
    // parameterKey Field Functions 
    bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
    void deleteParameterKey() { this->parameterKey_ = nullptr;};
    inline string parameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
    inline GetServiceTemplateParameterConstraintsRequestParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline GetServiceTemplateParameterConstraintsRequestParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The name of the parameter. If you do not specify Parameters, the parameters and values in the template are used.
    // 
    // >  Parameters is an optional parameter. ParameterKey is required if you specify Parameters.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The parameter value that is defined in the template.
    // 
    // >  Parameters is an optional parameter. ParameterValue is required if you specify Parameters.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
