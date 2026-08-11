// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEORGCREATENODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEORGCREATENODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseOrgCreateNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseOrgCreateNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseOrgCreateNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseOrgCreateNodeResponseBody() = default ;
    EnterpriseOrgCreateNodeResponseBody(const EnterpriseOrgCreateNodeResponseBody &) = default ;
    EnterpriseOrgCreateNodeResponseBody(EnterpriseOrgCreateNodeResponseBody &&) = default ;
    EnterpriseOrgCreateNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseOrgCreateNodeResponseBody() = default ;
    EnterpriseOrgCreateNodeResponseBody& operator=(const EnterpriseOrgCreateNodeResponseBody &) = default ;
    EnterpriseOrgCreateNodeResponseBody& operator=(EnterpriseOrgCreateNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(ParentNodeId, parentNodeId_);
        DARABONBA_PTR_TO_JSON(ParentNodeType, parentNodeType_);
        DARABONBA_PTR_TO_JSON(TreeId, treeId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(ParentNodeId, parentNodeId_);
        DARABONBA_PTR_FROM_JSON(ParentNodeType, parentNodeType_);
        DARABONBA_PTR_FROM_JSON(TreeId, treeId_);
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
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->id_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr && this->parentNodeId_ == nullptr
        && this->parentNodeType_ == nullptr && this->treeId_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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


      // parentNodeId Field Functions 
      bool hasParentNodeId() const { return this->parentNodeId_ != nullptr;};
      void deleteParentNodeId() { this->parentNodeId_ = nullptr;};
      inline string getParentNodeId() const { DARABONBA_PTR_GET_DEFAULT(parentNodeId_, "") };
      inline Data& setParentNodeId(string parentNodeId) { DARABONBA_PTR_SET_VALUE(parentNodeId_, parentNodeId) };


      // parentNodeType Field Functions 
      bool hasParentNodeType() const { return this->parentNodeType_ != nullptr;};
      void deleteParentNodeType() { this->parentNodeType_ = nullptr;};
      inline string getParentNodeType() const { DARABONBA_PTR_GET_DEFAULT(parentNodeType_, "") };
      inline Data& setParentNodeType(string parentNodeType) { DARABONBA_PTR_SET_VALUE(parentNodeType_, parentNodeType) };


      // treeId Field Functions 
      bool hasTreeId() const { return this->treeId_ != nullptr;};
      void deleteTreeId() { this->treeId_ = nullptr;};
      inline int64_t getTreeId() const { DARABONBA_PTR_GET_DEFAULT(treeId_, 0L) };
      inline Data& setTreeId(int64_t treeId) { DARABONBA_PTR_SET_VALUE(treeId_, treeId) };


    protected:
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> nodeName_ {};
      shared_ptr<string> nodeType_ {};
      shared_ptr<string> parentNodeId_ {};
      shared_ptr<string> parentNodeType_ {};
      shared_ptr<int64_t> treeId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseOrgCreateNodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EnterpriseOrgCreateNodeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EnterpriseOrgCreateNodeResponseBody::Data) };
    inline EnterpriseOrgCreateNodeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EnterpriseOrgCreateNodeResponseBody::Data) };
    inline EnterpriseOrgCreateNodeResponseBody& setData(const EnterpriseOrgCreateNodeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EnterpriseOrgCreateNodeResponseBody& setData(EnterpriseOrgCreateNodeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseOrgCreateNodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseOrgCreateNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseOrgCreateNodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<EnterpriseOrgCreateNodeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
