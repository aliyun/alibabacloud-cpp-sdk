// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFEROWNERSHIPFORALLOBJECTREQUESTPRIVILEGETRANSFERRECORD_HPP_
#define ALIBABACLOUD_MODELS_TRANSFEROWNERSHIPFORALLOBJECTREQUESTPRIVILEGETRANSFERRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class TransferOwnershipForAllObjectRequestPrivilegeTransferRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferOwnershipForAllObjectRequestPrivilegeTransferRecord& obj) { 
      DARABONBA_PTR_TO_JSON(NewOwner, newOwner_);
      DARABONBA_PTR_TO_JSON(OldOwner, oldOwner_);
      DARABONBA_PTR_TO_JSON(TransferComment, transferComment_);
    };
    friend void from_json(const Darabonba::Json& j, TransferOwnershipForAllObjectRequestPrivilegeTransferRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(NewOwner, newOwner_);
      DARABONBA_PTR_FROM_JSON(OldOwner, oldOwner_);
      DARABONBA_PTR_FROM_JSON(TransferComment, transferComment_);
    };
    TransferOwnershipForAllObjectRequestPrivilegeTransferRecord() = default ;
    TransferOwnershipForAllObjectRequestPrivilegeTransferRecord(const TransferOwnershipForAllObjectRequestPrivilegeTransferRecord &) = default ;
    TransferOwnershipForAllObjectRequestPrivilegeTransferRecord(TransferOwnershipForAllObjectRequestPrivilegeTransferRecord &&) = default ;
    TransferOwnershipForAllObjectRequestPrivilegeTransferRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferOwnershipForAllObjectRequestPrivilegeTransferRecord() = default ;
    TransferOwnershipForAllObjectRequestPrivilegeTransferRecord& operator=(const TransferOwnershipForAllObjectRequestPrivilegeTransferRecord &) = default ;
    TransferOwnershipForAllObjectRequestPrivilegeTransferRecord& operator=(TransferOwnershipForAllObjectRequestPrivilegeTransferRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->newOwner_ != nullptr
        && this->oldOwner_ != nullptr && this->transferComment_ != nullptr; };
    // newOwner Field Functions 
    bool hasNewOwner() const { return this->newOwner_ != nullptr;};
    void deleteNewOwner() { this->newOwner_ = nullptr;};
    inline string newOwner() const { DARABONBA_PTR_GET_DEFAULT(newOwner_, "") };
    inline TransferOwnershipForAllObjectRequestPrivilegeTransferRecord& setNewOwner(string newOwner) { DARABONBA_PTR_SET_VALUE(newOwner_, newOwner) };


    // oldOwner Field Functions 
    bool hasOldOwner() const { return this->oldOwner_ != nullptr;};
    void deleteOldOwner() { this->oldOwner_ = nullptr;};
    inline string oldOwner() const { DARABONBA_PTR_GET_DEFAULT(oldOwner_, "") };
    inline TransferOwnershipForAllObjectRequestPrivilegeTransferRecord& setOldOwner(string oldOwner) { DARABONBA_PTR_SET_VALUE(oldOwner_, oldOwner) };


    // transferComment Field Functions 
    bool hasTransferComment() const { return this->transferComment_ != nullptr;};
    void deleteTransferComment() { this->transferComment_ = nullptr;};
    inline string transferComment() const { DARABONBA_PTR_GET_DEFAULT(transferComment_, "") };
    inline TransferOwnershipForAllObjectRequestPrivilegeTransferRecord& setTransferComment(string transferComment) { DARABONBA_PTR_SET_VALUE(transferComment_, transferComment) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> newOwner_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> oldOwner_ = nullptr;
    std::shared_ptr<string> transferComment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
