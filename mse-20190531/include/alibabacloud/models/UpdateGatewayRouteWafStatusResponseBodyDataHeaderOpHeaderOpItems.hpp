// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAHEADEROPHEADEROPITEMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATAHEADEROPHEADEROPITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems& obj) { 
      DARABONBA_PTR_TO_JSON(DirectionType, directionType_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectionType, directionType_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems(const UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems(UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems& operator=(const UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems& operator=(UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directionType_ == nullptr
        && return this->key_ == nullptr && return this->opType_ == nullptr && return this->value_ == nullptr; };
    // directionType Field Functions 
    bool hasDirectionType() const { return this->directionType_ != nullptr;};
    void deleteDirectionType() { this->directionType_ = nullptr;};
    inline string directionType() const { DARABONBA_PTR_GET_DEFAULT(directionType_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems& setDirectionType(string directionType) { DARABONBA_PTR_SET_VALUE(directionType_, directionType) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataHeaderOpHeaderOpItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The request or response.
    std::shared_ptr<string> directionType_ = nullptr;
    // The header key.
    std::shared_ptr<string> key_ = nullptr;
    // The operation type.
    std::shared_ptr<string> opType_ = nullptr;
    // The header value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
