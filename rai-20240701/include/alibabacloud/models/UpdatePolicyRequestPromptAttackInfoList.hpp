// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYREQUESTPROMPTATTACKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYREQUESTPROMPTATTACKINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdatePolicyRequestPromptAttackInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyRequestPromptAttackInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryConfigId, categoryConfigId_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyRequestPromptAttackInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryConfigId, categoryConfigId_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    UpdatePolicyRequestPromptAttackInfoList() = default ;
    UpdatePolicyRequestPromptAttackInfoList(const UpdatePolicyRequestPromptAttackInfoList &) = default ;
    UpdatePolicyRequestPromptAttackInfoList(UpdatePolicyRequestPromptAttackInfoList &&) = default ;
    UpdatePolicyRequestPromptAttackInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyRequestPromptAttackInfoList() = default ;
    UpdatePolicyRequestPromptAttackInfoList& operator=(const UpdatePolicyRequestPromptAttackInfoList &) = default ;
    UpdatePolicyRequestPromptAttackInfoList& operator=(UpdatePolicyRequestPromptAttackInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryConfigId_ == nullptr
        && return this->categoryId_ == nullptr && return this->categoryLabel_ == nullptr && return this->isEnabled_ == nullptr && return this->securityLevel_ == nullptr; };
    // categoryConfigId Field Functions 
    bool hasCategoryConfigId() const { return this->categoryConfigId_ != nullptr;};
    void deleteCategoryConfigId() { this->categoryConfigId_ = nullptr;};
    inline int64_t categoryConfigId() const { DARABONBA_PTR_GET_DEFAULT(categoryConfigId_, 0L) };
    inline UpdatePolicyRequestPromptAttackInfoList& setCategoryConfigId(int64_t categoryConfigId) { DARABONBA_PTR_SET_VALUE(categoryConfigId_, categoryConfigId) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline UpdatePolicyRequestPromptAttackInfoList& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryLabel Field Functions 
    bool hasCategoryLabel() const { return this->categoryLabel_ != nullptr;};
    void deleteCategoryLabel() { this->categoryLabel_ = nullptr;};
    inline string categoryLabel() const { DARABONBA_PTR_GET_DEFAULT(categoryLabel_, "") };
    inline UpdatePolicyRequestPromptAttackInfoList& setCategoryLabel(string categoryLabel) { DARABONBA_PTR_SET_VALUE(categoryLabel_, categoryLabel) };


    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline int32_t isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
    inline UpdatePolicyRequestPromptAttackInfoList& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline UpdatePolicyRequestPromptAttackInfoList& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Harmful category configuration ID
    std::shared_ptr<int64_t> categoryConfigId_ = nullptr;
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
