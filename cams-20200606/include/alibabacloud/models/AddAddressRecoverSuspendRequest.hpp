// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDADDRESSRECOVERSUSPENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDADDRESSRECOVERSUSPENDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class AddAddressRecoverSuspendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAddressRecoverSuspendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditRecord, auditRecord_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestType, requestType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAddressRecoverSuspendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditRecord, auditRecord_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestType, requestType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddAddressRecoverSuspendRequest() = default ;
    AddAddressRecoverSuspendRequest(const AddAddressRecoverSuspendRequest &) = default ;
    AddAddressRecoverSuspendRequest(AddAddressRecoverSuspendRequest &&) = default ;
    AddAddressRecoverSuspendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAddressRecoverSuspendRequest() = default ;
    AddAddressRecoverSuspendRequest& operator=(const AddAddressRecoverSuspendRequest &) = default ;
    AddAddressRecoverSuspendRequest& operator=(AddAddressRecoverSuspendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuditRecord : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuditRecord& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyReason, applyReason_);
        DARABONBA_PTR_TO_JSON(MessageDestinationCountry, messageDestinationCountry_);
        DARABONBA_PTR_TO_JSON(MessageDestinationInternationalCountry, messageDestinationInternationalCountry_);
        DARABONBA_PTR_TO_JSON(RecoveryDate, recoveryDate_);
        DARABONBA_PTR_TO_JSON(SuspensionDate, suspensionDate_);
      };
      friend void from_json(const Darabonba::Json& j, AuditRecord& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyReason, applyReason_);
        DARABONBA_PTR_FROM_JSON(MessageDestinationCountry, messageDestinationCountry_);
        DARABONBA_PTR_FROM_JSON(MessageDestinationInternationalCountry, messageDestinationInternationalCountry_);
        DARABONBA_PTR_FROM_JSON(RecoveryDate, recoveryDate_);
        DARABONBA_PTR_FROM_JSON(SuspensionDate, suspensionDate_);
      };
      AuditRecord() = default ;
      AuditRecord(const AuditRecord &) = default ;
      AuditRecord(AuditRecord &&) = default ;
      AuditRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuditRecord() = default ;
      AuditRecord& operator=(const AuditRecord &) = default ;
      AuditRecord& operator=(AuditRecord &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applyReason_ == nullptr
        && this->messageDestinationCountry_ == nullptr && this->messageDestinationInternationalCountry_ == nullptr && this->recoveryDate_ == nullptr && this->suspensionDate_ == nullptr; };
      // applyReason Field Functions 
      bool hasApplyReason() const { return this->applyReason_ != nullptr;};
      void deleteApplyReason() { this->applyReason_ = nullptr;};
      inline string getApplyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
      inline AuditRecord& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


      // messageDestinationCountry Field Functions 
      bool hasMessageDestinationCountry() const { return this->messageDestinationCountry_ != nullptr;};
      void deleteMessageDestinationCountry() { this->messageDestinationCountry_ = nullptr;};
      inline const vector<string> & getMessageDestinationCountry() const { DARABONBA_PTR_GET_CONST(messageDestinationCountry_, vector<string>) };
      inline vector<string> getMessageDestinationCountry() { DARABONBA_PTR_GET(messageDestinationCountry_, vector<string>) };
      inline AuditRecord& setMessageDestinationCountry(const vector<string> & messageDestinationCountry) { DARABONBA_PTR_SET_VALUE(messageDestinationCountry_, messageDestinationCountry) };
      inline AuditRecord& setMessageDestinationCountry(vector<string> && messageDestinationCountry) { DARABONBA_PTR_SET_RVALUE(messageDestinationCountry_, messageDestinationCountry) };


      // messageDestinationInternationalCountry Field Functions 
      bool hasMessageDestinationInternationalCountry() const { return this->messageDestinationInternationalCountry_ != nullptr;};
      void deleteMessageDestinationInternationalCountry() { this->messageDestinationInternationalCountry_ = nullptr;};
      inline const vector<string> & getMessageDestinationInternationalCountry() const { DARABONBA_PTR_GET_CONST(messageDestinationInternationalCountry_, vector<string>) };
      inline vector<string> getMessageDestinationInternationalCountry() { DARABONBA_PTR_GET(messageDestinationInternationalCountry_, vector<string>) };
      inline AuditRecord& setMessageDestinationInternationalCountry(const vector<string> & messageDestinationInternationalCountry) { DARABONBA_PTR_SET_VALUE(messageDestinationInternationalCountry_, messageDestinationInternationalCountry) };
      inline AuditRecord& setMessageDestinationInternationalCountry(vector<string> && messageDestinationInternationalCountry) { DARABONBA_PTR_SET_RVALUE(messageDestinationInternationalCountry_, messageDestinationInternationalCountry) };


      // recoveryDate Field Functions 
      bool hasRecoveryDate() const { return this->recoveryDate_ != nullptr;};
      void deleteRecoveryDate() { this->recoveryDate_ = nullptr;};
      inline string getRecoveryDate() const { DARABONBA_PTR_GET_DEFAULT(recoveryDate_, "") };
      inline AuditRecord& setRecoveryDate(string recoveryDate) { DARABONBA_PTR_SET_VALUE(recoveryDate_, recoveryDate) };


      // suspensionDate Field Functions 
      bool hasSuspensionDate() const { return this->suspensionDate_ != nullptr;};
      void deleteSuspensionDate() { this->suspensionDate_ = nullptr;};
      inline string getSuspensionDate() const { DARABONBA_PTR_GET_DEFAULT(suspensionDate_, "") };
      inline AuditRecord& setSuspensionDate(string suspensionDate) { DARABONBA_PTR_SET_VALUE(suspensionDate_, suspensionDate) };


    protected:
      shared_ptr<string> applyReason_ {};
      shared_ptr<vector<string>> messageDestinationCountry_ {};
      shared_ptr<vector<string>> messageDestinationInternationalCountry_ {};
      shared_ptr<string> recoveryDate_ {};
      shared_ptr<string> suspensionDate_ {};
    };

    virtual bool empty() const override { return this->auditRecord_ == nullptr
        && this->custSpaceId_ == nullptr && this->ownerId_ == nullptr && this->requestType_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // auditRecord Field Functions 
    bool hasAuditRecord() const { return this->auditRecord_ != nullptr;};
    void deleteAuditRecord() { this->auditRecord_ = nullptr;};
    inline const AddAddressRecoverSuspendRequest::AuditRecord & getAuditRecord() const { DARABONBA_PTR_GET_CONST(auditRecord_, AddAddressRecoverSuspendRequest::AuditRecord) };
    inline AddAddressRecoverSuspendRequest::AuditRecord getAuditRecord() { DARABONBA_PTR_GET(auditRecord_, AddAddressRecoverSuspendRequest::AuditRecord) };
    inline AddAddressRecoverSuspendRequest& setAuditRecord(const AddAddressRecoverSuspendRequest::AuditRecord & auditRecord) { DARABONBA_PTR_SET_VALUE(auditRecord_, auditRecord) };
    inline AddAddressRecoverSuspendRequest& setAuditRecord(AddAddressRecoverSuspendRequest::AuditRecord && auditRecord) { DARABONBA_PTR_SET_RVALUE(auditRecord_, auditRecord) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline AddAddressRecoverSuspendRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddAddressRecoverSuspendRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestType Field Functions 
    bool hasRequestType() const { return this->requestType_ != nullptr;};
    void deleteRequestType() { this->requestType_ = nullptr;};
    inline string getRequestType() const { DARABONBA_PTR_GET_DEFAULT(requestType_, "") };
    inline AddAddressRecoverSuspendRequest& setRequestType(string requestType) { DARABONBA_PTR_SET_VALUE(requestType_, requestType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddAddressRecoverSuspendRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddAddressRecoverSuspendRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<AddAddressRecoverSuspendRequest::AuditRecord> auditRecord_ {};
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> requestType_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
