// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
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
  class ListWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspaces, workspaces_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspaces, workspaces_);
    };
    ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody(ListWorkspacesResponseBody &&) = default ;
    ListWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody& operator=(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody& operator=(ListWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Workspaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workspaces& obj) { 
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(Cover, cover_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PermissionRole, permissionRole_);
        DARABONBA_PTR_TO_JSON(RootNodeId, rootNodeId_);
        DARABONBA_PTR_TO_JSON(TeamId, teamId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Workspaces& obj) { 
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(Cover, cover_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PermissionRole, permissionRole_);
        DARABONBA_PTR_FROM_JSON(RootNodeId, rootNodeId_);
        DARABONBA_PTR_FROM_JSON(TeamId, teamId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Workspaces() = default ;
      Workspaces(const Workspaces &) = default ;
      Workspaces(Workspaces &&) = default ;
      Workspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Workspaces() = default ;
      Workspaces& operator=(const Workspaces &) = default ;
      Workspaces& operator=(Workspaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Icon : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Icon& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Icon& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Icon() = default ;
        Icon(const Icon &) = default ;
        Icon(Icon &&) = default ;
        Icon(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Icon() = default ;
        Icon& operator=(const Icon &) = default ;
        Icon& operator=(Icon &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Icon& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Icon& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->corpId_ == nullptr
        && this->cover_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->icon_ == nullptr
        && this->modifiedTime_ == nullptr && this->modifierId_ == nullptr && this->name_ == nullptr && this->permissionRole_ == nullptr && this->rootNodeId_ == nullptr
        && this->teamId_ == nullptr && this->type_ == nullptr && this->url_ == nullptr && this->workspaceId_ == nullptr; };
      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Workspaces& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // cover Field Functions 
      bool hasCover() const { return this->cover_ != nullptr;};
      void deleteCover() { this->cover_ = nullptr;};
      inline string getCover() const { DARABONBA_PTR_GET_DEFAULT(cover_, "") };
      inline Workspaces& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Workspaces& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Workspaces& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Workspaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline const Workspaces::Icon & getIcon() const { DARABONBA_PTR_GET_CONST(icon_, Workspaces::Icon) };
      inline Workspaces::Icon getIcon() { DARABONBA_PTR_GET(icon_, Workspaces::Icon) };
      inline Workspaces& setIcon(const Workspaces::Icon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
      inline Workspaces& setIcon(Workspaces::Icon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Workspaces& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // modifierId Field Functions 
      bool hasModifierId() const { return this->modifierId_ != nullptr;};
      void deleteModifierId() { this->modifierId_ = nullptr;};
      inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
      inline Workspaces& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Workspaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // permissionRole Field Functions 
      bool hasPermissionRole() const { return this->permissionRole_ != nullptr;};
      void deletePermissionRole() { this->permissionRole_ = nullptr;};
      inline string getPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(permissionRole_, "") };
      inline Workspaces& setPermissionRole(string permissionRole) { DARABONBA_PTR_SET_VALUE(permissionRole_, permissionRole) };


      // rootNodeId Field Functions 
      bool hasRootNodeId() const { return this->rootNodeId_ != nullptr;};
      void deleteRootNodeId() { this->rootNodeId_ = nullptr;};
      inline string getRootNodeId() const { DARABONBA_PTR_GET_DEFAULT(rootNodeId_, "") };
      inline Workspaces& setRootNodeId(string rootNodeId) { DARABONBA_PTR_SET_VALUE(rootNodeId_, rootNodeId) };


      // teamId Field Functions 
      bool hasTeamId() const { return this->teamId_ != nullptr;};
      void deleteTeamId() { this->teamId_ = nullptr;};
      inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
      inline Workspaces& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Workspaces& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Workspaces& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Workspaces& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> corpId_ {};
      shared_ptr<string> cover_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Workspaces::Icon> icon_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> modifierId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> permissionRole_ {};
      shared_ptr<string> rootNodeId_ {};
      shared_ptr<string> teamId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> url_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->workspaces_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkspacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaces Field Functions 
    bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
    void deleteWorkspaces() { this->workspaces_ = nullptr;};
    inline const vector<ListWorkspacesResponseBody::Workspaces> & getWorkspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<ListWorkspacesResponseBody::Workspaces>) };
    inline vector<ListWorkspacesResponseBody::Workspaces> getWorkspaces() { DARABONBA_PTR_GET(workspaces_, vector<ListWorkspacesResponseBody::Workspaces>) };
    inline ListWorkspacesResponseBody& setWorkspaces(const vector<ListWorkspacesResponseBody::Workspaces> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
    inline ListWorkspacesResponseBody& setWorkspaces(vector<ListWorkspacesResponseBody::Workspaces> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


  protected:
    shared_ptr<string> nextToken_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListWorkspacesResponseBody::Workspaces>> workspaces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
