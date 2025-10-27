// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceRelationListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceRelationListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(FirewallConfigureStatus, firewallConfigureStatus_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(PeerNetworkInstanceId, peerNetworkInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceRelationListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(FirewallConfigureStatus, firewallConfigureStatus_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(PeerNetworkInstanceId, peerNetworkInstanceId_);
    };
    DescribeNetworkInstanceRelationListRequest() = default ;
    DescribeNetworkInstanceRelationListRequest(const DescribeNetworkInstanceRelationListRequest &) = default ;
    DescribeNetworkInstanceRelationListRequest(DescribeNetworkInstanceRelationListRequest &&) = default ;
    DescribeNetworkInstanceRelationListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceRelationListRequest() = default ;
    DescribeNetworkInstanceRelationListRequest& operator=(const DescribeNetworkInstanceRelationListRequest &) = default ;
    DescribeNetworkInstanceRelationListRequest& operator=(DescribeNetworkInstanceRelationListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectType_ == nullptr
        && return this->firewallConfigureStatus_ == nullptr && return this->lang_ == nullptr && return this->networkInstanceId_ == nullptr && return this->peerNetworkInstanceId_ == nullptr; };
    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string connectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeNetworkInstanceRelationListRequest& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // firewallConfigureStatus Field Functions 
    bool hasFirewallConfigureStatus() const { return this->firewallConfigureStatus_ != nullptr;};
    void deleteFirewallConfigureStatus() { this->firewallConfigureStatus_ = nullptr;};
    inline string firewallConfigureStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallConfigureStatus_, "") };
    inline DescribeNetworkInstanceRelationListRequest& setFirewallConfigureStatus(string firewallConfigureStatus) { DARABONBA_PTR_SET_VALUE(firewallConfigureStatus_, firewallConfigureStatus) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNetworkInstanceRelationListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline DescribeNetworkInstanceRelationListRequest& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // peerNetworkInstanceId Field Functions 
    bool hasPeerNetworkInstanceId() const { return this->peerNetworkInstanceId_ != nullptr;};
    void deletePeerNetworkInstanceId() { this->peerNetworkInstanceId_ = nullptr;};
    inline string peerNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(peerNetworkInstanceId_, "") };
    inline DescribeNetworkInstanceRelationListRequest& setPeerNetworkInstanceId(string peerNetworkInstanceId) { DARABONBA_PTR_SET_VALUE(peerNetworkInstanceId_, peerNetworkInstanceId) };


  protected:
    std::shared_ptr<string> connectType_ = nullptr;
    std::shared_ptr<string> firewallConfigureStatus_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    std::shared_ptr<string> peerNetworkInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
