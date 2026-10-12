// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIPATHFIELDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPIPATHFIELDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetApiPathFieldConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiPathFieldConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiPathFieldConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
    };
    GetApiPathFieldConfigRequest() = default ;
    GetApiPathFieldConfigRequest(const GetApiPathFieldConfigRequest &) = default ;
    GetApiPathFieldConfigRequest(GetApiPathFieldConfigRequest &&) = default ;
    GetApiPathFieldConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiPathFieldConfigRequest() = default ;
    GetApiPathFieldConfigRequest& operator=(const GetApiPathFieldConfigRequest &) = default ;
    GetApiPathFieldConfigRequest& operator=(GetApiPathFieldConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->httpApiId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GetApiPathFieldConfigRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline GetApiPathFieldConfigRequest& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


  protected:
    // The ID of the cloud-native API gateway.
    shared_ptr<string> gatewayId_ {};
    // The ID of the HTTP API.
    shared_ptr<string> httpApiId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
