// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPARAMETERREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONPARAMETERREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationParameterRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationParameterRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationParameterRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    ModifyApplicationParameterRequestParameters() = default ;
    ModifyApplicationParameterRequestParameters(const ModifyApplicationParameterRequestParameters &) = default ;
    ModifyApplicationParameterRequestParameters(ModifyApplicationParameterRequestParameters &&) = default ;
    ModifyApplicationParameterRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationParameterRequestParameters() = default ;
    ModifyApplicationParameterRequestParameters& operator=(const ModifyApplicationParameterRequestParameters &) = default ;
    ModifyApplicationParameterRequestParameters& operator=(ModifyApplicationParameterRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterName_ != nullptr
        && this->parameterValue_ != nullptr; };
    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline ModifyApplicationParameterRequestParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline ModifyApplicationParameterRequestParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    std::shared_ptr<string> parameterName_ = nullptr;
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
