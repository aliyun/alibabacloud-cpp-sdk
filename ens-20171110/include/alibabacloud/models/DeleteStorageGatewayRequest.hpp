// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTORAGEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTORAGEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteStorageGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStorageGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStorageGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
    };
    DeleteStorageGatewayRequest() = default ;
    DeleteStorageGatewayRequest(const DeleteStorageGatewayRequest &) = default ;
    DeleteStorageGatewayRequest(DeleteStorageGatewayRequest &&) = default ;
    DeleteStorageGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStorageGatewayRequest() = default ;
    DeleteStorageGatewayRequest& operator=(const DeleteStorageGatewayRequest &) = default ;
    DeleteStorageGatewayRequest& operator=(DeleteStorageGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayId_ != nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline DeleteStorageGatewayRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


  protected:
    // The ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
