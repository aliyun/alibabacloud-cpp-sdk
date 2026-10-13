// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCSOURCETREENODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCSOURCETREENODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListContextDatabaseSyncSourceTreeNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseSyncSourceTreeNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseSyncSourceTreeNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListContextDatabaseSyncSourceTreeNodesResponseBody() = default ;
    ListContextDatabaseSyncSourceTreeNodesResponseBody(const ListContextDatabaseSyncSourceTreeNodesResponseBody &) = default ;
    ListContextDatabaseSyncSourceTreeNodesResponseBody(ListContextDatabaseSyncSourceTreeNodesResponseBody &&) = default ;
    ListContextDatabaseSyncSourceTreeNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseSyncSourceTreeNodesResponseBody() = default ;
    ListContextDatabaseSyncSourceTreeNodesResponseBody& operator=(const ListContextDatabaseSyncSourceTreeNodesResponseBody &) = default ;
    ListContextDatabaseSyncSourceTreeNodesResponseBody& operator=(ListContextDatabaseSyncSourceTreeNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DiscoveredAt, discoveredAt_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(HasChildren, hasChildren_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(NodeKey, nodeKey_);
        DARABONBA_PTR_TO_JSON(ParentKey, parentKey_);
        DARABONBA_PTR_TO_JSON(StaleAt, staleAt_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UnsupportedReason, unsupportedReason_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DiscoveredAt, discoveredAt_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(HasChildren, hasChildren_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(NodeKey, nodeKey_);
        DARABONBA_PTR_FROM_JSON(ParentKey, parentKey_);
        DARABONBA_PTR_FROM_JSON(StaleAt, staleAt_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UnsupportedReason, unsupportedReason_);
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
      virtual bool empty() const override { return this->discoveredAt_ == nullptr
        && this->extension_ == nullptr && this->hasChildren_ == nullptr && this->kind_ == nullptr && this->nodeKey_ == nullptr && this->parentKey_ == nullptr
        && this->staleAt_ == nullptr && this->title_ == nullptr && this->unsupportedReason_ == nullptr; };
      // discoveredAt Field Functions 
      bool hasDiscoveredAt() const { return this->discoveredAt_ != nullptr;};
      void deleteDiscoveredAt() { this->discoveredAt_ = nullptr;};
      inline string getDiscoveredAt() const { DARABONBA_PTR_GET_DEFAULT(discoveredAt_, "") };
      inline Data& setDiscoveredAt(string discoveredAt) { DARABONBA_PTR_SET_VALUE(discoveredAt_, discoveredAt) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Data& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // hasChildren Field Functions 
      bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
      void deleteHasChildren() { this->hasChildren_ = nullptr;};
      inline bool getHasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
      inline Data& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline Data& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // nodeKey Field Functions 
      bool hasNodeKey() const { return this->nodeKey_ != nullptr;};
      void deleteNodeKey() { this->nodeKey_ = nullptr;};
      inline string getNodeKey() const { DARABONBA_PTR_GET_DEFAULT(nodeKey_, "") };
      inline Data& setNodeKey(string nodeKey) { DARABONBA_PTR_SET_VALUE(nodeKey_, nodeKey) };


      // parentKey Field Functions 
      bool hasParentKey() const { return this->parentKey_ != nullptr;};
      void deleteParentKey() { this->parentKey_ = nullptr;};
      inline string getParentKey() const { DARABONBA_PTR_GET_DEFAULT(parentKey_, "") };
      inline Data& setParentKey(string parentKey) { DARABONBA_PTR_SET_VALUE(parentKey_, parentKey) };


      // staleAt Field Functions 
      bool hasStaleAt() const { return this->staleAt_ != nullptr;};
      void deleteStaleAt() { this->staleAt_ = nullptr;};
      inline string getStaleAt() const { DARABONBA_PTR_GET_DEFAULT(staleAt_, "") };
      inline Data& setStaleAt(string staleAt) { DARABONBA_PTR_SET_VALUE(staleAt_, staleAt) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // unsupportedReason Field Functions 
      bool hasUnsupportedReason() const { return this->unsupportedReason_ != nullptr;};
      void deleteUnsupportedReason() { this->unsupportedReason_ = nullptr;};
      inline string getUnsupportedReason() const { DARABONBA_PTR_GET_DEFAULT(unsupportedReason_, "") };
      inline Data& setUnsupportedReason(string unsupportedReason) { DARABONBA_PTR_SET_VALUE(unsupportedReason_, unsupportedReason) };


    protected:
      // The discovery time.
      shared_ptr<string> discoveredAt_ {};
      // The file name extension.
      shared_ptr<string> extension_ {};
      // Indicates whether the node has child nodes.
      shared_ptr<bool> hasChildren_ {};
      // The type.
      shared_ptr<string> kind_ {};
      // The node identifier.
      shared_ptr<string> nodeKey_ {};
      // The parent node identifier.
      shared_ptr<string> parentKey_ {};
      // The expiration time.
      shared_ptr<string> staleAt_ {};
      // The title.
      shared_ptr<string> title_ {};
      // The reason why the operation is not supported.
      shared_ptr<string> unsupportedReason_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContextDatabaseSyncSourceTreeNodesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListContextDatabaseSyncSourceTreeNodesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListContextDatabaseSyncSourceTreeNodesResponseBody::Data>) };
    inline vector<ListContextDatabaseSyncSourceTreeNodesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListContextDatabaseSyncSourceTreeNodesResponseBody::Data>) };
    inline ListContextDatabaseSyncSourceTreeNodesResponseBody& setData(const vector<ListContextDatabaseSyncSourceTreeNodesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListContextDatabaseSyncSourceTreeNodesResponseBody& setData(vector<ListContextDatabaseSyncSourceTreeNodesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListContextDatabaseSyncSourceTreeNodesResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContextDatabaseSyncSourceTreeNodesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextDatabaseSyncSourceTreeNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListContextDatabaseSyncSourceTreeNodesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<ListContextDatabaseSyncSourceTreeNodesResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
