// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTEONAUTHRESPONSEBODYDATAROUTEPREDICATESPATHPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTEONAUTHRESPONSEBODYDATAROUTEPREDICATESPATHPREDICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates() = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates(const ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates &) = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates(ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates &&) = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates() = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates& operator=(const ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates &) = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates& operator=(ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->path_ != nullptr
        && this->type_ != nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The path.
    std::shared_ptr<string> path_ = nullptr;
    // The matching type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
