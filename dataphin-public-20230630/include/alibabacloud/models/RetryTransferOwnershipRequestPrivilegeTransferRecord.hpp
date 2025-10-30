// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYTRANSFEROWNERSHIPREQUESTPRIVILEGETRANSFERRECORD_HPP_
#define ALIBABACLOUD_MODELS_RETRYTRANSFEROWNERSHIPREQUESTPRIVILEGETRANSFERRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RetryTransferOwnershipRequestPrivilegeTransferRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryTransferOwnershipRequestPrivilegeTransferRecord& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NewOwner, newOwner_);
      DARABONBA_PTR_TO_JSON(TransferComment, transferComment_);
    };
    friend void from_json(const Darabonba::Json& j, RetryTransferOwnershipRequestPrivilegeTransferRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NewOwner, newOwner_);
      DARABONBA_PTR_FROM_JSON(TransferComment, transferComment_);
    };
    RetryTransferOwnershipRequestPrivilegeTransferRecord() = default ;
    RetryTransferOwnershipRequestPrivilegeTransferRecord(const RetryTransferOwnershipRequestPrivilegeTransferRecord &) = default ;
    RetryTransferOwnershipRequestPrivilegeTransferRecord(RetryTransferOwnershipRequestPrivilegeTransferRecord &&) = default ;
    RetryTransferOwnershipRequestPrivilegeTransferRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryTransferOwnershipRequestPrivilegeTransferRecord() = default ;
    RetryTransferOwnershipRequestPrivilegeTransferRecord& operator=(const RetryTransferOwnershipRequestPrivilegeTransferRecord &) = default ;
    RetryTransferOwnershipRequestPrivilegeTransferRecord& operator=(RetryTransferOwnershipRequestPrivilegeTransferRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->newOwner_ == nullptr && return this->transferComment_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RetryTransferOwnershipRequestPrivilegeTransferRecord& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // newOwner Field Functions 
    bool hasNewOwner() const { return this->newOwner_ != nullptr;};
    void deleteNewOwner() { this->newOwner_ = nullptr;};
    inline string newOwner() const { DARABONBA_PTR_GET_DEFAULT(newOwner_, "") };
    inline RetryTransferOwnershipRequestPrivilegeTransferRecord& setNewOwner(string newOwner) { DARABONBA_PTR_SET_VALUE(newOwner_, newOwner) };


    // transferComment Field Functions 
    bool hasTransferComment() const { return this->transferComment_ != nullptr;};
    void deleteTransferComment() { this->transferComment_ = nullptr;};
    inline string transferComment() const { DARABONBA_PTR_GET_DEFAULT(transferComment_, "") };
    inline RetryTransferOwnershipRequestPrivilegeTransferRecord& setTransferComment(string transferComment) { DARABONBA_PTR_SET_VALUE(transferComment_, transferComment) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> newOwner_ = nullptr;
    std::shared_ptr<string> transferComment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
