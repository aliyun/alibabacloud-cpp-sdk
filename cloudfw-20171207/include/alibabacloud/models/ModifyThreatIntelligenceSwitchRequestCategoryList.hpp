// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTHREATINTELLIGENCESWITCHREQUESTCATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTHREATINTELLIGENCESWITCHREQUESTCATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyThreatIntelligenceSwitchRequestCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyThreatIntelligenceSwitchRequestCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyThreatIntelligenceSwitchRequestCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
    };
    ModifyThreatIntelligenceSwitchRequestCategoryList() = default ;
    ModifyThreatIntelligenceSwitchRequestCategoryList(const ModifyThreatIntelligenceSwitchRequestCategoryList &) = default ;
    ModifyThreatIntelligenceSwitchRequestCategoryList(ModifyThreatIntelligenceSwitchRequestCategoryList &&) = default ;
    ModifyThreatIntelligenceSwitchRequestCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyThreatIntelligenceSwitchRequestCategoryList() = default ;
    ModifyThreatIntelligenceSwitchRequestCategoryList& operator=(const ModifyThreatIntelligenceSwitchRequestCategoryList &) = default ;
    ModifyThreatIntelligenceSwitchRequestCategoryList& operator=(ModifyThreatIntelligenceSwitchRequestCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->categoryId_ == nullptr && return this->enableStatus_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ModifyThreatIntelligenceSwitchRequestCategoryList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ModifyThreatIntelligenceSwitchRequestCategoryList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline ModifyThreatIntelligenceSwitchRequestCategoryList& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> enableStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
