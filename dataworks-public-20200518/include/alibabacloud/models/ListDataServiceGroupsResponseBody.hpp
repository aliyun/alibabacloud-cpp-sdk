// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupPagingResult, groupPagingResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupPagingResult, groupPagingResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataServiceGroupsResponseBody() = default ;
    ListDataServiceGroupsResponseBody(const ListDataServiceGroupsResponseBody &) = default ;
    ListDataServiceGroupsResponseBody(ListDataServiceGroupsResponseBody &&) = default ;
    ListDataServiceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceGroupsResponseBody() = default ;
    ListDataServiceGroupsResponseBody& operator=(const ListDataServiceGroupsResponseBody &) = default ;
    ListDataServiceGroupsResponseBody& operator=(ListDataServiceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupPagingResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupPagingResult& obj) { 
        DARABONBA_PTR_TO_JSON(Groups, groups_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, GroupPagingResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Groups, groups_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      GroupPagingResult() = default ;
      GroupPagingResult(const GroupPagingResult &) = default ;
      GroupPagingResult(GroupPagingResult &&) = default ;
      GroupPagingResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupPagingResult() = default ;
      GroupPagingResult& operator=(const GroupPagingResult &) = default ;
      GroupPagingResult& operator=(GroupPagingResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Groups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Groups& obj) { 
          DARABONBA_PTR_TO_JSON(ApiGatewayGroupId, apiGatewayGroupId_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, Groups& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiGatewayGroupId, apiGatewayGroupId_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        Groups() = default ;
        Groups(const Groups &) = default ;
        Groups(Groups &&) = default ;
        Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Groups() = default ;
        Groups& operator=(const Groups &) = default ;
        Groups& operator=(Groups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiGatewayGroupId_ == nullptr
        && this->createdTime_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->modifiedTime_ == nullptr && this->projectId_ == nullptr && this->tenantId_ == nullptr; };
        // apiGatewayGroupId Field Functions 
        bool hasApiGatewayGroupId() const { return this->apiGatewayGroupId_ != nullptr;};
        void deleteApiGatewayGroupId() { this->apiGatewayGroupId_ = nullptr;};
        inline string getApiGatewayGroupId() const { DARABONBA_PTR_GET_DEFAULT(apiGatewayGroupId_, "") };
        inline Groups& setApiGatewayGroupId(string apiGatewayGroupId) { DARABONBA_PTR_SET_VALUE(apiGatewayGroupId_, apiGatewayGroupId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline Groups& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline Groups& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Groups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Groups& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Groups& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline Groups& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // The ID of the API Gateway group to which the workflow is bound.
        shared_ptr<string> apiGatewayGroupId_ {};
        // The time when the business process was created.
        shared_ptr<string> createdTime_ {};
        // The user identifier (UID) of the creator of the business process. The value of this parameter may be empty for creators of some existing business processes.
        shared_ptr<string> creatorId_ {};
        // The description of the business process.
        shared_ptr<string> description_ {};
        // The business process ID.
        shared_ptr<string> groupId_ {};
        // The name of the business process.
        shared_ptr<string> groupName_ {};
        // The time when the business process was modified.
        shared_ptr<string> modifiedTime_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->groups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<GroupPagingResult::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<GroupPagingResult::Groups>) };
      inline vector<GroupPagingResult::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<GroupPagingResult::Groups>) };
      inline GroupPagingResult& setGroups(const vector<GroupPagingResult::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline GroupPagingResult& setGroups(vector<GroupPagingResult::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline GroupPagingResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline GroupPagingResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline GroupPagingResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The business processes.
      shared_ptr<vector<GroupPagingResult::Groups>> groups_ {};
      // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Valid values: 1 to 100. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->groupPagingResult_ == nullptr
        && this->requestId_ == nullptr; };
    // groupPagingResult Field Functions 
    bool hasGroupPagingResult() const { return this->groupPagingResult_ != nullptr;};
    void deleteGroupPagingResult() { this->groupPagingResult_ = nullptr;};
    inline const ListDataServiceGroupsResponseBody::GroupPagingResult & getGroupPagingResult() const { DARABONBA_PTR_GET_CONST(groupPagingResult_, ListDataServiceGroupsResponseBody::GroupPagingResult) };
    inline ListDataServiceGroupsResponseBody::GroupPagingResult getGroupPagingResult() { DARABONBA_PTR_GET(groupPagingResult_, ListDataServiceGroupsResponseBody::GroupPagingResult) };
    inline ListDataServiceGroupsResponseBody& setGroupPagingResult(const ListDataServiceGroupsResponseBody::GroupPagingResult & groupPagingResult) { DARABONBA_PTR_SET_VALUE(groupPagingResult_, groupPagingResult) };
    inline ListDataServiceGroupsResponseBody& setGroupPagingResult(ListDataServiceGroupsResponseBody::GroupPagingResult && groupPagingResult) { DARABONBA_PTR_SET_RVALUE(groupPagingResult_, groupPagingResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The paging result for the business processes.
    shared_ptr<ListDataServiceGroupsResponseBody::GroupPagingResult> groupPagingResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
