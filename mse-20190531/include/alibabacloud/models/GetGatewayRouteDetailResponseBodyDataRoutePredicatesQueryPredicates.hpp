// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAROUTEPREDICATESQUERYPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAROUTEPREDICATESQUERYPREDICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates() = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates(const GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates &) = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates(GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates &&) = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates() = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates& operator=(const GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates &) = default ;
    GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates& operator=(GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates &&) = default ;
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
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetGatewayRouteDetailResponseBodyDataRoutePredicatesQueryPredicates& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The parameter name.
    std::shared_ptr<string> key_ = nullptr;
    // The route type.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
