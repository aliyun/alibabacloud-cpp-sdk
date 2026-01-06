// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTOPGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTOPGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DeleteStopGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStopGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStopGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
    };
    DeleteStopGatewayRequest() = default ;
    DeleteStopGatewayRequest(const DeleteStopGatewayRequest &) = default ;
    DeleteStopGatewayRequest(DeleteStopGatewayRequest &&) = default ;
    DeleteStopGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStopGatewayRequest() = default ;
    DeleteStopGatewayRequest& operator=(const DeleteStopGatewayRequest &) = default ;
    DeleteStopGatewayRequest& operator=(DeleteStopGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline DeleteStopGatewayRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


  protected:
    // The ID that can uniquely identify the DBGateway. You can obtain the DBGateway ID by calling the [DescribeCloudbenchTask](https://help.aliyun.com/document_detail/230669.html) operation. The DBGateway ID is the value of the **ClientGatewayId** field in the response.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
