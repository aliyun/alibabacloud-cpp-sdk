// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHANDSHAKERESPONSEBODYHANDSHAKE_HPP_
#define ALIBABACLOUD_MODELS_GETHANDSHAKERESPONSEBODYHANDSHAKE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetHandshakeResponseBodyHandshake : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHandshakeResponseBodyHandshake& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HandshakeId, handshakeId_);
      DARABONBA_PTR_TO_JSON(InvitedAccountRealName, invitedAccountRealName_);
      DARABONBA_PTR_TO_JSON(MasterAccountId, masterAccountId_);
      DARABONBA_PTR_TO_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_TO_JSON(MasterAccountRealName, masterAccountRealName_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetEntity, targetEntity_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetHandshakeResponseBodyHandshake& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HandshakeId, handshakeId_);
      DARABONBA_PTR_FROM_JSON(InvitedAccountRealName, invitedAccountRealName_);
      DARABONBA_PTR_FROM_JSON(MasterAccountId, masterAccountId_);
      DARABONBA_PTR_FROM_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_FROM_JSON(MasterAccountRealName, masterAccountRealName_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetEntity, targetEntity_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetHandshakeResponseBodyHandshake() = default ;
    GetHandshakeResponseBodyHandshake(const GetHandshakeResponseBodyHandshake &) = default ;
    GetHandshakeResponseBodyHandshake(GetHandshakeResponseBodyHandshake &&) = default ;
    GetHandshakeResponseBodyHandshake(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHandshakeResponseBodyHandshake() = default ;
    GetHandshakeResponseBodyHandshake& operator=(const GetHandshakeResponseBodyHandshake &) = default ;
    GetHandshakeResponseBodyHandshake& operator=(GetHandshakeResponseBodyHandshake &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->expireTime_ == nullptr && return this->handshakeId_ == nullptr && return this->invitedAccountRealName_ == nullptr && return this->masterAccountId_ == nullptr && return this->masterAccountName_ == nullptr
        && return this->masterAccountRealName_ == nullptr && return this->modifyTime_ == nullptr && return this->note_ == nullptr && return this->resourceDirectoryId_ == nullptr && return this->status_ == nullptr
        && return this->targetEntity_ == nullptr && return this->targetType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetHandshakeResponseBodyHandshake& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetHandshakeResponseBodyHandshake& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // handshakeId Field Functions 
    bool hasHandshakeId() const { return this->handshakeId_ != nullptr;};
    void deleteHandshakeId() { this->handshakeId_ = nullptr;};
    inline string handshakeId() const { DARABONBA_PTR_GET_DEFAULT(handshakeId_, "") };
    inline GetHandshakeResponseBodyHandshake& setHandshakeId(string handshakeId) { DARABONBA_PTR_SET_VALUE(handshakeId_, handshakeId) };


    // invitedAccountRealName Field Functions 
    bool hasInvitedAccountRealName() const { return this->invitedAccountRealName_ != nullptr;};
    void deleteInvitedAccountRealName() { this->invitedAccountRealName_ = nullptr;};
    inline string invitedAccountRealName() const { DARABONBA_PTR_GET_DEFAULT(invitedAccountRealName_, "") };
    inline GetHandshakeResponseBodyHandshake& setInvitedAccountRealName(string invitedAccountRealName) { DARABONBA_PTR_SET_VALUE(invitedAccountRealName_, invitedAccountRealName) };


    // masterAccountId Field Functions 
    bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
    void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
    inline string masterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
    inline GetHandshakeResponseBodyHandshake& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


    // masterAccountName Field Functions 
    bool hasMasterAccountName() const { return this->masterAccountName_ != nullptr;};
    void deleteMasterAccountName() { this->masterAccountName_ = nullptr;};
    inline string masterAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountName_, "") };
    inline GetHandshakeResponseBodyHandshake& setMasterAccountName(string masterAccountName) { DARABONBA_PTR_SET_VALUE(masterAccountName_, masterAccountName) };


    // masterAccountRealName Field Functions 
    bool hasMasterAccountRealName() const { return this->masterAccountRealName_ != nullptr;};
    void deleteMasterAccountRealName() { this->masterAccountRealName_ = nullptr;};
    inline string masterAccountRealName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountRealName_, "") };
    inline GetHandshakeResponseBodyHandshake& setMasterAccountRealName(string masterAccountRealName) { DARABONBA_PTR_SET_VALUE(masterAccountRealName_, masterAccountRealName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetHandshakeResponseBodyHandshake& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline GetHandshakeResponseBodyHandshake& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline GetHandshakeResponseBodyHandshake& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetHandshakeResponseBodyHandshake& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetEntity Field Functions 
    bool hasTargetEntity() const { return this->targetEntity_ != nullptr;};
    void deleteTargetEntity() { this->targetEntity_ = nullptr;};
    inline string targetEntity() const { DARABONBA_PTR_GET_DEFAULT(targetEntity_, "") };
    inline GetHandshakeResponseBodyHandshake& setTargetEntity(string targetEntity) { DARABONBA_PTR_SET_VALUE(targetEntity_, targetEntity) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetHandshakeResponseBodyHandshake& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The time when the invitation was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the invitation expires. The time is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The ID of the invitation.
    std::shared_ptr<string> handshakeId_ = nullptr;
    // The real-name verification information of the invitee.
    // 
    // > This parameter is available only when an invitee calls this operation.
    std::shared_ptr<string> invitedAccountRealName_ = nullptr;
    // The ID of the management account of the resource directory.
    std::shared_ptr<string> masterAccountId_ = nullptr;
    // The name of the management account of the resource directory.
    std::shared_ptr<string> masterAccountName_ = nullptr;
    // The real-name verification information of the management account of the resource directory.
    // 
    // > This parameter is available only when an invitee calls this operation.
    std::shared_ptr<string> masterAccountRealName_ = nullptr;
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
