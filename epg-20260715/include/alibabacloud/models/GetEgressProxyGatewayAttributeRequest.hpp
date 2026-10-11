// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEGRESSPROXYGATEWAYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEGRESSPROXYGATEWAYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class GetEgressProxyGatewayAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEgressProxyGatewayAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEgressProxyGatewayAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
    };
    GetEgressProxyGatewayAttributeRequest() = default ;
    GetEgressProxyGatewayAttributeRequest(const GetEgressProxyGatewayAttributeRequest &) = default ;
    GetEgressProxyGatewayAttributeRequest(GetEgressProxyGatewayAttributeRequest &&) = default ;
    GetEgressProxyGatewayAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEgressProxyGatewayAttributeRequest() = default ;
    GetEgressProxyGatewayAttributeRequest& operator=(const GetEgressProxyGatewayAttributeRequest &) = default ;
    GetEgressProxyGatewayAttributeRequest& operator=(GetEgressProxyGatewayAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressProxyGatewayId_ == nullptr; };
    // egressProxyGatewayId Field Functions 
    bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
    void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
    inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
    inline GetEgressProxyGatewayAttributeRequest& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


  protected:
    // The ID of the egress proxy gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
