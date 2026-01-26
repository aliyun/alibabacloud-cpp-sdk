// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroups, accessGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroups, accessGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessGroupsResponseBody() = default ;
    DescribeAccessGroupsResponseBody(const DescribeAccessGroupsResponseBody &) = default ;
    DescribeAccessGroupsResponseBody(DescribeAccessGroupsResponseBody &&) = default ;
    DescribeAccessGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessGroupsResponseBody() = default ;
    DescribeAccessGroupsResponseBody& operator=(const DescribeAccessGroupsResponseBody &) = default ;
    DescribeAccessGroupsResponseBody& operator=(DescribeAccessGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
      };
      friend void from_json(const Darabonba::Json& j, AccessGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
      };
      AccessGroups() = default ;
      AccessGroups(const AccessGroups &) = default ;
      AccessGroups(AccessGroups &&) = default ;
      AccessGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessGroups() = default ;
      AccessGroups& operator=(const AccessGroups &) = default ;
      AccessGroups& operator=(AccessGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccessGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessGroup& obj) { 
          DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
          DARABONBA_PTR_TO_JSON(AccessGroupType, accessGroupType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_TO_JSON(MountTargetCount, mountTargetCount_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
        };
        friend void from_json(const Darabonba::Json& j, AccessGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
          DARABONBA_PTR_FROM_JSON(AccessGroupType, accessGroupType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_FROM_JSON(MountTargetCount, mountTargetCount_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
        };
        AccessGroup() = default ;
        AccessGroup(const AccessGroup &) = default ;
        AccessGroup(AccessGroup &&) = default ;
        AccessGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessGroup() = default ;
        AccessGroup& operator=(const AccessGroup &) = default ;
        AccessGroup& operator=(AccessGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && this->accessGroupType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->fileSystemType_ == nullptr && this->mountTargetCount_ == nullptr
        && this->regionId_ == nullptr && this->ruleCount_ == nullptr; };
        // accessGroupName Field Functions 
        bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
        void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
        inline string getAccessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
        inline AccessGroup& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


        // accessGroupType Field Functions 
        bool hasAccessGroupType() const { return this->accessGroupType_ != nullptr;};
        void deleteAccessGroupType() { this->accessGroupType_ = nullptr;};
        inline string getAccessGroupType() const { DARABONBA_PTR_GET_DEFAULT(accessGroupType_, "") };
        inline AccessGroup& setAccessGroupType(string accessGroupType) { DARABONBA_PTR_SET_VALUE(accessGroupType_, accessGroupType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AccessGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AccessGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fileSystemType Field Functions 
        bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
        void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
        inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
        inline AccessGroup& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


        // mountTargetCount Field Functions 
        bool hasMountTargetCount() const { return this->mountTargetCount_ != nullptr;};
        void deleteMountTargetCount() { this->mountTargetCount_ = nullptr;};
        inline int32_t getMountTargetCount() const { DARABONBA_PTR_GET_DEFAULT(mountTargetCount_, 0) };
        inline AccessGroup& setMountTargetCount(int32_t mountTargetCount) { DARABONBA_PTR_SET_VALUE(mountTargetCount_, mountTargetCount) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AccessGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // ruleCount Field Functions 
        bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
        void deleteRuleCount() { this->ruleCount_ = nullptr;};
        inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
        inline AccessGroup& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      protected:
        // The name of the permission group.
        shared_ptr<string> accessGroupName_ {};
        // The network type of the permission group. Valid value: **Vpc**.
        shared_ptr<string> accessGroupType_ {};
        // The time when the permission group was created.
        shared_ptr<string> createTime_ {};
        // The description of the permission group.
        shared_ptr<string> description_ {};
        // The type of the file system.
        // 
        // Valid values:
        // 
        // *   standard: General-purpose NAS
        // *   extreme: Extreme NAS
        // *   cpfs: CPFS
        shared_ptr<string> fileSystemType_ {};
        // The number of mount targets to which the permission group is attached.
        shared_ptr<int32_t> mountTargetCount_ {};
        // Region ID.
        shared_ptr<string> regionId_ {};
        // The total number of rules in the permission group.
        shared_ptr<int32_t> ruleCount_ {};
      };

      virtual bool empty() const override { return this->accessGroup_ == nullptr; };
      // accessGroup Field Functions 
      bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
      void deleteAccessGroup() { this->accessGroup_ = nullptr;};
      inline const vector<AccessGroups::AccessGroup> & getAccessGroup() const { DARABONBA_PTR_GET_CONST(accessGroup_, vector<AccessGroups::AccessGroup>) };
      inline vector<AccessGroups::AccessGroup> getAccessGroup() { DARABONBA_PTR_GET(accessGroup_, vector<AccessGroups::AccessGroup>) };
      inline AccessGroups& setAccessGroup(const vector<AccessGroups::AccessGroup> & accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };
      inline AccessGroups& setAccessGroup(vector<AccessGroups::AccessGroup> && accessGroup) { DARABONBA_PTR_SET_RVALUE(accessGroup_, accessGroup) };


    protected:
      shared_ptr<vector<AccessGroups::AccessGroup>> accessGroup_ {};
    };

    virtual bool empty() const override { return this->accessGroups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessGroups Field Functions 
    bool hasAccessGroups() const { return this->accessGroups_ != nullptr;};
    void deleteAccessGroups() { this->accessGroups_ = nullptr;};
    inline const DescribeAccessGroupsResponseBody::AccessGroups & getAccessGroups() const { DARABONBA_PTR_GET_CONST(accessGroups_, DescribeAccessGroupsResponseBody::AccessGroups) };
    inline DescribeAccessGroupsResponseBody::AccessGroups getAccessGroups() { DARABONBA_PTR_GET(accessGroups_, DescribeAccessGroupsResponseBody::AccessGroups) };
    inline DescribeAccessGroupsResponseBody& setAccessGroups(const DescribeAccessGroupsResponseBody::AccessGroups & accessGroups) { DARABONBA_PTR_SET_VALUE(accessGroups_, accessGroups) };
    inline DescribeAccessGroupsResponseBody& setAccessGroups(DescribeAccessGroupsResponseBody::AccessGroups && accessGroups) { DARABONBA_PTR_SET_RVALUE(accessGroups_, accessGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried permission groups.
    shared_ptr<DescribeAccessGroupsResponseBody::AccessGroups> accessGroups_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of permission groups returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of permission groups.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
