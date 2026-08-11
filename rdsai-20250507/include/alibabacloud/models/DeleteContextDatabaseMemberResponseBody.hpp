// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTEXTDATABASEMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTEXTDATABASEMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DeleteContextDatabaseMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContextDatabaseMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContextDatabaseMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DeleteContextDatabaseMemberResponseBody() = default ;
    DeleteContextDatabaseMemberResponseBody(const DeleteContextDatabaseMemberResponseBody &) = default ;
    DeleteContextDatabaseMemberResponseBody(DeleteContextDatabaseMemberResponseBody &&) = default ;
    DeleteContextDatabaseMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContextDatabaseMemberResponseBody() = default ;
    DeleteContextDatabaseMemberResponseBody& operator=(const DeleteContextDatabaseMemberResponseBody &) = default ;
    DeleteContextDatabaseMemberResponseBody& operator=(DeleteContextDatabaseMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Keys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Keys& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(KeyDisplaySuffix, keyDisplaySuffix_);
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        DARABONBA_PTR_TO_JSON(KeyPrefix, keyPrefix_);
        DARABONBA_PTR_TO_JSON(LastUsedAt, lastUsedAt_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RevokedAt, revokedAt_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Keys& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(KeyDisplaySuffix, keyDisplaySuffix_);
        DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
        DARABONBA_PTR_FROM_JSON(KeyPrefix, keyPrefix_);
        DARABONBA_PTR_FROM_JSON(LastUsedAt, lastUsedAt_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RevokedAt, revokedAt_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Keys() = default ;
      Keys(const Keys &) = default ;
      Keys(Keys &&) = default ;
      Keys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Keys() = default ;
      Keys& operator=(const Keys &) = default ;
      Keys& operator=(Keys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->expiresAt_ == nullptr && this->keyDisplaySuffix_ == nullptr && this->keyId_ == nullptr && this->keyPrefix_ == nullptr
        && this->lastUsedAt_ == nullptr && this->name_ == nullptr && this->revokedAt_ == nullptr && this->status_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Keys& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Keys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
      inline Keys& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // keyDisplaySuffix Field Functions 
      bool hasKeyDisplaySuffix() const { return this->keyDisplaySuffix_ != nullptr;};
      void deleteKeyDisplaySuffix() { this->keyDisplaySuffix_ = nullptr;};
      inline string getKeyDisplaySuffix() const { DARABONBA_PTR_GET_DEFAULT(keyDisplaySuffix_, "") };
      inline Keys& setKeyDisplaySuffix(string keyDisplaySuffix) { DARABONBA_PTR_SET_VALUE(keyDisplaySuffix_, keyDisplaySuffix) };


      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline int64_t getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, 0L) };
      inline Keys& setKeyId(int64_t keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      // keyPrefix Field Functions 
      bool hasKeyPrefix() const { return this->keyPrefix_ != nullptr;};
      void deleteKeyPrefix() { this->keyPrefix_ = nullptr;};
      inline string getKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyPrefix_, "") };
      inline Keys& setKeyPrefix(string keyPrefix) { DARABONBA_PTR_SET_VALUE(keyPrefix_, keyPrefix) };


      // lastUsedAt Field Functions 
      bool hasLastUsedAt() const { return this->lastUsedAt_ != nullptr;};
      void deleteLastUsedAt() { this->lastUsedAt_ = nullptr;};
      inline string getLastUsedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUsedAt_, "") };
      inline Keys& setLastUsedAt(string lastUsedAt) { DARABONBA_PTR_SET_VALUE(lastUsedAt_, lastUsedAt) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Keys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // revokedAt Field Functions 
      bool hasRevokedAt() const { return this->revokedAt_ != nullptr;};
      void deleteRevokedAt() { this->revokedAt_ = nullptr;};
      inline string getRevokedAt() const { DARABONBA_PTR_GET_DEFAULT(revokedAt_, "") };
      inline Keys& setRevokedAt(string revokedAt) { DARABONBA_PTR_SET_VALUE(revokedAt_, revokedAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Keys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> expiresAt_ {};
      shared_ptr<string> keyDisplaySuffix_ {};
      shared_ptr<int64_t> keyId_ {};
      shared_ptr<string> keyPrefix_ {};
      shared_ptr<string> lastUsedAt_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> revokedAt_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->keys_ == nullptr && this->memberId_ == nullptr && this->memberName_ == nullptr && this->requestId_ == nullptr && this->role_ == nullptr
        && this->status_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline DeleteContextDatabaseMemberResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<DeleteContextDatabaseMemberResponseBody::Keys> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<DeleteContextDatabaseMemberResponseBody::Keys>) };
    inline vector<DeleteContextDatabaseMemberResponseBody::Keys> getKeys() { DARABONBA_PTR_GET(keys_, vector<DeleteContextDatabaseMemberResponseBody::Keys>) };
    inline DeleteContextDatabaseMemberResponseBody& setKeys(const vector<DeleteContextDatabaseMemberResponseBody::Keys> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline DeleteContextDatabaseMemberResponseBody& setKeys(vector<DeleteContextDatabaseMemberResponseBody::Keys> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline DeleteContextDatabaseMemberResponseBody& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline DeleteContextDatabaseMemberResponseBody& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteContextDatabaseMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DeleteContextDatabaseMemberResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeleteContextDatabaseMemberResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> createdAt_ {};
    shared_ptr<vector<DeleteContextDatabaseMemberResponseBody::Keys>> keys_ {};
    shared_ptr<string> memberId_ {};
    shared_ptr<string> memberName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
