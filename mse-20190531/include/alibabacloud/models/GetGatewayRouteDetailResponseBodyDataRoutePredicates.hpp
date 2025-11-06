// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAROUTEPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAROUTEPREDICATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRoutePredicatesHeaderPredicates.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRoutePredicatesPathPredicates.hpp>
#include <alibabacloud/models/GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataRoutePredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataRoutePredicates& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_TO_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_TO_JSON(QueryPredicates, queryPredicates_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataRoutePredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_FROM_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_FROM_JSON(QueryPredicates, queryPredicates_);
    };
    GetGatewayRouteDetailResponseBodyDataRoutePredicates() = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicates(const GetGatewayRouteDetailResponseBodyDataRoutePredicates &) = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicates(GetGatewayRouteDetailResponseBodyDataRoutePredicates &&) = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataRoutePredicates() = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicates& operator=(const GetGatewayRouteDetailResponseBodyDataRoutePredicates &) = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicates& operator=(GetGatewayRouteDetailResponseBodyDataRoutePredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headerPredicates_ == nullptr
        && return this->methodPredicates_ == nullptr && return this->pathPredicates_ == nullptr && return this->queryPredicates_ == nullptr; };
    // headerPredicates Field Functions 
    bool hasHeaderPredicates() const { return this->headerPredicates_ != nullptr;};
    void deleteHeaderPredicates() { this->headerPredicates_ = nullptr;};
    inline const vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesHeaderPredicates> & headerPredicates() const { DARABONBA_PTR_GET_CONST(headerPredicates_, vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesHeaderPredicates>) };
    inline vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesHeaderPredicates> headerPredicates() { DARABONBA_PTR_GET(headerPredicates_, vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesHeaderPredicates>) };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicates& setHeaderPredicates(const vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesHeaderPredicates> & headerPredicates) { DARABONBA_PTR_SET_VALUE(headerPredicates_, headerPredicates) };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicates& setHeaderPredicates(vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesHeaderPredicates> && headerPredicates) { DARABONBA_PTR_SET_RVALUE(headerPredicates_, headerPredicates) };


    // methodPredicates Field Functions 
    bool hasMethodPredicates() const { return this->methodPredicates_ != nullptr;};
    void deleteMethodPredicates() { this->methodPredicates_ = nullptr;};
    inline const vector<string> & methodPredicates() const { DARABONBA_PTR_GET_CONST(methodPredicates_, vector<string>) };
    inline vector<string> methodPredicates() { DARABONBA_PTR_GET(methodPredicates_, vector<string>) };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicates& setMethodPredicates(const vector<string> & methodPredicates) { DARABONBA_PTR_SET_VALUE(methodPredicates_, methodPredicates) };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicates& setMethodPredicates(vector<string> && methodPredicates) { DARABONBA_PTR_SET_RVALUE(methodPredicates_, methodPredicates) };


    // pathPredicates Field Functions 
    bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
    void deletePathPredicates() { this->pathPredicates_ = nullptr;};
    inline const Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesPathPredicates & pathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesPathPredicates) };
    inline Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesPathPredicates pathPredicates() { DARABONBA_PTR_GET(pathPredicates_, Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesPathPredicates) };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicates& setPathPredicates(const Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesPathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicates& setPathPredicates(Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesPathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


    // queryPredicates Field Functions 
    bool hasQueryPredicates() const { return this->queryPredicates_ != nullptr;};
    void deleteQueryPredicates() { this->queryPredicates_ = nullptr;};
    inline const vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates> & queryPredicates() const { DARABONBA_PTR_GET_CONST(queryPredicates_, vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates>) };
    inline vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates> queryPredicates() { DARABONBA_PTR_GET(queryPredicates_, vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates>) };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicates& setQueryPredicates(const vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates> & queryPredicates) { DARABONBA_PTR_SET_VALUE(queryPredicates_, queryPredicates) };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicates& setQueryPredicates(vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates> && queryPredicates) { DARABONBA_PTR_SET_RVALUE(queryPredicates_, queryPredicates) };


  protected:
    // The information about header matching.
    std::shared_ptr<vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesHeaderPredicates>> headerPredicates_ = nullptr;
    // The information about method matching.
    std::shared_ptr<vector<string>> methodPredicates_ = nullptr;
    // The information about route matching.
    std::shared_ptr<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesPathPredicates> pathPredicates_ = nullptr;
    // The information about parameter matching.
    std::shared_ptr<vector<Models::GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates>> queryPredicates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
