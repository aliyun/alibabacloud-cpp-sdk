// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYHARMFULCATEGORYCONFIGINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYHARMFULCATEGORYCONFIGINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryConfigId, categoryConfigId_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryConfigId, categoryConfigId_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryLabel, categoryLabel_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList() = default ;
    GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList(const GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList &) = default ;
    GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList(GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList &&) = default ;
    GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList() = default ;
    GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& operator=(const GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList &) = default ;
    GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& operator=(GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryConfigId_ == nullptr
        && return this->categoryId_ == nullptr && return this->categoryLabel_ == nullptr && return this->categoryType_ == nullptr && return this->inputOutputType_ == nullptr && return this->isEnabled_ == nullptr
        && return this->securityLevel_ == nullptr; };
    // categoryConfigId Field Functions 
    bool hasCategoryConfigId() const { return this->categoryConfigId_ != nullptr;};
    void deleteCategoryConfigId() { this->categoryConfigId_ = nullptr;};
    inline int64_t categoryConfigId() const { DARABONBA_PTR_GET_DEFAULT(categoryConfigId_, 0L) };
    inline GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& setCategoryConfigId(int64_t categoryConfigId) { DARABONBA_PTR_SET_VALUE(categoryConfigId_, categoryConfigId) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryLabel Field Functions 
    bool hasCategoryLabel() const { return this->categoryLabel_ != nullptr;};
    void deleteCategoryLabel() { this->categoryLabel_ = nullptr;};
    inline string categoryLabel() const { DARABONBA_PTR_GET_DEFAULT(categoryLabel_, "") };
    inline GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& setCategoryLabel(string categoryLabel) { DARABONBA_PTR_SET_VALUE(categoryLabel_, categoryLabel) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int32_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
    inline GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // inputOutputType Field Functions 
    bool hasInputOutputType() const { return this->inputOutputType_ != nullptr;};
    void deleteInputOutputType() { this->inputOutputType_ = nullptr;};
    inline int32_t inputOutputType() const { DARABONBA_PTR_GET_DEFAULT(inputOutputType_, 0) };
    inline GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& setInputOutputType(int32_t inputOutputType) { DARABONBA_PTR_SET_VALUE(inputOutputType_, inputOutputType) };


    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline int32_t isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
    inline GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Harmful category configuration ID
    std::shared_ptr<int64_t> categoryConfigId_ = nullptr;
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
    // Harmful category configuration switch
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
