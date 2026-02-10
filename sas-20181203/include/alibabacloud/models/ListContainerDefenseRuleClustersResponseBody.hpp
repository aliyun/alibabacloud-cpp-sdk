// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULECLUSTERSRESPONSEBODY_HPP_
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
  class ListContainerDefenseRuleClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContainerDefenseRuleClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListContainerDefenseRuleClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListContainerDefenseRuleClustersResponseBody() = default ;
    ListContainerDefenseRuleClustersResponseBody(const ListContainerDefenseRuleClustersResponseBody &) = default ;
    ListContainerDefenseRuleClustersResponseBody(ListContainerDefenseRuleClustersResponseBody &&) = default ;
    ListContainerDefenseRuleClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContainerDefenseRuleClustersResponseBody() = default ;
    ListContainerDefenseRuleClustersResponseBody& operator=(const ListContainerDefenseRuleClustersResponseBody &) = default ;
    ListContainerDefenseRuleClustersResponseBody& operator=(ListContainerDefenseRuleClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterList& obj) { 
        DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterList& obj) { 
        DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      };
      ClusterList() = default ;
      ClusterList(const ClusterList &) = default ;
      ClusterList(ClusterList &&) = default ;
      ClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterList() = default ;
      ClusterList& operator=(const ClusterList &) = default ;
      ClusterList& operator=(ClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allNamespace_ == nullptr
        && this->clusterId_ == nullptr && this->namespaces_ == nullptr && this->ruleId_ == nullptr; };
      // allNamespace Field Functions 
      bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
      void deleteAllNamespace() { this->allNamespace_ = nullptr;};
      inline int32_t getAllNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
      inline ClusterList& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ClusterList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // namespaces Field Functions 
      bool hasNamespaces() const { return this->namespaces_ != nullptr;};
      void deleteNamespaces() { this->namespaces_ = nullptr;};
      inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
      inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
      inline ClusterList& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
      inline ClusterList& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline ClusterList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      // Indicates whether all namespaces are included. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> allNamespace_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The namespaces.
      shared_ptr<vector<string>> namespaces_ {};
      // The ID of the rule.
      // 
      // >  You can call the [ListInterceptionRulePage](https://help.aliyun.com/document_detail/2590599.html) operation to query the IDs of rules.
      shared_ptr<int64_t> ruleId_ {};
    };

    virtual bool empty() const override { return this->clusterList_ == nullptr
        && this->code_ == nullptr && this->count_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const vector<ListContainerDefenseRuleClustersResponseBody::ClusterList> & getClusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, vector<ListContainerDefenseRuleClustersResponseBody::ClusterList>) };
    inline vector<ListContainerDefenseRuleClustersResponseBody::ClusterList> getClusterList() { DARABONBA_PTR_GET(clusterList_, vector<ListContainerDefenseRuleClustersResponseBody::ClusterList>) };
    inline ListContainerDefenseRuleClustersResponseBody& setClusterList(const vector<ListContainerDefenseRuleClustersResponseBody::ClusterList> & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline ListContainerDefenseRuleClustersResponseBody& setClusterList(vector<ListContainerDefenseRuleClustersResponseBody::ClusterList> && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContainerDefenseRuleClustersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListContainerDefenseRuleClustersResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListContainerDefenseRuleClustersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContainerDefenseRuleClustersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContainerDefenseRuleClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListContainerDefenseRuleClustersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The clusters.
    shared_ptr<vector<ListContainerDefenseRuleClustersResponseBody::ClusterList>> clusterList_ {};
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
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
