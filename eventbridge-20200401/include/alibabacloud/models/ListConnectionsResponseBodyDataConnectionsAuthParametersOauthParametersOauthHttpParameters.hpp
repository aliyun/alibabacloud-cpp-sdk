// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERSOAUTHHTTPPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(QueryStringParameters, queryStringParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(QueryStringParameters, queryStringParameters_);
    };
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters() = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters(const ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters &) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters(ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters &&) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters() = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& operator=(const ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters &) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& operator=(ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodyParameters_ != nullptr
        && this->headerParameters_ != nullptr && this->queryStringParameters_ != nullptr; };
    // bodyParameters Field Functions 
    bool hasBodyParameters() const { return this->bodyParameters_ != nullptr;};
    void deleteBodyParameters() { this->bodyParameters_ = nullptr;};
    inline const vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> & bodyParameters() const { DARABONBA_PTR_GET_CONST(bodyParameters_, vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>) };
    inline vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> bodyParameters() { DARABONBA_PTR_GET(bodyParameters_, vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setBodyParameters(const vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> & bodyParameters) { DARABONBA_PTR_SET_VALUE(bodyParameters_, bodyParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setBodyParameters(vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters> && bodyParameters) { DARABONBA_PTR_SET_RVALUE(bodyParameters_, bodyParameters) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> & headerParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>) };
    inline vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> headerParameters() { DARABONBA_PTR_GET(headerParameters_, vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setHeaderParameters(const vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setHeaderParameters(vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters> && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // queryStringParameters Field Functions 
    bool hasQueryStringParameters() const { return this->queryStringParameters_ != nullptr;};
    void deleteQueryStringParameters() { this->queryStringParameters_ = nullptr;};
    inline const vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> & queryStringParameters() const { DARABONBA_PTR_GET_CONST(queryStringParameters_, vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>) };
    inline vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> queryStringParameters() { DARABONBA_PTR_GET(queryStringParameters_, vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setQueryStringParameters(const vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> & queryStringParameters) { DARABONBA_PTR_SET_VALUE(queryStringParameters_, queryStringParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters& setQueryStringParameters(vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters> && queryStringParameters) { DARABONBA_PTR_SET_RVALUE(queryStringParameters_, queryStringParameters) };


  protected:
    // The parameters that are configured for the request.
    std::shared_ptr<vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersBodyParameters>> bodyParameters_ = nullptr;
    // The parameters that are returned for the request header.
    std::shared_ptr<vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersHeaderParameters>> headerParameters_ = nullptr;
    // The parameters that are returned for the request path.
    std::shared_ptr<vector<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParametersQueryStringParameters>> queryStringParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
