// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUDITVIBEROPENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAUDITVIBEROPENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class AddAuditViberOpenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuditViberOpenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditRecord, auditRecordShrink_);
      DARABONBA_PTR_TO_JSON(AuditResult, auditResult_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuditViberOpenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditRecord, auditRecordShrink_);
      DARABONBA_PTR_FROM_JSON(AuditResult, auditResult_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddAuditViberOpenShrinkRequest() = default ;
    AddAuditViberOpenShrinkRequest(const AddAuditViberOpenShrinkRequest &) = default ;
    AddAuditViberOpenShrinkRequest(AddAuditViberOpenShrinkRequest &&) = default ;
    AddAuditViberOpenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuditViberOpenShrinkRequest() = default ;
    AddAuditViberOpenShrinkRequest& operator=(const AddAuditViberOpenShrinkRequest &) = default ;
    AddAuditViberOpenShrinkRequest& operator=(AddAuditViberOpenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditRecordShrink_ == nullptr
        && this->auditResult_ == nullptr && this->custSpaceId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // auditRecordShrink Field Functions 
    bool hasAuditRecordShrink() const { return this->auditRecordShrink_ != nullptr;};
    void deleteAuditRecordShrink() { this->auditRecordShrink_ = nullptr;};
    inline string getAuditRecordShrink() const { DARABONBA_PTR_GET_DEFAULT(auditRecordShrink_, "") };
    inline AddAuditViberOpenShrinkRequest& setAuditRecordShrink(string auditRecordShrink) { DARABONBA_PTR_SET_VALUE(auditRecordShrink_, auditRecordShrink) };


    // auditResult Field Functions 
    bool hasAuditResult() const { return this->auditResult_ != nullptr;};
    void deleteAuditResult() { this->auditResult_ = nullptr;};
    inline string getAuditResult() const { DARABONBA_PTR_GET_DEFAULT(auditResult_, "") };
    inline AddAuditViberOpenShrinkRequest& setAuditResult(string auditResult) { DARABONBA_PTR_SET_VALUE(auditResult_, auditResult) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline AddAuditViberOpenShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddAuditViberOpenShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddAuditViberOpenShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddAuditViberOpenShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> auditRecordShrink_ {};
    shared_ptr<string> auditResult_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
