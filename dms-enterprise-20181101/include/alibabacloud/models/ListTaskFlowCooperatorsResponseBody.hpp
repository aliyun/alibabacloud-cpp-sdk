// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWCOOPERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWCOOPERATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTaskFlowCooperatorsResponseBodyCooperatorList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowCooperatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowCooperatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CooperatorList, cooperatorList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowCooperatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CooperatorList, cooperatorList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTaskFlowCooperatorsResponseBody() = default ;
    ListTaskFlowCooperatorsResponseBody(const ListTaskFlowCooperatorsResponseBody &) = default ;
    ListTaskFlowCooperatorsResponseBody(ListTaskFlowCooperatorsResponseBody &&) = default ;
    ListTaskFlowCooperatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowCooperatorsResponseBody() = default ;
    ListTaskFlowCooperatorsResponseBody& operator=(const ListTaskFlowCooperatorsResponseBody &) = default ;
    ListTaskFlowCooperatorsResponseBody& operator=(ListTaskFlowCooperatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cooperatorList_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // cooperatorList Field Functions 
    bool hasCooperatorList() const { return this->cooperatorList_ != nullptr;};
    void deleteCooperatorList() { this->cooperatorList_ = nullptr;};
    inline const ListTaskFlowCooperatorsResponseBodyCooperatorList & cooperatorList() const { DARABONBA_PTR_GET_CONST(cooperatorList_, ListTaskFlowCooperatorsResponseBodyCooperatorList) };
    inline ListTaskFlowCooperatorsResponseBodyCooperatorList cooperatorList() { DARABONBA_PTR_GET(cooperatorList_, ListTaskFlowCooperatorsResponseBodyCooperatorList) };
    inline ListTaskFlowCooperatorsResponseBody& setCooperatorList(const ListTaskFlowCooperatorsResponseBodyCooperatorList & cooperatorList) { DARABONBA_PTR_SET_VALUE(cooperatorList_, cooperatorList) };
    inline ListTaskFlowCooperatorsResponseBody& setCooperatorList(ListTaskFlowCooperatorsResponseBodyCooperatorList && cooperatorList) { DARABONBA_PTR_SET_RVALUE(cooperatorList_, cooperatorList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowCooperatorsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowCooperatorsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowCooperatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowCooperatorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The users that are involved in the task flow.
    std::shared_ptr<ListTaskFlowCooperatorsResponseBodyCooperatorList> cooperatorList_ = nullptr;
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
