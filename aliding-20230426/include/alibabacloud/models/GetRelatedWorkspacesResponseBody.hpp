// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESRESPONSEBODY_HPP_
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
  class GetRelatedWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRelatedWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
      DARABONBA_PTR_TO_JSON(workspaces, workspaces_);
    };
    friend void from_json(const Darabonba::Json& j, GetRelatedWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
      DARABONBA_PTR_FROM_JSON(workspaces, workspaces_);
    };
    GetRelatedWorkspacesResponseBody() = default ;
    GetRelatedWorkspacesResponseBody(const GetRelatedWorkspacesResponseBody &) = default ;
    GetRelatedWorkspacesResponseBody(GetRelatedWorkspacesResponseBody &&) = default ;
    GetRelatedWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRelatedWorkspacesResponseBody() = default ;
    GetRelatedWorkspacesResponseBody& operator=(const GetRelatedWorkspacesResponseBody &) = default ;
    GetRelatedWorkspacesResponseBody& operator=(GetRelatedWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Workspaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workspaces& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RecentList, recentList_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Workspaces& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RecentList, recentList_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
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
      class RecentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecentList& obj) { 
          DARABONBA_PTR_TO_JSON(LastEditTime, lastEditTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, RecentList& obj) { 
          DARABONBA_PTR_FROM_JSON(LastEditTime, lastEditTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        RecentList() = default ;
        RecentList(const RecentList &) = default ;
        RecentList(RecentList &&) = default ;
        RecentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecentList() = default ;
        RecentList& operator=(const RecentList &) = default ;
        RecentList& operator=(RecentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->lastEditTime_ == nullptr
        && this->name_ == nullptr && this->nodeId_ == nullptr && this->url_ == nullptr; };
        // lastEditTime Field Functions 
        bool hasLastEditTime() const { return this->lastEditTime_ != nullptr;};
        void deleteLastEditTime() { this->lastEditTime_ = nullptr;};
        inline int64_t getLastEditTime() const { DARABONBA_PTR_GET_DEFAULT(lastEditTime_, 0L) };
        inline RecentList& setLastEditTime(int64_t lastEditTime) { DARABONBA_PTR_SET_VALUE(lastEditTime_, lastEditTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RecentList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline RecentList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline RecentList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<int64_t> lastEditTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deleted_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->recentList_ == nullptr && this->role_ == nullptr
        && this->url_ == nullptr && this->workspaceId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Workspaces& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
      inline Workspaces& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Workspaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Workspaces& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // recentList Field Functions 
      bool hasRecentList() const { return this->recentList_ != nullptr;};
      void deleteRecentList() { this->recentList_ = nullptr;};
      inline const vector<Workspaces::RecentList> & getRecentList() const { DARABONBA_PTR_GET_CONST(recentList_, vector<Workspaces::RecentList>) };
      inline vector<Workspaces::RecentList> getRecentList() { DARABONBA_PTR_GET(recentList_, vector<Workspaces::RecentList>) };
      inline Workspaces& setRecentList(const vector<Workspaces::RecentList> & recentList) { DARABONBA_PTR_SET_VALUE(recentList_, recentList) };
      inline Workspaces& setRecentList(vector<Workspaces::RecentList> && recentList) { DARABONBA_PTR_SET_RVALUE(recentList_, recentList) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Workspaces& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


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
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<bool> deleted_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<vector<Workspaces::RecentList>> recentList_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> url_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr && this->workspaces_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRelatedWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetRelatedWorkspacesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetRelatedWorkspacesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


    // workspaces Field Functions 
    bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
    void deleteWorkspaces() { this->workspaces_ = nullptr;};
    inline const vector<GetRelatedWorkspacesResponseBody::Workspaces> & getWorkspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<GetRelatedWorkspacesResponseBody::Workspaces>) };
    inline vector<GetRelatedWorkspacesResponseBody::Workspaces> getWorkspaces() { DARABONBA_PTR_GET(workspaces_, vector<GetRelatedWorkspacesResponseBody::Workspaces>) };
    inline GetRelatedWorkspacesResponseBody& setWorkspaces(const vector<GetRelatedWorkspacesResponseBody::Workspaces> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
    inline GetRelatedWorkspacesResponseBody& setWorkspaces(vector<GetRelatedWorkspacesResponseBody::Workspaces> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
    shared_ptr<vector<GetRelatedWorkspacesResponseBody::Workspaces>> workspaces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
