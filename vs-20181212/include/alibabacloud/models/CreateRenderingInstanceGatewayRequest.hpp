// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingInstanceGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingInstanceGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayInstanceId, gatewayInstanceId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingInstanceGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayInstanceId, gatewayInstanceId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    CreateRenderingInstanceGatewayRequest() = default ;
    CreateRenderingInstanceGatewayRequest(const CreateRenderingInstanceGatewayRequest &) = default ;
    CreateRenderingInstanceGatewayRequest(CreateRenderingInstanceGatewayRequest &&) = default ;
    CreateRenderingInstanceGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingInstanceGatewayRequest() = default ;
    CreateRenderingInstanceGatewayRequest& operator=(const CreateRenderingInstanceGatewayRequest &) = default ;
    CreateRenderingInstanceGatewayRequest& operator=(CreateRenderingInstanceGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayInstanceId_ == nullptr
        && this->renderingInstanceId_ == nullptr; };
    // gatewayInstanceId Field Functions 
    bool hasGatewayInstanceId() const { return this->gatewayInstanceId_ != nullptr;};
    void deleteGatewayInstanceId() { this->gatewayInstanceId_ = nullptr;};
    inline string getGatewayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayInstanceId_, "") };
    inline CreateRenderingInstanceGatewayRequest& setGatewayInstanceId(string gatewayInstanceId) { DARABONBA_PTR_SET_VALUE(gatewayInstanceId_, gatewayInstanceId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline CreateRenderingInstanceGatewayRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> gatewayInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
