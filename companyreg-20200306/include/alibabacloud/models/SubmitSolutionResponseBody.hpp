// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSOLUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSOLUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class SubmitSolutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSolutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfirmUrl, confirmUrl_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SolutionBizId, solutionBizId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSolutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfirmUrl, confirmUrl_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SolutionBizId, solutionBizId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitSolutionResponseBody() = default ;
    SubmitSolutionResponseBody(const SubmitSolutionResponseBody &) = default ;
    SubmitSolutionResponseBody(SubmitSolutionResponseBody &&) = default ;
    SubmitSolutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSolutionResponseBody() = default ;
    SubmitSolutionResponseBody& operator=(const SubmitSolutionResponseBody &) = default ;
    SubmitSolutionResponseBody& operator=(SubmitSolutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confirmUrl_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->solutionBizId_ == nullptr && return this->success_ == nullptr; };
    // confirmUrl Field Functions 
    bool hasConfirmUrl() const { return this->confirmUrl_ != nullptr;};
    void deleteConfirmUrl() { this->confirmUrl_ = nullptr;};
    inline string confirmUrl() const { DARABONBA_PTR_GET_DEFAULT(confirmUrl_, "") };
    inline SubmitSolutionResponseBody& setConfirmUrl(string confirmUrl) { DARABONBA_PTR_SET_VALUE(confirmUrl_, confirmUrl) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SubmitSolutionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline SubmitSolutionResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitSolutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solutionBizId Field Functions 
    bool hasSolutionBizId() const { return this->solutionBizId_ != nullptr;};
    void deleteSolutionBizId() { this->solutionBizId_ = nullptr;};
    inline string solutionBizId() const { DARABONBA_PTR_GET_DEFAULT(solutionBizId_, "") };
    inline SubmitSolutionResponseBody& setSolutionBizId(string solutionBizId) { DARABONBA_PTR_SET_VALUE(solutionBizId_, solutionBizId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitSolutionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> confirmUrl_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> solutionBizId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
