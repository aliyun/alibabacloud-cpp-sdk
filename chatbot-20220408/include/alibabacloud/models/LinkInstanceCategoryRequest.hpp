// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINKINSTANCECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LINKINSTANCECATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class LinkInstanceCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LinkInstanceCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbilityType, abilityType_);
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, LinkInstanceCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbilityType, abilityType_);
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    LinkInstanceCategoryRequest() = default ;
    LinkInstanceCategoryRequest(const LinkInstanceCategoryRequest &) = default ;
    LinkInstanceCategoryRequest(LinkInstanceCategoryRequest &&) = default ;
    LinkInstanceCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LinkInstanceCategoryRequest() = default ;
    LinkInstanceCategoryRequest& operator=(const LinkInstanceCategoryRequest &) = default ;
    LinkInstanceCategoryRequest& operator=(LinkInstanceCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abilityType_ == nullptr
        && this->agentKey_ == nullptr && this->categoryIds_ == nullptr && this->instanceId_ == nullptr; };
    // abilityType Field Functions 
    bool hasAbilityType() const { return this->abilityType_ != nullptr;};
    void deleteAbilityType() { this->abilityType_ = nullptr;};
    inline string getAbilityType() const { DARABONBA_PTR_GET_DEFAULT(abilityType_, "") };
    inline LinkInstanceCategoryRequest& setAbilityType(string abilityType) { DARABONBA_PTR_SET_VALUE(abilityType_, abilityType) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline LinkInstanceCategoryRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline string getCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(categoryIds_, "") };
    inline LinkInstanceCategoryRequest& setCategoryIds(string categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LinkInstanceCategoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The category\\"s ability type. Valid values: `FAQ` and `MRC` (machine reading comprehension). Defaults to `FAQ`.
    shared_ptr<string> abilityType_ {};
    // The key for the business space. If you do not specify this parameter, the default business space is used. You can obtain the key on the Business Management page of your primary account.
    shared_ptr<string> agentKey_ {};
    // An array of FAQ category IDs to link to the chatbot.
    shared_ptr<string> categoryIds_ {};
    // The unique identifier of the chatbot.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
