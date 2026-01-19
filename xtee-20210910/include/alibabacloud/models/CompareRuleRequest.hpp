// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPARERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(previousRuleVersionId, previousRuleVersionId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, CompareRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(previousRuleVersionId, previousRuleVersionId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
    };
    CompareRuleRequest() = default ;
    CompareRuleRequest(const CompareRuleRequest &) = default ;
    CompareRuleRequest(CompareRuleRequest &&) = default ;
    CompareRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareRuleRequest() = default ;
    CompareRuleRequest& operator=(const CompareRuleRequest &) = default ;
    CompareRuleRequest& operator=(CompareRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->previousRuleVersionId_ == nullptr && this->regId_ == nullptr && this->ruleVersionId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CompareRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // previousRuleVersionId Field Functions 
    bool hasPreviousRuleVersionId() const { return this->previousRuleVersionId_ != nullptr;};
    void deletePreviousRuleVersionId() { this->previousRuleVersionId_ = nullptr;};
    inline int64_t getPreviousRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(previousRuleVersionId_, 0L) };
    inline CompareRuleRequest& setPreviousRuleVersionId(int64_t previousRuleVersionId) { DARABONBA_PTR_SET_VALUE(previousRuleVersionId_, previousRuleVersionId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CompareRuleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline CompareRuleRequest& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Primary key ID of the previous policy version.
    shared_ptr<int64_t> previousRuleVersionId_ {};
    // Region code.
    shared_ptr<string> regId_ {};
    // Primary key ID of the policy version.
    shared_ptr<int64_t> ruleVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
