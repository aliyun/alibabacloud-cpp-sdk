// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSensitiveSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentCategory, parentCategory_);
      DARABONBA_PTR_TO_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentCategory, parentCategory_);
      DARABONBA_PTR_FROM_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
    };
    DescribeSensitiveSwitchRequest() = default ;
    DescribeSensitiveSwitchRequest(const DescribeSensitiveSwitchRequest &) = default ;
    DescribeSensitiveSwitchRequest(DescribeSensitiveSwitchRequest &&) = default ;
    DescribeSensitiveSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveSwitchRequest() = default ;
    DescribeSensitiveSwitchRequest& operator=(const DescribeSensitiveSwitchRequest &) = default ;
    DescribeSensitiveSwitchRequest& operator=(DescribeSensitiveSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryName_ == nullptr
        && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->parentCategory_ == nullptr && return this->sensitiveCategory_ == nullptr
        && return this->sensitiveLevel_ == nullptr && return this->switchStatus_ == nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeSensitiveSwitchRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSensitiveSwitchRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSensitiveSwitchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSensitiveSwitchRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentCategory Field Functions 
    bool hasParentCategory() const { return this->parentCategory_ != nullptr;};
    void deleteParentCategory() { this->parentCategory_ = nullptr;};
    inline string parentCategory() const { DARABONBA_PTR_GET_DEFAULT(parentCategory_, "") };
    inline DescribeSensitiveSwitchRequest& setParentCategory(string parentCategory) { DARABONBA_PTR_SET_VALUE(parentCategory_, parentCategory) };


    // sensitiveCategory Field Functions 
    bool hasSensitiveCategory() const { return this->sensitiveCategory_ != nullptr;};
    void deleteSensitiveCategory() { this->sensitiveCategory_ = nullptr;};
    inline string sensitiveCategory() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCategory_, "") };
    inline DescribeSensitiveSwitchRequest& setSensitiveCategory(string sensitiveCategory) { DARABONBA_PTR_SET_VALUE(sensitiveCategory_, sensitiveCategory) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline DescribeSensitiveSwitchRequest& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline DescribeSensitiveSwitchRequest& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


  protected:
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> parentCategory_ = nullptr;
    std::shared_ptr<string> sensitiveCategory_ = nullptr;
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
    std::shared_ptr<string> switchStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
