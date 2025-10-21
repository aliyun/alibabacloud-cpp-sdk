// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTHARMFULCATEGORYCONFIGINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTHARMFULCATEGORYCONFIGINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreatePolicyRequestHarmfulCategoryConfigInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequestHarmfulCategoryConfigInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequestHarmfulCategoryConfigInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    CreatePolicyRequestHarmfulCategoryConfigInfoList() = default ;
    CreatePolicyRequestHarmfulCategoryConfigInfoList(const CreatePolicyRequestHarmfulCategoryConfigInfoList &) = default ;
    CreatePolicyRequestHarmfulCategoryConfigInfoList(CreatePolicyRequestHarmfulCategoryConfigInfoList &&) = default ;
    CreatePolicyRequestHarmfulCategoryConfigInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequestHarmfulCategoryConfigInfoList() = default ;
    CreatePolicyRequestHarmfulCategoryConfigInfoList& operator=(const CreatePolicyRequestHarmfulCategoryConfigInfoList &) = default ;
    CreatePolicyRequestHarmfulCategoryConfigInfoList& operator=(CreatePolicyRequestHarmfulCategoryConfigInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->categoryLabel_ == nullptr && return this->categoryType_ == nullptr && return this->inputOutputType_ == nullptr && return this->isEnabled_ == nullptr && return this->securityLevel_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline CreatePolicyRequestHarmfulCategoryConfigInfoList& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryLabel Field Functions 
    bool hasCategoryLabel() const { return this->categoryLabel_ != nullptr;};
    void deleteCategoryLabel() { this->categoryLabel_ = nullptr;};
    inline string categoryLabel() const { DARABONBA_PTR_GET_DEFAULT(categoryLabel_, "") };
    inline CreatePolicyRequestHarmfulCategoryConfigInfoList& setCategoryLabel(string categoryLabel) { DARABONBA_PTR_SET_VALUE(categoryLabel_, categoryLabel) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline CreatePolicyRequestHarmfulCategoryConfigInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // inputOutputType Field Functions 
    bool hasInputOutputType() const { return this->inputOutputType_ != nullptr;};
    void deleteInputOutputType() { this->inputOutputType_ = nullptr;};
    inline int32_t inputOutputType() const { DARABONBA_PTR_GET_DEFAULT(inputOutputType_, 0) };
    inline CreatePolicyRequestHarmfulCategoryConfigInfoList& setInputOutputType(int32_t inputOutputType) { DARABONBA_PTR_SET_VALUE(inputOutputType_, inputOutputType) };


    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline int32_t isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
    inline CreatePolicyRequestHarmfulCategoryConfigInfoList& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline CreatePolicyRequestHarmfulCategoryConfigInfoList& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Harmful category ID
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    // Category name
    std::shared_ptr<string> categoryLabel_ = nullptr;
    // 0: Text
    // 1: Image
    std::shared_ptr<int32_t> categoryType_ = nullptr;
    // Model input/output type
    // 0: Input
    // 1: Output
    std::shared_ptr<int32_t> inputOutputType_ = nullptr;
    // Whether it is enabled
    // 0: Not enabled
    // 1: Enabled
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
