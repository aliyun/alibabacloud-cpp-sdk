// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMetricRuleTargetsResponseBodyFailIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRuleTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FailIds, failIds_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FailIds, failIds_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteMetricRuleTargetsResponseBody() = default ;
    DeleteMetricRuleTargetsResponseBody(const DeleteMetricRuleTargetsResponseBody &) = default ;
    DeleteMetricRuleTargetsResponseBody(DeleteMetricRuleTargetsResponseBody &&) = default ;
    DeleteMetricRuleTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRuleTargetsResponseBody() = default ;
    DeleteMetricRuleTargetsResponseBody& operator=(const DeleteMetricRuleTargetsResponseBody &) = default ;
    DeleteMetricRuleTargetsResponseBody& operator=(DeleteMetricRuleTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->failIds_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteMetricRuleTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failIds Field Functions 
    bool hasFailIds() const { return this->failIds_ != nullptr;};
    void deleteFailIds() { this->failIds_ = nullptr;};
    inline const DeleteMetricRuleTargetsResponseBodyFailIds & failIds() const { DARABONBA_PTR_GET_CONST(failIds_, DeleteMetricRuleTargetsResponseBodyFailIds) };
    inline DeleteMetricRuleTargetsResponseBodyFailIds failIds() { DARABONBA_PTR_GET(failIds_, DeleteMetricRuleTargetsResponseBodyFailIds) };
    inline DeleteMetricRuleTargetsResponseBody& setFailIds(const DeleteMetricRuleTargetsResponseBodyFailIds & failIds) { DARABONBA_PTR_SET_VALUE(failIds_, failIds) };
    inline DeleteMetricRuleTargetsResponseBody& setFailIds(DeleteMetricRuleTargetsResponseBodyFailIds && failIds) { DARABONBA_PTR_SET_RVALUE(failIds_, failIds) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteMetricRuleTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMetricRuleTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteMetricRuleTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // **
    // 
    // **Description** The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The IDs of the resources that failed to be deleted.
    std::shared_ptr<DeleteMetricRuleTargetsResponseBodyFailIds> failIds_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
