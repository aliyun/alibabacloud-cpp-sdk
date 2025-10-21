// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTPROMPTATTACKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTPROMPTATTACKINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreatePolicyRequestPromptAttackInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequestPromptAttackInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequestPromptAttackInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    CreatePolicyRequestPromptAttackInfoList() = default ;
    CreatePolicyRequestPromptAttackInfoList(const CreatePolicyRequestPromptAttackInfoList &) = default ;
    CreatePolicyRequestPromptAttackInfoList(CreatePolicyRequestPromptAttackInfoList &&) = default ;
    CreatePolicyRequestPromptAttackInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequestPromptAttackInfoList() = default ;
    CreatePolicyRequestPromptAttackInfoList& operator=(const CreatePolicyRequestPromptAttackInfoList &) = default ;
    CreatePolicyRequestPromptAttackInfoList& operator=(CreatePolicyRequestPromptAttackInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->categoryLabel_ == nullptr && return this->isEnabled_ == nullptr && return this->securityLevel_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline CreatePolicyRequestPromptAttackInfoList& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryLabel Field Functions 
    bool hasCategoryLabel() const { return this->categoryLabel_ != nullptr;};
    void deleteCategoryLabel() { this->categoryLabel_ = nullptr;};
    inline string categoryLabel() const { DARABONBA_PTR_GET_DEFAULT(categoryLabel_, "") };
    inline CreatePolicyRequestPromptAttackInfoList& setCategoryLabel(string categoryLabel) { DARABONBA_PTR_SET_VALUE(categoryLabel_, categoryLabel) };


    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline int32_t isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
    inline CreatePolicyRequestPromptAttackInfoList& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline CreatePolicyRequestPromptAttackInfoList& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Harmful category ID
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    // Category name
    std::shared_ptr<string> categoryLabel_ = nullptr;
    // Prompt attack configuration switch
    // 0: Off
    // 1: On
    std::shared_ptr<int32_t> isEnabled_ = nullptr;
    // Security level
    // 0: Low
    // 1: Medium
    // 2: High
    std::shared_ptr<int32_t> securityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
