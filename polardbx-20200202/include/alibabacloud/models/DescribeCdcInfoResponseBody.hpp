// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDCINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDCINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCdcInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdcInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdcInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCdcInfoResponseBody() = default ;
    DescribeCdcInfoResponseBody(const DescribeCdcInfoResponseBody &) = default ;
    DescribeCdcInfoResponseBody(DescribeCdcInfoResponseBody &&) = default ;
    DescribeCdcInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdcInfoResponseBody() = default ;
    DescribeCdcInfoResponseBody& operator=(const DescribeCdcInfoResponseBody &) = default ;
    DescribeCdcInfoResponseBody& operator=(DescribeCdcInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BinlogPersistTime, binlogPersistTime_);
        DARABONBA_PTR_TO_JSON(BinlogSize, binlogSize_);
        DARABONBA_PTR_TO_JSON(CdcNewVersion, cdcNewVersion_);
        DARABONBA_PTR_TO_JSON(CheckSumSwitch, checkSumSwitch_);
        DARABONBA_PTR_TO_JSON(EnableCyclicReplication, enableCyclicReplication_);
        DARABONBA_PTR_TO_JSON(InstanceTopologyList, instanceTopologyList_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(VersionSupportMultiCdc, versionSupportMultiCdc_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BinlogPersistTime, binlogPersistTime_);
        DARABONBA_PTR_FROM_JSON(BinlogSize, binlogSize_);
        DARABONBA_PTR_FROM_JSON(CdcNewVersion, cdcNewVersion_);
        DARABONBA_PTR_FROM_JSON(CheckSumSwitch, checkSumSwitch_);
        DARABONBA_PTR_FROM_JSON(EnableCyclicReplication, enableCyclicReplication_);
        DARABONBA_PTR_FROM_JSON(InstanceTopologyList, instanceTopologyList_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(VersionSupportMultiCdc, versionSupportMultiCdc_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceTopologyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceTopologyList& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(HashLevel, hashLevel_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(PhysicalNodes, physicalNodes_);
          DARABONBA_PTR_TO_JSON(StreamNum, streamNum_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceTopologyList& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(HashLevel, hashLevel_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(PhysicalNodes, physicalNodes_);
          DARABONBA_PTR_FROM_JSON(StreamNum, streamNum_);
        };
        InstanceTopologyList() = default ;
        InstanceTopologyList(const InstanceTopologyList &) = default ;
        InstanceTopologyList(InstanceTopologyList &&) = default ;
        InstanceTopologyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceTopologyList() = default ;
        InstanceTopologyList& operator=(const InstanceTopologyList &) = default ;
        InstanceTopologyList& operator=(InstanceTopologyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PhysicalNodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PhysicalNodes& obj) { 
            DARABONBA_PTR_TO_JSON(AZone, AZone_);
            DARABONBA_PTR_TO_JSON(Disk, disk_);
            DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, PhysicalNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(AZone, AZone_);
            DARABONBA_PTR_FROM_JSON(Disk, disk_);
            DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          PhysicalNodes() = default ;
          PhysicalNodes(const PhysicalNodes &) = default ;
          PhysicalNodes(PhysicalNodes &&) = default ;
          PhysicalNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PhysicalNodes() = default ;
          PhysicalNodes& operator=(const PhysicalNodes &) = default ;
          PhysicalNodes& operator=(PhysicalNodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->AZone_ == nullptr
        && this->disk_ == nullptr && this->nodeClass_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->status_ == nullptr
        && this->version_ == nullptr; };
          // AZone Field Functions 
          bool hasAZone() const { return this->AZone_ != nullptr;};
          void deleteAZone() { this->AZone_ = nullptr;};
          inline string getAZone() const { DARABONBA_PTR_GET_DEFAULT(AZone_, "") };
          inline PhysicalNodes& setAZone(string AZone) { DARABONBA_PTR_SET_VALUE(AZone_, AZone) };


          // disk Field Functions 
          bool hasDisk() const { return this->disk_ != nullptr;};
          void deleteDisk() { this->disk_ = nullptr;};
          inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
          inline PhysicalNodes& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


          // nodeClass Field Functions 
          bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
          void deleteNodeClass() { this->nodeClass_ = nullptr;};
          inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
          inline PhysicalNodes& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline PhysicalNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // nodeName Field Functions 
          bool hasNodeName() const { return this->nodeName_ != nullptr;};
          void deleteNodeName() { this->nodeName_ = nullptr;};
          inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
          inline PhysicalNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline PhysicalNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline PhysicalNodes& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<string> AZone_ {};
          shared_ptr<int32_t> disk_ {};
          shared_ptr<string> nodeClass_ {};
          shared_ptr<string> nodeId_ {};
          shared_ptr<string> nodeName_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->comment_ == nullptr && this->groupName_ == nullptr && this->hashLevel_ == nullptr && this->instanceName_ == nullptr && this->physicalNodes_ == nullptr
        && this->streamNum_ == nullptr; };
        // clusterType Field Functions 
        bool hasClusterType() const { return this->clusterType_ != nullptr;};
        void deleteClusterType() { this->clusterType_ = nullptr;};
        inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
        inline InstanceTopologyList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline InstanceTopologyList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline InstanceTopologyList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // hashLevel Field Functions 
        bool hasHashLevel() const { return this->hashLevel_ != nullptr;};
        void deleteHashLevel() { this->hashLevel_ = nullptr;};
        inline string getHashLevel() const { DARABONBA_PTR_GET_DEFAULT(hashLevel_, "") };
        inline InstanceTopologyList& setHashLevel(string hashLevel) { DARABONBA_PTR_SET_VALUE(hashLevel_, hashLevel) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline InstanceTopologyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // physicalNodes Field Functions 
        bool hasPhysicalNodes() const { return this->physicalNodes_ != nullptr;};
        void deletePhysicalNodes() { this->physicalNodes_ = nullptr;};
        inline const vector<InstanceTopologyList::PhysicalNodes> & getPhysicalNodes() const { DARABONBA_PTR_GET_CONST(physicalNodes_, vector<InstanceTopologyList::PhysicalNodes>) };
        inline vector<InstanceTopologyList::PhysicalNodes> getPhysicalNodes() { DARABONBA_PTR_GET(physicalNodes_, vector<InstanceTopologyList::PhysicalNodes>) };
        inline InstanceTopologyList& setPhysicalNodes(const vector<InstanceTopologyList::PhysicalNodes> & physicalNodes) { DARABONBA_PTR_SET_VALUE(physicalNodes_, physicalNodes) };
        inline InstanceTopologyList& setPhysicalNodes(vector<InstanceTopologyList::PhysicalNodes> && physicalNodes) { DARABONBA_PTR_SET_RVALUE(physicalNodes_, physicalNodes) };


        // streamNum Field Functions 
        bool hasStreamNum() const { return this->streamNum_ != nullptr;};
        void deleteStreamNum() { this->streamNum_ = nullptr;};
        inline int32_t getStreamNum() const { DARABONBA_PTR_GET_DEFAULT(streamNum_, 0) };
        inline InstanceTopologyList& setStreamNum(int32_t streamNum) { DARABONBA_PTR_SET_VALUE(streamNum_, streamNum) };


      protected:
        shared_ptr<string> clusterType_ {};
        shared_ptr<string> comment_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<string> hashLevel_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<vector<InstanceTopologyList::PhysicalNodes>> physicalNodes_ {};
        shared_ptr<int32_t> streamNum_ {};
      };

      virtual bool empty() const override { return this->binlogPersistTime_ == nullptr
        && this->binlogSize_ == nullptr && this->cdcNewVersion_ == nullptr && this->checkSumSwitch_ == nullptr && this->enableCyclicReplication_ == nullptr && this->instanceTopologyList_ == nullptr
        && this->serverId_ == nullptr && this->versionSupportMultiCdc_ == nullptr; };
      // binlogPersistTime Field Functions 
      bool hasBinlogPersistTime() const { return this->binlogPersistTime_ != nullptr;};
      void deleteBinlogPersistTime() { this->binlogPersistTime_ = nullptr;};
      inline int32_t getBinlogPersistTime() const { DARABONBA_PTR_GET_DEFAULT(binlogPersistTime_, 0) };
      inline Data& setBinlogPersistTime(int32_t binlogPersistTime) { DARABONBA_PTR_SET_VALUE(binlogPersistTime_, binlogPersistTime) };


      // binlogSize Field Functions 
      bool hasBinlogSize() const { return this->binlogSize_ != nullptr;};
      void deleteBinlogSize() { this->binlogSize_ = nullptr;};
      inline int32_t getBinlogSize() const { DARABONBA_PTR_GET_DEFAULT(binlogSize_, 0) };
      inline Data& setBinlogSize(int32_t binlogSize) { DARABONBA_PTR_SET_VALUE(binlogSize_, binlogSize) };


      // cdcNewVersion Field Functions 
      bool hasCdcNewVersion() const { return this->cdcNewVersion_ != nullptr;};
      void deleteCdcNewVersion() { this->cdcNewVersion_ = nullptr;};
      inline string getCdcNewVersion() const { DARABONBA_PTR_GET_DEFAULT(cdcNewVersion_, "") };
      inline Data& setCdcNewVersion(string cdcNewVersion) { DARABONBA_PTR_SET_VALUE(cdcNewVersion_, cdcNewVersion) };


      // checkSumSwitch Field Functions 
      bool hasCheckSumSwitch() const { return this->checkSumSwitch_ != nullptr;};
      void deleteCheckSumSwitch() { this->checkSumSwitch_ = nullptr;};
      inline string getCheckSumSwitch() const { DARABONBA_PTR_GET_DEFAULT(checkSumSwitch_, "") };
      inline Data& setCheckSumSwitch(string checkSumSwitch) { DARABONBA_PTR_SET_VALUE(checkSumSwitch_, checkSumSwitch) };


      // enableCyclicReplication Field Functions 
      bool hasEnableCyclicReplication() const { return this->enableCyclicReplication_ != nullptr;};
      void deleteEnableCyclicReplication() { this->enableCyclicReplication_ = nullptr;};
      inline bool getEnableCyclicReplication() const { DARABONBA_PTR_GET_DEFAULT(enableCyclicReplication_, false) };
      inline Data& setEnableCyclicReplication(bool enableCyclicReplication) { DARABONBA_PTR_SET_VALUE(enableCyclicReplication_, enableCyclicReplication) };


      // instanceTopologyList Field Functions 
      bool hasInstanceTopologyList() const { return this->instanceTopologyList_ != nullptr;};
      void deleteInstanceTopologyList() { this->instanceTopologyList_ = nullptr;};
      inline const vector<Data::InstanceTopologyList> & getInstanceTopologyList() const { DARABONBA_PTR_GET_CONST(instanceTopologyList_, vector<Data::InstanceTopologyList>) };
      inline vector<Data::InstanceTopologyList> getInstanceTopologyList() { DARABONBA_PTR_GET(instanceTopologyList_, vector<Data::InstanceTopologyList>) };
      inline Data& setInstanceTopologyList(const vector<Data::InstanceTopologyList> & instanceTopologyList) { DARABONBA_PTR_SET_VALUE(instanceTopologyList_, instanceTopologyList) };
      inline Data& setInstanceTopologyList(vector<Data::InstanceTopologyList> && instanceTopologyList) { DARABONBA_PTR_SET_RVALUE(instanceTopologyList_, instanceTopologyList) };


      // serverId Field Functions 
      bool hasServerId() const { return this->serverId_ != nullptr;};
      void deleteServerId() { this->serverId_ = nullptr;};
      inline int32_t getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, 0) };
      inline Data& setServerId(int32_t serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


      // versionSupportMultiCdc Field Functions 
      bool hasVersionSupportMultiCdc() const { return this->versionSupportMultiCdc_ != nullptr;};
      void deleteVersionSupportMultiCdc() { this->versionSupportMultiCdc_ = nullptr;};
      inline bool getVersionSupportMultiCdc() const { DARABONBA_PTR_GET_DEFAULT(versionSupportMultiCdc_, false) };
      inline Data& setVersionSupportMultiCdc(bool versionSupportMultiCdc) { DARABONBA_PTR_SET_VALUE(versionSupportMultiCdc_, versionSupportMultiCdc) };


    protected:
      shared_ptr<int32_t> binlogPersistTime_ {};
      // This parameter is required.
      shared_ptr<int32_t> binlogSize_ {};
      // This parameter is required.
      shared_ptr<string> cdcNewVersion_ {};
      shared_ptr<string> checkSumSwitch_ {};
      shared_ptr<bool> enableCyclicReplication_ {};
      shared_ptr<vector<Data::InstanceTopologyList>> instanceTopologyList_ {};
      // server id
      // 
      // This parameter is required.
      shared_ptr<int32_t> serverId_ {};
      shared_ptr<bool> versionSupportMultiCdc_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCdcInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCdcInfoResponseBody::Data) };
    inline DescribeCdcInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCdcInfoResponseBody::Data) };
    inline DescribeCdcInfoResponseBody& setData(const DescribeCdcInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCdcInfoResponseBody& setData(DescribeCdcInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeCdcInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdcInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCdcInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeCdcInfoResponseBody::Data> data_ {};
    // This parameter is required.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
