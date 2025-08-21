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
    virtual bool empty() const override { this->abilityType_ != nullptr
        && this->agentKey_ != nullptr && this->categoryIds_ != nullptr && this->instanceId_ != nullptr; };
    // abilityType Field Functions 
    bool hasAbilityType() const { return this->abilityType_ != nullptr;};
    void deleteAbilityType() { this->abilityType_ = nullptr;};
    inline string abilityType() const { DARABONBA_PTR_GET_DEFAULT(abilityType_, "") };
    inline LinkInstanceCategoryRequest& setAbilityType(string abilityType) { DARABONBA_PTR_SET_VALUE(abilityType_, abilityType) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline LinkInstanceCategoryRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline string categoryIds() const { DARABONBA_PTR_GET_DEFAULT(categoryIds_, "") };
    inline LinkInstanceCategoryRequest& setCategoryIds(string categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LinkInstanceCategoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> abilityType_ = nullptr;
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> categoryIds_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
