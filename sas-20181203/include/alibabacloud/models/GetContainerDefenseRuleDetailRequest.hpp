// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTAINERDEFENSERULEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTAINERDEFENSERULEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetContainerDefenseRuleDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContainerDefenseRuleDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContainerDefenseRuleDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    GetContainerDefenseRuleDetailRequest() = default ;
    GetContainerDefenseRuleDetailRequest(const GetContainerDefenseRuleDetailRequest &) = default ;
    GetContainerDefenseRuleDetailRequest(GetContainerDefenseRuleDetailRequest &&) = default ;
    GetContainerDefenseRuleDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContainerDefenseRuleDetailRequest() = default ;
    GetContainerDefenseRuleDetailRequest& operator=(const GetContainerDefenseRuleDetailRequest &) = default ;
    GetContainerDefenseRuleDetailRequest& operator=(GetContainerDefenseRuleDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->ruleId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetContainerDefenseRuleDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetContainerDefenseRuleDetailRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    // The rule ID.
    // 
    // >  You can call the [ListContainerDefenseRule](https://help.aliyun.com/document_detail/2590599.html) operation to query the rule ID.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
