// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutEventRuleTargetsResponseBodyFailedContactParameters.hpp>
#include <alibabacloud/models/PutEventRuleTargetsResponseBodyFailedFcParameters.hpp>
#include <alibabacloud/models/PutEventRuleTargetsResponseBodyFailedMnsParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FailedContactParameters, failedContactParameters_);
      DARABONBA_PTR_TO_JSON(FailedFcParameters, failedFcParameters_);
      DARABONBA_PTR_TO_JSON(FailedMnsParameters, failedMnsParameters_);
      DARABONBA_PTR_TO_JSON(FailedParameterCount, failedParameterCount_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FailedContactParameters, failedContactParameters_);
      DARABONBA_PTR_FROM_JSON(FailedFcParameters, failedFcParameters_);
      DARABONBA_PTR_FROM_JSON(FailedMnsParameters, failedMnsParameters_);
      DARABONBA_PTR_FROM_JSON(FailedParameterCount, failedParameterCount_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PutEventRuleTargetsResponseBody() = default ;
    PutEventRuleTargetsResponseBody(const PutEventRuleTargetsResponseBody &) = default ;
    PutEventRuleTargetsResponseBody(PutEventRuleTargetsResponseBody &&) = default ;
    PutEventRuleTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsResponseBody() = default ;
    PutEventRuleTargetsResponseBody& operator=(const PutEventRuleTargetsResponseBody &) = default ;
    PutEventRuleTargetsResponseBody& operator=(PutEventRuleTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->failedContactParameters_ == nullptr && return this->failedFcParameters_ == nullptr && return this->failedMnsParameters_ == nullptr && return this->failedParameterCount_ == nullptr && return this->message_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PutEventRuleTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failedContactParameters Field Functions 
    bool hasFailedContactParameters() const { return this->failedContactParameters_ != nullptr;};
    void deleteFailedContactParameters() { this->failedContactParameters_ = nullptr;};
    inline const PutEventRuleTargetsResponseBodyFailedContactParameters & failedContactParameters() const { DARABONBA_PTR_GET_CONST(failedContactParameters_, PutEventRuleTargetsResponseBodyFailedContactParameters) };
    inline PutEventRuleTargetsResponseBodyFailedContactParameters failedContactParameters() { DARABONBA_PTR_GET(failedContactParameters_, PutEventRuleTargetsResponseBodyFailedContactParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedContactParameters(const PutEventRuleTargetsResponseBodyFailedContactParameters & failedContactParameters) { DARABONBA_PTR_SET_VALUE(failedContactParameters_, failedContactParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedContactParameters(PutEventRuleTargetsResponseBodyFailedContactParameters && failedContactParameters) { DARABONBA_PTR_SET_RVALUE(failedContactParameters_, failedContactParameters) };


    // failedFcParameters Field Functions 
    bool hasFailedFcParameters() const { return this->failedFcParameters_ != nullptr;};
    void deleteFailedFcParameters() { this->failedFcParameters_ = nullptr;};
    inline const PutEventRuleTargetsResponseBodyFailedFcParameters & failedFcParameters() const { DARABONBA_PTR_GET_CONST(failedFcParameters_, PutEventRuleTargetsResponseBodyFailedFcParameters) };
    inline PutEventRuleTargetsResponseBodyFailedFcParameters failedFcParameters() { DARABONBA_PTR_GET(failedFcParameters_, PutEventRuleTargetsResponseBodyFailedFcParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedFcParameters(const PutEventRuleTargetsResponseBodyFailedFcParameters & failedFcParameters) { DARABONBA_PTR_SET_VALUE(failedFcParameters_, failedFcParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedFcParameters(PutEventRuleTargetsResponseBodyFailedFcParameters && failedFcParameters) { DARABONBA_PTR_SET_RVALUE(failedFcParameters_, failedFcParameters) };


    // failedMnsParameters Field Functions 
    bool hasFailedMnsParameters() const { return this->failedMnsParameters_ != nullptr;};
    void deleteFailedMnsParameters() { this->failedMnsParameters_ = nullptr;};
    inline const PutEventRuleTargetsResponseBodyFailedMnsParameters & failedMnsParameters() const { DARABONBA_PTR_GET_CONST(failedMnsParameters_, PutEventRuleTargetsResponseBodyFailedMnsParameters) };
    inline PutEventRuleTargetsResponseBodyFailedMnsParameters failedMnsParameters() { DARABONBA_PTR_GET(failedMnsParameters_, PutEventRuleTargetsResponseBodyFailedMnsParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedMnsParameters(const PutEventRuleTargetsResponseBodyFailedMnsParameters & failedMnsParameters) { DARABONBA_PTR_SET_VALUE(failedMnsParameters_, failedMnsParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedMnsParameters(PutEventRuleTargetsResponseBodyFailedMnsParameters && failedMnsParameters) { DARABONBA_PTR_SET_RVALUE(failedMnsParameters_, failedMnsParameters) };


    // failedParameterCount Field Functions 
    bool hasFailedParameterCount() const { return this->failedParameterCount_ != nullptr;};
    void deleteFailedParameterCount() { this->failedParameterCount_ = nullptr;};
    inline string failedParameterCount() const { DARABONBA_PTR_GET_DEFAULT(failedParameterCount_, "") };
    inline PutEventRuleTargetsResponseBody& setFailedParameterCount(string failedParameterCount) { DARABONBA_PTR_SET_VALUE(failedParameterCount_, failedParameterCount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PutEventRuleTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutEventRuleTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PutEventRuleTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is returned if the specified alert contact groups in the request failed to be created or modified.
    std::shared_ptr<PutEventRuleTargetsResponseBodyFailedContactParameters> failedContactParameters_ = nullptr;
    // This parameter is returned if the specified functions in the request failed to be created or modified in Function Compute.
    std::shared_ptr<PutEventRuleTargetsResponseBodyFailedFcParameters> failedFcParameters_ = nullptr;
    // This parameter is returned if the specified queues in the request failed to be created or modified in SMQ.
    std::shared_ptr<PutEventRuleTargetsResponseBodyFailedMnsParameters> failedMnsParameters_ = nullptr;
    // The number of resources that failed to be created or modified.
    std::shared_ptr<string> failedParameterCount_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: true and false.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
