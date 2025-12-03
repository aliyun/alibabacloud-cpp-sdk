// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWorkItemResponseBodyWorkitem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateWorkItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(workitem, workitem_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(workitem, workitem_);
    };
    UpdateWorkItemResponseBody() = default ;
    UpdateWorkItemResponseBody(const UpdateWorkItemResponseBody &) = default ;
    UpdateWorkItemResponseBody(UpdateWorkItemResponseBody &&) = default ;
    UpdateWorkItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkItemResponseBody() = default ;
    UpdateWorkItemResponseBody& operator=(const UpdateWorkItemResponseBody &) = default ;
    UpdateWorkItemResponseBody& operator=(UpdateWorkItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->workitem_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateWorkItemResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateWorkItemResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWorkItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateWorkItemResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workitem Field Functions 
    bool hasWorkitem() const { return this->workitem_ != nullptr;};
    void deleteWorkitem() { this->workitem_ = nullptr;};
    inline const UpdateWorkItemResponseBodyWorkitem & workitem() const { DARABONBA_PTR_GET_CONST(workitem_, UpdateWorkItemResponseBodyWorkitem) };
    inline UpdateWorkItemResponseBodyWorkitem workitem() { DARABONBA_PTR_GET(workitem_, UpdateWorkItemResponseBodyWorkitem) };
    inline UpdateWorkItemResponseBody& setWorkitem(const UpdateWorkItemResponseBodyWorkitem & workitem) { DARABONBA_PTR_SET_VALUE(workitem_, workitem) };
    inline UpdateWorkItemResponseBody& setWorkitem(UpdateWorkItemResponseBodyWorkitem && workitem) { DARABONBA_PTR_SET_RVALUE(workitem_, workitem) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<UpdateWorkItemResponseBodyWorkitem> workitem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
