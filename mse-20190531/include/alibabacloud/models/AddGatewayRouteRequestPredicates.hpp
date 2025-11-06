// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUESTPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUESTPREDICATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddGatewayRouteRequestPredicatesHeaderPredicates.hpp>
#include <alibabacloud/models/AddGatewayRouteRequestPredicatesPathPredicates.hpp>
#include <alibabacloud/models/AddGatewayRouteRequestPredicatesQueryPredicates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayRouteRequestPredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRouteRequestPredicates& obj) { 
      DARABONBA_PTR_TO_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_TO_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_TO_JSON(QueryPredicates, queryPredicates_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRouteRequestPredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(HeaderPredicates, headerPredicates_);
      DARABONBA_PTR_FROM_JSON(MethodPredicates, methodPredicates_);
      DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
      DARABONBA_PTR_FROM_JSON(QueryPredicates, queryPredicates_);
    };
    AddGatewayRouteRequestPredicates() = default ;
    AddGatewayRouteRequestPredicates(const AddGatewayRouteRequestPredicates &) = default ;
    AddGatewayRouteRequestPredicates(AddGatewayRouteRequestPredicates &&) = default ;
    AddGatewayRouteRequestPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRouteRequestPredicates() = default ;
    AddGatewayRouteRequestPredicates& operator=(const AddGatewayRouteRequestPredicates &) = default ;
    AddGatewayRouteRequestPredicates& operator=(AddGatewayRouteRequestPredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headerPredicates_ == nullptr
        && return this->methodPredicates_ == nullptr && return this->pathPredicates_ == nullptr && return this->queryPredicates_ == nullptr; };
    // headerPredicates Field Functions 
    bool hasHeaderPredicates() const { return this->headerPredicates_ != nullptr;};
    void deleteHeaderPredicates() { this->headerPredicates_ = nullptr;};
    inline const vector<Models::AddGatewayRouteRequestPredicatesHeaderPredicates> & headerPredicates() const { DARABONBA_PTR_GET_CONST(headerPredicates_, vector<Models::AddGatewayRouteRequestPredicatesHeaderPredicates>) };
    inline vector<Models::AddGatewayRouteRequestPredicatesHeaderPredicates> headerPredicates() { DARABONBA_PTR_GET(headerPredicates_, vector<Models::AddGatewayRouteRequestPredicatesHeaderPredicates>) };
    inline AddGatewayRouteRequestPredicates& setHeaderPredicates(const vector<Models::AddGatewayRouteRequestPredicatesHeaderPredicates> & headerPredicates) { DARABONBA_PTR_SET_VALUE(headerPredicates_, headerPredicates) };
    inline AddGatewayRouteRequestPredicates& setHeaderPredicates(vector<Models::AddGatewayRouteRequestPredicatesHeaderPredicates> && headerPredicates) { DARABONBA_PTR_SET_RVALUE(headerPredicates_, headerPredicates) };


    // methodPredicates Field Functions 
    bool hasMethodPredicates() const { return this->methodPredicates_ != nullptr;};
    void deleteMethodPredicates() { this->methodPredicates_ = nullptr;};
    inline const vector<string> & methodPredicates() const { DARABONBA_PTR_GET_CONST(methodPredicates_, vector<string>) };
    inline vector<string> methodPredicates() { DARABONBA_PTR_GET(methodPredicates_, vector<string>) };
    inline AddGatewayRouteRequestPredicates& setMethodPredicates(const vector<string> & methodPredicates) { DARABONBA_PTR_SET_VALUE(methodPredicates_, methodPredicates) };
    inline AddGatewayRouteRequestPredicates& setMethodPredicates(vector<string> && methodPredicates) { DARABONBA_PTR_SET_RVALUE(methodPredicates_, methodPredicates) };


    // pathPredicates Field Functions 
    bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
    void deletePathPredicates() { this->pathPredicates_ = nullptr;};
    inline const Models::AddGatewayRouteRequestPredicatesPathPredicates & pathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, Models::AddGatewayRouteRequestPredicatesPathPredicates) };
    inline Models::AddGatewayRouteRequestPredicatesPathPredicates pathPredicates() { DARABONBA_PTR_GET(pathPredicates_, Models::AddGatewayRouteRequestPredicatesPathPredicates) };
    inline AddGatewayRouteRequestPredicates& setPathPredicates(const Models::AddGatewayRouteRequestPredicatesPathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
    inline AddGatewayRouteRequestPredicates& setPathPredicates(Models::AddGatewayRouteRequestPredicatesPathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


    // queryPredicates Field Functions 
    bool hasQueryPredicates() const { return this->queryPredicates_ != nullptr;};
    void deleteQueryPredicates() { this->queryPredicates_ = nullptr;};
    inline const vector<Models::AddGatewayRouteRequestPredicatesQueryPredicates> & queryPredicates() const { DARABONBA_PTR_GET_CONST(queryPredicates_, vector<Models::AddGatewayRouteRequestPredicatesQueryPredicates>) };
    inline vector<Models::AddGatewayRouteRequestPredicatesQueryPredicates> queryPredicates() { DARABONBA_PTR_GET(queryPredicates_, vector<Models::AddGatewayRouteRequestPredicatesQueryPredicates>) };
    inline AddGatewayRouteRequestPredicates& setQueryPredicates(const vector<Models::AddGatewayRouteRequestPredicatesQueryPredicates> & queryPredicates) { DARABONBA_PTR_SET_VALUE(queryPredicates_, queryPredicates) };
    inline AddGatewayRouteRequestPredicates& setQueryPredicates(vector<Models::AddGatewayRouteRequestPredicatesQueryPredicates> && queryPredicates) { DARABONBA_PTR_SET_RVALUE(queryPredicates_, queryPredicates) };


  protected:
    // The information about header matching.
    std::shared_ptr<vector<Models::AddGatewayRouteRequestPredicatesHeaderPredicates>> headerPredicates_ = nullptr;
    // The information about method matching.
    std::shared_ptr<vector<string>> methodPredicates_ = nullptr;
    // The information about route matching.
    std::shared_ptr<Models::AddGatewayRouteRequestPredicatesPathPredicates> pathPredicates_ = nullptr;
    // The information about URL parameter matching.
    std::shared_ptr<vector<Models::AddGatewayRouteRequestPredicatesQueryPredicates>> queryPredicates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
