// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAHEADEROPHEADEROPITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYROUTEDETAILRESPONSEBODYDATAHEADEROPHEADEROPITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems& obj) { 
      DARABONBA_PTR_TO_JSON(DirectionType, directionType_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectionType, directionType_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems() = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems(const GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems &) = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems(GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems &&) = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems() = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems& operator=(const GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems &) = default ;
    GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems& operator=(GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directionType_ != nullptr
        && this->key_ != nullptr && this->opType_ != nullptr && this->value_ != nullptr; };
    // directionType Field Functions 
    bool hasDirectionType() const { return this->directionType_ != nullptr;};
    void deleteDirectionType() { this->directionType_ = nullptr;};
    inline string directionType() const { DARABONBA_PTR_GET_DEFAULT(directionType_, "") };
    inline GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems& setDirectionType(string directionType) { DARABONBA_PTR_SET_VALUE(directionType_, directionType) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetGatewayRouteDetailResponseBodyDataHeaderOpHeaderOpItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The request or response.
    std::shared_ptr<string> directionType_ = nullptr;
    // The header key.
    std::shared_ptr<string> key_ = nullptr;
    // The type of the operation.
    std::shared_ptr<string> opType_ = nullptr;
    // The header value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
