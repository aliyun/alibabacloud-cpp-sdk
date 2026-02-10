// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTFLOWSRESPONSEBODY_HPP_
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
  class ListHoneypotEventFlowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotEventFlowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HoneypotEventFlows, honeypotEventFlows_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotEventFlowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HoneypotEventFlows, honeypotEventFlows_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListHoneypotEventFlowsResponseBody() = default ;
    ListHoneypotEventFlowsResponseBody(const ListHoneypotEventFlowsResponseBody &) = default ;
    ListHoneypotEventFlowsResponseBody(ListHoneypotEventFlowsResponseBody &&) = default ;
    ListHoneypotEventFlowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotEventFlowsResponseBody() = default ;
    ListHoneypotEventFlowsResponseBody& operator=(const ListHoneypotEventFlowsResponseBody &) = default ;
    ListHoneypotEventFlowsResponseBody& operator=(ListHoneypotEventFlowsResponseBody &&) = default ;
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class HoneypotEventFlows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HoneypotEventFlows& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(DockerId, dockerId_);
        DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
        DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
        DARABONBA_PTR_TO_JSON(EventConnection, eventConnection_);
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(Extra1, extra1_);
        DARABONBA_PTR_TO_JSON(FileOssUrl, fileOssUrl_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(HoneypotEventId, honeypotEventId_);
        DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
        DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_TO_JSON(SrcMac, srcMac_);
        DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TypeId, typeId_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, HoneypotEventFlows& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(DockerId, dockerId_);
        DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
        DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
        DARABONBA_PTR_FROM_JSON(EventConnection, eventConnection_);
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(Extra1, extra1_);
        DARABONBA_PTR_FROM_JSON(FileOssUrl, fileOssUrl_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(HoneypotEventId, honeypotEventId_);
        DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
        DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_FROM_JSON(SrcMac, srcMac_);
        DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TypeId, typeId_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
      };
      HoneypotEventFlows() = default ;
      HoneypotEventFlows(const HoneypotEventFlows &) = default ;
      HoneypotEventFlows(HoneypotEventFlows &&) = default ;
      HoneypotEventFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HoneypotEventFlows() = default ;
      HoneypotEventFlows& operator=(const HoneypotEventFlows &) = default ;
      HoneypotEventFlows& operator=(HoneypotEventFlows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->dockerId_ == nullptr && this->dstIp_ == nullptr && this->dstPort_ == nullptr && this->eventConnection_ == nullptr
        && this->extra_ == nullptr && this->extra1_ == nullptr && this->fileOssUrl_ == nullptr && this->firstTime_ == nullptr && this->honeypotEventId_ == nullptr
        && this->honeypotId_ == nullptr && this->honeypotName_ == nullptr && this->lastTime_ == nullptr && this->riskLevel_ == nullptr && this->securityEventId_ == nullptr
        && this->srcIp_ == nullptr && this->srcMac_ == nullptr && this->srcPort_ == nullptr && this->status_ == nullptr && this->typeId_ == nullptr
        && this->uid_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline HoneypotEventFlows& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline HoneypotEventFlows& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // dockerId Field Functions 
      bool hasDockerId() const { return this->dockerId_ != nullptr;};
      void deleteDockerId() { this->dockerId_ = nullptr;};
      inline string getDockerId() const { DARABONBA_PTR_GET_DEFAULT(dockerId_, "") };
      inline HoneypotEventFlows& setDockerId(string dockerId) { DARABONBA_PTR_SET_VALUE(dockerId_, dockerId) };


      // dstIp Field Functions 
      bool hasDstIp() const { return this->dstIp_ != nullptr;};
      void deleteDstIp() { this->dstIp_ = nullptr;};
      inline string getDstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
      inline HoneypotEventFlows& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
      inline HoneypotEventFlows& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // eventConnection Field Functions 
      bool hasEventConnection() const { return this->eventConnection_ != nullptr;};
      void deleteEventConnection() { this->eventConnection_ = nullptr;};
      inline string getEventConnection() const { DARABONBA_PTR_GET_DEFAULT(eventConnection_, "") };
      inline HoneypotEventFlows& setEventConnection(string eventConnection) { DARABONBA_PTR_SET_VALUE(eventConnection_, eventConnection) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline HoneypotEventFlows& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // extra1 Field Functions 
      bool hasExtra1() const { return this->extra1_ != nullptr;};
      void deleteExtra1() { this->extra1_ = nullptr;};
      inline string getExtra1() const { DARABONBA_PTR_GET_DEFAULT(extra1_, "") };
      inline HoneypotEventFlows& setExtra1(string extra1) { DARABONBA_PTR_SET_VALUE(extra1_, extra1) };


      // fileOssUrl Field Functions 
      bool hasFileOssUrl() const { return this->fileOssUrl_ != nullptr;};
      void deleteFileOssUrl() { this->fileOssUrl_ = nullptr;};
      inline string getFileOssUrl() const { DARABONBA_PTR_GET_DEFAULT(fileOssUrl_, "") };
      inline HoneypotEventFlows& setFileOssUrl(string fileOssUrl) { DARABONBA_PTR_SET_VALUE(fileOssUrl_, fileOssUrl) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline HoneypotEventFlows& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // honeypotEventId Field Functions 
      bool hasHoneypotEventId() const { return this->honeypotEventId_ != nullptr;};
      void deleteHoneypotEventId() { this->honeypotEventId_ = nullptr;};
      inline string getHoneypotEventId() const { DARABONBA_PTR_GET_DEFAULT(honeypotEventId_, "") };
      inline HoneypotEventFlows& setHoneypotEventId(string honeypotEventId) { DARABONBA_PTR_SET_VALUE(honeypotEventId_, honeypotEventId) };


      // honeypotId Field Functions 
      bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
      void deleteHoneypotId() { this->honeypotId_ = nullptr;};
      inline string getHoneypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
      inline HoneypotEventFlows& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


      // honeypotName Field Functions 
      bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
      void deleteHoneypotName() { this->honeypotName_ = nullptr;};
      inline string getHoneypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
      inline HoneypotEventFlows& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline HoneypotEventFlows& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline HoneypotEventFlows& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // securityEventId Field Functions 
      bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
      void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
      inline int64_t getSecurityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
      inline HoneypotEventFlows& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline HoneypotEventFlows& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


      // srcMac Field Functions 
      bool hasSrcMac() const { return this->srcMac_ != nullptr;};
      void deleteSrcMac() { this->srcMac_ = nullptr;};
      inline string getSrcMac() const { DARABONBA_PTR_GET_DEFAULT(srcMac_, "") };
      inline HoneypotEventFlows& setSrcMac(string srcMac) { DARABONBA_PTR_SET_VALUE(srcMac_, srcMac) };


      // srcPort Field Functions 
      bool hasSrcPort() const { return this->srcPort_ != nullptr;};
      void deleteSrcPort() { this->srcPort_ = nullptr;};
      inline int32_t getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
      inline HoneypotEventFlows& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline HoneypotEventFlows& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // typeId Field Functions 
      bool hasTypeId() const { return this->typeId_ != nullptr;};
      void deleteTypeId() { this->typeId_ = nullptr;};
      inline string getTypeId() const { DARABONBA_PTR_GET_DEFAULT(typeId_, "") };
      inline HoneypotEventFlows& setTypeId(string typeId) { DARABONBA_PTR_SET_VALUE(typeId_, typeId) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline HoneypotEventFlows& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The ID of the probe.
      shared_ptr<string> agentId_ {};
      // The name of the probe.
      shared_ptr<string> agentName_ {};
      // The ID of the container.
      shared_ptr<string> dockerId_ {};
      // The destination IP address.
      shared_ptr<string> dstIp_ {};
      // The destination port.
      shared_ptr<int32_t> dstPort_ {};
      // The UUID of the connection in the attack.
      shared_ptr<string> eventConnection_ {};
      // The extended information about the attack payload.
      shared_ptr<string> extra_ {};
      // The extension information about the virtual private cloud (VPC).
      shared_ptr<string> extra1_ {};
      // The Object Storage Service (OSS) URL of the file.
      shared_ptr<string> fileOssUrl_ {};
      // The timestamp when the intrusion event was first occurred.
      shared_ptr<int64_t> firstTime_ {};
      // The ID of the intrusion event. The value is a string.
      shared_ptr<string> honeypotEventId_ {};
      // The ID of the honeypot.
      shared_ptr<string> honeypotId_ {};
      // The name of the honeypot.
      shared_ptr<string> honeypotName_ {};
      // The timestamp when the intrusion event was last occurred.
      shared_ptr<int64_t> lastTime_ {};
      // The risk level. Valid values:
      // 
      // *   **2**: low
      // *   **3**: medium
      // *   **4**: high
      shared_ptr<string> riskLevel_ {};
      // The ID of the intrusion event.
      shared_ptr<int64_t> securityEventId_ {};
      // The source IP address.
      shared_ptr<string> srcIp_ {};
      // The source media access control (MAC) address.
      shared_ptr<string> srcMac_ {};
      // The source port number.
      shared_ptr<int32_t> srcPort_ {};
      // The handling status of the intrusion event. Valid values:
      // 
      // *   **1**: pending handling
      // *   **2**: ignored
      // *   **4**: confirmed
      shared_ptr<int32_t> status_ {};
      // The ID of the attack type.
      shared_ptr<string> typeId_ {};
      // The UUID of an attack in the intrusion event.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->honeypotEventFlows_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHoneypotEventFlowsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // honeypotEventFlows Field Functions 
    bool hasHoneypotEventFlows() const { return this->honeypotEventFlows_ != nullptr;};
    void deleteHoneypotEventFlows() { this->honeypotEventFlows_ = nullptr;};
    inline const vector<ListHoneypotEventFlowsResponseBody::HoneypotEventFlows> & getHoneypotEventFlows() const { DARABONBA_PTR_GET_CONST(honeypotEventFlows_, vector<ListHoneypotEventFlowsResponseBody::HoneypotEventFlows>) };
    inline vector<ListHoneypotEventFlowsResponseBody::HoneypotEventFlows> getHoneypotEventFlows() { DARABONBA_PTR_GET(honeypotEventFlows_, vector<ListHoneypotEventFlowsResponseBody::HoneypotEventFlows>) };
    inline ListHoneypotEventFlowsResponseBody& setHoneypotEventFlows(const vector<ListHoneypotEventFlowsResponseBody::HoneypotEventFlows> & honeypotEventFlows) { DARABONBA_PTR_SET_VALUE(honeypotEventFlows_, honeypotEventFlows) };
    inline ListHoneypotEventFlowsResponseBody& setHoneypotEventFlows(vector<ListHoneypotEventFlowsResponseBody::HoneypotEventFlows> && honeypotEventFlows) { DARABONBA_PTR_SET_RVALUE(honeypotEventFlows_, honeypotEventFlows) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHoneypotEventFlowsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHoneypotEventFlowsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotEventFlowsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotEventFlowsResponseBody::PageInfo) };
    inline ListHoneypotEventFlowsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotEventFlowsResponseBody::PageInfo) };
    inline ListHoneypotEventFlowsResponseBody& setPageInfo(const ListHoneypotEventFlowsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotEventFlowsResponseBody& setPageInfo(ListHoneypotEventFlowsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotEventFlowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHoneypotEventFlowsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The attack timelines.
    shared_ptr<vector<ListHoneypotEventFlowsResponseBody::HoneypotEventFlows>> honeypotEventFlows_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<ListHoneypotEventFlowsResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
