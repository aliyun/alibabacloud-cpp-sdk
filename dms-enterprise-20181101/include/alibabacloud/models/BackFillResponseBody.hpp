// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKFILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BACKFILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BackFillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackFillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DagInstanceId, dagInstanceId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BackFillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DagInstanceId, dagInstanceId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BackFillResponseBody() = default ;
    BackFillResponseBody(const BackFillResponseBody &) = default ;
    BackFillResponseBody(BackFillResponseBody &&) = default ;
    BackFillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackFillResponseBody() = default ;
    BackFillResponseBody& operator=(const BackFillResponseBody &) = default ;
    BackFillResponseBody& operator=(BackFillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagInstanceId_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->nodeId_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // dagInstanceId Field Functions 
    bool hasDagInstanceId() const { return this->dagInstanceId_ != nullptr;};
    void deleteDagInstanceId() { this->dagInstanceId_ = nullptr;};
    inline int64_t dagInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dagInstanceId_, 0L) };
    inline BackFillResponseBody& setDagInstanceId(int64_t dagInstanceId) { DARABONBA_PTR_SET_VALUE(dagInstanceId_, dagInstanceId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BackFillResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BackFillResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline BackFillResponseBody& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BackFillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BackFillResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the execution record of the task flow.
    std::shared_ptr<int64_t> dagInstanceId_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The ID of the request.
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
