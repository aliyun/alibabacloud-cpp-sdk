// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATINTELLIGENCESWITCHRESPONSEBODYCATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATINTELLIGENCESWITCHRESPONSEBODYCATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeThreatIntelligenceSwitchResponseBodyCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatIntelligenceSwitchResponseBodyCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(CategoryDescribe, categoryDescribe_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(CategoryParentId, categoryParentId_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatIntelligenceSwitchResponseBodyCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(CategoryDescribe, categoryDescribe_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(CategoryParentId, categoryParentId_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
    };
    DescribeThreatIntelligenceSwitchResponseBodyCategoryList() = default ;
    DescribeThreatIntelligenceSwitchResponseBodyCategoryList(const DescribeThreatIntelligenceSwitchResponseBodyCategoryList &) = default ;
    DescribeThreatIntelligenceSwitchResponseBodyCategoryList(DescribeThreatIntelligenceSwitchResponseBodyCategoryList &&) = default ;
    DescribeThreatIntelligenceSwitchResponseBodyCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatIntelligenceSwitchResponseBodyCategoryList() = default ;
    DescribeThreatIntelligenceSwitchResponseBodyCategoryList& operator=(const DescribeThreatIntelligenceSwitchResponseBodyCategoryList &) = default ;
    DescribeThreatIntelligenceSwitchResponseBodyCategoryList& operator=(DescribeThreatIntelligenceSwitchResponseBodyCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->categoryDescribe_ == nullptr && return this->categoryId_ == nullptr && return this->categoryName_ == nullptr && return this->categoryParentId_ == nullptr && return this->enableStatus_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeThreatIntelligenceSwitchResponseBodyCategoryList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // categoryDescribe Field Functions 
    bool hasCategoryDescribe() const { return this->categoryDescribe_ != nullptr;};
    void deleteCategoryDescribe() { this->categoryDescribe_ = nullptr;};
    inline string categoryDescribe() const { DARABONBA_PTR_GET_DEFAULT(categoryDescribe_, "") };
    inline DescribeThreatIntelligenceSwitchResponseBodyCategoryList& setCategoryDescribe(string categoryDescribe) { DARABONBA_PTR_SET_VALUE(categoryDescribe_, categoryDescribe) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeThreatIntelligenceSwitchResponseBodyCategoryList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeThreatIntelligenceSwitchResponseBodyCategoryList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // categoryParentId Field Functions 
    bool hasCategoryParentId() const { return this->categoryParentId_ != nullptr;};
    void deleteCategoryParentId() { this->categoryParentId_ = nullptr;};
    inline string categoryParentId() const { DARABONBA_PTR_GET_DEFAULT(categoryParentId_, "") };
    inline DescribeThreatIntelligenceSwitchResponseBodyCategoryList& setCategoryParentId(string categoryParentId) { DARABONBA_PTR_SET_VALUE(categoryParentId_, categoryParentId) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline int64_t enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, 0L) };
    inline DescribeThreatIntelligenceSwitchResponseBodyCategoryList& setEnableStatus(int64_t enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> categoryDescribe_ = nullptr;
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<string> categoryParentId_ = nullptr;
    std::shared_ptr<int64_t> enableStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
