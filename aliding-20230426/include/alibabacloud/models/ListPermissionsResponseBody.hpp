// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(permissions, permissions_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListPermissionsResponseBody() = default ;
    ListPermissionsResponseBody(const ListPermissionsResponseBody &) = default ;
    ListPermissionsResponseBody(ListPermissionsResponseBody &&) = default ;
    ListPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsResponseBody() = default ;
    ListPermissionsResponseBody& operator=(const ListPermissionsResponseBody &) = default ;
    ListPermissionsResponseBody& operator=(ListPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Permissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
        DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
        DARABONBA_PTR_TO_JSON(Member, member_);
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
        DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
        DARABONBA_PTR_FROM_JSON(Member, member_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      Permissions() = default ;
      Permissions(const Permissions &) = default ;
      Permissions(Permissions &&) = default ;
      Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Permissions() = default ;
      Permissions& operator=(const Permissions &) = default ;
      Permissions& operator=(Permissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Role : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Role& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Role& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Role() = default ;
        Role(const Role &) = default ;
        Role(Role &&) = default ;
        Role(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Role() = default ;
        Role& operator=(const Role &) = default ;
        Role& operator=(Role &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Role& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Role& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class Member : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Member& obj) { 
          DARABONBA_PTR_TO_JSON(CorpId, corpId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Member& obj) { 
          DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Member() = default ;
        Member(const Member &) = default ;
        Member(Member &&) = default ;
        Member(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Member() = default ;
        Member& operator=(const Member &) = default ;
        Member& operator=(Member &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->corpId_ == nullptr
        && this->id_ == nullptr && this->type_ == nullptr; };
        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline Member& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Member& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Member& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> corpId_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && this->member_ == nullptr && this->role_ == nullptr; };
      // dentryUuid Field Functions 
      bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
      void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
      inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
      inline Permissions& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


      // member Field Functions 
      bool hasMember() const { return this->member_ != nullptr;};
      void deleteMember() { this->member_ = nullptr;};
      inline const Permissions::Member & getMember() const { DARABONBA_PTR_GET_CONST(member_, Permissions::Member) };
      inline Permissions::Member getMember() { DARABONBA_PTR_GET(member_, Permissions::Member) };
      inline Permissions& setMember(const Permissions::Member & member) { DARABONBA_PTR_SET_VALUE(member_, member) };
      inline Permissions& setMember(Permissions::Member && member) { DARABONBA_PTR_SET_RVALUE(member_, member) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline const Permissions::Role & getRole() const { DARABONBA_PTR_GET_CONST(role_, Permissions::Role) };
      inline Permissions::Role getRole() { DARABONBA_PTR_GET(role_, Permissions::Role) };
      inline Permissions& setRole(const Permissions::Role & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
      inline Permissions& setRole(Permissions::Role && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    protected:
      shared_ptr<string> dentryUuid_ {};
      shared_ptr<Permissions::Member> member_ {};
      shared_ptr<Permissions::Role> role_ {};
    };

    virtual bool empty() const override { return this->duration_ == nullptr
        && this->nextToken_ == nullptr && this->permissions_ == nullptr && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline ListPermissionsResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPermissionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<ListPermissionsResponseBody::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<ListPermissionsResponseBody::Permissions>) };
    inline vector<ListPermissionsResponseBody::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<ListPermissionsResponseBody::Permissions>) };
    inline ListPermissionsResponseBody& setPermissions(const vector<ListPermissionsResponseBody::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline ListPermissionsResponseBody& setPermissions(vector<ListPermissionsResponseBody::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListPermissionsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListPermissionsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<int64_t> duration_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListPermissionsResponseBody::Permissions>> permissions_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
