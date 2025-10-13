// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICYENTITYGROUPENTITYRULESTAGS_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONPOLICYRESPONSEBODYPOLICYENTITYGROUPENTITYRULESTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags& obj) { 
      DARABONBA_PTR_TO_JSON(op, op_);
      DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(tagValues, tagValues_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(op, op_);
      DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(tagValues, tagValues_);
    };
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags() = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags(const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags &) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags(GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags &&) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags() = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags& operator=(const GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags &) = default ;
    GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags& operator=(GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->op_ == nullptr
        && return this->tagKey_ == nullptr && return this->tagValues_ == nullptr; };
    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValues Field Functions 
    bool hasTagValues() const { return this->tagValues_ != nullptr;};
    void deleteTagValues() { this->tagValues_ = nullptr;};
    inline const vector<string> & tagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
    inline vector<string> tagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
    inline GetIntegrationPolicyResponseBodyPolicyEntityGroupEntityRulesTags& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


  protected:
    std::shared_ptr<string> op_ = nullptr;
    std::shared_ptr<string> tagKey_ = nullptr;
    std::shared_ptr<vector<string>> tagValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
