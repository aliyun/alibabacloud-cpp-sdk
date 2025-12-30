// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEPHYSICALNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESUMEPHYSICALNODERESPONSEBODY_HPP_
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
  class ResumePhysicalNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumePhysicalNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeOperateResultList, nodeOperateResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ResumePhysicalNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeOperateResultList, nodeOperateResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ResumePhysicalNodeResponseBody() = default ;
    ResumePhysicalNodeResponseBody(const ResumePhysicalNodeResponseBody &) = default ;
    ResumePhysicalNodeResponseBody(ResumePhysicalNodeResponseBody &&) = default ;
    ResumePhysicalNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumePhysicalNodeResponseBody() = default ;
    ResumePhysicalNodeResponseBody& operator=(const ResumePhysicalNodeResponseBody &) = default ;
    ResumePhysicalNodeResponseBody& operator=(ResumePhysicalNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeOperateResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeOperateResultList& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, NodeOperateResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      NodeOperateResultList() = default ;
      NodeOperateResultList(const NodeOperateResultList &) = default ;
      NodeOperateResultList(NodeOperateResultList &&) = default ;
      NodeOperateResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeOperateResultList() = default ;
      NodeOperateResultList& operator=(const NodeOperateResultList &) = default ;
      NodeOperateResultList& operator=(NodeOperateResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->nodeId_ == nullptr && this->status_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline NodeOperateResultList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline NodeOperateResultList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NodeOperateResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->nodeOperateResultList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResumePhysicalNodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ResumePhysicalNodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResumePhysicalNodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeOperateResultList Field Functions 
    bool hasNodeOperateResultList() const { return this->nodeOperateResultList_ != nullptr;};
    void deleteNodeOperateResultList() { this->nodeOperateResultList_ = nullptr;};
    inline const vector<ResumePhysicalNodeResponseBody::NodeOperateResultList> & getNodeOperateResultList() const { DARABONBA_PTR_GET_CONST(nodeOperateResultList_, vector<ResumePhysicalNodeResponseBody::NodeOperateResultList>) };
    inline vector<ResumePhysicalNodeResponseBody::NodeOperateResultList> getNodeOperateResultList() { DARABONBA_PTR_GET(nodeOperateResultList_, vector<ResumePhysicalNodeResponseBody::NodeOperateResultList>) };
    inline ResumePhysicalNodeResponseBody& setNodeOperateResultList(const vector<ResumePhysicalNodeResponseBody::NodeOperateResultList> & nodeOperateResultList) { DARABONBA_PTR_SET_VALUE(nodeOperateResultList_, nodeOperateResultList) };
    inline ResumePhysicalNodeResponseBody& setNodeOperateResultList(vector<ResumePhysicalNodeResponseBody::NodeOperateResultList> && nodeOperateResultList) { DARABONBA_PTR_SET_RVALUE(nodeOperateResultList_, nodeOperateResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResumePhysicalNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ResumePhysicalNodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<ResumePhysicalNodeResponseBody::NodeOperateResultList>> nodeOperateResultList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
