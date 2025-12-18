// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConfigRuleResponseBodyConfigRuleSourceSourceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleResponseBodyConfigRuleSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleResponseBodyConfigRuleSource& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(SourceDetails, sourceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleResponseBodyConfigRuleSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(SourceDetails, sourceDetails_);
    };
    GetConfigRuleResponseBodyConfigRuleSource() = default ;
    GetConfigRuleResponseBodyConfigRuleSource(const GetConfigRuleResponseBodyConfigRuleSource &) = default ;
    GetConfigRuleResponseBodyConfigRuleSource(GetConfigRuleResponseBodyConfigRuleSource &&) = default ;
    GetConfigRuleResponseBodyConfigRuleSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleResponseBodyConfigRuleSource() = default ;
    GetConfigRuleResponseBodyConfigRuleSource& operator=(const GetConfigRuleResponseBodyConfigRuleSource &) = default ;
    GetConfigRuleResponseBodyConfigRuleSource& operator=(GetConfigRuleResponseBodyConfigRuleSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr
        && return this->owner_ == nullptr && return this->sourceDetails_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetConfigRuleResponseBodyConfigRuleSource& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetConfigRuleResponseBodyConfigRuleSource& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // sourceDetails Field Functions 
    bool hasSourceDetails() const { return this->sourceDetails_ != nullptr;};
    void deleteSourceDetails() { this->sourceDetails_ = nullptr;};
    inline const vector<Models::GetConfigRuleResponseBodyConfigRuleSourceSourceDetails> & sourceDetails() const { DARABONBA_PTR_GET_CONST(sourceDetails_, vector<Models::GetConfigRuleResponseBodyConfigRuleSourceSourceDetails>) };
    inline vector<Models::GetConfigRuleResponseBodyConfigRuleSourceSourceDetails> sourceDetails() { DARABONBA_PTR_GET(sourceDetails_, vector<Models::GetConfigRuleResponseBodyConfigRuleSourceSourceDetails>) };
    inline GetConfigRuleResponseBodyConfigRuleSource& setSourceDetails(const vector<Models::GetConfigRuleResponseBodyConfigRuleSourceSourceDetails> & sourceDetails) { DARABONBA_PTR_SET_VALUE(sourceDetails_, sourceDetails) };
    inline GetConfigRuleResponseBodyConfigRuleSource& setSourceDetails(vector<Models::GetConfigRuleResponseBodyConfigRuleSourceSourceDetails> && sourceDetails) { DARABONBA_PTR_SET_RVALUE(sourceDetails_, sourceDetails) };


  protected:
    // The identifier of the rule.
    // 
    // *   If the rule is a managed rule, the value of this parameter is the identifier of the managed rule.
    // *   If the rule is a custom rule, the value of this parameter is the Alibaba Cloud Resource Name (ARN) of a function.
    std::shared_ptr<string> identifier_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   CUSTOM_FC: a custom rule.
    // *   ALIYUN: a managed rule.
    std::shared_ptr<string> owner_ = nullptr;
    // The details of the source of the rule.
    std::shared_ptr<vector<Models::GetConfigRuleResponseBodyConfigRuleSourceSourceDetails>> sourceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
