// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVPCFIREWALLCONFIGUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVPCFIREWALLCONFIGUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteVpcFirewallConfigureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVpcFirewallConfigureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(VpcFirewallIdList, vpcFirewallIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVpcFirewallConfigureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallIdList, vpcFirewallIdList_);
    };
    DeleteVpcFirewallConfigureRequest() = default ;
    DeleteVpcFirewallConfigureRequest(const DeleteVpcFirewallConfigureRequest &) = default ;
    DeleteVpcFirewallConfigureRequest(DeleteVpcFirewallConfigureRequest &&) = default ;
    DeleteVpcFirewallConfigureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVpcFirewallConfigureRequest() = default ;
    DeleteVpcFirewallConfigureRequest& operator=(const DeleteVpcFirewallConfigureRequest &) = default ;
    DeleteVpcFirewallConfigureRequest& operator=(DeleteVpcFirewallConfigureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->memberUid_ != nullptr && this->vpcFirewallIdList_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteVpcFirewallConfigureRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DeleteVpcFirewallConfigureRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // vpcFirewallIdList Field Functions 
    bool hasVpcFirewallIdList() const { return this->vpcFirewallIdList_ != nullptr;};
    void deleteVpcFirewallIdList() { this->vpcFirewallIdList_ = nullptr;};
    inline const vector<string> & vpcFirewallIdList() const { DARABONBA_PTR_GET_CONST(vpcFirewallIdList_, vector<string>) };
    inline vector<string> vpcFirewallIdList() { DARABONBA_PTR_GET(vpcFirewallIdList_, vector<string>) };
    inline DeleteVpcFirewallConfigureRequest& setVpcFirewallIdList(const vector<string> & vpcFirewallIdList) { DARABONBA_PTR_SET_VALUE(vpcFirewallIdList_, vpcFirewallIdList) };
    inline DeleteVpcFirewallConfigureRequest& setVpcFirewallIdList(vector<string> && vpcFirewallIdList) { DARABONBA_PTR_SET_RVALUE(vpcFirewallIdList_, vpcFirewallIdList) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<string> memberUid_ = nullptr;
    // The instance IDs of VPC firewalls.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> vpcFirewallIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
