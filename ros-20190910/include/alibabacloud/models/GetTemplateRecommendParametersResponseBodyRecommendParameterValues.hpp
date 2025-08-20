// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSRESPONSEBODYRECOMMENDPARAMETERVALUES_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSRESPONSEBODYRECOMMENDPARAMETERVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateRecommendParametersResponseBodyRecommendParameterValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateRecommendParametersResponseBodyRecommendParameterValues& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(RecommendValue, recommendValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateRecommendParametersResponseBodyRecommendParameterValues& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(RecommendValue, recommendValue_);
    };
    GetTemplateRecommendParametersResponseBodyRecommendParameterValues() = default ;
    GetTemplateRecommendParametersResponseBodyRecommendParameterValues(const GetTemplateRecommendParametersResponseBodyRecommendParameterValues &) = default ;
    GetTemplateRecommendParametersResponseBodyRecommendParameterValues(GetTemplateRecommendParametersResponseBodyRecommendParameterValues &&) = default ;
    GetTemplateRecommendParametersResponseBodyRecommendParameterValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateRecommendParametersResponseBodyRecommendParameterValues() = default ;
    GetTemplateRecommendParametersResponseBodyRecommendParameterValues& operator=(const GetTemplateRecommendParametersResponseBodyRecommendParameterValues &) = default ;
    GetTemplateRecommendParametersResponseBodyRecommendParameterValues& operator=(GetTemplateRecommendParametersResponseBodyRecommendParameterValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterKey_ != nullptr
        && this->recommendValue_ != nullptr; };
    // parameterKey Field Functions 
    bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
    void deleteParameterKey() { this->parameterKey_ = nullptr;};
    inline string parameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
    inline GetTemplateRecommendParametersResponseBodyRecommendParameterValues& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // recommendValue Field Functions 
    bool hasRecommendValue() const { return this->recommendValue_ != nullptr;};
    void deleteRecommendValue() { this->recommendValue_ = nullptr;};
    inline string recommendValue() const { DARABONBA_PTR_GET_DEFAULT(recommendValue_, "") };
    inline GetTemplateRecommendParametersResponseBodyRecommendParameterValues& setRecommendValue(string recommendValue) { DARABONBA_PTR_SET_VALUE(recommendValue_, recommendValue) };


  protected:
    std::shared_ptr<string> parameterKey_ = nullptr;
    std::shared_ptr<string> recommendValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
