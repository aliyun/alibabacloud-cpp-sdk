// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTROUTEPREDICATESHEADERPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODYDATARESULTROUTEPREDICATESHEADERPREDICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates() = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates(const ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates &) = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates(ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates &&) = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates() = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates& operator=(const ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates &) = default ;
    ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates& operator=(ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListGatewayRouteResponseBodyDataResultRoutePredicatesHeaderPredicates& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The header key.
    std::shared_ptr<string> key_ = nullptr;
    // The matching type.
    std::shared_ptr<string> type_ = nullptr;
    // The value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
