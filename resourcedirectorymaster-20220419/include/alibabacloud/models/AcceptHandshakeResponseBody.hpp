// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTHANDSHAKERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTHANDSHAKERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class AcceptHandshakeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptHandshakeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Handshake, handshake_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptHandshakeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Handshake, handshake_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AcceptHandshakeResponseBody() = default ;
    AcceptHandshakeResponseBody(const AcceptHandshakeResponseBody &) = default ;
    AcceptHandshakeResponseBody(AcceptHandshakeResponseBody &&) = default ;
    AcceptHandshakeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptHandshakeResponseBody() = default ;
    AcceptHandshakeResponseBody& operator=(const AcceptHandshakeResponseBody &) = default ;
    AcceptHandshakeResponseBody& operator=(AcceptHandshakeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Handshake : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Handshake& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Handshake& obj) { 
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
      Handshake() = default ;
      Handshake(const Handshake &) = default ;
      Handshake(Handshake &&) = default ;
      Handshake(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Handshake() = default ;
      Handshake& operator=(const Handshake &) = default ;
      Handshake& operator=(Handshake &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->expireTime_ == nullptr && this->handshakeId_ == nullptr && this->masterAccountId_ == nullptr && this->masterAccountName_ == nullptr && this->modifyTime_ == nullptr
        && this->note_ == nullptr && this->resourceDirectoryId_ == nullptr && this->status_ == nullptr && this->targetEntity_ == nullptr && this->targetType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Handshake& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Handshake& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // handshakeId Field Functions 
      bool hasHandshakeId() const { return this->handshakeId_ != nullptr;};
      void deleteHandshakeId() { this->handshakeId_ = nullptr;};
      inline string getHandshakeId() const { DARABONBA_PTR_GET_DEFAULT(handshakeId_, "") };
      inline Handshake& setHandshakeId(string handshakeId) { DARABONBA_PTR_SET_VALUE(handshakeId_, handshakeId) };


      // masterAccountId Field Functions 
      bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
      void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
      inline string getMasterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
      inline Handshake& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


      // masterAccountName Field Functions 
      bool hasMasterAccountName() const { return this->masterAccountName_ != nullptr;};
      void deleteMasterAccountName() { this->masterAccountName_ = nullptr;};
      inline string getMasterAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountName_, "") };
      inline Handshake& setMasterAccountName(string masterAccountName) { DARABONBA_PTR_SET_VALUE(masterAccountName_, masterAccountName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Handshake& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline Handshake& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      // resourceDirectoryId Field Functions 
      bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
      void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
      inline string getResourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
      inline Handshake& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Handshake& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetEntity Field Functions 
      bool hasTargetEntity() const { return this->targetEntity_ != nullptr;};
      void deleteTargetEntity() { this->targetEntity_ = nullptr;};
      inline string getTargetEntity() const { DARABONBA_PTR_GET_DEFAULT(targetEntity_, "") };
      inline Handshake& setTargetEntity(string targetEntity) { DARABONBA_PTR_SET_VALUE(targetEntity_, targetEntity) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Handshake& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The time when the invitation was created. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the invitation expires. The time is displayed in UTC.
      shared_ptr<string> expireTime_ {};
      // The ID of the invitation.
      shared_ptr<string> handshakeId_ {};
      // The ID of the management account of the resource directory.
      shared_ptr<string> masterAccountId_ {};
      // The name of the management account of the resource directory.
      shared_ptr<string> masterAccountName_ {};
      // The time when the invitation was modified. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
      // The description of the invitation.
      shared_ptr<string> note_ {};
      // The ID of the resource directory.
      shared_ptr<string> resourceDirectoryId_ {};
      // The status of the invitation. Valid values:
      // 
      // *   Pending: The invitation is waiting for confirmation.
      // *   Accepted: The invitation is accepted.
      // *   Cancelled: The invitation is canceled.
      // *   Declined: The invitation is rejected.
      // *   Expired: The invitation expires.
      shared_ptr<string> status_ {};
      // The ID or logon email address of the invited Alibaba Cloud account.
      shared_ptr<string> targetEntity_ {};
      // The type of the invited Alibaba Cloud account. Valid values:
      // 
      // *   Account: indicates the ID of the Alibaba Cloud account.
      // *   Email: indicates the logon email address of the Alibaba Cloud account.
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->handshake_ == nullptr
        && this->requestId_ == nullptr; };
    // handshake Field Functions 
    bool hasHandshake() const { return this->handshake_ != nullptr;};
    void deleteHandshake() { this->handshake_ = nullptr;};
    inline const AcceptHandshakeResponseBody::Handshake & getHandshake() const { DARABONBA_PTR_GET_CONST(handshake_, AcceptHandshakeResponseBody::Handshake) };
    inline AcceptHandshakeResponseBody::Handshake getHandshake() { DARABONBA_PTR_GET(handshake_, AcceptHandshakeResponseBody::Handshake) };
    inline AcceptHandshakeResponseBody& setHandshake(const AcceptHandshakeResponseBody::Handshake & handshake) { DARABONBA_PTR_SET_VALUE(handshake_, handshake) };
    inline AcceptHandshakeResponseBody& setHandshake(AcceptHandshakeResponseBody::Handshake && handshake) { DARABONBA_PTR_SET_RVALUE(handshake_, handshake) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AcceptHandshakeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the invitation.
    shared_ptr<AcceptHandshakeResponseBody::Handshake> handshake_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
