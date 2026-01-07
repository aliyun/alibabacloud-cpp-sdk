// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEROLECREATEBIZROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEROLECREATEBIZROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRoleCreateBizRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRoleCreateBizRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizPermissionCodeListJson, bizPermissionCodeListJson_);
      DARABONBA_PTR_TO_JSON(BizRoleDesc, bizRoleDesc_);
      DARABONBA_PTR_TO_JSON(BizRoleName, bizRoleName_);
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRoleCreateBizRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizPermissionCodeListJson, bizPermissionCodeListJson_);
      DARABONBA_PTR_FROM_JSON(BizRoleDesc, bizRoleDesc_);
      DARABONBA_PTR_FROM_JSON(BizRoleName, bizRoleName_);
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    EnterpriseRoleCreateBizRoleRequest() = default ;
    EnterpriseRoleCreateBizRoleRequest(const EnterpriseRoleCreateBizRoleRequest &) = default ;
    EnterpriseRoleCreateBizRoleRequest(EnterpriseRoleCreateBizRoleRequest &&) = default ;
    EnterpriseRoleCreateBizRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRoleCreateBizRoleRequest() = default ;
    EnterpriseRoleCreateBizRoleRequest& operator=(const EnterpriseRoleCreateBizRoleRequest &) = default ;
    EnterpriseRoleCreateBizRoleRequest& operator=(EnterpriseRoleCreateBizRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizPermissionCodeListJson_ == nullptr
        && this->bizRoleDesc_ == nullptr && this->bizRoleName_ == nullptr && this->encryptTicket_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr
        && this->orientedNbId_ == nullptr && this->resourceType_ == nullptr; };
    // bizPermissionCodeListJson Field Functions 
    bool hasBizPermissionCodeListJson() const { return this->bizPermissionCodeListJson_ != nullptr;};
    void deleteBizPermissionCodeListJson() { this->bizPermissionCodeListJson_ = nullptr;};
    inline string getBizPermissionCodeListJson() const { DARABONBA_PTR_GET_DEFAULT(bizPermissionCodeListJson_, "") };
    inline EnterpriseRoleCreateBizRoleRequest& setBizPermissionCodeListJson(string bizPermissionCodeListJson) { DARABONBA_PTR_SET_VALUE(bizPermissionCodeListJson_, bizPermissionCodeListJson) };


    // bizRoleDesc Field Functions 
    bool hasBizRoleDesc() const { return this->bizRoleDesc_ != nullptr;};
    void deleteBizRoleDesc() { this->bizRoleDesc_ = nullptr;};
    inline string getBizRoleDesc() const { DARABONBA_PTR_GET_DEFAULT(bizRoleDesc_, "") };
    inline EnterpriseRoleCreateBizRoleRequest& setBizRoleDesc(string bizRoleDesc) { DARABONBA_PTR_SET_VALUE(bizRoleDesc_, bizRoleDesc) };


    // bizRoleName Field Functions 
    bool hasBizRoleName() const { return this->bizRoleName_ != nullptr;};
    void deleteBizRoleName() { this->bizRoleName_ = nullptr;};
    inline string getBizRoleName() const { DARABONBA_PTR_GET_DEFAULT(bizRoleName_, "") };
    inline EnterpriseRoleCreateBizRoleRequest& setBizRoleName(string bizRoleName) { DARABONBA_PTR_SET_VALUE(bizRoleName_, bizRoleName) };


    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseRoleCreateBizRoleRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseRoleCreateBizRoleRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseRoleCreateBizRoleRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseRoleCreateBizRoleRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline EnterpriseRoleCreateBizRoleRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    shared_ptr<string> bizPermissionCodeListJson_ {};
    shared_ptr<string> bizRoleDesc_ {};
    shared_ptr<string> bizRoleName_ {};
    shared_ptr<string> encryptTicket_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
