// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTROUTEPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTROUTEPREDICATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates.hpp>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultRoutePredicatesPathPredicates.hpp>
#include <alibabacloud/models/ListGatewayRouteResponseBodyDataResultRoutePredicatesQueryPredicates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteResponseBodyDataResultRoutePredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteResponseBodyDataResultRoutePredicates& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_TO_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_TO_JSON(QueryPredicates, queryPredicates_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteResponseBodyDataResultRoutePredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_FROM_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_FROM_JSON(QueryPredicates, queryPredicates_);
    };
    ListGatewayRouteResponseBodyDataResultRoutePredicates() = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicates(const ListGatewayRouteResponseBodyDataResultRoutePredicates &) = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicates(ListGatewayRouteResponseBodyDataResultRoutePredicates &&) = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteResponseBodyDataResultRoutePredicates() = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicates& operator=(const ListGatewayRouteResponseBodyDataResultRoutePredicates &) = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicates& operator=(ListGatewayRouteResponseBodyDataResultRoutePredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headerPredicates_ != nullptr
        && this->methodPredicates_ != nullptr && this->pathPredicates_ != nullptr && this->queryPredicates_ != nullptr; };
    // headerPredicates Field Functions 
    bool hasHeaderPredicates() const { return this->headerPredicates_ != nullptr;};
    void deleteHeaderPredicates() { this->headerPredicates_ = nullptr;};
    inline const vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates> & headerPredicates() const { DARABONBA_PTR_GET_CONST(headerPredicates_, vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates>) };
    inline vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates> headerPredicates() { DARABONBA_PTR_GET(headerPredicates_, vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates>) };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicates& setHeaderPredicates(const vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates> & headerPredicates) { DARABONBA_PTR_SET_VALUE(headerPredicates_, headerPredicates) };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicates& setHeaderPredicates(vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates> && headerPredicates) { DARABONBA_PTR_SET_RVALUE(headerPredicates_, headerPredicates) };


    // methodPredicates Field Functions 
    bool hasMethodPredicates() const { return this->methodPredicates_ != nullptr;};
    void deleteMethodPredicates() { this->methodPredicates_ = nullptr;};
    inline const vector<string> & methodPredicates() const { DARABONBA_PTR_GET_CONST(methodPredicates_, vector<string>) };
    inline vector<string> methodPredicates() { DARABONBA_PTR_GET(methodPredicates_, vector<string>) };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicates& setMethodPredicates(const vector<string> & methodPredicates) { DARABONBA_PTR_SET_VALUE(methodPredicates_, methodPredicates) };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicates& setMethodPredicates(vector<string> && methodPredicates) { DARABONBA_PTR_SET_RVALUE(methodPredicates_, methodPredicates) };


    // pathPredicates Field Functions 
    bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
    void deletePathPredicates() { this->pathPredicates_ = nullptr;};
    inline const Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesPathPredicates & pathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesPathPredicates) };
    inline Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesPathPredicates pathPredicates() { DARABONBA_PTR_GET(pathPredicates_, Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesPathPredicates) };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicates& setPathPredicates(const Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesPathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicates& setPathPredicates(Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesPathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


    // queryPredicates Field Functions 
    bool hasQueryPredicates() const { return this->queryPredicates_ != nullptr;};
    void deleteQueryPredicates() { this->queryPredicates_ = nullptr;};
    inline const vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesQueryPredicates> & queryPredicates() const { DARABONBA_PTR_GET_CONST(queryPredicates_, vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesQueryPredicates>) };
    inline vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesQueryPredicates> queryPredicates() { DARABONBA_PTR_GET(queryPredicates_, vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesQueryPredicates>) };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicates& setQueryPredicates(const vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesQueryPredicates> & queryPredicates) { DARABONBA_PTR_SET_VALUE(queryPredicates_, queryPredicates) };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicates& setQueryPredicates(vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesQueryPredicates> && queryPredicates) { DARABONBA_PTR_SET_RVALUE(queryPredicates_, queryPredicates) };


  protected:
    // The headers used for route matching.
    std::shared_ptr<vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates>> headerPredicates_ = nullptr;
    // The HTTP methods used for route matching.
    std::shared_ptr<vector<string>> methodPredicates_ = nullptr;
    // The path used for route matching.
    std::shared_ptr<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesPathPredicates> pathPredicates_ = nullptr;
    // The parameters used for route matching.
    std::shared_ptr<vector<Models::ListGatewayRouteResponseBodyDataResultRoutePredicatesQueryPredicates>> queryPredicates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
