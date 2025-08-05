// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(QueryStringParameters, queryStringParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(QueryStringParameters, queryStringParameters_);
    };
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters() = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters(const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters(GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters &&) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters() = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& operator=(const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& operator=(GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodyParameters_ != nullptr
        && this->headerParameters_ != nullptr && this->queryStringParameters_ != nullptr; };
    // bodyParameters Field Functions 
    bool hasBodyParameters() const { return this->bodyParameters_ != nullptr;};
    void deleteBodyParameters() { this->bodyParameters_ = nullptr;};
    inline const vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> & bodyParameters() const { DARABONBA_PTR_GET_CONST(bodyParameters_, vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>) };
    inline vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> bodyParameters() { DARABONBA_PTR_GET(bodyParameters_, vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setBodyParameters(const vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> & bodyParameters) { DARABONBA_PTR_SET_VALUE(bodyParameters_, bodyParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setBodyParameters(vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> && bodyParameters) { DARABONBA_PTR_SET_RVALUE(bodyParameters_, bodyParameters) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> & headerParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>) };
    inline vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> headerParameters() { DARABONBA_PTR_GET(headerParameters_, vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setHeaderParameters(const vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setHeaderParameters(vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // queryStringParameters Field Functions 
    bool hasQueryStringParameters() const { return this->queryStringParameters_ != nullptr;};
    void deleteQueryStringParameters() { this->queryStringParameters_ = nullptr;};
    inline const vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> & queryStringParameters() const { DARABONBA_PTR_GET_CONST(queryStringParameters_, vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>) };
    inline vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> queryStringParameters() { DARABONBA_PTR_GET(queryStringParameters_, vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setQueryStringParameters(const vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> & queryStringParameters) { DARABONBA_PTR_SET_VALUE(queryStringParameters_, queryStringParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setQueryStringParameters(vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> && queryStringParameters) { DARABONBA_PTR_SET_RVALUE(queryStringParameters_, queryStringParameters) };


  protected:
    // The information about the request body.
    std::shared_ptr<vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>> bodyParameters_ = nullptr;
    // The information about the request header.
    std::shared_ptr<vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>> headerParameters_ = nullptr;
    // The information about the request path.
    std::shared_ptr<vector<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>> queryStringParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
