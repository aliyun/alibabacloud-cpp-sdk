// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLSERVICERESPONSEBODY_HPP_
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
  class DescribeProtocolServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProtocolServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtocolServices, protocolServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProtocolServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtocolServices, protocolServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProtocolServiceResponseBody() = default ;
    DescribeProtocolServiceResponseBody(const DescribeProtocolServiceResponseBody &) = default ;
    DescribeProtocolServiceResponseBody(DescribeProtocolServiceResponseBody &&) = default ;
    DescribeProtocolServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProtocolServiceResponseBody() = default ;
    DescribeProtocolServiceResponseBody& operator=(const DescribeProtocolServiceResponseBody &) = default ;
    DescribeProtocolServiceResponseBody& operator=(DescribeProtocolServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProtocolServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProtocolServices& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(InstanceBaseThroughput, instanceBaseThroughput_);
        DARABONBA_PTR_TO_JSON(InstanceBurstThroughput, instanceBurstThroughput_);
        DARABONBA_PTR_TO_JSON(InstanceRAM, instanceRAM_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(MountTargetCount, mountTargetCount_);
        DARABONBA_PTR_TO_JSON(ProtocolServiceId, protocolServiceId_);
        DARABONBA_PTR_TO_JSON(ProtocolSpec, protocolSpec_);
        DARABONBA_PTR_TO_JSON(ProtocolThroughput, protocolThroughput_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, ProtocolServices& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(InstanceBaseThroughput, instanceBaseThroughput_);
        DARABONBA_PTR_FROM_JSON(InstanceBurstThroughput, instanceBurstThroughput_);
        DARABONBA_PTR_FROM_JSON(InstanceRAM, instanceRAM_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(MountTargetCount, mountTargetCount_);
        DARABONBA_PTR_FROM_JSON(ProtocolServiceId, protocolServiceId_);
        DARABONBA_PTR_FROM_JSON(ProtocolSpec, protocolSpec_);
        DARABONBA_PTR_FROM_JSON(ProtocolThroughput, protocolThroughput_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      ProtocolServices() = default ;
      ProtocolServices(const ProtocolServices &) = default ;
      ProtocolServices(ProtocolServices &&) = default ;
      ProtocolServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProtocolServices() = default ;
      ProtocolServices& operator=(const ProtocolServices &) = default ;
      ProtocolServices& operator=(ProtocolServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->instanceBaseThroughput_ == nullptr && this->instanceBurstThroughput_ == nullptr && this->instanceRAM_ == nullptr
        && this->modifyTime_ == nullptr && this->mountTargetCount_ == nullptr && this->protocolServiceId_ == nullptr && this->protocolSpec_ == nullptr && this->protocolThroughput_ == nullptr
        && this->protocolType_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProtocolServices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProtocolServices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline ProtocolServices& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // instanceBaseThroughput Field Functions 
      bool hasInstanceBaseThroughput() const { return this->instanceBaseThroughput_ != nullptr;};
      void deleteInstanceBaseThroughput() { this->instanceBaseThroughput_ = nullptr;};
      inline int32_t getInstanceBaseThroughput() const { DARABONBA_PTR_GET_DEFAULT(instanceBaseThroughput_, 0) };
      inline ProtocolServices& setInstanceBaseThroughput(int32_t instanceBaseThroughput) { DARABONBA_PTR_SET_VALUE(instanceBaseThroughput_, instanceBaseThroughput) };


      // instanceBurstThroughput Field Functions 
      bool hasInstanceBurstThroughput() const { return this->instanceBurstThroughput_ != nullptr;};
      void deleteInstanceBurstThroughput() { this->instanceBurstThroughput_ = nullptr;};
      inline int32_t getInstanceBurstThroughput() const { DARABONBA_PTR_GET_DEFAULT(instanceBurstThroughput_, 0) };
      inline ProtocolServices& setInstanceBurstThroughput(int32_t instanceBurstThroughput) { DARABONBA_PTR_SET_VALUE(instanceBurstThroughput_, instanceBurstThroughput) };


      // instanceRAM Field Functions 
      bool hasInstanceRAM() const { return this->instanceRAM_ != nullptr;};
      void deleteInstanceRAM() { this->instanceRAM_ = nullptr;};
      inline int32_t getInstanceRAM() const { DARABONBA_PTR_GET_DEFAULT(instanceRAM_, 0) };
      inline ProtocolServices& setInstanceRAM(int32_t instanceRAM) { DARABONBA_PTR_SET_VALUE(instanceRAM_, instanceRAM) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline ProtocolServices& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // mountTargetCount Field Functions 
      bool hasMountTargetCount() const { return this->mountTargetCount_ != nullptr;};
      void deleteMountTargetCount() { this->mountTargetCount_ = nullptr;};
      inline int32_t getMountTargetCount() const { DARABONBA_PTR_GET_DEFAULT(mountTargetCount_, 0) };
      inline ProtocolServices& setMountTargetCount(int32_t mountTargetCount) { DARABONBA_PTR_SET_VALUE(mountTargetCount_, mountTargetCount) };


      // protocolServiceId Field Functions 
      bool hasProtocolServiceId() const { return this->protocolServiceId_ != nullptr;};
      void deleteProtocolServiceId() { this->protocolServiceId_ = nullptr;};
      inline string getProtocolServiceId() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceId_, "") };
      inline ProtocolServices& setProtocolServiceId(string protocolServiceId) { DARABONBA_PTR_SET_VALUE(protocolServiceId_, protocolServiceId) };


      // protocolSpec Field Functions 
      bool hasProtocolSpec() const { return this->protocolSpec_ != nullptr;};
      void deleteProtocolSpec() { this->protocolSpec_ = nullptr;};
      inline string getProtocolSpec() const { DARABONBA_PTR_GET_DEFAULT(protocolSpec_, "") };
      inline ProtocolServices& setProtocolSpec(string protocolSpec) { DARABONBA_PTR_SET_VALUE(protocolSpec_, protocolSpec) };


      // protocolThroughput Field Functions 
      bool hasProtocolThroughput() const { return this->protocolThroughput_ != nullptr;};
      void deleteProtocolThroughput() { this->protocolThroughput_ = nullptr;};
      inline int32_t getProtocolThroughput() const { DARABONBA_PTR_GET_DEFAULT(protocolThroughput_, 0) };
      inline ProtocolServices& setProtocolThroughput(int32_t protocolThroughput) { DARABONBA_PTR_SET_VALUE(protocolThroughput_, protocolThroughput) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline ProtocolServices& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProtocolServices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ProtocolServices& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ProtocolServices& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The time when the protocol service was created. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the protocol service.
      // 
      // Limits:
      // 
      // *   The description must be 2 to 128 characters in length.
      // *   The description must start with a letter and cannot start with `http://` or `https://`.
      // *   The description can contain letters, digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> description_ {};
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The base throughput of the protocol service. Unit: MB/s.
      shared_ptr<int32_t> instanceBaseThroughput_ {};
      // The burst throughput of the protocol service. Unit: MB/s.
      shared_ptr<int32_t> instanceBurstThroughput_ {};
      // The memory cache size of the protocol service. Unit: GiB.
      shared_ptr<int32_t> instanceRAM_ {};
      // The time when the protocol service was modified. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
      // The total number of CPFS directories and filesets exported in the protocol service.
      shared_ptr<int32_t> mountTargetCount_ {};
      // The ID of the protocol service.
      shared_ptr<string> protocolServiceId_ {};
      // The specification of the protocol service.
      // 
      // *   Valid value: General.
      // *   Default value: General.
      shared_ptr<string> protocolSpec_ {};
      // The throughput of the protocol service. Unit: MB/s.
      shared_ptr<int32_t> protocolThroughput_ {};
      // The protocol type supported by the protocol service.
      // 
      // Valid values:
      // 
      // *   NFS: The protocol service supports access over the Network File System (NFS) protocol.
      shared_ptr<string> protocolType_ {};
      // The status of the protocol service.
      // 
      // Valid values:
      // 
      // *   Creating: The protocol service is being created.
      // *   Starting: The protocol service is being started.
      // *   Running: The protocol service is running.
      // *   Updating: The protocol service is being updated.
      // *   Deleting: The protocol service is being deleted.
      // *   Stopping: The protocol service is being stopped.
      // *   Stopped: The protocol service is stopped.
      shared_ptr<string> status_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->protocolServices_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProtocolServiceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocolServices Field Functions 
    bool hasProtocolServices() const { return this->protocolServices_ != nullptr;};
    void deleteProtocolServices() { this->protocolServices_ = nullptr;};
    inline const vector<DescribeProtocolServiceResponseBody::ProtocolServices> & getProtocolServices() const { DARABONBA_PTR_GET_CONST(protocolServices_, vector<DescribeProtocolServiceResponseBody::ProtocolServices>) };
    inline vector<DescribeProtocolServiceResponseBody::ProtocolServices> getProtocolServices() { DARABONBA_PTR_GET(protocolServices_, vector<DescribeProtocolServiceResponseBody::ProtocolServices>) };
    inline DescribeProtocolServiceResponseBody& setProtocolServices(const vector<DescribeProtocolServiceResponseBody::ProtocolServices> & protocolServices) { DARABONBA_PTR_SET_VALUE(protocolServices_, protocolServices) };
    inline DescribeProtocolServiceResponseBody& setProtocolServices(vector<DescribeProtocolServiceResponseBody::ProtocolServices> && protocolServices) { DARABONBA_PTR_SET_RVALUE(protocolServices_, protocolServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProtocolServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The information about protocol services.
    shared_ptr<vector<DescribeProtocolServiceResponseBody::ProtocolServices>> protocolServices_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
