// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class UpdateGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeNodeNumber, feNodeNumber_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeNodeNumber, feNodeNumber_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateGatewayRequest() = default ;
    UpdateGatewayRequest(const UpdateGatewayRequest &) = default ;
    UpdateGatewayRequest(UpdateGatewayRequest &&) = default ;
    UpdateGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRequest() = default ;
    UpdateGatewayRequest& operator=(const UpdateGatewayRequest &) = default ;
    UpdateGatewayRequest& operator=(UpdateGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feNodeNumber_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayName_ == nullptr && this->instanceId_ == nullptr; };
    // feNodeNumber Field Functions 
    bool hasFeNodeNumber() const { return this->feNodeNumber_ != nullptr;};
    void deleteFeNodeNumber() { this->feNodeNumber_ = nullptr;};
    inline int32_t getFeNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(feNodeNumber_, 0) };
    inline UpdateGatewayRequest& setFeNodeNumber(int32_t feNodeNumber) { DARABONBA_PTR_SET_VALUE(feNodeNumber_, feNodeNumber) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline UpdateGatewayRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline UpdateGatewayRequest& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateGatewayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<int32_t> feNodeNumber_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<string> gatewayName_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
