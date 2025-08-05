// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters.hpp>
#include <alibabacloud/models/UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters.hpp>
#include <alibabacloud/models/UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(QueryStringParameters, queryStringParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(QueryStringParameters, queryStringParameters_);
    };
    UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters() = default ;
    UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters(const UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters &) = default ;
    UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters(UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters &&) = default ;
    UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters() = default ;
    UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& operator=(const UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters &) = default ;
    UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& operator=(UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodyParameters_ != nullptr
        && this->headerParameters_ != nullptr && this->queryStringParameters_ != nullptr; };
    // bodyParameters Field Functions 
    bool hasBodyParameters() const { return this->bodyParameters_ != nullptr;};
    void deleteBodyParameters() { this->bodyParameters_ = nullptr;};
    inline const vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> & bodyParameters() const { DARABONBA_PTR_GET_CONST(bodyParameters_, vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>) };
    inline vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> bodyParameters() { DARABONBA_PTR_GET(bodyParameters_, vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>) };
    inline UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setBodyParameters(const vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> & bodyParameters) { DARABONBA_PTR_SET_VALUE(bodyParameters_, bodyParameters) };
    inline UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setBodyParameters(vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> && bodyParameters) { DARABONBA_PTR_SET_RVALUE(bodyParameters_, bodyParameters) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> & headerParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>) };
    inline vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> headerParameters() { DARABONBA_PTR_GET(headerParameters_, vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>) };
    inline UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setHeaderParameters(const vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setHeaderParameters(vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // queryStringParameters Field Functions 
    bool hasQueryStringParameters() const { return this->queryStringParameters_ != nullptr;};
    void deleteQueryStringParameters() { this->queryStringParameters_ = nullptr;};
    inline const vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> & queryStringParameters() const { DARABONBA_PTR_GET_CONST(queryStringParameters_, vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>) };
    inline vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> queryStringParameters() { DARABONBA_PTR_GET(queryStringParameters_, vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>) };
    inline UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setQueryStringParameters(const vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> & queryStringParameters) { DARABONBA_PTR_SET_VALUE(queryStringParameters_, queryStringParameters) };
    inline UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setQueryStringParameters(vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> && queryStringParameters) { DARABONBA_PTR_SET_RVALUE(queryStringParameters_, queryStringParameters) };


  protected:
    // The parameters that are configured for the request body.
    std::shared_ptr<vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>> bodyParameters_ = nullptr;
    // The parameters that are configured for the request header.
    std::shared_ptr<vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>> headerParameters_ = nullptr;
    // The parameters that are configured for the request path.
    std::shared_ptr<vector<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>> queryStringParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
