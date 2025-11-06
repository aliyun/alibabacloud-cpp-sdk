// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUESTPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUESTPREDICATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGatewayRouteRequestPredicatesHeaderPredicates.hpp>
#include <alibabacloud/models/UpdateGatewayRouteRequestPredicatesPathPredicates.hpp>
#include <alibabacloud/models/UpdateGatewayRouteRequestPredicatesQueryPredicates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteRequestPredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRequestPredicates& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_TO_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_TO_JSON(QueryPredicates, queryPredicates_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRequestPredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_FROM_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_FROM_JSON(QueryPredicates, queryPredicates_);
    };
    UpdateGatewayRouteRequestPredicates() = default ;
    UpdateGatewayRouteRequestPredicates(const UpdateGatewayRouteRequestPredicates &) = default ;
    UpdateGatewayRouteRequestPredicates(UpdateGatewayRouteRequestPredicates &&) = default ;
    UpdateGatewayRouteRequestPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRequestPredicates() = default ;
    UpdateGatewayRouteRequestPredicates& operator=(const UpdateGatewayRouteRequestPredicates &) = default ;
    UpdateGatewayRouteRequestPredicates& operator=(UpdateGatewayRouteRequestPredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headerPredicates_ == nullptr
        && return this->methodPredicates_ == nullptr && return this->pathPredicates_ == nullptr && return this->queryPredicates_ == nullptr; };
    // headerPredicates Field Functions 
    bool hasHeaderPredicates() const { return this->headerPredicates_ != nullptr;};
    void deleteHeaderPredicates() { this->headerPredicates_ = nullptr;};
    inline const vector<Models::UpdateGatewayRouteRequestPredicatesHeaderPredicates> & headerPredicates() const { DARABONBA_PTR_GET_CONST(headerPredicates_, vector<Models::UpdateGatewayRouteRequestPredicatesHeaderPredicates>) };
    inline vector<Models::UpdateGatewayRouteRequestPredicatesHeaderPredicates> headerPredicates() { DARABONBA_PTR_GET(headerPredicates_, vector<Models::UpdateGatewayRouteRequestPredicatesHeaderPredicates>) };
    inline UpdateGatewayRouteRequestPredicates& setHeaderPredicates(const vector<Models::UpdateGatewayRouteRequestPredicatesHeaderPredicates> & headerPredicates) { DARABONBA_PTR_SET_VALUE(headerPredicates_, headerPredicates) };
    inline UpdateGatewayRouteRequestPredicates& setHeaderPredicates(vector<Models::UpdateGatewayRouteRequestPredicatesHeaderPredicates> && headerPredicates) { DARABONBA_PTR_SET_RVALUE(headerPredicates_, headerPredicates) };


    // methodPredicates Field Functions 
    bool hasMethodPredicates() const { return this->methodPredicates_ != nullptr;};
    void deleteMethodPredicates() { this->methodPredicates_ = nullptr;};
    inline const vector<string> & methodPredicates() const { DARABONBA_PTR_GET_CONST(methodPredicates_, vector<string>) };
    inline vector<string> methodPredicates() { DARABONBA_PTR_GET(methodPredicates_, vector<string>) };
    inline UpdateGatewayRouteRequestPredicates& setMethodPredicates(const vector<string> & methodPredicates) { DARABONBA_PTR_SET_VALUE(methodPredicates_, methodPredicates) };
    inline UpdateGatewayRouteRequestPredicates& setMethodPredicates(vector<string> && methodPredicates) { DARABONBA_PTR_SET_RVALUE(methodPredicates_, methodPredicates) };


    // pathPredicates Field Functions 
    bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
    void deletePathPredicates() { this->pathPredicates_ = nullptr;};
    inline const Models::UpdateGatewayRouteRequestPredicatesPathPredicates & pathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, Models::UpdateGatewayRouteRequestPredicatesPathPredicates) };
    inline Models::UpdateGatewayRouteRequestPredicatesPathPredicates pathPredicates() { DARABONBA_PTR_GET(pathPredicates_, Models::UpdateGatewayRouteRequestPredicatesPathPredicates) };
    inline UpdateGatewayRouteRequestPredicates& setPathPredicates(const Models::UpdateGatewayRouteRequestPredicatesPathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
    inline UpdateGatewayRouteRequestPredicates& setPathPredicates(Models::UpdateGatewayRouteRequestPredicatesPathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


    // queryPredicates Field Functions 
    bool hasQueryPredicates() const { return this->queryPredicates_ != nullptr;};
    void deleteQueryPredicates() { this->queryPredicates_ = nullptr;};
    inline const vector<Models::UpdateGatewayRouteRequestPredicatesQueryPredicates> & queryPredicates() const { DARABONBA_PTR_GET_CONST(queryPredicates_, vector<Models::UpdateGatewayRouteRequestPredicatesQueryPredicates>) };
    inline vector<Models::UpdateGatewayRouteRequestPredicatesQueryPredicates> queryPredicates() { DARABONBA_PTR_GET(queryPredicates_, vector<Models::UpdateGatewayRouteRequestPredicatesQueryPredicates>) };
    inline UpdateGatewayRouteRequestPredicates& setQueryPredicates(const vector<Models::UpdateGatewayRouteRequestPredicatesQueryPredicates> & queryPredicates) { DARABONBA_PTR_SET_VALUE(queryPredicates_, queryPredicates) };
    inline UpdateGatewayRouteRequestPredicates& setQueryPredicates(vector<Models::UpdateGatewayRouteRequestPredicatesQueryPredicates> && queryPredicates) { DARABONBA_PTR_SET_RVALUE(queryPredicates_, queryPredicates) };


  protected:
    // The information about header matching.
    std::shared_ptr<vector<Models::UpdateGatewayRouteRequestPredicatesHeaderPredicates>> headerPredicates_ = nullptr;
    // The information about method matching.
    std::shared_ptr<vector<string>> methodPredicates_ = nullptr;
    // The information about path matching.
    std::shared_ptr<Models::UpdateGatewayRouteRequestPredicatesPathPredicates> pathPredicates_ = nullptr;
    // The information about parameter matching.
    std::shared_ptr<vector<Models::UpdateGatewayRouteRequestPredicatesQueryPredicates>> queryPredicates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
