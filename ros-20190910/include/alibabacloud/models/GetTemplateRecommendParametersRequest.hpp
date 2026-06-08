// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERECOMMENDPARAMETERSREQUEST_HPP_
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
  class GetTemplateRecommendParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateRecommendParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateRecommendParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    GetTemplateRecommendParametersRequest() = default ;
    GetTemplateRecommendParametersRequest(const GetTemplateRecommendParametersRequest &) = default ;
    GetTemplateRecommendParametersRequest(GetTemplateRecommendParametersRequest &&) = default ;
    GetTemplateRecommendParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateRecommendParametersRequest() = default ;
    GetTemplateRecommendParametersRequest& operator=(const GetTemplateRecommendParametersRequest &) = default ;
    GetTemplateRecommendParametersRequest& operator=(GetTemplateRecommendParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterCandidateValues, parameterCandidateValues_);
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterCandidateValues, parameterCandidateValues_);
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterCandidateValues_ == nullptr
        && this->parameterKey_ == nullptr && this->parameterValue_ == nullptr; };
      // parameterCandidateValues Field Functions 
      bool hasParameterCandidateValues() const { return this->parameterCandidateValues_ != nullptr;};
      void deleteParameterCandidateValues() { this->parameterCandidateValues_ = nullptr;};
      inline const vector<string> & getParameterCandidateValues() const { DARABONBA_PTR_GET_CONST(parameterCandidateValues_, vector<string>) };
      inline vector<string> getParameterCandidateValues() { DARABONBA_PTR_GET(parameterCandidateValues_, vector<string>) };
      inline Parameters& setParameterCandidateValues(const vector<string> & parameterCandidateValues) { DARABONBA_PTR_SET_VALUE(parameterCandidateValues_, parameterCandidateValues) };
      inline Parameters& setParameterCandidateValues(vector<string> && parameterCandidateValues) { DARABONBA_PTR_SET_RVALUE(parameterCandidateValues_, parameterCandidateValues) };


      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      shared_ptr<vector<string>> parameterCandidateValues_ {};
      shared_ptr<string> parameterKey_ {};
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->parameters_ == nullptr && this->regionId_ == nullptr && this->templateBody_ == nullptr && this->templateId_ == nullptr && this->templateURL_ == nullptr
        && this->templateVersion_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetTemplateRecommendParametersRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetTemplateRecommendParametersRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetTemplateRecommendParametersRequest::Parameters>) };
    inline vector<GetTemplateRecommendParametersRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<GetTemplateRecommendParametersRequest::Parameters>) };
    inline GetTemplateRecommendParametersRequest& setParameters(const vector<GetTemplateRecommendParametersRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetTemplateRecommendParametersRequest& setParameters(vector<GetTemplateRecommendParametersRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateRecommendParametersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetTemplateRecommendParametersRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateRecommendParametersRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string getTemplateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetTemplateRecommendParametersRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateRecommendParametersRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<GetTemplateRecommendParametersRequest::Parameters>> parameters_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> templateBody_ {};
    shared_ptr<string> templateId_ {};
    shared_ptr<string> templateURL_ {};
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
