// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NodeModels, nodeModels_);
      DARABONBA_PTR_TO_JSON(PerPageSize, perPageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ToPage, toPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NodeModels, nodeModels_);
      DARABONBA_PTR_FROM_JSON(PerPageSize, perPageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ToPage, toPage_);
    };
    ListNodesResponseBody() = default ;
    ListNodesResponseBody(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody(ListNodesResponseBody &&) = default ;
    ListNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBody() = default ;
    ListNodesResponseBody& operator=(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody& operator=(ListNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeModels& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      };
      friend void from_json(const Darabonba::Json& j, NodeModels& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      };
      NodeModels() = default ;
      NodeModels(const NodeModels &) = default ;
      NodeModels(NodeModels &&) = default ;
      NodeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeModels() = default ;
      NodeModels& operator=(const NodeModels &) = default ;
      NodeModels& operator=(NodeModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->nodeId_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline NodeModels& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline NodeModels& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    protected:
      // The billing method of the resource node.
      // 
      // >  This parameter is returned only if the ChargeResourceMode parameter of the delivery group to which the resource node belongs is set to Node.
      // 
      // Valid values:
      // 
      // *   PostPaid: pay-as-you-go
      // *   Prepaid: subscription
      shared_ptr<string> chargeType_ {};
      // The ID of the resource node.
      // 
      // >  This parameter is returned only if the ChargeResourceMode parameter of the delivery group to which the resource node belongs is set to Node.
      shared_ptr<string> nodeId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->nodeModels_ == nullptr && this->perPageSize_ == nullptr && this->requestId_ == nullptr && this->toPage_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListNodesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nodeModels Field Functions 
    bool hasNodeModels() const { return this->nodeModels_ != nullptr;};
    void deleteNodeModels() { this->nodeModels_ = nullptr;};
    inline const vector<ListNodesResponseBody::NodeModels> & getNodeModels() const { DARABONBA_PTR_GET_CONST(nodeModels_, vector<ListNodesResponseBody::NodeModels>) };
    inline vector<ListNodesResponseBody::NodeModels> getNodeModels() { DARABONBA_PTR_GET(nodeModels_, vector<ListNodesResponseBody::NodeModels>) };
    inline ListNodesResponseBody& setNodeModels(const vector<ListNodesResponseBody::NodeModels> & nodeModels) { DARABONBA_PTR_SET_VALUE(nodeModels_, nodeModels) };
    inline ListNodesResponseBody& setNodeModels(vector<ListNodesResponseBody::NodeModels> && nodeModels) { DARABONBA_PTR_SET_RVALUE(nodeModels_, nodeModels) };


    // perPageSize Field Functions 
    bool hasPerPageSize() const { return this->perPageSize_ != nullptr;};
    void deletePerPageSize() { this->perPageSize_ = nullptr;};
    inline int32_t getPerPageSize() const { DARABONBA_PTR_GET_DEFAULT(perPageSize_, 0) };
    inline ListNodesResponseBody& setPerPageSize(int32_t perPageSize) { DARABONBA_PTR_SET_VALUE(perPageSize_, perPageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toPage Field Functions 
    bool hasToPage() const { return this->toPage_ != nullptr;};
    void deleteToPage() { this->toPage_ = nullptr;};
    inline int32_t getToPage() const { DARABONBA_PTR_GET_DEFAULT(toPage_, 0) };
    inline ListNodesResponseBody& setToPage(int32_t toPage) { DARABONBA_PTR_SET_VALUE(toPage_, toPage) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The resource nodes.
    shared_ptr<vector<ListNodesResponseBody::NodeModels>> nodeModels_ {};
    // The number of entries per page.
    shared_ptr<int32_t> perPageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The page number.
    shared_ptr<int32_t> toPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
