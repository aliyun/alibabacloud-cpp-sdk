// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETXCONFIGRESPONSEBODYDATAREACHJSONS_HPP_
#define ALIBABACLOUD_MODELS_GETXCONFIGRESPONSEBODYDATAREACHJSONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetXConfigResponseBodyDataReachJsons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetXConfigResponseBodyDataReachJsons& obj) { 
      DARABONBA_PTR_TO_JSON(CallDir, callDir_);
      DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_TO_JSON(ReceiveDir, receiveDir_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(TempId, tempId_);
    };
    friend void from_json(const Darabonba::Json& j, GetXConfigResponseBodyDataReachJsons& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDir, callDir_);
      DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_FROM_JSON(ReceiveDir, receiveDir_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(TempId, tempId_);
    };
    GetXConfigResponseBodyDataReachJsons() = default ;
    GetXConfigResponseBodyDataReachJsons(const GetXConfigResponseBodyDataReachJsons &) = default ;
    GetXConfigResponseBodyDataReachJsons(GetXConfigResponseBodyDataReachJsons &&) = default ;
    GetXConfigResponseBodyDataReachJsons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetXConfigResponseBodyDataReachJsons() = default ;
    GetXConfigResponseBodyDataReachJsons& operator=(const GetXConfigResponseBodyDataReachJsons &) = default ;
    GetXConfigResponseBodyDataReachJsons& operator=(GetXConfigResponseBodyDataReachJsons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callDir_ == nullptr
        && return this->callStatus_ == nullptr && return this->receiveDir_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->ruleType_ == nullptr
        && return this->tempId_ == nullptr; };
    // callDir Field Functions 
    bool hasCallDir() const { return this->callDir_ != nullptr;};
    void deleteCallDir() { this->callDir_ = nullptr;};
    inline string callDir() const { DARABONBA_PTR_GET_DEFAULT(callDir_, "") };
    inline GetXConfigResponseBodyDataReachJsons& setCallDir(string callDir) { DARABONBA_PTR_SET_VALUE(callDir_, callDir) };


    // callStatus Field Functions 
    bool hasCallStatus() const { return this->callStatus_ != nullptr;};
    void deleteCallStatus() { this->callStatus_ = nullptr;};
    inline string callStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
    inline GetXConfigResponseBodyDataReachJsons& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


    // receiveDir Field Functions 
    bool hasReceiveDir() const { return this->receiveDir_ != nullptr;};
    void deleteReceiveDir() { this->receiveDir_ = nullptr;};
    inline string receiveDir() const { DARABONBA_PTR_GET_DEFAULT(receiveDir_, "") };
    inline GetXConfigResponseBodyDataReachJsons& setReceiveDir(string receiveDir) { DARABONBA_PTR_SET_VALUE(receiveDir_, receiveDir) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetXConfigResponseBodyDataReachJsons& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetXConfigResponseBodyDataReachJsons& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline GetXConfigResponseBodyDataReachJsons& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // tempId Field Functions 
    bool hasTempId() const { return this->tempId_ != nullptr;};
    void deleteTempId() { this->tempId_ = nullptr;};
    inline string tempId() const { DARABONBA_PTR_GET_DEFAULT(tempId_, "") };
    inline GetXConfigResponseBodyDataReachJsons& setTempId(string tempId) { DARABONBA_PTR_SET_VALUE(tempId_, tempId) };


  protected:
    // 呼叫方向 1:员工B呼叫客户A 2:客户A呼叫员工B
    std::shared_ptr<string> callDir_ = nullptr;
    // 通话状态 1:通话振铃 2:接通前 3:接通后 4:通话结束 5:已接通6:未接通
    std::shared_ptr<string> callStatus_ = nullptr;
    // 接收方向 1:主叫 2:被叫
    std::shared_ptr<string> receiveDir_ = nullptr;
    // 规则ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // 规则名称
    std::shared_ptr<string> ruleName_ = nullptr;
    // 规则类型： 1：企业名片-短信 2：企业名片-闪信 3：企业名片-视频 4：企业名片-音频
    std::shared_ptr<string> ruleType_ = nullptr;
    // 模板ID
    std::shared_ptr<string> tempId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
