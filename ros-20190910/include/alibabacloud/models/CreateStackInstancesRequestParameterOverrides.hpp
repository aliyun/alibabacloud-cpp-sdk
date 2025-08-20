// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKINSTANCESREQUESTPARAMETEROVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKINSTANCESREQUESTPARAMETEROVERRIDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateStackInstancesRequestParameterOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackInstancesRequestParameterOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackInstancesRequestParameterOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    CreateStackInstancesRequestParameterOverrides() = default ;
    CreateStackInstancesRequestParameterOverrides(const CreateStackInstancesRequestParameterOverrides &) = default ;
    CreateStackInstancesRequestParameterOverrides(CreateStackInstancesRequestParameterOverrides &&) = default ;
    CreateStackInstancesRequestParameterOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackInstancesRequestParameterOverrides() = default ;
    CreateStackInstancesRequestParameterOverrides& operator=(const CreateStackInstancesRequestParameterOverrides &) = default ;
    CreateStackInstancesRequestParameterOverrides& operator=(CreateStackInstancesRequestParameterOverrides &&) = default ;
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
    inline CreateStackInstancesRequestParameterOverrides& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline CreateStackInstancesRequestParameterOverrides& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The key of parameter N that you want to use to override a specific parameter. If you do not specify this parameter, ROS uses the name that you specified when you created the stack group.
    // 
    // Maximum value of N: 200.
    // 
    // >-   ParameterOverrides is optional.
    // >-   If you specify ParameterOverrides, you must specify ParameterOverrides.N.ParameterKey and ParameterOverrides.N.ParameterValue.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // The value of parameter N that you want to use to override a specific parameter. If you do not specify this parameter, ROS uses the value that you specify when you create the stack group.
    // 
    // Maximum value of N: 200.
    // 
    // >-  ParameterOverrides is optional.
    // >-  If you specify ParameterOverrides, you must specify ParameterOverrides.N.ParameterKey and ParameterOverrides.N.ParameterValue.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
