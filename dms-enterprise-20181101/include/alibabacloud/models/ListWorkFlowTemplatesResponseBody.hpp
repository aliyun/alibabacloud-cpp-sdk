// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkFlowTemplatesResponseBodyWorkFlowTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkFlowTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkFlowTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(WorkFlowTemplates, workFlowTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkFlowTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(WorkFlowTemplates, workFlowTemplates_);
    };
    ListWorkFlowTemplatesResponseBody() = default ;
    ListWorkFlowTemplatesResponseBody(const ListWorkFlowTemplatesResponseBody &) = default ;
    ListWorkFlowTemplatesResponseBody(ListWorkFlowTemplatesResponseBody &&) = default ;
    ListWorkFlowTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkFlowTemplatesResponseBody() = default ;
    ListWorkFlowTemplatesResponseBody& operator=(const ListWorkFlowTemplatesResponseBody &) = default ;
    ListWorkFlowTemplatesResponseBody& operator=(ListWorkFlowTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->workFlowTemplates_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListWorkFlowTemplatesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListWorkFlowTemplatesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkFlowTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkFlowTemplatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workFlowTemplates Field Functions 
    bool hasWorkFlowTemplates() const { return this->workFlowTemplates_ != nullptr;};
    void deleteWorkFlowTemplates() { this->workFlowTemplates_ = nullptr;};
    inline const ListWorkFlowTemplatesResponseBodyWorkFlowTemplates & workFlowTemplates() const { DARABONBA_PTR_GET_CONST(workFlowTemplates_, ListWorkFlowTemplatesResponseBodyWorkFlowTemplates) };
    inline ListWorkFlowTemplatesResponseBodyWorkFlowTemplates workFlowTemplates() { DARABONBA_PTR_GET(workFlowTemplates_, ListWorkFlowTemplatesResponseBodyWorkFlowTemplates) };
    inline ListWorkFlowTemplatesResponseBody& setWorkFlowTemplates(const ListWorkFlowTemplatesResponseBodyWorkFlowTemplates & workFlowTemplates) { DARABONBA_PTR_SET_VALUE(workFlowTemplates_, workFlowTemplates) };
    inline ListWorkFlowTemplatesResponseBody& setWorkFlowTemplates(ListWorkFlowTemplatesResponseBodyWorkFlowTemplates && workFlowTemplates) { DARABONBA_PTR_SET_RVALUE(workFlowTemplates_, workFlowTemplates) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The approval templates.
    std::shared_ptr<ListWorkFlowTemplatesResponseBodyWorkFlowTemplates> workFlowTemplates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
