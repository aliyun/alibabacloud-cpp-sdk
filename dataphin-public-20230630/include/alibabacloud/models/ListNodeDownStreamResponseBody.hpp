// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListNodeDownStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDownStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeInfoList, nodeInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDownStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeInfoList, nodeInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListNodeDownStreamResponseBody() = default ;
    ListNodeDownStreamResponseBody(const ListNodeDownStreamResponseBody &) = default ;
    ListNodeDownStreamResponseBody(ListNodeDownStreamResponseBody &&) = default ;
    ListNodeDownStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDownStreamResponseBody() = default ;
    ListNodeDownStreamResponseBody& operator=(const ListNodeDownStreamResponseBody &) = default ;
    ListNodeDownStreamResponseBody& operator=(ListNodeDownStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(Depth, depth_);
        DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, NodeInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Depth, depth_);
        DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      NodeInfoList() = default ;
      NodeInfoList(const NodeInfoList &) = default ;
      NodeInfoList(NodeInfoList &&) = default ;
      NodeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeInfoList() = default ;
      NodeInfoList& operator=(const NodeInfoList &) = default ;
      NodeInfoList& operator=(NodeInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->depth_ == nullptr
        && this->fieldIdList_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // depth Field Functions 
      bool hasDepth() const { return this->depth_ != nullptr;};
      void deleteDepth() { this->depth_ = nullptr;};
      inline int32_t getDepth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
      inline NodeInfoList& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


      // fieldIdList Field Functions 
      bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
      void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
      inline const vector<string> & getFieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
      inline vector<string> getFieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
      inline NodeInfoList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
      inline NodeInfoList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline NodeInfoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NodeInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline NodeInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int32_t> depth_ {};
      shared_ptr<vector<string>> fieldIdList_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->nodeInfoList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListNodeDownStreamResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListNodeDownStreamResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNodeDownStreamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeInfoList Field Functions 
    bool hasNodeInfoList() const { return this->nodeInfoList_ != nullptr;};
    void deleteNodeInfoList() { this->nodeInfoList_ = nullptr;};
    inline const vector<ListNodeDownStreamResponseBody::NodeInfoList> & getNodeInfoList() const { DARABONBA_PTR_GET_CONST(nodeInfoList_, vector<ListNodeDownStreamResponseBody::NodeInfoList>) };
    inline vector<ListNodeDownStreamResponseBody::NodeInfoList> getNodeInfoList() { DARABONBA_PTR_GET(nodeInfoList_, vector<ListNodeDownStreamResponseBody::NodeInfoList>) };
    inline ListNodeDownStreamResponseBody& setNodeInfoList(const vector<ListNodeDownStreamResponseBody::NodeInfoList> & nodeInfoList) { DARABONBA_PTR_SET_VALUE(nodeInfoList_, nodeInfoList) };
    inline ListNodeDownStreamResponseBody& setNodeInfoList(vector<ListNodeDownStreamResponseBody::NodeInfoList> && nodeInfoList) { DARABONBA_PTR_SET_RVALUE(nodeInfoList_, nodeInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeDownStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNodeDownStreamResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<ListNodeDownStreamResponseBody::NodeInfoList>> nodeInfoList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
