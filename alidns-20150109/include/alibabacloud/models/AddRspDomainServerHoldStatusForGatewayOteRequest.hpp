// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRSPDOMAINSERVERHOLDSTATUSFORGATEWAYOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRSPDOMAINSERVERHOLDSTATUSFORGATEWAYOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddRspDomainServerHoldStatusForGatewayOteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRspDomainServerHoldStatusForGatewayOteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(StatusMsg, statusMsg_);
    };
    friend void from_json(const Darabonba::Json& j, AddRspDomainServerHoldStatusForGatewayOteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(StatusMsg, statusMsg_);
    };
    AddRspDomainServerHoldStatusForGatewayOteRequest() = default ;
    AddRspDomainServerHoldStatusForGatewayOteRequest(const AddRspDomainServerHoldStatusForGatewayOteRequest &) = default ;
    AddRspDomainServerHoldStatusForGatewayOteRequest(AddRspDomainServerHoldStatusForGatewayOteRequest &&) = default ;
    AddRspDomainServerHoldStatusForGatewayOteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRspDomainServerHoldStatusForGatewayOteRequest() = default ;
    AddRspDomainServerHoldStatusForGatewayOteRequest& operator=(const AddRspDomainServerHoldStatusForGatewayOteRequest &) = default ;
    AddRspDomainServerHoldStatusForGatewayOteRequest& operator=(AddRspDomainServerHoldStatusForGatewayOteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->domainName_ == nullptr && this->statusMsg_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddRspDomainServerHoldStatusForGatewayOteRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddRspDomainServerHoldStatusForGatewayOteRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // statusMsg Field Functions 
    bool hasStatusMsg() const { return this->statusMsg_ != nullptr;};
    void deleteStatusMsg() { this->statusMsg_ = nullptr;};
    inline string getStatusMsg() const { DARABONBA_PTR_GET_DEFAULT(statusMsg_, "") };
    inline AddRspDomainServerHoldStatusForGatewayOteRequest& setStatusMsg(string statusMsg) { DARABONBA_PTR_SET_VALUE(statusMsg_, statusMsg) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // This parameter is required.
    shared_ptr<string> statusMsg_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
