// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWEDGESBYCONDITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWEDGESBYCONDITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTaskFlowEdgesByConditionResponseBodyEdges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowEdgesByConditionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowEdgesByConditionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Edges, edges_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowEdgesByConditionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Edges, edges_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTaskFlowEdgesByConditionResponseBody() = default ;
    ListTaskFlowEdgesByConditionResponseBody(const ListTaskFlowEdgesByConditionResponseBody &) = default ;
    ListTaskFlowEdgesByConditionResponseBody(ListTaskFlowEdgesByConditionResponseBody &&) = default ;
    ListTaskFlowEdgesByConditionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowEdgesByConditionResponseBody() = default ;
    ListTaskFlowEdgesByConditionResponseBody& operator=(const ListTaskFlowEdgesByConditionResponseBody &) = default ;
    ListTaskFlowEdgesByConditionResponseBody& operator=(ListTaskFlowEdgesByConditionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edges_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // edges Field Functions 
    bool hasEdges() const { return this->edges_ != nullptr;};
    void deleteEdges() { this->edges_ = nullptr;};
    inline const ListTaskFlowEdgesByConditionResponseBodyEdges & edges() const { DARABONBA_PTR_GET_CONST(edges_, ListTaskFlowEdgesByConditionResponseBodyEdges) };
    inline ListTaskFlowEdgesByConditionResponseBodyEdges edges() { DARABONBA_PTR_GET(edges_, ListTaskFlowEdgesByConditionResponseBodyEdges) };
    inline ListTaskFlowEdgesByConditionResponseBody& setEdges(const ListTaskFlowEdgesByConditionResponseBodyEdges & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
    inline ListTaskFlowEdgesByConditionResponseBody& setEdges(ListTaskFlowEdgesByConditionResponseBodyEdges && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowEdgesByConditionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowEdgesByConditionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowEdgesByConditionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowEdgesByConditionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of task flow edges.
    std::shared_ptr<ListTaskFlowEdgesByConditionResponseBodyEdges> edges_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
