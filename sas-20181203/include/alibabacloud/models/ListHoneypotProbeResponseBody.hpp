// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTPROBERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTPROBERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotProbeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotProbeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotProbeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListHoneypotProbeResponseBody() = default ;
    ListHoneypotProbeResponseBody(const ListHoneypotProbeResponseBody &) = default ;
    ListHoneypotProbeResponseBody(ListHoneypotProbeResponseBody &&) = default ;
    ListHoneypotProbeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotProbeResponseBody() = default ;
    ListHoneypotProbeResponseBody& operator=(const ListHoneypotProbeResponseBody &) = default ;
    ListHoneypotProbeResponseBody& operator=(ListHoneypotProbeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of honeypot probes displayed on the current page.
      shared_ptr<int32_t> count_ {};
      // The current page number returned in the paged query during paging.
      shared_ptr<int32_t> currentPage_ {};
      // The number of honeypot probes displayed per page in the paged query during paging. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of honeypot probes returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(ControlNode, controlNode_);
        DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(HostIp, hostIp_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
        DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
        DARABONBA_PTR_TO_JSON(ProbeVersion, probeVersion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlNode, controlNode_);
        DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(HostIp, hostIp_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
        DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
        DARABONBA_PTR_FROM_JSON(ProbeVersion, probeVersion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ControlNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ControlNode& obj) { 
          DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        };
        friend void from_json(const Darabonba::Json& j, ControlNode& obj) { 
          DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        };
        ControlNode() = default ;
        ControlNode(const ControlNode &) = default ;
        ControlNode(ControlNode &&) = default ;
        ControlNode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ControlNode() = default ;
        ControlNode& operator=(const ControlNode &) = default ;
        ControlNode& operator=(ControlNode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr; };
        // ecsInstanceId Field Functions 
        bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
        void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
        inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
        inline ControlNode& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline ControlNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline ControlNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      protected:
        // The ECS instance ID.
        shared_ptr<string> ecsInstanceId_ {};
        // The node ID.
        shared_ptr<string> nodeId_ {};
        // The node name.
        shared_ptr<string> nodeName_ {};
      };

      virtual bool empty() const override { return this->controlNode_ == nullptr
        && this->deployTime_ == nullptr && this->displayName_ == nullptr && this->hostIp_ == nullptr && this->osType_ == nullptr && this->probeId_ == nullptr
        && this->probeType_ == nullptr && this->probeVersion_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr && this->vpcId_ == nullptr; };
      // controlNode Field Functions 
      bool hasControlNode() const { return this->controlNode_ != nullptr;};
      void deleteControlNode() { this->controlNode_ = nullptr;};
      inline const List::ControlNode & getControlNode() const { DARABONBA_PTR_GET_CONST(controlNode_, List::ControlNode) };
      inline List::ControlNode getControlNode() { DARABONBA_PTR_GET(controlNode_, List::ControlNode) };
      inline List& setControlNode(const List::ControlNode & controlNode) { DARABONBA_PTR_SET_VALUE(controlNode_, controlNode) };
      inline List& setControlNode(List::ControlNode && controlNode) { DARABONBA_PTR_SET_RVALUE(controlNode_, controlNode) };


      // deployTime Field Functions 
      bool hasDeployTime() const { return this->deployTime_ != nullptr;};
      void deleteDeployTime() { this->deployTime_ = nullptr;};
      inline int64_t getDeployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, 0L) };
      inline List& setDeployTime(int64_t deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline List& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // hostIp Field Functions 
      bool hasHostIp() const { return this->hostIp_ != nullptr;};
      void deleteHostIp() { this->hostIp_ = nullptr;};
      inline string getHostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
      inline List& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline List& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // probeId Field Functions 
      bool hasProbeId() const { return this->probeId_ != nullptr;};
      void deleteProbeId() { this->probeId_ = nullptr;};
      inline string getProbeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
      inline List& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


      // probeType Field Functions 
      bool hasProbeType() const { return this->probeType_ != nullptr;};
      void deleteProbeType() { this->probeType_ = nullptr;};
      inline string getProbeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
      inline List& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


      // probeVersion Field Functions 
      bool hasProbeVersion() const { return this->probeVersion_ != nullptr;};
      void deleteProbeVersion() { this->probeVersion_ = nullptr;};
      inline string getProbeVersion() const { DARABONBA_PTR_GET_DEFAULT(probeVersion_, "") };
      inline List& setProbeVersion(string probeVersion) { DARABONBA_PTR_SET_VALUE(probeVersion_, probeVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline List& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline List& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The management node data.
      shared_ptr<List::ControlNode> controlNode_ {};
      // The deployment time.
      shared_ptr<int64_t> deployTime_ {};
      // The probe name.
      shared_ptr<string> displayName_ {};
      // The local IP address bound to the probe.
      shared_ptr<string> hostIp_ {};
      // The operating system type of the probe instance. Valid values:
      // 
      // - windows: Windows.
      // - linux: Linux.
      shared_ptr<string> osType_ {};
      // The probe ID.
      shared_ptr<string> probeId_ {};
      // The probe type. Valid values:
      // 
      // - **host_probe**: host probe
      // - **vpc_black_hole_probe**: VPC blackhole probe.
      shared_ptr<string> probeType_ {};
      // The probe version.
      shared_ptr<string> probeVersion_ {};
      // The probe status. Valid values:
      // - **installed**: Installation succeeded.
      // - **install_failed**: Installation failed.
      // - **online**: Normal.
      // - **offline**: Offline.
      // - **unnormal**: Service exception.
      // - **unprobe**: Unauthorized.
      // - **uninstalling**: Uninstalling.
      // - **uninstalled**: Uninstallation succeeded.
      // - **uninstall_failed**: Uninstallation failed.
      // - **not_exist**: Not installed.
      shared_ptr<string> status_ {};
      // The UUID of the asset instance where the host probe is deployed.
      shared_ptr<string> uuid_ {};
      // The ID of the VPC-connected instance where the VPC probe is deployed.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->list_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHoneypotProbeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHoneypotProbeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListHoneypotProbeResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListHoneypotProbeResponseBody::List>) };
    inline vector<ListHoneypotProbeResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListHoneypotProbeResponseBody::List>) };
    inline ListHoneypotProbeResponseBody& setList(const vector<ListHoneypotProbeResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListHoneypotProbeResponseBody& setList(vector<ListHoneypotProbeResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHoneypotProbeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotProbeResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotProbeResponseBody::PageInfo) };
    inline ListHoneypotProbeResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotProbeResponseBody::PageInfo) };
    inline ListHoneypotProbeResponseBody& setPageInfo(const ListHoneypotProbeResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotProbeResponseBody& setPageInfo(ListHoneypotProbeResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotProbeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHoneypotProbeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code. A value of **200** indicates success. Any other value indicates failure. You can use this field to determine the cause of a failure.
    shared_ptr<string> code_ {};
    // The HTTP status code of the response.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of honeypot probe data.
    shared_ptr<vector<ListHoneypotProbeResponseBody::List>> list_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<ListHoneypotProbeResponseBody::PageInfo> pageInfo_ {};
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
