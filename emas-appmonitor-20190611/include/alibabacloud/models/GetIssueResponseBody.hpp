// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETISSUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIssueResponseBodyModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssueResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssueResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetIssueResponseBody() = default ;
    GetIssueResponseBody(const GetIssueResponseBody &) = default ;
    GetIssueResponseBody(GetIssueResponseBody &&) = default ;
    GetIssueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssueResponseBody() = default ;
    GetIssueResponseBody& operator=(const GetIssueResponseBody &) = default ;
    GetIssueResponseBody& operator=(GetIssueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->errorCode_ != nullptr && this->message_ != nullptr && this->model_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline     const Darabonba::Json & args() const { DARABONBA_GET(args_) };
    Darabonba::Json & args() { DARABONBA_GET(args_) };
    inline GetIssueResponseBody& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
    inline GetIssueResponseBody& setArgs(Darabonba::Json & args) { DARABONBA_SET_RVALUE(args_, args) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline GetIssueResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIssueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetIssueResponseBodyModel & model() const { DARABONBA_PTR_GET_CONST(model_, GetIssueResponseBodyModel) };
    inline GetIssueResponseBodyModel model() { DARABONBA_PTR_GET(model_, GetIssueResponseBodyModel) };
    inline GetIssueResponseBody& setModel(const GetIssueResponseBodyModel & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetIssueResponseBody& setModel(GetIssueResponseBodyModel && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIssueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIssueResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Args
    Darabonba::Json args_ = nullptr;
    std::shared_ptr<int32_t> errorCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<GetIssueResponseBodyModel> model_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
