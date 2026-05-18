// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMOUNTPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMOUNTPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListMountPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMountPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountPoints, mountPoints_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMountPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPoints, mountPoints_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMountPointsResponseBody() = default ;
    ListMountPointsResponseBody(const ListMountPointsResponseBody &) = default ;
    ListMountPointsResponseBody(ListMountPointsResponseBody &&) = default ;
    ListMountPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMountPointsResponseBody() = default ;
    ListMountPointsResponseBody& operator=(const ListMountPointsResponseBody &) = default ;
    ListMountPointsResponseBody& operator=(ListMountPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MountPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountPoints& obj) { 
        DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(MountPointAlias, mountPointAlias_);
        DARABONBA_PTR_TO_JSON(MountPointDomain, mountPointDomain_);
        DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, MountPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(MountPointAlias, mountPointAlias_);
        DARABONBA_PTR_FROM_JSON(MountPointDomain, mountPointDomain_);
        DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      MountPoints() = default ;
      MountPoints(const MountPoints &) = default ;
      MountPoints(MountPoints &&) = default ;
      MountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountPoints() = default ;
      MountPoints& operator=(const MountPoints &) = default ;
      MountPoints& operator=(MountPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->mountPointAlias_ == nullptr && this->mountPointDomain_ == nullptr
        && this->mountPointId_ == nullptr && this->networkType_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
      // accessGroupId Field Functions 
      bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
      void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
      inline string getAccessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
      inline MountPoints& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline MountPoints& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MountPoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline MountPoints& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // mountPointAlias Field Functions 
      bool hasMountPointAlias() const { return this->mountPointAlias_ != nullptr;};
      void deleteMountPointAlias() { this->mountPointAlias_ = nullptr;};
      inline string getMountPointAlias() const { DARABONBA_PTR_GET_DEFAULT(mountPointAlias_, "") };
      inline MountPoints& setMountPointAlias(string mountPointAlias) { DARABONBA_PTR_SET_VALUE(mountPointAlias_, mountPointAlias) };


      // mountPointDomain Field Functions 
      bool hasMountPointDomain() const { return this->mountPointDomain_ != nullptr;};
      void deleteMountPointDomain() { this->mountPointDomain_ = nullptr;};
      inline string getMountPointDomain() const { DARABONBA_PTR_GET_DEFAULT(mountPointDomain_, "") };
      inline MountPoints& setMountPointDomain(string mountPointDomain) { DARABONBA_PTR_SET_VALUE(mountPointDomain_, mountPointDomain) };


      // mountPointId Field Functions 
      bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
      void deleteMountPointId() { this->mountPointId_ = nullptr;};
      inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
      inline MountPoints& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline MountPoints& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline MountPoints& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MountPoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline MountPoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline MountPoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> accessGroupId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> fileSystemId_ {};
      shared_ptr<string> mountPointAlias_ {};
      shared_ptr<string> mountPointDomain_ {};
      shared_ptr<string> mountPointId_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->mountPoints_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<ListMountPointsResponseBody::MountPoints> & getMountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<ListMountPointsResponseBody::MountPoints>) };
    inline vector<ListMountPointsResponseBody::MountPoints> getMountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<ListMountPointsResponseBody::MountPoints>) };
    inline ListMountPointsResponseBody& setMountPoints(const vector<ListMountPointsResponseBody::MountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline ListMountPointsResponseBody& setMountPoints(vector<ListMountPointsResponseBody::MountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMountPointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMountPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMountPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListMountPointsResponseBody::MountPoints>> mountPoints_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
