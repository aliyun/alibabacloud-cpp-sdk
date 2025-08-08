// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTaskFlowInstanceResponseBodyDAGInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DAGInstanceList, DAGInstanceList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DAGInstanceList, DAGInstanceList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTaskFlowInstanceResponseBody() = default ;
    ListTaskFlowInstanceResponseBody(const ListTaskFlowInstanceResponseBody &) = default ;
    ListTaskFlowInstanceResponseBody(ListTaskFlowInstanceResponseBody &&) = default ;
    ListTaskFlowInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowInstanceResponseBody() = default ;
    ListTaskFlowInstanceResponseBody& operator=(const ListTaskFlowInstanceResponseBody &) = default ;
    ListTaskFlowInstanceResponseBody& operator=(ListTaskFlowInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DAGInstanceList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // DAGInstanceList Field Functions 
    bool hasDAGInstanceList() const { return this->DAGInstanceList_ != nullptr;};
    void deleteDAGInstanceList() { this->DAGInstanceList_ = nullptr;};
    inline const ListTaskFlowInstanceResponseBodyDAGInstanceList & DAGInstanceList() const { DARABONBA_PTR_GET_CONST(DAGInstanceList_, ListTaskFlowInstanceResponseBodyDAGInstanceList) };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceList DAGInstanceList() { DARABONBA_PTR_GET(DAGInstanceList_, ListTaskFlowInstanceResponseBodyDAGInstanceList) };
    inline ListTaskFlowInstanceResponseBody& setDAGInstanceList(const ListTaskFlowInstanceResponseBodyDAGInstanceList & DAGInstanceList) { DARABONBA_PTR_SET_VALUE(DAGInstanceList_, DAGInstanceList) };
    inline ListTaskFlowInstanceResponseBody& setDAGInstanceList(ListTaskFlowInstanceResponseBodyDAGInstanceList && DAGInstanceList) { DARABONBA_PTR_SET_RVALUE(DAGInstanceList_, DAGInstanceList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowInstanceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowInstanceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTaskFlowInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the execution records returned.
    std::shared_ptr<ListTaskFlowInstanceResponseBodyDAGInstanceList> DAGInstanceList_ = nullptr;
    // The error code returned if the request fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of execution records returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
