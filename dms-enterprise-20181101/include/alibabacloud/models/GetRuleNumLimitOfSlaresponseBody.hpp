// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULENUMLIMITOFSLARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRULENUMLIMITOFSLARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetRuleNumLimitOfSLAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleNumLimitOfSLAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleNumLimit, ruleNumLimit_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleNumLimitOfSLAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleNumLimit, ruleNumLimit_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRuleNumLimitOfSLAResponseBody() = default ;
    GetRuleNumLimitOfSLAResponseBody(const GetRuleNumLimitOfSLAResponseBody &) = default ;
    GetRuleNumLimitOfSLAResponseBody(GetRuleNumLimitOfSLAResponseBody &&) = default ;
    GetRuleNumLimitOfSLAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleNumLimitOfSLAResponseBody() = default ;
    GetRuleNumLimitOfSLAResponseBody& operator=(const GetRuleNumLimitOfSLAResponseBody &) = default ;
    GetRuleNumLimitOfSLAResponseBody& operator=(GetRuleNumLimitOfSLAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->ruleNumLimit_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetRuleNumLimitOfSLAResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetRuleNumLimitOfSLAResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuleNumLimitOfSLAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleNumLimit Field Functions 
    bool hasRuleNumLimit() const { return this->ruleNumLimit_ != nullptr;};
    void deleteRuleNumLimit() { this->ruleNumLimit_ = nullptr;};
    inline int32_t ruleNumLimit() const { DARABONBA_PTR_GET_DEFAULT(ruleNumLimit_, 0) };
    inline GetRuleNumLimitOfSLAResponseBody& setRuleNumLimit(int32_t ruleNumLimit) { DARABONBA_PTR_SET_VALUE(ruleNumLimit_, ruleNumLimit) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRuleNumLimitOfSLAResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The maximum number of SLA rules.
    std::shared_ptr<int32_t> ruleNumLimit_ = nullptr;
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
