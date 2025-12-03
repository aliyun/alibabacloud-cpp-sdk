// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDOMAINWEBSOCKETSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDOMAINWEBSOCKETSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetDomainWebSocketStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDomainWebSocketStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionValue, actionValue_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(WSSEnable, WSSEnable_);
    };
    friend void from_json(const Darabonba::Json& j, SetDomainWebSocketStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionValue, actionValue_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(WSSEnable, WSSEnable_);
    };
    SetDomainWebSocketStatusRequest() = default ;
    SetDomainWebSocketStatusRequest(const SetDomainWebSocketStatusRequest &) = default ;
    SetDomainWebSocketStatusRequest(SetDomainWebSocketStatusRequest &&) = default ;
    SetDomainWebSocketStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDomainWebSocketStatusRequest() = default ;
    SetDomainWebSocketStatusRequest& operator=(const SetDomainWebSocketStatusRequest &) = default ;
    SetDomainWebSocketStatusRequest& operator=(SetDomainWebSocketStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionValue_ == nullptr
        && return this->domainName_ == nullptr && return this->groupId_ == nullptr && return this->securityToken_ == nullptr && return this->WSSEnable_ == nullptr; };
    // actionValue Field Functions 
    bool hasActionValue() const { return this->actionValue_ != nullptr;};
    void deleteActionValue() { this->actionValue_ = nullptr;};
    inline string actionValue() const { DARABONBA_PTR_GET_DEFAULT(actionValue_, "") };
    inline SetDomainWebSocketStatusRequest& setActionValue(string actionValue) { DARABONBA_PTR_SET_VALUE(actionValue_, actionValue) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDomainWebSocketStatusRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetDomainWebSocketStatusRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetDomainWebSocketStatusRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // WSSEnable Field Functions 
    bool hasWSSEnable() const { return this->WSSEnable_ != nullptr;};
    void deleteWSSEnable() { this->WSSEnable_ = nullptr;};
    inline string WSSEnable() const { DARABONBA_PTR_GET_DEFAULT(WSSEnable_, "") };
    inline SetDomainWebSocketStatusRequest& setWSSEnable(string WSSEnable) { DARABONBA_PTR_SET_VALUE(WSSEnable_, WSSEnable) };


  protected:
    // The action.
    // 
    // This parameter is required.
    std::shared_ptr<string> actionValue_ = nullptr;
    // The custom domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the API group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // If enable WSS.
    std::shared_ptr<string> WSSEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
