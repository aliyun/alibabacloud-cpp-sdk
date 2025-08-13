// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAROUTEPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAROUTEPREDICATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesHeaderPredicates.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesPathPredicates.hpp>
#include <alibabacloud/models/UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesQueryPredicates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_TO_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_TO_JSON(QueryPredicates, queryPredicates_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_FROM_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_FROM_JSON(QueryPredicates, queryPredicates_);
    };
    UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates(const UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates(UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& operator=(const UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& operator=(UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headerPredicates_ != nullptr
        && this->methodPredicates_ != nullptr && this->pathPredicates_ != nullptr && this->queryPredicates_ != nullptr; };
    // headerPredicates Field Functions 
    bool hasHeaderPredicates() const { return this->headerPredicates_ != nullptr;};
    void deleteHeaderPredicates() { this->headerPredicates_ = nullptr;};
    inline const vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesHeaderPredicates> & headerPredicates() const { DARABONBA_PTR_GET_CONST(headerPredicates_, vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesHeaderPredicates>) };
    inline vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesHeaderPredicates> headerPredicates() { DARABONBA_PTR_GET(headerPredicates_, vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesHeaderPredicates>) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& setHeaderPredicates(const vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesHeaderPredicates> & headerPredicates) { DARABONBA_PTR_SET_VALUE(headerPredicates_, headerPredicates) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& setHeaderPredicates(vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesHeaderPredicates> && headerPredicates) { DARABONBA_PTR_SET_RVALUE(headerPredicates_, headerPredicates) };


    // methodPredicates Field Functions 
    bool hasMethodPredicates() const { return this->methodPredicates_ != nullptr;};
    void deleteMethodPredicates() { this->methodPredicates_ = nullptr;};
    inline const vector<string> & methodPredicates() const { DARABONBA_PTR_GET_CONST(methodPredicates_, vector<string>) };
    inline vector<string> methodPredicates() { DARABONBA_PTR_GET(methodPredicates_, vector<string>) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& setMethodPredicates(const vector<string> & methodPredicates) { DARABONBA_PTR_SET_VALUE(methodPredicates_, methodPredicates) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& setMethodPredicates(vector<string> && methodPredicates) { DARABONBA_PTR_SET_RVALUE(methodPredicates_, methodPredicates) };


    // pathPredicates Field Functions 
    bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
    void deletePathPredicates() { this->pathPredicates_ = nullptr;};
    inline const Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesPathPredicates & pathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesPathPredicates) };
    inline Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesPathPredicates pathPredicates() { DARABONBA_PTR_GET(pathPredicates_, Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesPathPredicates) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& setPathPredicates(const Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesPathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& setPathPredicates(Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesPathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


    // queryPredicates Field Functions 
    bool hasQueryPredicates() const { return this->queryPredicates_ != nullptr;};
    void deleteQueryPredicates() { this->queryPredicates_ = nullptr;};
    inline const vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesQueryPredicates> & queryPredicates() const { DARABONBA_PTR_GET_CONST(queryPredicates_, vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesQueryPredicates>) };
    inline vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesQueryPredicates> queryPredicates() { DARABONBA_PTR_GET(queryPredicates_, vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesQueryPredicates>) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& setQueryPredicates(const vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesQueryPredicates> & queryPredicates) { DARABONBA_PTR_SET_VALUE(queryPredicates_, queryPredicates) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicates& setQueryPredicates(vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesQueryPredicates> && queryPredicates) { DARABONBA_PTR_SET_RVALUE(queryPredicates_, queryPredicates) };


  protected:
    // The information about matching based on request headers.
    std::shared_ptr<vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesHeaderPredicates>> headerPredicates_ = nullptr;
    // The information about method matching.
    std::shared_ptr<vector<string>> methodPredicates_ = nullptr;
    // The information about route matching.
    std::shared_ptr<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesPathPredicates> pathPredicates_ = nullptr;
    // The parameter matching rules.
    std::shared_ptr<vector<Models::UpdateGatewayRouteWafStatusResponseBodyDataRoutePredicatesQueryPredicates>> queryPredicates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
