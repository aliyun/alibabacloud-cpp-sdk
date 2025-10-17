// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyApplicationParameterRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    ModifyApplicationParameterRequest() = default ;
    ModifyApplicationParameterRequest(const ModifyApplicationParameterRequest &) = default ;
    ModifyApplicationParameterRequest(ModifyApplicationParameterRequest &&) = default ;
    ModifyApplicationParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationParameterRequest() = default ;
    ModifyApplicationParameterRequest& operator=(const ModifyApplicationParameterRequest &) = default ;
    ModifyApplicationParameterRequest& operator=(ModifyApplicationParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->parameterName_ == nullptr && return this->parameterValue_ == nullptr && return this->parameters_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationParameterRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline ModifyApplicationParameterRequest& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline ModifyApplicationParameterRequest& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<ModifyApplicationParameterRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<ModifyApplicationParameterRequestParameters>) };
    inline vector<ModifyApplicationParameterRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<ModifyApplicationParameterRequestParameters>) };
    inline ModifyApplicationParameterRequest& setParameters(const vector<ModifyApplicationParameterRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ModifyApplicationParameterRequest& setParameters(vector<ModifyApplicationParameterRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> parameterName_ = nullptr;
    std::shared_ptr<string> parameterValue_ = nullptr;
    std::shared_ptr<vector<ModifyApplicationParameterRequestParameters>> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
