// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDIAlarmRuleResponseBodyDIAlarmRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIAlarmRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIAlarmRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRule, DIAlarmRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIAlarmRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRule, DIAlarmRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDIAlarmRuleResponseBody() = default ;
    GetDIAlarmRuleResponseBody(const GetDIAlarmRuleResponseBody &) = default ;
    GetDIAlarmRuleResponseBody(GetDIAlarmRuleResponseBody &&) = default ;
    GetDIAlarmRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIAlarmRuleResponseBody() = default ;
    GetDIAlarmRuleResponseBody& operator=(const GetDIAlarmRuleResponseBody &) = default ;
    GetDIAlarmRuleResponseBody& operator=(GetDIAlarmRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIAlarmRule_ != nullptr
        && this->requestId_ != nullptr; };
    // DIAlarmRule Field Functions 
    bool hasDIAlarmRule() const { return this->DIAlarmRule_ != nullptr;};
    void deleteDIAlarmRule() { this->DIAlarmRule_ = nullptr;};
    inline const GetDIAlarmRuleResponseBodyDIAlarmRule & DIAlarmRule() const { DARABONBA_PTR_GET_CONST(DIAlarmRule_, GetDIAlarmRuleResponseBodyDIAlarmRule) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule DIAlarmRule() { DARABONBA_PTR_GET(DIAlarmRule_, GetDIAlarmRuleResponseBodyDIAlarmRule) };
    inline GetDIAlarmRuleResponseBody& setDIAlarmRule(const GetDIAlarmRuleResponseBodyDIAlarmRule & DIAlarmRule) { DARABONBA_PTR_SET_VALUE(DIAlarmRule_, DIAlarmRule) };
    inline GetDIAlarmRuleResponseBody& setDIAlarmRule(GetDIAlarmRuleResponseBodyDIAlarmRule && DIAlarmRule) { DARABONBA_PTR_SET_RVALUE(DIAlarmRule_, DIAlarmRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDIAlarmRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the alert rule.
    std::shared_ptr<GetDIAlarmRuleResponseBodyDIAlarmRule> DIAlarmRule_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
