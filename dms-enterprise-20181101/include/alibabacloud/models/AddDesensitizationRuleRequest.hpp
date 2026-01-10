// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDESENSITIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDESENSITIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddDesensitizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDesensitizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionParams, functionParams_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(RuleDescription, ruleDescription_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, AddDesensitizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionParams, functionParams_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(RuleDescription, ruleDescription_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    AddDesensitizationRuleRequest() = default ;
    AddDesensitizationRuleRequest(const AddDesensitizationRuleRequest &) = default ;
    AddDesensitizationRuleRequest(AddDesensitizationRuleRequest &&) = default ;
    AddDesensitizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDesensitizationRuleRequest() = default ;
    AddDesensitizationRuleRequest& operator=(const AddDesensitizationRuleRequest &) = default ;
    AddDesensitizationRuleRequest& operator=(AddDesensitizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionParams_ == nullptr
        && this->functionType_ == nullptr && this->ruleDescription_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->tid_ == nullptr; };
    // functionParams Field Functions 
    bool hasFunctionParams() const { return this->functionParams_ != nullptr;};
    void deleteFunctionParams() { this->functionParams_ = nullptr;};
    inline const vector<map<string, string>> & getFunctionParams() const { DARABONBA_PTR_GET_CONST(functionParams_, vector<map<string, string>>) };
    inline vector<map<string, string>> getFunctionParams() { DARABONBA_PTR_GET(functionParams_, vector<map<string, string>>) };
    inline AddDesensitizationRuleRequest& setFunctionParams(const vector<map<string, string>> & functionParams) { DARABONBA_PTR_SET_VALUE(functionParams_, functionParams) };
    inline AddDesensitizationRuleRequest& setFunctionParams(vector<map<string, string>> && functionParams) { DARABONBA_PTR_SET_RVALUE(functionParams_, functionParams) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline AddDesensitizationRuleRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // ruleDescription Field Functions 
    bool hasRuleDescription() const { return this->ruleDescription_ != nullptr;};
    void deleteRuleDescription() { this->ruleDescription_ = nullptr;};
    inline string getRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(ruleDescription_, "") };
    inline AddDesensitizationRuleRequest& setRuleDescription(string ruleDescription) { DARABONBA_PTR_SET_VALUE(ruleDescription_, ruleDescription) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AddDesensitizationRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline AddDesensitizationRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddDesensitizationRuleRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The parameters of the algorithm.
    shared_ptr<vector<map<string, string>>> functionParams_ {};
    // The type of the masking algorithm.
    // 
    // Valid values:
    // 
    // *   FIX_POS : masks characters in the specified position.
    // *   DATE_ROUNDING: rounds the date.
    // *   PLAINTEXT: does not mask data.
    // *   SHA1: masks characters by using the secure hash algorithm 1 (SHA-1)
    // *   HMAC: masks characters by using the hash-based message authentication code (HMAC).
    // *   STRING_TRANSFORM: shift characters.
    // *   NUMBER_ROUNDING: rounds numbers.
    // *   AES: masks characters by using the advanced encryption standard (AES) algorithm.
    // *   SHA256: masks characters by using SHA-256 algorithm.
    // *   DES: masks characters by using the data encryption standard (DES) algorithm.
    // *   MAP_REPLACE: masks the mapped data.
    // *   FIX_CHAR: masks fixed characters.
    // *   DEFAULT: masks all characters.
    // *   RANDOM_REPLACE: randomly replaces characters.
    // *   MD5: masks characters by using the MD5 algorithm.
    // 
    // This parameter is required.
    shared_ptr<string> functionType_ {};
    // The description of the rule.
    shared_ptr<string> ruleDescription_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The masking algorithm.
    // 
    // Valid values:
    // 
    // *   PLAINTEXT
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   TRANSFORM
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ENCRYPT
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   REPLACE
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   HASH
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   MASK
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
    // The tenant ID.
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
