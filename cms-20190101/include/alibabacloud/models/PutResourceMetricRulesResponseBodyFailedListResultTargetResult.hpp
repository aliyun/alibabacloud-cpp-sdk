// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODYFAILEDLISTRESULTTARGETRESULT_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODYFAILEDLISTRESULTTARGETRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesResponseBodyFailedListResultTargetResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesResponseBodyFailedListResultTargetResult& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesResponseBodyFailedListResultTargetResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PutResourceMetricRulesResponseBodyFailedListResultTargetResult() = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTargetResult(const PutResourceMetricRulesResponseBodyFailedListResultTargetResult &) = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTargetResult(PutResourceMetricRulesResponseBodyFailedListResultTargetResult &&) = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTargetResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesResponseBodyFailedListResultTargetResult() = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTargetResult& operator=(const PutResourceMetricRulesResponseBodyFailedListResultTargetResult &) = default ;
    PutResourceMetricRulesResponseBodyFailedListResultTargetResult& operator=(PutResourceMetricRulesResponseBodyFailedListResultTargetResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PutResourceMetricRulesResponseBodyFailedListResultTargetResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PutResourceMetricRulesResponseBodyFailedListResultTargetResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PutResourceMetricRulesResponseBodyFailedListResultTargetResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
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
