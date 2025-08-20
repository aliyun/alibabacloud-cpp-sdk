// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSREQUESTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSREQUESTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateRecommendParametersRequestParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateRecommendParametersRequestParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterCandidateValues, parameterCandidateValues_);
      DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateRecommendParametersRequestParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterCandidateValues, parameterCandidateValues_);
      DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    GetTemplateRecommendParametersRequestParameters() = default ;
    GetTemplateRecommendParametersRequestParameters(const GetTemplateRecommendParametersRequestParameters &) = default ;
    GetTemplateRecommendParametersRequestParameters(GetTemplateRecommendParametersRequestParameters &&) = default ;
    GetTemplateRecommendParametersRequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateRecommendParametersRequestParameters() = default ;
    GetTemplateRecommendParametersRequestParameters& operator=(const GetTemplateRecommendParametersRequestParameters &) = default ;
    GetTemplateRecommendParametersRequestParameters& operator=(GetTemplateRecommendParametersRequestParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterCandidateValues_ != nullptr
        && this->parameterKey_ != nullptr && this->parameterValue_ != nullptr; };
    // parameterCandidateValues Field Functions 
    bool hasParameterCandidateValues() const { return this->parameterCandidateValues_ != nullptr;};
    void deleteParameterCandidateValues() { this->parameterCandidateValues_ = nullptr;};
    inline const vector<string> & parameterCandidateValues() const { DARABONBA_PTR_GET_CONST(parameterCandidateValues_, vector<string>) };
    inline vector<string> parameterCandidateValues() { DARABONBA_PTR_GET(parameterCandidateValues_, vector<string>) };
    inline GetTemplateRecommendParametersRequestParameters& setParameterCandidateValues(const vector<string> & parameterCandidateValues) { DARABONBA_PTR_SET_VALUE(parameterCandidateValues_, parameterCandidateValues) };
    inline GetTemplateRecommendParametersRequestParameters& setParameterCandidateValues(vector<string> && parameterCandidateValues) { DARABONBA_PTR_SET_RVALUE(parameterCandidateValues_, parameterCandidateValues) };


    // parameterKey Field Functions 
    bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
    void deleteParameterKey() { this->parameterKey_ = nullptr;};
    inline string parameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
    inline GetTemplateRecommendParametersRequestParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline GetTemplateRecommendParametersRequestParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    std::shared_ptr<vector<string>> parameterCandidateValues_ = nullptr;
    std::shared_ptr<string> parameterKey_ = nullptr;
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
