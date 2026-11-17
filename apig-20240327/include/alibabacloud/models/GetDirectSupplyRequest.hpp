// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTSUPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTSUPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDirectSupplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectSupplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectSupplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
    };
    GetDirectSupplyRequest() = default ;
    GetDirectSupplyRequest(const GetDirectSupplyRequest &) = default ;
    GetDirectSupplyRequest(GetDirectSupplyRequest &&) = default ;
    GetDirectSupplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectSupplyRequest() = default ;
    GetDirectSupplyRequest& operator=(const GetDirectSupplyRequest &) = default ;
    GetDirectSupplyRequest& operator=(GetDirectSupplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GetDirectSupplyRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


  protected:
    // The ID of the gateway instance for which you want to query direct-supply models.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
