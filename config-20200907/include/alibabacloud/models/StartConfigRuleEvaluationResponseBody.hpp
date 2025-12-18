// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCONFIGRULEEVALUATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTCONFIGRULEEVALUATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class StartConfigRuleEvaluationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartConfigRuleEvaluationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, StartConfigRuleEvaluationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    StartConfigRuleEvaluationResponseBody() = default ;
    StartConfigRuleEvaluationResponseBody(const StartConfigRuleEvaluationResponseBody &) = default ;
    StartConfigRuleEvaluationResponseBody(StartConfigRuleEvaluationResponseBody &&) = default ;
    StartConfigRuleEvaluationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartConfigRuleEvaluationResponseBody() = default ;
    StartConfigRuleEvaluationResponseBody& operator=(const StartConfigRuleEvaluationResponseBody &) = default ;
    StartConfigRuleEvaluationResponseBody& operator=(StartConfigRuleEvaluationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartConfigRuleEvaluationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline StartConfigRuleEvaluationResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the operation is successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
