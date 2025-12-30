// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCloudDriveGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDriveGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudDriveGroups, cloudDriveGroups_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDriveGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudDriveGroups, cloudDriveGroups_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudDriveGroupsResponseBody() = default ;
    DescribeCloudDriveGroupsResponseBody(const DescribeCloudDriveGroupsResponseBody &) = default ;
    DescribeCloudDriveGroupsResponseBody(DescribeCloudDriveGroupsResponseBody &&) = default ;
    DescribeCloudDriveGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDriveGroupsResponseBody() = default ;
    DescribeCloudDriveGroupsResponseBody& operator=(const DescribeCloudDriveGroupsResponseBody &) = default ;
    DescribeCloudDriveGroupsResponseBody& operator=(DescribeCloudDriveGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudDriveGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudDriveGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AdminUserIds, adminUserIds_);
        DARABONBA_PTR_TO_JSON(AdminUserInfos, adminUserInfos_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DriveId, driveId_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(RecycleBinSize, recycleBinSize_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        DARABONBA_PTR_TO_JSON(UsedSize, usedSize_);
      };
      friend void from_json(const Darabonba::Json& j, CloudDriveGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AdminUserIds, adminUserIds_);
        DARABONBA_PTR_FROM_JSON(AdminUserInfos, adminUserInfos_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(RecycleBinSize, recycleBinSize_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        DARABONBA_PTR_FROM_JSON(UsedSize, usedSize_);
      };
      CloudDriveGroups() = default ;
      CloudDriveGroups(const CloudDriveGroups &) = default ;
      CloudDriveGroups(CloudDriveGroups &&) = default ;
      CloudDriveGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudDriveGroups() = default ;
      CloudDriveGroups& operator=(const CloudDriveGroups &) = default ;
      CloudDriveGroups& operator=(CloudDriveGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdminUserInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdminUserInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(RealNickName, realNickName_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, AdminUserInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(RealNickName, realNickName_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
        };
        AdminUserInfos() = default ;
        AdminUserInfos(const AdminUserInfos &) = default ;
        AdminUserInfos(AdminUserInfos &&) = default ;
        AdminUserInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdminUserInfos() = default ;
        AdminUserInfos& operator=(const AdminUserInfos &) = default ;
        AdminUserInfos& operator=(AdminUserInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->email_ == nullptr
        && this->endUserId_ == nullptr && this->jobNumber_ == nullptr && this->nickName_ == nullptr && this->phone_ == nullptr && this->realNickName_ == nullptr
        && this->remark_ == nullptr; };
        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline AdminUserInfos& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline AdminUserInfos& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // jobNumber Field Functions 
        bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
        void deleteJobNumber() { this->jobNumber_ = nullptr;};
        inline string getJobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
        inline AdminUserInfos& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline AdminUserInfos& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline AdminUserInfos& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // realNickName Field Functions 
        bool hasRealNickName() const { return this->realNickName_ != nullptr;};
        void deleteRealNickName() { this->realNickName_ = nullptr;};
        inline string getRealNickName() const { DARABONBA_PTR_GET_DEFAULT(realNickName_, "") };
        inline AdminUserInfos& setRealNickName(string realNickName) { DARABONBA_PTR_SET_VALUE(realNickName_, realNickName) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline AdminUserInfos& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        shared_ptr<string> email_ {};
        shared_ptr<string> endUserId_ {};
        shared_ptr<string> jobNumber_ {};
        shared_ptr<string> nickName_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<string> realNickName_ {};
        shared_ptr<string> remark_ {};
      };

      virtual bool empty() const override { return this->adminUserIds_ == nullptr
        && this->adminUserInfos_ == nullptr && this->createTime_ == nullptr && this->directoryId_ == nullptr && this->driveId_ == nullptr && this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->orgId_ == nullptr && this->recycleBinSize_ == nullptr && this->status_ == nullptr && this->totalSize_ == nullptr
        && this->usedSize_ == nullptr; };
      // adminUserIds Field Functions 
      bool hasAdminUserIds() const { return this->adminUserIds_ != nullptr;};
      void deleteAdminUserIds() { this->adminUserIds_ = nullptr;};
      inline string getAdminUserIds() const { DARABONBA_PTR_GET_DEFAULT(adminUserIds_, "") };
      inline CloudDriveGroups& setAdminUserIds(string adminUserIds) { DARABONBA_PTR_SET_VALUE(adminUserIds_, adminUserIds) };


      // adminUserInfos Field Functions 
      bool hasAdminUserInfos() const { return this->adminUserInfos_ != nullptr;};
      void deleteAdminUserInfos() { this->adminUserInfos_ = nullptr;};
      inline const vector<CloudDriveGroups::AdminUserInfos> & getAdminUserInfos() const { DARABONBA_PTR_GET_CONST(adminUserInfos_, vector<CloudDriveGroups::AdminUserInfos>) };
      inline vector<CloudDriveGroups::AdminUserInfos> getAdminUserInfos() { DARABONBA_PTR_GET(adminUserInfos_, vector<CloudDriveGroups::AdminUserInfos>) };
      inline CloudDriveGroups& setAdminUserInfos(const vector<CloudDriveGroups::AdminUserInfos> & adminUserInfos) { DARABONBA_PTR_SET_VALUE(adminUserInfos_, adminUserInfos) };
      inline CloudDriveGroups& setAdminUserInfos(vector<CloudDriveGroups::AdminUserInfos> && adminUserInfos) { DARABONBA_PTR_SET_RVALUE(adminUserInfos_, adminUserInfos) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CloudDriveGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline CloudDriveGroups& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // driveId Field Functions 
      bool hasDriveId() const { return this->driveId_ != nullptr;};
      void deleteDriveId() { this->driveId_ = nullptr;};
      inline string getDriveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
      inline CloudDriveGroups& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline CloudDriveGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline CloudDriveGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline CloudDriveGroups& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // recycleBinSize Field Functions 
      bool hasRecycleBinSize() const { return this->recycleBinSize_ != nullptr;};
      void deleteRecycleBinSize() { this->recycleBinSize_ = nullptr;};
      inline string getRecycleBinSize() const { DARABONBA_PTR_GET_DEFAULT(recycleBinSize_, "") };
      inline CloudDriveGroups& setRecycleBinSize(string recycleBinSize) { DARABONBA_PTR_SET_VALUE(recycleBinSize_, recycleBinSize) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CloudDriveGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline CloudDriveGroups& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      // usedSize Field Functions 
      bool hasUsedSize() const { return this->usedSize_ != nullptr;};
      void deleteUsedSize() { this->usedSize_ = nullptr;};
      inline string getUsedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, "") };
      inline CloudDriveGroups& setUsedSize(string usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


    protected:
      shared_ptr<string> adminUserIds_ {};
      shared_ptr<vector<CloudDriveGroups::AdminUserInfos>> adminUserInfos_ {};
      // The time when the team space was created.
      shared_ptr<string> createTime_ {};
      // The workspace ID.
      shared_ptr<string> directoryId_ {};
      // The team space ID.
      shared_ptr<string> driveId_ {};
      // The team ID.
      shared_ptr<string> groupId_ {};
      // The name of the team space.
      shared_ptr<string> groupName_ {};
      shared_ptr<string> orgId_ {};
      shared_ptr<string> recycleBinSize_ {};
      // The team space status. Valid values:
      // 
      // *   enabled
      // *   disabled
      // 
      // Default value: enabled.
      shared_ptr<string> status_ {};
      // The total capacity of the team space.
      shared_ptr<int64_t> totalSize_ {};
      // The capacity of the used space. Unit: bytes.
      shared_ptr<string> usedSize_ {};
    };

    virtual bool empty() const override { return this->cloudDriveGroups_ == nullptr
        && this->count_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // cloudDriveGroups Field Functions 
    bool hasCloudDriveGroups() const { return this->cloudDriveGroups_ != nullptr;};
    void deleteCloudDriveGroups() { this->cloudDriveGroups_ = nullptr;};
    inline const vector<DescribeCloudDriveGroupsResponseBody::CloudDriveGroups> & getCloudDriveGroups() const { DARABONBA_PTR_GET_CONST(cloudDriveGroups_, vector<DescribeCloudDriveGroupsResponseBody::CloudDriveGroups>) };
    inline vector<DescribeCloudDriveGroupsResponseBody::CloudDriveGroups> getCloudDriveGroups() { DARABONBA_PTR_GET(cloudDriveGroups_, vector<DescribeCloudDriveGroupsResponseBody::CloudDriveGroups>) };
    inline DescribeCloudDriveGroupsResponseBody& setCloudDriveGroups(const vector<DescribeCloudDriveGroupsResponseBody::CloudDriveGroups> & cloudDriveGroups) { DARABONBA_PTR_SET_VALUE(cloudDriveGroups_, cloudDriveGroups) };
    inline DescribeCloudDriveGroupsResponseBody& setCloudDriveGroups(vector<DescribeCloudDriveGroupsResponseBody::CloudDriveGroups> && cloudDriveGroups) { DARABONBA_PTR_SET_RVALUE(cloudDriveGroups_, cloudDriveGroups) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeCloudDriveGroupsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudDriveGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDriveGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCloudDriveGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of team spaces.
    shared_ptr<vector<DescribeCloudDriveGroupsResponseBody::CloudDriveGroups>> cloudDriveGroups_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> count_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
