// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEIPCONTROLAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEIPCONTROLAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveIpControlApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveIpControlApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveIpControlApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    RemoveIpControlApisRequest() = default ;
    RemoveIpControlApisRequest(const RemoveIpControlApisRequest &) = default ;
    RemoveIpControlApisRequest(RemoveIpControlApisRequest &&) = default ;
    RemoveIpControlApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveIpControlApisRequest() = default ;
    RemoveIpControlApisRequest& operator=(const RemoveIpControlApisRequest &) = default ;
    RemoveIpControlApisRequest& operator=(RemoveIpControlApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIds_ == nullptr
        && return this->groupId_ == nullptr && return this->ipControlId_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr; };
    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline string apiIds() const { DARABONBA_PTR_GET_DEFAULT(apiIds_, "") };
    inline RemoveIpControlApisRequest& setApiIds(string apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveIpControlApisRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string ipControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline RemoveIpControlApisRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RemoveIpControlApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline RemoveIpControlApisRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The IDs of the APIs from which you want to unbind the ACL.
    // 
    // *   If this parameter is not specified, the ACL is unbound from all the APIs in the specified environment of the API group.
    // *   The IDs of APIs that you want to query. Separate multiple API IDs with commas (,). A maximum of 100 API IDs can be entered.
    std::shared_ptr<string> apiIds_ = nullptr;
    // The ID of the API group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the ACL.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipControlId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
