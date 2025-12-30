// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFEROWNERSHIPFORALLOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFEROWNERSHIPFORALLOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class TransferOwnershipForAllObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferOwnershipForAllObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PrivilegeTransferRecord, privilegeTransferRecord_);
    };
    friend void from_json(const Darabonba::Json& j, TransferOwnershipForAllObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PrivilegeTransferRecord, privilegeTransferRecord_);
    };
    TransferOwnershipForAllObjectRequest() = default ;
    TransferOwnershipForAllObjectRequest(const TransferOwnershipForAllObjectRequest &) = default ;
    TransferOwnershipForAllObjectRequest(TransferOwnershipForAllObjectRequest &&) = default ;
    TransferOwnershipForAllObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferOwnershipForAllObjectRequest() = default ;
    TransferOwnershipForAllObjectRequest& operator=(const TransferOwnershipForAllObjectRequest &) = default ;
    TransferOwnershipForAllObjectRequest& operator=(TransferOwnershipForAllObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrivilegeTransferRecord : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivilegeTransferRecord& obj) { 
        DARABONBA_PTR_TO_JSON(NewOwner, newOwner_);
        DARABONBA_PTR_TO_JSON(OldOwner, oldOwner_);
        DARABONBA_PTR_TO_JSON(TransferComment, transferComment_);
      };
      friend void from_json(const Darabonba::Json& j, PrivilegeTransferRecord& obj) { 
        DARABONBA_PTR_FROM_JSON(NewOwner, newOwner_);
        DARABONBA_PTR_FROM_JSON(OldOwner, oldOwner_);
        DARABONBA_PTR_FROM_JSON(TransferComment, transferComment_);
      };
      PrivilegeTransferRecord() = default ;
      PrivilegeTransferRecord(const PrivilegeTransferRecord &) = default ;
      PrivilegeTransferRecord(PrivilegeTransferRecord &&) = default ;
      PrivilegeTransferRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivilegeTransferRecord() = default ;
      PrivilegeTransferRecord& operator=(const PrivilegeTransferRecord &) = default ;
      PrivilegeTransferRecord& operator=(PrivilegeTransferRecord &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->newOwner_ == nullptr
        && this->oldOwner_ == nullptr && this->transferComment_ == nullptr; };
      // newOwner Field Functions 
      bool hasNewOwner() const { return this->newOwner_ != nullptr;};
      void deleteNewOwner() { this->newOwner_ = nullptr;};
      inline string getNewOwner() const { DARABONBA_PTR_GET_DEFAULT(newOwner_, "") };
      inline PrivilegeTransferRecord& setNewOwner(string newOwner) { DARABONBA_PTR_SET_VALUE(newOwner_, newOwner) };


      // oldOwner Field Functions 
      bool hasOldOwner() const { return this->oldOwner_ != nullptr;};
      void deleteOldOwner() { this->oldOwner_ = nullptr;};
      inline string getOldOwner() const { DARABONBA_PTR_GET_DEFAULT(oldOwner_, "") };
      inline PrivilegeTransferRecord& setOldOwner(string oldOwner) { DARABONBA_PTR_SET_VALUE(oldOwner_, oldOwner) };


      // transferComment Field Functions 
      bool hasTransferComment() const { return this->transferComment_ != nullptr;};
      void deleteTransferComment() { this->transferComment_ = nullptr;};
      inline string getTransferComment() const { DARABONBA_PTR_GET_DEFAULT(transferComment_, "") };
      inline PrivilegeTransferRecord& setTransferComment(string transferComment) { DARABONBA_PTR_SET_VALUE(transferComment_, transferComment) };


    protected:
      // This parameter is required.
      shared_ptr<string> newOwner_ {};
      // This parameter is required.
      shared_ptr<string> oldOwner_ {};
      shared_ptr<string> transferComment_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->privilegeTransferRecord_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline TransferOwnershipForAllObjectRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // privilegeTransferRecord Field Functions 
    bool hasPrivilegeTransferRecord() const { return this->privilegeTransferRecord_ != nullptr;};
    void deletePrivilegeTransferRecord() { this->privilegeTransferRecord_ = nullptr;};
    inline const TransferOwnershipForAllObjectRequest::PrivilegeTransferRecord & getPrivilegeTransferRecord() const { DARABONBA_PTR_GET_CONST(privilegeTransferRecord_, TransferOwnershipForAllObjectRequest::PrivilegeTransferRecord) };
    inline TransferOwnershipForAllObjectRequest::PrivilegeTransferRecord getPrivilegeTransferRecord() { DARABONBA_PTR_GET(privilegeTransferRecord_, TransferOwnershipForAllObjectRequest::PrivilegeTransferRecord) };
    inline TransferOwnershipForAllObjectRequest& setPrivilegeTransferRecord(const TransferOwnershipForAllObjectRequest::PrivilegeTransferRecord & privilegeTransferRecord) { DARABONBA_PTR_SET_VALUE(privilegeTransferRecord_, privilegeTransferRecord) };
    inline TransferOwnershipForAllObjectRequest& setPrivilegeTransferRecord(TransferOwnershipForAllObjectRequest::PrivilegeTransferRecord && privilegeTransferRecord) { DARABONBA_PTR_SET_RVALUE(privilegeTransferRecord_, privilegeTransferRecord) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<TransferOwnershipForAllObjectRequest::PrivilegeTransferRecord> privilegeTransferRecord_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
