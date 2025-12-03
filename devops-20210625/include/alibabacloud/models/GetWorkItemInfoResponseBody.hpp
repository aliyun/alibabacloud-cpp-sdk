// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkItemInfoResponseBodyWorkitem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(workitem, workitem_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(workitem, workitem_);
    };
    GetWorkItemInfoResponseBody() = default ;
    GetWorkItemInfoResponseBody(const GetWorkItemInfoResponseBody &) = default ;
    GetWorkItemInfoResponseBody(GetWorkItemInfoResponseBody &&) = default ;
    GetWorkItemInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemInfoResponseBody() = default ;
    GetWorkItemInfoResponseBody& operator=(const GetWorkItemInfoResponseBody &) = default ;
    GetWorkItemInfoResponseBody& operator=(GetWorkItemInfoResponseBody &&) = default ;
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
    inline GetWorkItemInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetWorkItemInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkItemInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkItemInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workitem Field Functions 
    bool hasWorkitem() const { return this->workitem_ != nullptr;};
    void deleteWorkitem() { this->workitem_ = nullptr;};
    inline const GetWorkItemInfoResponseBodyWorkitem & workitem() const { DARABONBA_PTR_GET_CONST(workitem_, GetWorkItemInfoResponseBodyWorkitem) };
    inline GetWorkItemInfoResponseBodyWorkitem workitem() { DARABONBA_PTR_GET(workitem_, GetWorkItemInfoResponseBodyWorkitem) };
    inline GetWorkItemInfoResponseBody& setWorkitem(const GetWorkItemInfoResponseBodyWorkitem & workitem) { DARABONBA_PTR_SET_VALUE(workitem_, workitem) };
    inline GetWorkItemInfoResponseBody& setWorkitem(GetWorkItemInfoResponseBodyWorkitem && workitem) { DARABONBA_PTR_SET_RVALUE(workitem_, workitem) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<GetWorkItemInfoResponseBodyWorkitem> workitem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
