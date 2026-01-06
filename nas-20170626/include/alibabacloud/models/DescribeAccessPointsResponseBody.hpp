// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODY_HPP_
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
  class DescribeAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPoints, accessPoints_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPoints, accessPoints_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessPointsResponseBody() = default ;
    DescribeAccessPointsResponseBody(const DescribeAccessPointsResponseBody &) = default ;
    DescribeAccessPointsResponseBody(DescribeAccessPointsResponseBody &&) = default ;
    DescribeAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBody() = default ;
    DescribeAccessPointsResponseBody& operator=(const DescribeAccessPointsResponseBody &) = default ;
    DescribeAccessPointsResponseBody& operator=(DescribeAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessPoints& obj) { 
        DARABONBA_PTR_TO_JSON(ARN, ARN_);
        DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
        DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_TO_JSON(AccessPointName, accessPointName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(EnabledRam, enabledRam_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(PosixUser, posixUser_);
        DARABONBA_PTR_TO_JSON(RootPath, rootPath_);
        DARABONBA_PTR_TO_JSON(RootPathPermission, rootPathPermission_);
        DARABONBA_PTR_TO_JSON(RootPathStatus, rootPathStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, AccessPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(ARN, ARN_);
        DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
        DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_FROM_JSON(AccessPointName, accessPointName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(EnabledRam, enabledRam_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(PosixUser, posixUser_);
        DARABONBA_PTR_FROM_JSON(RootPath, rootPath_);
        DARABONBA_PTR_FROM_JSON(RootPathPermission, rootPathPermission_);
        DARABONBA_PTR_FROM_JSON(RootPathStatus, rootPathStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      AccessPoints() = default ;
      AccessPoints(const AccessPoints &) = default ;
      AccessPoints(AccessPoints &&) = default ;
      AccessPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessPoints() = default ;
      AccessPoints& operator=(const AccessPoints &) = default ;
      AccessPoints& operator=(AccessPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class RootPathPermission : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RootPathPermission& obj) { 
          DARABONBA_PTR_TO_JSON(OwnerGroupId, ownerGroupId_);
          DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(Permission, permission_);
        };
        friend void from_json(const Darabonba::Json& j, RootPathPermission& obj) { 
          DARABONBA_PTR_FROM_JSON(OwnerGroupId, ownerGroupId_);
          DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(Permission, permission_);
        };
        RootPathPermission() = default ;
        RootPathPermission(const RootPathPermission &) = default ;
        RootPathPermission(RootPathPermission &&) = default ;
        RootPathPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RootPathPermission() = default ;
        RootPathPermission& operator=(const RootPathPermission &) = default ;
        RootPathPermission& operator=(RootPathPermission &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ownerGroupId_ == nullptr
        && this->ownerUserId_ == nullptr && this->permission_ == nullptr; };
        // ownerGroupId Field Functions 
        bool hasOwnerGroupId() const { return this->ownerGroupId_ != nullptr;};
        void deleteOwnerGroupId() { this->ownerGroupId_ = nullptr;};
        inline int64_t getOwnerGroupId() const { DARABONBA_PTR_GET_DEFAULT(ownerGroupId_, 0L) };
        inline RootPathPermission& setOwnerGroupId(int64_t ownerGroupId) { DARABONBA_PTR_SET_VALUE(ownerGroupId_, ownerGroupId) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline int64_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0L) };
        inline RootPathPermission& setOwnerUserId(int64_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


        // permission Field Functions 
        bool hasPermission() const { return this->permission_ != nullptr;};
        void deletePermission() { this->permission_ = nullptr;};
        inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
        inline RootPathPermission& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      protected:
        // The ID of the owner group.
        shared_ptr<int64_t> ownerGroupId_ {};
        // The owner ID.
        shared_ptr<int64_t> ownerUserId_ {};
        // The POSIX permission.
        shared_ptr<string> permission_ {};
      };

      class PosixUser : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PosixUser& obj) { 
          DARABONBA_PTR_TO_JSON(PosixGroupId, posixGroupId_);
          DARABONBA_PTR_TO_JSON(PosixSecondaryGroupIds, posixSecondaryGroupIds_);
          DARABONBA_PTR_TO_JSON(PosixUserId, posixUserId_);
        };
        friend void from_json(const Darabonba::Json& j, PosixUser& obj) { 
          DARABONBA_PTR_FROM_JSON(PosixGroupId, posixGroupId_);
          DARABONBA_PTR_FROM_JSON(PosixSecondaryGroupIds, posixSecondaryGroupIds_);
          DARABONBA_PTR_FROM_JSON(PosixUserId, posixUserId_);
        };
        PosixUser() = default ;
        PosixUser(const PosixUser &) = default ;
        PosixUser(PosixUser &&) = default ;
        PosixUser(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PosixUser() = default ;
        PosixUser& operator=(const PosixUser &) = default ;
        PosixUser& operator=(PosixUser &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->posixGroupId_ == nullptr
        && this->posixSecondaryGroupIds_ == nullptr && this->posixUserId_ == nullptr; };
        // posixGroupId Field Functions 
        bool hasPosixGroupId() const { return this->posixGroupId_ != nullptr;};
        void deletePosixGroupId() { this->posixGroupId_ = nullptr;};
        inline int32_t getPosixGroupId() const { DARABONBA_PTR_GET_DEFAULT(posixGroupId_, 0) };
        inline PosixUser& setPosixGroupId(int32_t posixGroupId) { DARABONBA_PTR_SET_VALUE(posixGroupId_, posixGroupId) };


        // posixSecondaryGroupIds Field Functions 
        bool hasPosixSecondaryGroupIds() const { return this->posixSecondaryGroupIds_ != nullptr;};
        void deletePosixSecondaryGroupIds() { this->posixSecondaryGroupIds_ = nullptr;};
        inline const vector<int32_t> & getPosixSecondaryGroupIds() const { DARABONBA_PTR_GET_CONST(posixSecondaryGroupIds_, vector<int32_t>) };
        inline vector<int32_t> getPosixSecondaryGroupIds() { DARABONBA_PTR_GET(posixSecondaryGroupIds_, vector<int32_t>) };
        inline PosixUser& setPosixSecondaryGroupIds(const vector<int32_t> & posixSecondaryGroupIds) { DARABONBA_PTR_SET_VALUE(posixSecondaryGroupIds_, posixSecondaryGroupIds) };
        inline PosixUser& setPosixSecondaryGroupIds(vector<int32_t> && posixSecondaryGroupIds) { DARABONBA_PTR_SET_RVALUE(posixSecondaryGroupIds_, posixSecondaryGroupIds) };


        // posixUserId Field Functions 
        bool hasPosixUserId() const { return this->posixUserId_ != nullptr;};
        void deletePosixUserId() { this->posixUserId_ = nullptr;};
        inline int32_t getPosixUserId() const { DARABONBA_PTR_GET_DEFAULT(posixUserId_, 0) };
        inline PosixUser& setPosixUserId(int32_t posixUserId) { DARABONBA_PTR_SET_VALUE(posixUserId_, posixUserId) };


      protected:
        // The ID of the POSIX user group.
        shared_ptr<int32_t> posixGroupId_ {};
        // The IDs of the secondary user groups.
        shared_ptr<vector<int32_t>> posixSecondaryGroupIds_ {};
        // The ID of the POSIX user.
        shared_ptr<int32_t> posixUserId_ {};
      };

      virtual bool empty() const override { return this->ARN_ == nullptr
        && this->accessGroup_ == nullptr && this->accessPointId_ == nullptr && this->accessPointName_ == nullptr && this->createTime_ == nullptr && this->domainName_ == nullptr
        && this->enabledRam_ == nullptr && this->fileSystemId_ == nullptr && this->modifyTime_ == nullptr && this->posixUser_ == nullptr && this->rootPath_ == nullptr
        && this->rootPathPermission_ == nullptr && this->rootPathStatus_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
      // ARN Field Functions 
      bool hasARN() const { return this->ARN_ != nullptr;};
      void deleteARN() { this->ARN_ = nullptr;};
      inline string getARN() const { DARABONBA_PTR_GET_DEFAULT(ARN_, "") };
      inline AccessPoints& setARN(string ARN) { DARABONBA_PTR_SET_VALUE(ARN_, ARN) };


      // accessGroup Field Functions 
      bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
      void deleteAccessGroup() { this->accessGroup_ = nullptr;};
      inline string getAccessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
      inline AccessPoints& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


      // accessPointId Field Functions 
      bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
      void deleteAccessPointId() { this->accessPointId_ = nullptr;};
      inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
      inline AccessPoints& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


      // accessPointName Field Functions 
      bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
      void deleteAccessPointName() { this->accessPointName_ = nullptr;};
      inline string getAccessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
      inline AccessPoints& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessPoints& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline AccessPoints& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // enabledRam Field Functions 
      bool hasEnabledRam() const { return this->enabledRam_ != nullptr;};
      void deleteEnabledRam() { this->enabledRam_ = nullptr;};
      inline bool getEnabledRam() const { DARABONBA_PTR_GET_DEFAULT(enabledRam_, false) };
      inline AccessPoints& setEnabledRam(bool enabledRam) { DARABONBA_PTR_SET_VALUE(enabledRam_, enabledRam) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline AccessPoints& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline AccessPoints& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // posixUser Field Functions 
      bool hasPosixUser() const { return this->posixUser_ != nullptr;};
      void deletePosixUser() { this->posixUser_ = nullptr;};
      inline const AccessPoints::PosixUser & getPosixUser() const { DARABONBA_PTR_GET_CONST(posixUser_, AccessPoints::PosixUser) };
      inline AccessPoints::PosixUser getPosixUser() { DARABONBA_PTR_GET(posixUser_, AccessPoints::PosixUser) };
      inline AccessPoints& setPosixUser(const AccessPoints::PosixUser & posixUser) { DARABONBA_PTR_SET_VALUE(posixUser_, posixUser) };
      inline AccessPoints& setPosixUser(AccessPoints::PosixUser && posixUser) { DARABONBA_PTR_SET_RVALUE(posixUser_, posixUser) };


      // rootPath Field Functions 
      bool hasRootPath() const { return this->rootPath_ != nullptr;};
      void deleteRootPath() { this->rootPath_ = nullptr;};
      inline string getRootPath() const { DARABONBA_PTR_GET_DEFAULT(rootPath_, "") };
      inline AccessPoints& setRootPath(string rootPath) { DARABONBA_PTR_SET_VALUE(rootPath_, rootPath) };


      // rootPathPermission Field Functions 
      bool hasRootPathPermission() const { return this->rootPathPermission_ != nullptr;};
      void deleteRootPathPermission() { this->rootPathPermission_ = nullptr;};
      inline const AccessPoints::RootPathPermission & getRootPathPermission() const { DARABONBA_PTR_GET_CONST(rootPathPermission_, AccessPoints::RootPathPermission) };
      inline AccessPoints::RootPathPermission getRootPathPermission() { DARABONBA_PTR_GET(rootPathPermission_, AccessPoints::RootPathPermission) };
      inline AccessPoints& setRootPathPermission(const AccessPoints::RootPathPermission & rootPathPermission) { DARABONBA_PTR_SET_VALUE(rootPathPermission_, rootPathPermission) };
      inline AccessPoints& setRootPathPermission(AccessPoints::RootPathPermission && rootPathPermission) { DARABONBA_PTR_SET_RVALUE(rootPathPermission_, rootPathPermission) };


      // rootPathStatus Field Functions 
      bool hasRootPathStatus() const { return this->rootPathStatus_ != nullptr;};
      void deleteRootPathStatus() { this->rootPathStatus_ = nullptr;};
      inline string getRootPathStatus() const { DARABONBA_PTR_GET_DEFAULT(rootPathStatus_, "") };
      inline AccessPoints& setRootPathStatus(string rootPathStatus) { DARABONBA_PTR_SET_VALUE(rootPathStatus_, rootPathStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AccessPoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AccessPoints::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AccessPoints::Tags>) };
      inline vector<AccessPoints::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AccessPoints::Tags>) };
      inline AccessPoints& setTags(const vector<AccessPoints::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AccessPoints& setTags(vector<AccessPoints::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline AccessPoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline AccessPoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The Alibaba Cloud Resource Name (ARN) of the access point.
      shared_ptr<string> ARN_ {};
      // The name of the permission group.
      shared_ptr<string> accessGroup_ {};
      // The ID of the access point.
      shared_ptr<string> accessPointId_ {};
      // The name of the access point.
      shared_ptr<string> accessPointName_ {};
      // The time when the access point was created.
      shared_ptr<string> createTime_ {};
      // The domain name of the access point.
      shared_ptr<string> domainName_ {};
      // Indicates whether the Resource Access Management (RAM) policy is enabled.
      shared_ptr<bool> enabledRam_ {};
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The time when the access point was modified.
      shared_ptr<string> modifyTime_ {};
      // The Portable Operating System Interface for UNIX (POSIX) user.
      shared_ptr<AccessPoints::PosixUser> posixUser_ {};
      // The root directory.
      shared_ptr<string> rootPath_ {};
      // The permissions on the root directory.
      shared_ptr<AccessPoints::RootPathPermission> rootPathPermission_ {};
      // The status of the root directory.
      // 
      // Valid values:
      // 
      // *   0: The rootpath status is unknown.
      // *   1: The rootpath does not exist and may be deleted.
      // *   2: The rootpath is normal.
      shared_ptr<string> rootPathStatus_ {};
      // The status of the access point.
      // 
      // Valid values:
      // 
      // *   Active: The access point is available.
      // *   Inactive: The access point is unavailable.
      // *   Pending: The access point is being created.
      // *   Deleting: The access point is being deleted.
      // 
      // >  You can mount a file system only if the access point is in the Active state.
      shared_ptr<string> status_ {};
      shared_ptr<vector<AccessPoints::Tags>> tags_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->accessPoints_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessPoints Field Functions 
    bool hasAccessPoints() const { return this->accessPoints_ != nullptr;};
    void deleteAccessPoints() { this->accessPoints_ = nullptr;};
    inline const vector<DescribeAccessPointsResponseBody::AccessPoints> & getAccessPoints() const { DARABONBA_PTR_GET_CONST(accessPoints_, vector<DescribeAccessPointsResponseBody::AccessPoints>) };
    inline vector<DescribeAccessPointsResponseBody::AccessPoints> getAccessPoints() { DARABONBA_PTR_GET(accessPoints_, vector<DescribeAccessPointsResponseBody::AccessPoints>) };
    inline DescribeAccessPointsResponseBody& setAccessPoints(const vector<DescribeAccessPointsResponseBody::AccessPoints> & accessPoints) { DARABONBA_PTR_SET_VALUE(accessPoints_, accessPoints) };
    inline DescribeAccessPointsResponseBody& setAccessPoints(vector<DescribeAccessPointsResponseBody::AccessPoints> && accessPoints) { DARABONBA_PTR_SET_RVALUE(accessPoints_, accessPoints) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAccessPointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the access point.
    shared_ptr<vector<DescribeAccessPointsResponseBody::AccessPoints>> accessPoints_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // The total number of access points.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
