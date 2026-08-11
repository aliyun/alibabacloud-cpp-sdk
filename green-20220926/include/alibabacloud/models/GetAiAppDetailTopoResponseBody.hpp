// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPDETAILTOPORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPDETAILTOPORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppDetailTopoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppDetailTopoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppDetailTopoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAiAppDetailTopoResponseBody() = default ;
    GetAiAppDetailTopoResponseBody(const GetAiAppDetailTopoResponseBody &) = default ;
    GetAiAppDetailTopoResponseBody(GetAiAppDetailTopoResponseBody &&) = default ;
    GetAiAppDetailTopoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppDetailTopoResponseBody() = default ;
    GetAiAppDetailTopoResponseBody& operator=(const GetAiAppDetailTopoResponseBody &) = default ;
    GetAiAppDetailTopoResponseBody& operator=(GetAiAppDetailTopoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NodeCategory, nodeCategory_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(WarningCount, warningCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeCategory, nodeCategory_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(WarningCount, warningCount_);
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
      virtual bool empty() const override { return this->nodeCategory_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr && this->requestCount_ == nullptr && this->riskLevel_ == nullptr
        && this->warningCount_ == nullptr; };
      // nodeCategory Field Functions 
      bool hasNodeCategory() const { return this->nodeCategory_ != nullptr;};
      void deleteNodeCategory() { this->nodeCategory_ = nullptr;};
      inline string getNodeCategory() const { DARABONBA_PTR_GET_DEFAULT(nodeCategory_, "") };
      inline Data& setNodeCategory(string nodeCategory) { DARABONBA_PTR_SET_VALUE(nodeCategory_, nodeCategory) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Data& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Data& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // requestCount Field Functions 
      bool hasRequestCount() const { return this->requestCount_ != nullptr;};
      void deleteRequestCount() { this->requestCount_ = nullptr;};
      inline int64_t getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
      inline Data& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // warningCount Field Functions 
      bool hasWarningCount() const { return this->warningCount_ != nullptr;};
      void deleteWarningCount() { this->warningCount_ = nullptr;};
      inline int32_t getWarningCount() const { DARABONBA_PTR_GET_DEFAULT(warningCount_, 0) };
      inline Data& setWarningCount(int32_t warningCount) { DARABONBA_PTR_SET_VALUE(warningCount_, warningCount) };


    protected:
      // The node category.
      // 
      // - LLM
      // 
      // - Knowledge
      // 
      // - Tools
      // 
      // - Others
      shared_ptr<string> nodeCategory_ {};
      // The ID of the node.
      shared_ptr<string> nodeId_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The node type. Valid values:
      // 
      // - **APP**: end-to-end agent.
      // - **MODEL**: large language model.
      // - **TOOL**: tool.
      shared_ptr<string> nodeType_ {};
      // The request count.
      shared_ptr<int64_t> requestCount_ {};
      // The risk level.
      shared_ptr<string> riskLevel_ {};
      // The number of alerts.
      shared_ptr<int32_t> warningCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAiAppDetailTopoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAiAppDetailTopoResponseBody::Data>) };
    inline vector<GetAiAppDetailTopoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetAiAppDetailTopoResponseBody::Data>) };
    inline GetAiAppDetailTopoResponseBody& setData(const vector<GetAiAppDetailTopoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiAppDetailTopoResponseBody& setData(vector<GetAiAppDetailTopoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiAppDetailTopoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<vector<GetAiAppDetailTopoResponseBody::Data>> data_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
