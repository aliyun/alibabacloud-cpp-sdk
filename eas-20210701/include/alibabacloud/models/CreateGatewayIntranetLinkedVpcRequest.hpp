// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYINTRANETLINKEDVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYINTRANETLINKEDVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateGatewayIntranetLinkedVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayIntranetLinkedVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(EnableAuthoritativeDns, enableAuthoritativeDns_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayIntranetLinkedVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(EnableAuthoritativeDns, enableAuthoritativeDns_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateGatewayIntranetLinkedVpcRequest() = default ;
    CreateGatewayIntranetLinkedVpcRequest(const CreateGatewayIntranetLinkedVpcRequest &) = default ;
    CreateGatewayIntranetLinkedVpcRequest(CreateGatewayIntranetLinkedVpcRequest &&) = default ;
    CreateGatewayIntranetLinkedVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayIntranetLinkedVpcRequest() = default ;
    CreateGatewayIntranetLinkedVpcRequest& operator=(const CreateGatewayIntranetLinkedVpcRequest &) = default ;
    CreateGatewayIntranetLinkedVpcRequest& operator=(CreateGatewayIntranetLinkedVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->enableAuthoritativeDns_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateGatewayIntranetLinkedVpcRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // enableAuthoritativeDns Field Functions 
    bool hasEnableAuthoritativeDns() const { return this->enableAuthoritativeDns_ != nullptr;};
    void deleteEnableAuthoritativeDns() { this->enableAuthoritativeDns_ = nullptr;};
    inline bool getEnableAuthoritativeDns() const { DARABONBA_PTR_GET_DEFAULT(enableAuthoritativeDns_, false) };
    inline CreateGatewayIntranetLinkedVpcRequest& setEnableAuthoritativeDns(bool enableAuthoritativeDns) { DARABONBA_PTR_SET_VALUE(enableAuthoritativeDns_, enableAuthoritativeDns) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateGatewayIntranetLinkedVpcRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateGatewayIntranetLinkedVpcRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<bool> enableAuthoritativeDns_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The virtual private cloud (VPC) ID.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
