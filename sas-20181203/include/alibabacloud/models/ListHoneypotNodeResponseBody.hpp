// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTNODERESPONSEBODY_HPP_
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
  class ListHoneypotNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HoneypotNodeList, honeypotNodeList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HoneypotNodeList, honeypotNodeList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListHoneypotNodeResponseBody() = default ;
    ListHoneypotNodeResponseBody(const ListHoneypotNodeResponseBody &) = default ;
    ListHoneypotNodeResponseBody(ListHoneypotNodeResponseBody &&) = default ;
    ListHoneypotNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotNodeResponseBody() = default ;
    ListHoneypotNodeResponseBody& operator=(const ListHoneypotNodeResponseBody &) = default ;
    ListHoneypotNodeResponseBody& operator=(ListHoneypotNodeResponseBody &&) = default ;
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
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class HoneypotNodeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HoneypotNodeList& obj) { 
        DARABONBA_PTR_TO_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultNode, defaultNode_);
        DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
        DARABONBA_PTR_TO_JSON(HoneypotTotalCount, honeypotTotalCount_);
        DARABONBA_PTR_TO_JSON(HoneypotUsedCount, honeypotUsedCount_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(ProbeTotalCount, probeTotalCount_);
        DARABONBA_PTR_TO_JSON(ProbeUsedCount, probeUsedCount_);
        DARABONBA_PTR_TO_JSON(SecurityGroupProbeIpList, securityGroupProbeIpList_);
        DARABONBA_PTR_TO_JSON(TotalStatus, totalStatus_);
        DARABONBA_PTR_TO_JSON(UpgradeAvailable, upgradeAvailable_);
      };
      friend void from_json(const Darabonba::Json& j, HoneypotNodeList& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultNode, defaultNode_);
        DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
        DARABONBA_PTR_FROM_JSON(HoneypotTotalCount, honeypotTotalCount_);
        DARABONBA_PTR_FROM_JSON(HoneypotUsedCount, honeypotUsedCount_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(ProbeTotalCount, probeTotalCount_);
        DARABONBA_PTR_FROM_JSON(ProbeUsedCount, probeUsedCount_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupProbeIpList, securityGroupProbeIpList_);
        DARABONBA_PTR_FROM_JSON(TotalStatus, totalStatus_);
        DARABONBA_PTR_FROM_JSON(UpgradeAvailable, upgradeAvailable_);
      };
      HoneypotNodeList() = default ;
      HoneypotNodeList(const HoneypotNodeList &) = default ;
      HoneypotNodeList(HoneypotNodeList &&) = default ;
      HoneypotNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HoneypotNodeList() = default ;
      HoneypotNodeList& operator=(const HoneypotNodeList &) = default ;
      HoneypotNodeList& operator=(HoneypotNodeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowHoneypotAccessInternet_ == nullptr
        && this->createTime_ == nullptr && this->defaultNode_ == nullptr && this->ecsInstanceId_ == nullptr && this->honeypotTotalCount_ == nullptr && this->honeypotUsedCount_ == nullptr
        && this->nodeId_ == nullptr && this->nodeIp_ == nullptr && this->nodeName_ == nullptr && this->probeTotalCount_ == nullptr && this->probeUsedCount_ == nullptr
        && this->securityGroupProbeIpList_ == nullptr && this->totalStatus_ == nullptr && this->upgradeAvailable_ == nullptr; };
      // allowHoneypotAccessInternet Field Functions 
      bool hasAllowHoneypotAccessInternet() const { return this->allowHoneypotAccessInternet_ != nullptr;};
      void deleteAllowHoneypotAccessInternet() { this->allowHoneypotAccessInternet_ = nullptr;};
      inline bool getAllowHoneypotAccessInternet() const { DARABONBA_PTR_GET_DEFAULT(allowHoneypotAccessInternet_, false) };
      inline HoneypotNodeList& setAllowHoneypotAccessInternet(bool allowHoneypotAccessInternet) { DARABONBA_PTR_SET_VALUE(allowHoneypotAccessInternet_, allowHoneypotAccessInternet) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline HoneypotNodeList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultNode Field Functions 
      bool hasDefaultNode() const { return this->defaultNode_ != nullptr;};
      void deleteDefaultNode() { this->defaultNode_ = nullptr;};
      inline bool getDefaultNode() const { DARABONBA_PTR_GET_DEFAULT(defaultNode_, false) };
      inline HoneypotNodeList& setDefaultNode(bool defaultNode) { DARABONBA_PTR_SET_VALUE(defaultNode_, defaultNode) };


      // ecsInstanceId Field Functions 
      bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
      void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
      inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
      inline HoneypotNodeList& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


      // honeypotTotalCount Field Functions 
      bool hasHoneypotTotalCount() const { return this->honeypotTotalCount_ != nullptr;};
      void deleteHoneypotTotalCount() { this->honeypotTotalCount_ = nullptr;};
      inline int32_t getHoneypotTotalCount() const { DARABONBA_PTR_GET_DEFAULT(honeypotTotalCount_, 0) };
      inline HoneypotNodeList& setHoneypotTotalCount(int32_t honeypotTotalCount) { DARABONBA_PTR_SET_VALUE(honeypotTotalCount_, honeypotTotalCount) };


      // honeypotUsedCount Field Functions 
      bool hasHoneypotUsedCount() const { return this->honeypotUsedCount_ != nullptr;};
      void deleteHoneypotUsedCount() { this->honeypotUsedCount_ = nullptr;};
      inline int32_t getHoneypotUsedCount() const { DARABONBA_PTR_GET_DEFAULT(honeypotUsedCount_, 0) };
      inline HoneypotNodeList& setHoneypotUsedCount(int32_t honeypotUsedCount) { DARABONBA_PTR_SET_VALUE(honeypotUsedCount_, honeypotUsedCount) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline HoneypotNodeList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeIp Field Functions 
      bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
      void deleteNodeIp() { this->nodeIp_ = nullptr;};
      inline string getNodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
      inline HoneypotNodeList& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline HoneypotNodeList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // probeTotalCount Field Functions 
      bool hasProbeTotalCount() const { return this->probeTotalCount_ != nullptr;};
      void deleteProbeTotalCount() { this->probeTotalCount_ = nullptr;};
      inline int32_t getProbeTotalCount() const { DARABONBA_PTR_GET_DEFAULT(probeTotalCount_, 0) };
      inline HoneypotNodeList& setProbeTotalCount(int32_t probeTotalCount) { DARABONBA_PTR_SET_VALUE(probeTotalCount_, probeTotalCount) };


      // probeUsedCount Field Functions 
      bool hasProbeUsedCount() const { return this->probeUsedCount_ != nullptr;};
      void deleteProbeUsedCount() { this->probeUsedCount_ = nullptr;};
      inline int32_t getProbeUsedCount() const { DARABONBA_PTR_GET_DEFAULT(probeUsedCount_, 0) };
      inline HoneypotNodeList& setProbeUsedCount(int32_t probeUsedCount) { DARABONBA_PTR_SET_VALUE(probeUsedCount_, probeUsedCount) };


      // securityGroupProbeIpList Field Functions 
      bool hasSecurityGroupProbeIpList() const { return this->securityGroupProbeIpList_ != nullptr;};
      void deleteSecurityGroupProbeIpList() { this->securityGroupProbeIpList_ = nullptr;};
      inline const vector<string> & getSecurityGroupProbeIpList() const { DARABONBA_PTR_GET_CONST(securityGroupProbeIpList_, vector<string>) };
      inline vector<string> getSecurityGroupProbeIpList() { DARABONBA_PTR_GET(securityGroupProbeIpList_, vector<string>) };
      inline HoneypotNodeList& setSecurityGroupProbeIpList(const vector<string> & securityGroupProbeIpList) { DARABONBA_PTR_SET_VALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };
      inline HoneypotNodeList& setSecurityGroupProbeIpList(vector<string> && securityGroupProbeIpList) { DARABONBA_PTR_SET_RVALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };


      // totalStatus Field Functions 
      bool hasTotalStatus() const { return this->totalStatus_ != nullptr;};
      void deleteTotalStatus() { this->totalStatus_ = nullptr;};
      inline int32_t getTotalStatus() const { DARABONBA_PTR_GET_DEFAULT(totalStatus_, 0) };
      inline HoneypotNodeList& setTotalStatus(int32_t totalStatus) { DARABONBA_PTR_SET_VALUE(totalStatus_, totalStatus) };


      // upgradeAvailable Field Functions 
      bool hasUpgradeAvailable() const { return this->upgradeAvailable_ != nullptr;};
      void deleteUpgradeAvailable() { this->upgradeAvailable_ = nullptr;};
      inline bool getUpgradeAvailable() const { DARABONBA_PTR_GET_DEFAULT(upgradeAvailable_, false) };
      inline HoneypotNodeList& setUpgradeAvailable(bool upgradeAvailable) { DARABONBA_PTR_SET_VALUE(upgradeAvailable_, upgradeAvailable) };


    protected:
      // Indicates whether a honeypot is allowed to access the Internet. Valid values:
      // 
      // *   **true**: The honeypot is allowed to access the Internet.
      // *   **false**: The honeypot is not allowed to access the Internet.
      shared_ptr<bool> allowHoneypotAccessInternet_ {};
      // The time when the management node was created.
      shared_ptr<string> createTime_ {};
      // The type of the management node. Default value: **false**. Valid values:
      // 
      // *   **false**: non-default type
      // *   **true**: default type
      shared_ptr<bool> defaultNode_ {};
      // The ID of the instance.
      shared_ptr<string> ecsInstanceId_ {};
      // The maximum number of honeypots that can be deployed to the management node.
      shared_ptr<int32_t> honeypotTotalCount_ {};
      // The number of honeypots that are deployed to the management node.
      shared_ptr<int32_t> honeypotUsedCount_ {};
      // The ID of the management node.
      shared_ptr<string> nodeId_ {};
      // The IP address of the management node.
      shared_ptr<string> nodeIp_ {};
      // The name of the management node.
      shared_ptr<string> nodeName_ {};
      // The maximum number of probes that can be deployed for the management node.
      shared_ptr<int32_t> probeTotalCount_ {};
      // The number of probes that are deployed for the management node.
      shared_ptr<int32_t> probeUsedCount_ {};
      // An array consisting of the CIDR blocks that are allowed to access the management node.
      shared_ptr<vector<string>> securityGroupProbeIpList_ {};
      // The status of the management node. Valid values:
      // 
      // *   **1**: normal
      // *   **2**: abnormal
      shared_ptr<int32_t> totalStatus_ {};
      // Indicates whether the management node can be upgraded. Valid values:
      // 
      // *   **false**: no
      // *   **true**: yes
      shared_ptr<bool> upgradeAvailable_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->honeypotNodeList_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHoneypotNodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // honeypotNodeList Field Functions 
    bool hasHoneypotNodeList() const { return this->honeypotNodeList_ != nullptr;};
    void deleteHoneypotNodeList() { this->honeypotNodeList_ = nullptr;};
    inline const vector<ListHoneypotNodeResponseBody::HoneypotNodeList> & getHoneypotNodeList() const { DARABONBA_PTR_GET_CONST(honeypotNodeList_, vector<ListHoneypotNodeResponseBody::HoneypotNodeList>) };
    inline vector<ListHoneypotNodeResponseBody::HoneypotNodeList> getHoneypotNodeList() { DARABONBA_PTR_GET(honeypotNodeList_, vector<ListHoneypotNodeResponseBody::HoneypotNodeList>) };
    inline ListHoneypotNodeResponseBody& setHoneypotNodeList(const vector<ListHoneypotNodeResponseBody::HoneypotNodeList> & honeypotNodeList) { DARABONBA_PTR_SET_VALUE(honeypotNodeList_, honeypotNodeList) };
    inline ListHoneypotNodeResponseBody& setHoneypotNodeList(vector<ListHoneypotNodeResponseBody::HoneypotNodeList> && honeypotNodeList) { DARABONBA_PTR_SET_RVALUE(honeypotNodeList_, honeypotNodeList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHoneypotNodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHoneypotNodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotNodeResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotNodeResponseBody::PageInfo) };
    inline ListHoneypotNodeResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotNodeResponseBody::PageInfo) };
    inline ListHoneypotNodeResponseBody& setPageInfo(const ListHoneypotNodeResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotNodeResponseBody& setPageInfo(ListHoneypotNodeResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHoneypotNodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // An array that consists of the information about the management nodes.
    shared_ptr<vector<ListHoneypotNodeResponseBody::HoneypotNodeList>> honeypotNodeList_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<ListHoneypotNodeResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
