// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupSummarys, groupSummarys_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupSummarys, groupSummarys_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePluginGroupsResponseBody() = default ;
    DescribePluginGroupsResponseBody(const DescribePluginGroupsResponseBody &) = default ;
    DescribePluginGroupsResponseBody(DescribePluginGroupsResponseBody &&) = default ;
    DescribePluginGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginGroupsResponseBody() = default ;
    DescribePluginGroupsResponseBody& operator=(const DescribePluginGroupsResponseBody &) = default ;
    DescribePluginGroupsResponseBody& operator=(DescribePluginGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupSummarys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupSummarys& obj) { 
        DARABONBA_PTR_TO_JSON(GroupPluginSummary, groupPluginSummary_);
      };
      friend void from_json(const Darabonba::Json& j, GroupSummarys& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupPluginSummary, groupPluginSummary_);
      };
      GroupSummarys() = default ;
      GroupSummarys(const GroupSummarys &) = default ;
      GroupSummarys(GroupSummarys &&) = default ;
      GroupSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupSummarys() = default ;
      GroupSummarys& operator=(const GroupSummarys &) = default ;
      GroupSummarys& operator=(GroupSummarys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GroupPluginSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupPluginSummary& obj) { 
          DARABONBA_PTR_TO_JSON(BasePath, basePath_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
        };
        friend void from_json(const Darabonba::Json& j, GroupPluginSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        };
        GroupPluginSummary() = default ;
        GroupPluginSummary(const GroupPluginSummary &) = default ;
        GroupPluginSummary(GroupPluginSummary &&) = default ;
        GroupPluginSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupPluginSummary() = default ;
        GroupPluginSummary& operator=(const GroupPluginSummary &) = default ;
        GroupPluginSummary& operator=(GroupPluginSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->basePath_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->regionId_ == nullptr && this->stageAlias_ == nullptr
        && this->stageName_ == nullptr; };
        // basePath Field Functions 
        bool hasBasePath() const { return this->basePath_ != nullptr;};
        void deleteBasePath() { this->basePath_ = nullptr;};
        inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
        inline GroupPluginSummary& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline GroupPluginSummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline GroupPluginSummary& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline GroupPluginSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline GroupPluginSummary& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stageAlias Field Functions 
        bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
        void deleteStageAlias() { this->stageAlias_ = nullptr;};
        inline string getStageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
        inline GroupPluginSummary& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline GroupPluginSummary& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      protected:
        // API root path
        shared_ptr<string> basePath_ {};
        // Description
        shared_ptr<string> description_ {};
        // API group ID
        shared_ptr<string> groupId_ {};
        // API group name
        shared_ptr<string> groupName_ {};
        // Region ID where the API group is located
        shared_ptr<string> regionId_ {};
        // Stage name Alias
        shared_ptr<string> stageAlias_ {};
        // Environment name, possible values:
        // 
        // - **RELEASE**: Production
        // - **PRE**: Pre-release
        // - **TEST**: Testing
        shared_ptr<string> stageName_ {};
      };

      virtual bool empty() const override { return this->groupPluginSummary_ == nullptr; };
      // groupPluginSummary Field Functions 
      bool hasGroupPluginSummary() const { return this->groupPluginSummary_ != nullptr;};
      void deleteGroupPluginSummary() { this->groupPluginSummary_ = nullptr;};
      inline const vector<GroupSummarys::GroupPluginSummary> & getGroupPluginSummary() const { DARABONBA_PTR_GET_CONST(groupPluginSummary_, vector<GroupSummarys::GroupPluginSummary>) };
      inline vector<GroupSummarys::GroupPluginSummary> getGroupPluginSummary() { DARABONBA_PTR_GET(groupPluginSummary_, vector<GroupSummarys::GroupPluginSummary>) };
      inline GroupSummarys& setGroupPluginSummary(const vector<GroupSummarys::GroupPluginSummary> & groupPluginSummary) { DARABONBA_PTR_SET_VALUE(groupPluginSummary_, groupPluginSummary) };
      inline GroupSummarys& setGroupPluginSummary(vector<GroupSummarys::GroupPluginSummary> && groupPluginSummary) { DARABONBA_PTR_SET_RVALUE(groupPluginSummary_, groupPluginSummary) };


    protected:
      shared_ptr<vector<GroupSummarys::GroupPluginSummary>> groupPluginSummary_ {};
    };

    virtual bool empty() const override { return this->groupSummarys_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groupSummarys Field Functions 
    bool hasGroupSummarys() const { return this->groupSummarys_ != nullptr;};
    void deleteGroupSummarys() { this->groupSummarys_ = nullptr;};
    inline const DescribePluginGroupsResponseBody::GroupSummarys & getGroupSummarys() const { DARABONBA_PTR_GET_CONST(groupSummarys_, DescribePluginGroupsResponseBody::GroupSummarys) };
    inline DescribePluginGroupsResponseBody::GroupSummarys getGroupSummarys() { DARABONBA_PTR_GET(groupSummarys_, DescribePluginGroupsResponseBody::GroupSummarys) };
    inline DescribePluginGroupsResponseBody& setGroupSummarys(const DescribePluginGroupsResponseBody::GroupSummarys & groupSummarys) { DARABONBA_PTR_SET_VALUE(groupSummarys_, groupSummarys) };
    inline DescribePluginGroupsResponseBody& setGroupSummarys(DescribePluginGroupsResponseBody::GroupSummarys && groupSummarys) { DARABONBA_PTR_SET_RVALUE(groupSummarys_, groupSummarys) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePluginGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePluginGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePluginGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Collection of group information
    shared_ptr<DescribePluginGroupsResponseBody::GroupSummarys> groupSummarys_ {};
    // Pagination parameter: current page number
    shared_ptr<int32_t> pageNumber_ {};
    // Pagination parameter: number of items per page, default value 10
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total number of returned results
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
