// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters.hpp>
#include <alibabacloud/models/CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters.hpp>
#include <alibabacloud/models/CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(QueryStringParameters, queryStringParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(QueryStringParameters, queryStringParameters_);
    };
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters() = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters(const CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters &) = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters(CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters &&) = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters() = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& operator=(const CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters &) = default ;
    CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& operator=(CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodyParameters_ != nullptr
        && this->headerParameters_ != nullptr && this->queryStringParameters_ != nullptr; };
    // bodyParameters Field Functions 
    bool hasBodyParameters() const { return this->bodyParameters_ != nullptr;};
    void deleteBodyParameters() { this->bodyParameters_ = nullptr;};
    inline const vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> & bodyParameters() const { DARABONBA_PTR_GET_CONST(bodyParameters_, vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>) };
    inline vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> bodyParameters() { DARABONBA_PTR_GET(bodyParameters_, vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>) };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setBodyParameters(const vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> & bodyParameters) { DARABONBA_PTR_SET_VALUE(bodyParameters_, bodyParameters) };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setBodyParameters(vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> && bodyParameters) { DARABONBA_PTR_SET_RVALUE(bodyParameters_, bodyParameters) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> & headerParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>) };
    inline vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> headerParameters() { DARABONBA_PTR_GET(headerParameters_, vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>) };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setHeaderParameters(const vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setHeaderParameters(vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // queryStringParameters Field Functions 
    bool hasQueryStringParameters() const { return this->queryStringParameters_ != nullptr;};
    void deleteQueryStringParameters() { this->queryStringParameters_ = nullptr;};
    inline const vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> & queryStringParameters() const { DARABONBA_PTR_GET_CONST(queryStringParameters_, vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>) };
    inline vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> queryStringParameters() { DARABONBA_PTR_GET(queryStringParameters_, vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>) };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setQueryStringParameters(const vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> & queryStringParameters) { DARABONBA_PTR_SET_VALUE(queryStringParameters_, queryStringParameters) };
    inline CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters& setQueryStringParameters(vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> && queryStringParameters) { DARABONBA_PTR_SET_RVALUE(queryStringParameters_, queryStringParameters) };


  protected:
    // The parameters that are configured for the request body.
    std::shared_ptr<vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>> bodyParameters_ = nullptr;
    // The parameters that are configured for the request header.
    std::shared_ptr<vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>> headerParameters_ = nullptr;
    // The parameters that are configured for the request path.
    std::shared_ptr<vector<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>> queryStringParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
