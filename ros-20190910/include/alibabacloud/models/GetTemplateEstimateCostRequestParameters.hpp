// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEESTIMATECOSTREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEESTIMATECOSTREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateEstimateCostRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateEstimateCostRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateEstimateCostRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    GetTemplateEstimateCostRequestParameters() = default ;
    GetTemplateEstimateCostRequestParameters(const GetTemplateEstimateCostRequestParameters &) = default ;
    GetTemplateEstimateCostRequestParameters(GetTemplateEstimateCostRequestParameters &&) = default ;
    GetTemplateEstimateCostRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateEstimateCostRequestParameters() = default ;
    GetTemplateEstimateCostRequestParameters& operator=(const GetTemplateEstimateCostRequestParameters &) = default ;
    GetTemplateEstimateCostRequestParameters& operator=(GetTemplateEstimateCostRequestParameters &&) = default ;
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
    inline GetTemplateEstimateCostRequestParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline GetTemplateEstimateCostRequestParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The ID of the request.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterKey_ = nullptr;
    // Details of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
