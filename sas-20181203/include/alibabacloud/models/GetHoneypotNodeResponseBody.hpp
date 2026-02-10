// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTNODERESPONSEBODY_HPP_
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
  class GetHoneypotNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HoneypotNode, honeypotNode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HoneypotNode, honeypotNode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHoneypotNodeResponseBody() = default ;
    GetHoneypotNodeResponseBody(const GetHoneypotNodeResponseBody &) = default ;
    GetHoneypotNodeResponseBody(GetHoneypotNodeResponseBody &&) = default ;
    GetHoneypotNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotNodeResponseBody() = default ;
    GetHoneypotNodeResponseBody& operator=(const GetHoneypotNodeResponseBody &) = default ;
    GetHoneypotNodeResponseBody& operator=(GetHoneypotNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HoneypotNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HoneypotNode& obj) { 
        DARABONBA_PTR_TO_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
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
      friend void from_json(const Darabonba::Json& j, HoneypotNode& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
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
      HoneypotNode() = default ;
      HoneypotNode(const HoneypotNode &) = default ;
      HoneypotNode(HoneypotNode &&) = default ;
      HoneypotNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HoneypotNode() = default ;
      HoneypotNode& operator=(const HoneypotNode &) = default ;
      HoneypotNode& operator=(HoneypotNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowHoneypotAccessInternet_ == nullptr
        && this->createTime_ == nullptr && this->ecsInstanceId_ == nullptr && this->honeypotTotalCount_ == nullptr && this->honeypotUsedCount_ == nullptr && this->nodeId_ == nullptr
        && this->nodeIp_ == nullptr && this->nodeName_ == nullptr && this->probeTotalCount_ == nullptr && this->probeUsedCount_ == nullptr && this->securityGroupProbeIpList_ == nullptr
        && this->totalStatus_ == nullptr && this->upgradeAvailable_ == nullptr; };
      // allowHoneypotAccessInternet Field Functions 
      bool hasAllowHoneypotAccessInternet() const { return this->allowHoneypotAccessInternet_ != nullptr;};
      void deleteAllowHoneypotAccessInternet() { this->allowHoneypotAccessInternet_ = nullptr;};
      inline bool getAllowHoneypotAccessInternet() const { DARABONBA_PTR_GET_DEFAULT(allowHoneypotAccessInternet_, false) };
      inline HoneypotNode& setAllowHoneypotAccessInternet(bool allowHoneypotAccessInternet) { DARABONBA_PTR_SET_VALUE(allowHoneypotAccessInternet_, allowHoneypotAccessInternet) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline HoneypotNode& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // ecsInstanceId Field Functions 
      bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
      void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
      inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
      inline HoneypotNode& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


      // honeypotTotalCount Field Functions 
      bool hasHoneypotTotalCount() const { return this->honeypotTotalCount_ != nullptr;};
      void deleteHoneypotTotalCount() { this->honeypotTotalCount_ = nullptr;};
      inline int32_t getHoneypotTotalCount() const { DARABONBA_PTR_GET_DEFAULT(honeypotTotalCount_, 0) };
      inline HoneypotNode& setHoneypotTotalCount(int32_t honeypotTotalCount) { DARABONBA_PTR_SET_VALUE(honeypotTotalCount_, honeypotTotalCount) };


      // honeypotUsedCount Field Functions 
      bool hasHoneypotUsedCount() const { return this->honeypotUsedCount_ != nullptr;};
      void deleteHoneypotUsedCount() { this->honeypotUsedCount_ = nullptr;};
      inline int32_t getHoneypotUsedCount() const { DARABONBA_PTR_GET_DEFAULT(honeypotUsedCount_, 0) };
      inline HoneypotNode& setHoneypotUsedCount(int32_t honeypotUsedCount) { DARABONBA_PTR_SET_VALUE(honeypotUsedCount_, honeypotUsedCount) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline HoneypotNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeIp Field Functions 
      bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
      void deleteNodeIp() { this->nodeIp_ = nullptr;};
      inline string getNodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
      inline HoneypotNode& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline HoneypotNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // probeTotalCount Field Functions 
      bool hasProbeTotalCount() const { return this->probeTotalCount_ != nullptr;};
      void deleteProbeTotalCount() { this->probeTotalCount_ = nullptr;};
      inline int32_t getProbeTotalCount() const { DARABONBA_PTR_GET_DEFAULT(probeTotalCount_, 0) };
      inline HoneypotNode& setProbeTotalCount(int32_t probeTotalCount) { DARABONBA_PTR_SET_VALUE(probeTotalCount_, probeTotalCount) };


      // probeUsedCount Field Functions 
      bool hasProbeUsedCount() const { return this->probeUsedCount_ != nullptr;};
      void deleteProbeUsedCount() { this->probeUsedCount_ = nullptr;};
      inline int32_t getProbeUsedCount() const { DARABONBA_PTR_GET_DEFAULT(probeUsedCount_, 0) };
      inline HoneypotNode& setProbeUsedCount(int32_t probeUsedCount) { DARABONBA_PTR_SET_VALUE(probeUsedCount_, probeUsedCount) };


      // securityGroupProbeIpList Field Functions 
      bool hasSecurityGroupProbeIpList() const { return this->securityGroupProbeIpList_ != nullptr;};
      void deleteSecurityGroupProbeIpList() { this->securityGroupProbeIpList_ = nullptr;};
      inline const vector<string> & getSecurityGroupProbeIpList() const { DARABONBA_PTR_GET_CONST(securityGroupProbeIpList_, vector<string>) };
      inline vector<string> getSecurityGroupProbeIpList() { DARABONBA_PTR_GET(securityGroupProbeIpList_, vector<string>) };
      inline HoneypotNode& setSecurityGroupProbeIpList(const vector<string> & securityGroupProbeIpList) { DARABONBA_PTR_SET_VALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };
      inline HoneypotNode& setSecurityGroupProbeIpList(vector<string> && securityGroupProbeIpList) { DARABONBA_PTR_SET_RVALUE(securityGroupProbeIpList_, securityGroupProbeIpList) };


      // totalStatus Field Functions 
      bool hasTotalStatus() const { return this->totalStatus_ != nullptr;};
      void deleteTotalStatus() { this->totalStatus_ = nullptr;};
      inline int32_t getTotalStatus() const { DARABONBA_PTR_GET_DEFAULT(totalStatus_, 0) };
      inline HoneypotNode& setTotalStatus(int32_t totalStatus) { DARABONBA_PTR_SET_VALUE(totalStatus_, totalStatus) };


      // upgradeAvailable Field Functions 
      bool hasUpgradeAvailable() const { return this->upgradeAvailable_ != nullptr;};
      void deleteUpgradeAvailable() { this->upgradeAvailable_ = nullptr;};
      inline bool getUpgradeAvailable() const { DARABONBA_PTR_GET_DEFAULT(upgradeAvailable_, false) };
      inline HoneypotNode& setUpgradeAvailable(bool upgradeAvailable) { DARABONBA_PTR_SET_VALUE(upgradeAvailable_, upgradeAvailable) };


    protected:
      // Indicates whether a honeypot is allowed to access the Internet. Valid values:
      // 
      // *   **true**: The honeypot is allowed to access the Internet.
      // *   **false**: The honeypot is not allowed to access the Internet.
      shared_ptr<bool> allowHoneypotAccessInternet_ {};
      // The time when the management node was created.
      shared_ptr<string> createTime_ {};
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
      // *   **0**: preparing
      // *   **1**: normal
      // *   **2**: abnormal
      // *   **4**: starting
      // *   **5**: upgrading
      shared_ptr<int32_t> totalStatus_ {};
      // Indicates whether the management node can be upgraded. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> upgradeAvailable_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->honeypotNode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHoneypotNodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // honeypotNode Field Functions 
    bool hasHoneypotNode() const { return this->honeypotNode_ != nullptr;};
    void deleteHoneypotNode() { this->honeypotNode_ = nullptr;};
    inline const GetHoneypotNodeResponseBody::HoneypotNode & getHoneypotNode() const { DARABONBA_PTR_GET_CONST(honeypotNode_, GetHoneypotNodeResponseBody::HoneypotNode) };
    inline GetHoneypotNodeResponseBody::HoneypotNode getHoneypotNode() { DARABONBA_PTR_GET(honeypotNode_, GetHoneypotNodeResponseBody::HoneypotNode) };
    inline GetHoneypotNodeResponseBody& setHoneypotNode(const GetHoneypotNodeResponseBody::HoneypotNode & honeypotNode) { DARABONBA_PTR_SET_VALUE(honeypotNode_, honeypotNode) };
    inline GetHoneypotNodeResponseBody& setHoneypotNode(GetHoneypotNodeResponseBody::HoneypotNode && honeypotNode) { DARABONBA_PTR_SET_RVALUE(honeypotNode_, honeypotNode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHoneypotNodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHoneypotNodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHoneypotNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHoneypotNodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The details of the management node.
    shared_ptr<GetHoneypotNodeResponseBody::HoneypotNode> honeypotNode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
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
