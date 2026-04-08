// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODETYPELISTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODETYPELISTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetNodeTypeListInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeTypeListInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeTypeInfoList, nodeTypeInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeTypeListInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeTypeInfoList, nodeTypeInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNodeTypeListInfoResponseBody() = default ;
    GetNodeTypeListInfoResponseBody(const GetNodeTypeListInfoResponseBody &) = default ;
    GetNodeTypeListInfoResponseBody(GetNodeTypeListInfoResponseBody &&) = default ;
    GetNodeTypeListInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeTypeListInfoResponseBody() = default ;
    GetNodeTypeListInfoResponseBody& operator=(const GetNodeTypeListInfoResponseBody &) = default ;
    GetNodeTypeListInfoResponseBody& operator=(GetNodeTypeListInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeTypeInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeTypeInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(NodeTypeInfo, nodeTypeInfo_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, NodeTypeInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeTypeInfo, nodeTypeInfo_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      NodeTypeInfoList() = default ;
      NodeTypeInfoList(const NodeTypeInfoList &) = default ;
      NodeTypeInfoList(NodeTypeInfoList &&) = default ;
      NodeTypeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeTypeInfoList() = default ;
      NodeTypeInfoList& operator=(const NodeTypeInfoList &) = default ;
      NodeTypeInfoList& operator=(NodeTypeInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeTypeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeTypeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(NodeTypeName, nodeTypeName_);
        };
        friend void from_json(const Darabonba::Json& j, NodeTypeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(NodeTypeName, nodeTypeName_);
        };
        NodeTypeInfo() = default ;
        NodeTypeInfo(const NodeTypeInfo &) = default ;
        NodeTypeInfo(NodeTypeInfo &&) = default ;
        NodeTypeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeTypeInfo() = default ;
        NodeTypeInfo& operator=(const NodeTypeInfo &) = default ;
        NodeTypeInfo& operator=(NodeTypeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeType_ == nullptr
        && this->nodeTypeName_ == nullptr; };
        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline int32_t getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0) };
        inline NodeTypeInfo& setNodeType(int32_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // nodeTypeName Field Functions 
        bool hasNodeTypeName() const { return this->nodeTypeName_ != nullptr;};
        void deleteNodeTypeName() { this->nodeTypeName_ = nullptr;};
        inline string getNodeTypeName() const { DARABONBA_PTR_GET_DEFAULT(nodeTypeName_, "") };
        inline NodeTypeInfo& setNodeTypeName(string nodeTypeName) { DARABONBA_PTR_SET_VALUE(nodeTypeName_, nodeTypeName) };


      protected:
        // The type of the node, which is specified by a number.
        shared_ptr<int32_t> nodeType_ {};
        // The name of the node type.
        shared_ptr<string> nodeTypeName_ {};
      };

      virtual bool empty() const override { return this->nodeTypeInfo_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // nodeTypeInfo Field Functions 
      bool hasNodeTypeInfo() const { return this->nodeTypeInfo_ != nullptr;};
      void deleteNodeTypeInfo() { this->nodeTypeInfo_ = nullptr;};
      inline const vector<NodeTypeInfoList::NodeTypeInfo> & getNodeTypeInfo() const { DARABONBA_PTR_GET_CONST(nodeTypeInfo_, vector<NodeTypeInfoList::NodeTypeInfo>) };
      inline vector<NodeTypeInfoList::NodeTypeInfo> getNodeTypeInfo() { DARABONBA_PTR_GET(nodeTypeInfo_, vector<NodeTypeInfoList::NodeTypeInfo>) };
      inline NodeTypeInfoList& setNodeTypeInfo(const vector<NodeTypeInfoList::NodeTypeInfo> & nodeTypeInfo) { DARABONBA_PTR_SET_VALUE(nodeTypeInfo_, nodeTypeInfo) };
      inline NodeTypeInfoList& setNodeTypeInfo(vector<NodeTypeInfoList::NodeTypeInfo> && nodeTypeInfo) { DARABONBA_PTR_SET_RVALUE(nodeTypeInfo_, nodeTypeInfo) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline NodeTypeInfoList& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline NodeTypeInfoList& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline NodeTypeInfoList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The information about a node type.
      shared_ptr<vector<NodeTypeInfoList::NodeTypeInfo>> nodeTypeInfo_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->nodeTypeInfoList_ == nullptr
        && this->requestId_ == nullptr; };
    // nodeTypeInfoList Field Functions 
    bool hasNodeTypeInfoList() const { return this->nodeTypeInfoList_ != nullptr;};
    void deleteNodeTypeInfoList() { this->nodeTypeInfoList_ = nullptr;};
    inline const GetNodeTypeListInfoResponseBody::NodeTypeInfoList & getNodeTypeInfoList() const { DARABONBA_PTR_GET_CONST(nodeTypeInfoList_, GetNodeTypeListInfoResponseBody::NodeTypeInfoList) };
    inline GetNodeTypeListInfoResponseBody::NodeTypeInfoList getNodeTypeInfoList() { DARABONBA_PTR_GET(nodeTypeInfoList_, GetNodeTypeListInfoResponseBody::NodeTypeInfoList) };
    inline GetNodeTypeListInfoResponseBody& setNodeTypeInfoList(const GetNodeTypeListInfoResponseBody::NodeTypeInfoList & nodeTypeInfoList) { DARABONBA_PTR_SET_VALUE(nodeTypeInfoList_, nodeTypeInfoList) };
    inline GetNodeTypeListInfoResponseBody& setNodeTypeInfoList(GetNodeTypeListInfoResponseBody::NodeTypeInfoList && nodeTypeInfoList) { DARABONBA_PTR_SET_RVALUE(nodeTypeInfoList_, nodeTypeInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNodeTypeListInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of node types.
    shared_ptr<GetNodeTypeListInfoResponseBody::NodeTypeInfoList> nodeTypeInfoList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
