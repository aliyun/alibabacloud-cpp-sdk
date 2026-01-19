// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTHRULEDETAILBYRULEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTHRULEDETAILBYRULEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class QueryAuthRuleDetailByRuleIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuthRuleDetailByRuleIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuthRuleDetailByRuleIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
    };
    QueryAuthRuleDetailByRuleIdRequest() = default ;
    QueryAuthRuleDetailByRuleIdRequest(const QueryAuthRuleDetailByRuleIdRequest &) = default ;
    QueryAuthRuleDetailByRuleIdRequest(QueryAuthRuleDetailByRuleIdRequest &&) = default ;
    QueryAuthRuleDetailByRuleIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuthRuleDetailByRuleIdRequest() = default ;
    QueryAuthRuleDetailByRuleIdRequest& operator=(const QueryAuthRuleDetailByRuleIdRequest &) = default ;
    QueryAuthRuleDetailByRuleIdRequest& operator=(QueryAuthRuleDetailByRuleIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->consoleRuleId_ == nullptr && this->regId_ == nullptr && this->ruleId_ == nullptr && this->ruleVersionId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryAuthRuleDetailByRuleIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline QueryAuthRuleDetailByRuleIdRequest& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline QueryAuthRuleDetailByRuleIdRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline QueryAuthRuleDetailByRuleIdRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline QueryAuthRuleDetailByRuleIdRequest& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Primary key ID of the strategy
    shared_ptr<int64_t> consoleRuleId_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
    // Strategy ID
    shared_ptr<string> ruleId_ {};
    // Primary key ID of the strategy version
    shared_ptr<int64_t> ruleVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
