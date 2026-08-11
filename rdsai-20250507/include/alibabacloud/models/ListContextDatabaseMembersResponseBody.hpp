// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASEMEMBERSRESPONSEBODY_HPP_
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
  class ListContextDatabaseMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListContextDatabaseMembersResponseBody() = default ;
    ListContextDatabaseMembersResponseBody(const ListContextDatabaseMembersResponseBody &) = default ;
    ListContextDatabaseMembersResponseBody(ListContextDatabaseMembersResponseBody &&) = default ;
    ListContextDatabaseMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseMembersResponseBody() = default ;
    ListContextDatabaseMembersResponseBody& operator=(const ListContextDatabaseMembersResponseBody &) = default ;
    ListContextDatabaseMembersResponseBody& operator=(ListContextDatabaseMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Keys, keys_);
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(MemberName, memberName_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Keys, keys_);
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
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
        && this->keys_ == nullptr && this->memberId_ == nullptr && this->memberName_ == nullptr && this->role_ == nullptr && this->status_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Members& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // keys Field Functions 
      bool hasKeys() const { return this->keys_ != nullptr;};
      void deleteKeys() { this->keys_ = nullptr;};
      inline const vector<Members::Keys> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<Members::Keys>) };
      inline vector<Members::Keys> getKeys() { DARABONBA_PTR_GET(keys_, vector<Members::Keys>) };
      inline Members& setKeys(const vector<Members::Keys> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
      inline Members& setKeys(vector<Members::Keys> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline Members& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // memberName Field Functions 
      bool hasMemberName() const { return this->memberName_ != nullptr;};
      void deleteMemberName() { this->memberName_ = nullptr;};
      inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
      inline Members& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Members& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Members& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> createdAt_ {};
      shared_ptr<vector<Members::Keys>> keys_ {};
      shared_ptr<string> memberId_ {};
      shared_ptr<string> memberName_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->members_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListContextDatabaseMembersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<ListContextDatabaseMembersResponseBody::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<ListContextDatabaseMembersResponseBody::Members>) };
    inline vector<ListContextDatabaseMembersResponseBody::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<ListContextDatabaseMembersResponseBody::Members>) };
    inline ListContextDatabaseMembersResponseBody& setMembers(const vector<ListContextDatabaseMembersResponseBody::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline ListContextDatabaseMembersResponseBody& setMembers(vector<ListContextDatabaseMembersResponseBody::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListContextDatabaseMembersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextDatabaseMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListContextDatabaseMembersResponseBody::Members>> members_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
