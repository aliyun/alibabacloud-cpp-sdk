// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateStorageGatewayRequestOrderDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateStorageGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderDetails, orderDetails_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderDetails, orderDetails_);
    };
    CreateStorageGatewayRequest() = default ;
    CreateStorageGatewayRequest(const CreateStorageGatewayRequest &) = default ;
    CreateStorageGatewayRequest(CreateStorageGatewayRequest &&) = default ;
    CreateStorageGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageGatewayRequest() = default ;
    CreateStorageGatewayRequest& operator=(const CreateStorageGatewayRequest &) = default ;
    CreateStorageGatewayRequest& operator=(CreateStorageGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderDetails_ != nullptr; };
    // orderDetails Field Functions 
    bool hasOrderDetails() const { return this->orderDetails_ != nullptr;};
    void deleteOrderDetails() { this->orderDetails_ = nullptr;};
    inline const vector<CreateStorageGatewayRequestOrderDetails> & orderDetails() const { DARABONBA_PTR_GET_CONST(orderDetails_, vector<CreateStorageGatewayRequestOrderDetails>) };
    inline vector<CreateStorageGatewayRequestOrderDetails> orderDetails() { DARABONBA_PTR_GET(orderDetails_, vector<CreateStorageGatewayRequestOrderDetails>) };
    inline CreateStorageGatewayRequest& setOrderDetails(const vector<CreateStorageGatewayRequestOrderDetails> & orderDetails) { DARABONBA_PTR_SET_VALUE(orderDetails_, orderDetails) };
    inline CreateStorageGatewayRequest& setOrderDetails(vector<CreateStorageGatewayRequestOrderDetails> && orderDetails) { DARABONBA_PTR_SET_RVALUE(orderDetails_, orderDetails) };


  protected:
    // The array of orders.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateStorageGatewayRequestOrderDetails>> orderDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
