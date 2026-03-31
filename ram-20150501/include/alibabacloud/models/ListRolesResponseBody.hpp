// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
    };
    ListRolesResponseBody() = default ;
    ListRolesResponseBody(const ListRolesResponseBody &) = default ;
    ListRolesResponseBody(ListRolesResponseBody &&) = default ;
    ListRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBody() = default ;
    ListRolesResponseBody& operator=(const ListRolesResponseBody &) = default ;
    ListRolesResponseBody& operator=(ListRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Roles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Roles& obj) { 
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Roles& obj) { 
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      Roles() = default ;
      Roles(const Roles &) = default ;
      Roles(Roles &&) = default ;
      Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Roles() = default ;
      Roles& operator=(const Roles &) = default ;
      Roles& operator=(Roles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Role : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Role& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(MaxSessionDuration, maxSessionDuration_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, Role& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(MaxSessionDuration, maxSessionDuration_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->arn_ == nullptr
        && this->createDate_ == nullptr && this->description_ == nullptr && this->maxSessionDuration_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr
        && this->tags_ == nullptr && this->updateDate_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline Role& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline Role& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Role& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // maxSessionDuration Field Functions 
        bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
        void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
        inline int64_t getMaxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
        inline Role& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline Role& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline Role& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Role::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Role::Tags) };
        inline Role::Tags getTags() { DARABONBA_PTR_GET(tags_, Role::Tags) };
        inline Role& setTags(const Role::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Role& setTags(Role::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline Role& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        shared_ptr<string> arn_ {};
        shared_ptr<string> createDate_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> maxSessionDuration_ {};
        shared_ptr<string> roleId_ {};
        shared_ptr<string> roleName_ {};
        shared_ptr<Role::Tags> tags_ {};
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->role_ == nullptr; };
      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline const vector<Roles::Role> & getRole() const { DARABONBA_PTR_GET_CONST(role_, vector<Roles::Role>) };
      inline vector<Roles::Role> getRole() { DARABONBA_PTR_GET(role_, vector<Roles::Role>) };
      inline Roles& setRole(const vector<Roles::Role> & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
      inline Roles& setRole(vector<Roles::Role> && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    protected:
      shared_ptr<vector<Roles::Role>> role_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->marker_ == nullptr && this->requestId_ == nullptr && this->roles_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListRolesResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListRolesResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const ListRolesResponseBody::Roles & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, ListRolesResponseBody::Roles) };
    inline ListRolesResponseBody::Roles getRoles() { DARABONBA_PTR_GET(roles_, ListRolesResponseBody::Roles) };
    inline ListRolesResponseBody& setRoles(const ListRolesResponseBody::Roles & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline ListRolesResponseBody& setRoles(ListRolesResponseBody::Roles && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // Indicates whether the response is truncated.
    shared_ptr<bool> isTruncated_ {};
    // The marker. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set this parameter to obtain the truncated part.````
    shared_ptr<string> marker_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListRolesResponseBody::Roles> roles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
