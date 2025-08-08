// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTaskFlowResponseBodyTaskFlowList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskFlowList, taskFlowList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskFlowList, taskFlowList_);
    };
    ListTaskFlowResponseBody() = default ;
    ListTaskFlowResponseBody(const ListTaskFlowResponseBody &) = default ;
    ListTaskFlowResponseBody(ListTaskFlowResponseBody &&) = default ;
    ListTaskFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowResponseBody() = default ;
    ListTaskFlowResponseBody& operator=(const ListTaskFlowResponseBody &) = default ;
    ListTaskFlowResponseBody& operator=(ListTaskFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->taskFlowList_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskFlowList Field Functions 
    bool hasTaskFlowList() const { return this->taskFlowList_ != nullptr;};
    void deleteTaskFlowList() { this->taskFlowList_ = nullptr;};
    inline const ListTaskFlowResponseBodyTaskFlowList & taskFlowList() const { DARABONBA_PTR_GET_CONST(taskFlowList_, ListTaskFlowResponseBodyTaskFlowList) };
    inline ListTaskFlowResponseBodyTaskFlowList taskFlowList() { DARABONBA_PTR_GET(taskFlowList_, ListTaskFlowResponseBodyTaskFlowList) };
    inline ListTaskFlowResponseBody& setTaskFlowList(const ListTaskFlowResponseBodyTaskFlowList & taskFlowList) { DARABONBA_PTR_SET_VALUE(taskFlowList_, taskFlowList) };
    inline ListTaskFlowResponseBody& setTaskFlowList(ListTaskFlowResponseBodyTaskFlowList && taskFlowList) { DARABONBA_PTR_SET_RVALUE(taskFlowList_, taskFlowList) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The information about the task flows returned.
    std::shared_ptr<ListTaskFlowResponseBodyTaskFlowList> taskFlowList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
