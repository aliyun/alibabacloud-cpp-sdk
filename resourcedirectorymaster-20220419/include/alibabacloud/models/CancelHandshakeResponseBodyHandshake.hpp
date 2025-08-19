// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELHANDSHAKERESPONSEBODYHANDSHAKE_HPP_
#define ALIBABACLOUD_MODELS_CANCELHANDSHAKERESPONSEBODYHANDSHAKE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class CancelHandshakeResponseBodyHandshake : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelHandshakeResponseBodyHandshake& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HandshakeId, handshakeId_);
      DARABONBA_PTR_TO_JSON(MasterAccountId, masterAccountId_);
      DARABONBA_PTR_TO_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetEntity, targetEntity_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CancelHandshakeResponseBodyHandshake& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HandshakeId, handshakeId_);
      DARABONBA_PTR_FROM_JSON(MasterAccountId, masterAccountId_);
      DARABONBA_PTR_FROM_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetEntity, targetEntity_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CancelHandshakeResponseBodyHandshake() = default ;
    CancelHandshakeResponseBodyHandshake(const CancelHandshakeResponseBodyHandshake &) = default ;
    CancelHandshakeResponseBodyHandshake(CancelHandshakeResponseBodyHandshake &&) = default ;
    CancelHandshakeResponseBodyHandshake(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelHandshakeResponseBodyHandshake() = default ;
    CancelHandshakeResponseBodyHandshake& operator=(const CancelHandshakeResponseBodyHandshake &) = default ;
    CancelHandshakeResponseBodyHandshake& operator=(CancelHandshakeResponseBodyHandshake &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->expireTime_ != nullptr && this->handshakeId_ != nullptr && this->masterAccountId_ != nullptr && this->masterAccountName_ != nullptr && this->modifyTime_ != nullptr
        && this->note_ != nullptr && this->resourceDirectoryId_ != nullptr && this->status_ != nullptr && this->targetEntity_ != nullptr && this->targetType_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CancelHandshakeResponseBodyHandshake& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CancelHandshakeResponseBodyHandshake& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // handshakeId Field Functions 
    bool hasHandshakeId() const { return this->handshakeId_ != nullptr;};
    void deleteHandshakeId() { this->handshakeId_ = nullptr;};
    inline string handshakeId() const { DARABONBA_PTR_GET_DEFAULT(handshakeId_, "") };
    inline CancelHandshakeResponseBodyHandshake& setHandshakeId(string handshakeId) { DARABONBA_PTR_SET_VALUE(handshakeId_, handshakeId) };


    // masterAccountId Field Functions 
    bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
    void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
    inline string masterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
    inline CancelHandshakeResponseBodyHandshake& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


    // masterAccountName Field Functions 
    bool hasMasterAccountName() const { return this->masterAccountName_ != nullptr;};
    void deleteMasterAccountName() { this->masterAccountName_ = nullptr;};
    inline string masterAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountName_, "") };
    inline CancelHandshakeResponseBodyHandshake& setMasterAccountName(string masterAccountName) { DARABONBA_PTR_SET_VALUE(masterAccountName_, masterAccountName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline CancelHandshakeResponseBodyHandshake& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline CancelHandshakeResponseBodyHandshake& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline CancelHandshakeResponseBodyHandshake& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CancelHandshakeResponseBodyHandshake& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetEntity Field Functions 
    bool hasTargetEntity() const { return this->targetEntity_ != nullptr;};
    void deleteTargetEntity() { this->targetEntity_ = nullptr;};
    inline string targetEntity() const { DARABONBA_PTR_GET_DEFAULT(targetEntity_, "") };
    inline CancelHandshakeResponseBodyHandshake& setTargetEntity(string targetEntity) { DARABONBA_PTR_SET_VALUE(targetEntity_, targetEntity) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CancelHandshakeResponseBodyHandshake& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The time when the invitation was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the invitation expires. The time is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The ID of the invitation.
    std::shared_ptr<string> handshakeId_ = nullptr;
    // The ID of the management account of the resource directory.
    std::shared_ptr<string> masterAccountId_ = nullptr;
    // The name of the management account of the resource directory.
    std::shared_ptr<string> masterAccountName_ = nullptr;
    // The time when the invitation was modified. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The description of the invitation.
    std::shared_ptr<string> note_ = nullptr;
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
    // The status of the invitation. Valid values:
    // 
    // *   Pending: The invitation is waiting for confirmation.
    // *   Accepted: The invitation is accepted.
    // *   Cancelled: The invitation is canceled.
    // *   Declined: The invitation is rejected.
    // *   Expired: The invitation expires.
    std::shared_ptr<string> status_ = nullptr;
    // The ID or logon email address of the invited account.
    std::shared_ptr<string> targetEntity_ = nullptr;
    // The type of the invited account. Valid values:
    // 
    // *   Account: indicates the ID of the account.
    // *   Email: indicates the logon email address of the account.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
