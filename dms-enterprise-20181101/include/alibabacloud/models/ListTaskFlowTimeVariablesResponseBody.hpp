// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWTIMEVARIABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWTIMEVARIABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTaskFlowTimeVariablesResponseBodyTimeVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowTimeVariablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowTimeVariablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowTimeVariablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
    };
    ListTaskFlowTimeVariablesResponseBody() = default ;
    ListTaskFlowTimeVariablesResponseBody(const ListTaskFlowTimeVariablesResponseBody &) = default ;
    ListTaskFlowTimeVariablesResponseBody(ListTaskFlowTimeVariablesResponseBody &&) = default ;
    ListTaskFlowTimeVariablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowTimeVariablesResponseBody() = default ;
    ListTaskFlowTimeVariablesResponseBody& operator=(const ListTaskFlowTimeVariablesResponseBody &) = default ;
    ListTaskFlowTimeVariablesResponseBody& operator=(ListTaskFlowTimeVariablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->timeVariables_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowTimeVariablesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowTimeVariablesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowTimeVariablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowTimeVariablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timeVariables Field Functions 
    bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
    void deleteTimeVariables() { this->timeVariables_ = nullptr;};
    inline const ListTaskFlowTimeVariablesResponseBodyTimeVariables & timeVariables() const { DARABONBA_PTR_GET_CONST(timeVariables_, ListTaskFlowTimeVariablesResponseBodyTimeVariables) };
    inline ListTaskFlowTimeVariablesResponseBodyTimeVariables timeVariables() { DARABONBA_PTR_GET(timeVariables_, ListTaskFlowTimeVariablesResponseBodyTimeVariables) };
    inline ListTaskFlowTimeVariablesResponseBody& setTimeVariables(const ListTaskFlowTimeVariablesResponseBodyTimeVariables & timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };
    inline ListTaskFlowTimeVariablesResponseBody& setTimeVariables(ListTaskFlowTimeVariablesResponseBodyTimeVariables && timeVariables) { DARABONBA_PTR_SET_RVALUE(timeVariables_, timeVariables) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The time variables for the task flow.
    std::shared_ptr<ListTaskFlowTimeVariablesResponseBodyTimeVariables> timeVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
