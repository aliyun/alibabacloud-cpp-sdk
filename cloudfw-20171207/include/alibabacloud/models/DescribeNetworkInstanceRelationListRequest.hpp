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
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceRelationListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(FirewallConfigureStatus, firewallConfigureStatus_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
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
        && return this->firewallConfigureStatus_ == nullptr && return this->lang_ == nullptr; };
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


  protected:
    std::shared_ptr<string> connectType_ = nullptr;
    std::shared_ptr<string> firewallConfigureStatus_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
