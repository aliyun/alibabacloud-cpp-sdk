// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARINFORESPONSEBODY_HPP_
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
  class DescribeColumnarInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeColumnarInfoResponseBody() = default ;
    DescribeColumnarInfoResponseBody(const DescribeColumnarInfoResponseBody &) = default ;
    DescribeColumnarInfoResponseBody(DescribeColumnarInfoResponseBody &&) = default ;
    DescribeColumnarInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarInfoResponseBody() = default ;
    DescribeColumnarInfoResponseBody& operator=(const DescribeColumnarInfoResponseBody &) = default ;
    DescribeColumnarInfoResponseBody& operator=(DescribeColumnarInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BinlogPersistTime, binlogPersistTime_);
        DARABONBA_PTR_TO_JSON(BinlogSize, binlogSize_);
        DARABONBA_PTR_TO_JSON(CheckSumSwitch, checkSumSwitch_);
        DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
        DARABONBA_PTR_TO_JSON(ColumnarNewVersion, columnarNewVersion_);
        DARABONBA_PTR_TO_JSON(ColumnarVersion, columnarVersion_);
        DARABONBA_PTR_TO_JSON(InstanceTopologyList, instanceTopologyList_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BinlogPersistTime, binlogPersistTime_);
        DARABONBA_PTR_FROM_JSON(BinlogSize, binlogSize_);
        DARABONBA_PTR_FROM_JSON(CheckSumSwitch, checkSumSwitch_);
        DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
        DARABONBA_PTR_FROM_JSON(ColumnarNewVersion, columnarNewVersion_);
        DARABONBA_PTR_FROM_JSON(ColumnarVersion, columnarVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceTopologyList, instanceTopologyList_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
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
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(PhysicalNodes, physicalNodes_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceTopologyList& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(PhysicalNodes, physicalNodes_);
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
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, PhysicalNodes& obj) { 
            DARABONBA_PTR_FROM_JSON(AZone, AZone_);
            DARABONBA_PTR_FROM_JSON(Disk, disk_);
            DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
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
        && this->disk_ == nullptr && this->nodeClass_ == nullptr && this->nodeId_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
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
          shared_ptr<string> status_ {};
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->comment_ == nullptr
        && this->instanceName_ == nullptr && this->physicalNodes_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline InstanceTopologyList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


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


      protected:
        shared_ptr<string> comment_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<vector<InstanceTopologyList::PhysicalNodes>> physicalNodes_ {};
      };

      virtual bool empty() const override { return this->binlogPersistTime_ == nullptr
        && this->binlogSize_ == nullptr && this->checkSumSwitch_ == nullptr && this->classCode_ == nullptr && this->columnarNewVersion_ == nullptr && this->columnarVersion_ == nullptr
        && this->instanceTopologyList_ == nullptr && this->serverId_ == nullptr; };
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


      // checkSumSwitch Field Functions 
      bool hasCheckSumSwitch() const { return this->checkSumSwitch_ != nullptr;};
      void deleteCheckSumSwitch() { this->checkSumSwitch_ = nullptr;};
      inline string getCheckSumSwitch() const { DARABONBA_PTR_GET_DEFAULT(checkSumSwitch_, "") };
      inline Data& setCheckSumSwitch(string checkSumSwitch) { DARABONBA_PTR_SET_VALUE(checkSumSwitch_, checkSumSwitch) };


      // classCode Field Functions 
      bool hasClassCode() const { return this->classCode_ != nullptr;};
      void deleteClassCode() { this->classCode_ = nullptr;};
      inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
      inline Data& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


      // columnarNewVersion Field Functions 
      bool hasColumnarNewVersion() const { return this->columnarNewVersion_ != nullptr;};
      void deleteColumnarNewVersion() { this->columnarNewVersion_ = nullptr;};
      inline string getColumnarNewVersion() const { DARABONBA_PTR_GET_DEFAULT(columnarNewVersion_, "") };
      inline Data& setColumnarNewVersion(string columnarNewVersion) { DARABONBA_PTR_SET_VALUE(columnarNewVersion_, columnarNewVersion) };


      // columnarVersion Field Functions 
      bool hasColumnarVersion() const { return this->columnarVersion_ != nullptr;};
      void deleteColumnarVersion() { this->columnarVersion_ = nullptr;};
      inline string getColumnarVersion() const { DARABONBA_PTR_GET_DEFAULT(columnarVersion_, "") };
      inline Data& setColumnarVersion(string columnarVersion) { DARABONBA_PTR_SET_VALUE(columnarVersion_, columnarVersion) };


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


    protected:
      shared_ptr<int32_t> binlogPersistTime_ {};
      // This parameter is required.
      shared_ptr<int32_t> binlogSize_ {};
      shared_ptr<string> checkSumSwitch_ {};
      shared_ptr<string> classCode_ {};
      // This parameter is required.
      shared_ptr<string> columnarNewVersion_ {};
      shared_ptr<string> columnarVersion_ {};
      shared_ptr<vector<Data::InstanceTopologyList>> instanceTopologyList_ {};
      // server id
      // 
      // This parameter is required.
      shared_ptr<int32_t> serverId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeColumnarInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeColumnarInfoResponseBody::Data) };
    inline DescribeColumnarInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeColumnarInfoResponseBody::Data) };
    inline DescribeColumnarInfoResponseBody& setData(const DescribeColumnarInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeColumnarInfoResponseBody& setData(DescribeColumnarInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeColumnarInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColumnarInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeColumnarInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeColumnarInfoResponseBody::Data> data_ {};
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
