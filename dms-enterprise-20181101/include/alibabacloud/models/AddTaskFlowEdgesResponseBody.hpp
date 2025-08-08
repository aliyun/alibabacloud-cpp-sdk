// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDTASKFLOWEDGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddTaskFlowEdgesResponseBodyEdgeIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddTaskFlowEdgesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTaskFlowEdgesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeIds, edgeIds_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddTaskFlowEdgesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeIds, edgeIds_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddTaskFlowEdgesResponseBody() = default ;
    AddTaskFlowEdgesResponseBody(const AddTaskFlowEdgesResponseBody &) = default ;
    AddTaskFlowEdgesResponseBody(AddTaskFlowEdgesResponseBody &&) = default ;
    AddTaskFlowEdgesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTaskFlowEdgesResponseBody() = default ;
    AddTaskFlowEdgesResponseBody& operator=(const AddTaskFlowEdgesResponseBody &) = default ;
    AddTaskFlowEdgesResponseBody& operator=(AddTaskFlowEdgesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edgeIds_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // edgeIds Field Functions 
    bool hasEdgeIds() const { return this->edgeIds_ != nullptr;};
    void deleteEdgeIds() { this->edgeIds_ = nullptr;};
    inline const AddTaskFlowEdgesResponseBodyEdgeIds & edgeIds() const { DARABONBA_PTR_GET_CONST(edgeIds_, AddTaskFlowEdgesResponseBodyEdgeIds) };
    inline AddTaskFlowEdgesResponseBodyEdgeIds edgeIds() { DARABONBA_PTR_GET(edgeIds_, AddTaskFlowEdgesResponseBodyEdgeIds) };
    inline AddTaskFlowEdgesResponseBody& setEdgeIds(const AddTaskFlowEdgesResponseBodyEdgeIds & edgeIds) { DARABONBA_PTR_SET_VALUE(edgeIds_, edgeIds) };
    inline AddTaskFlowEdgesResponseBody& setEdgeIds(AddTaskFlowEdgesResponseBodyEdgeIds && edgeIds) { DARABONBA_PTR_SET_RVALUE(edgeIds_, edgeIds) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AddTaskFlowEdgesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline AddTaskFlowEdgesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddTaskFlowEdgesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddTaskFlowEdgesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of task flow edge IDs.
    std::shared_ptr<AddTaskFlowEdgesResponseBodyEdgeIds> edgeIds_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
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
