// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class AddGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeNodeNumber, feNodeNumber_);
      DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeNodeNumber, feNodeNumber_);
      DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AddGatewayRequest() = default ;
    AddGatewayRequest(const AddGatewayRequest &) = default ;
    AddGatewayRequest(AddGatewayRequest &&) = default ;
    AddGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRequest() = default ;
    AddGatewayRequest& operator=(const AddGatewayRequest &) = default ;
    AddGatewayRequest& operator=(AddGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feNodeNumber_ == nullptr
        && this->gatewayName_ == nullptr && this->instanceId_ == nullptr; };
    // feNodeNumber Field Functions 
    bool hasFeNodeNumber() const { return this->feNodeNumber_ != nullptr;};
    void deleteFeNodeNumber() { this->feNodeNumber_ = nullptr;};
    inline int32_t getFeNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(feNodeNumber_, 0) };
    inline AddGatewayRequest& setFeNodeNumber(int32_t feNodeNumber) { DARABONBA_PTR_SET_VALUE(feNodeNumber_, feNodeNumber) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline AddGatewayRequest& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddGatewayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<int32_t> feNodeNumber_ {};
    shared_ptr<string> gatewayName_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
