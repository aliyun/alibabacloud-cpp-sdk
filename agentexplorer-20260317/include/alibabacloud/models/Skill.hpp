// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKILL_HPP_
#define ALIBABACLOUD_MODELS_SKILL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentExplorer20260317
{
namespace Models
{
  class Skill : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Skill& obj) { 
      DARABONBA_PTR_TO_JSON(categoryCode, categoryCode_);
      DARABONBA_PTR_TO_JSON(categoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(installCount, installCount_);
      DARABONBA_PTR_TO_JSON(likeCount, likeCount_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
      DARABONBA_PTR_TO_JSON(subCategoryCode, subCategoryCode_);
      DARABONBA_PTR_TO_JSON(subCategoryName, subCategoryName_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, Skill& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryCode, categoryCode_);
      DARABONBA_PTR_FROM_JSON(categoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(installCount, installCount_);
      DARABONBA_PTR_FROM_JSON(likeCount, likeCount_);
      DARABONBA_PTR_FROM_JSON(skillName, skillName_);
      DARABONBA_PTR_FROM_JSON(subCategoryCode, subCategoryCode_);
      DARABONBA_PTR_FROM_JSON(subCategoryName, subCategoryName_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    Skill() = default ;
    Skill(const Skill &) = default ;
    Skill(Skill &&) = default ;
    Skill(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Skill() = default ;
    Skill& operator=(const Skill &) = default ;
    Skill& operator=(Skill &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryCode_ == nullptr
        && this->categoryName_ == nullptr && this->createdAt_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->installCount_ == nullptr
        && this->likeCount_ == nullptr && this->skillName_ == nullptr && this->subCategoryCode_ == nullptr && this->subCategoryName_ == nullptr && this->updatedAt_ == nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline string getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
    inline Skill& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline Skill& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Skill& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Skill& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline Skill& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // installCount Field Functions 
    bool hasInstallCount() const { return this->installCount_ != nullptr;};
    void deleteInstallCount() { this->installCount_ = nullptr;};
    inline int32_t getInstallCount() const { DARABONBA_PTR_GET_DEFAULT(installCount_, 0) };
    inline Skill& setInstallCount(int32_t installCount) { DARABONBA_PTR_SET_VALUE(installCount_, installCount) };


    // likeCount Field Functions 
    bool hasLikeCount() const { return this->likeCount_ != nullptr;};
    void deleteLikeCount() { this->likeCount_ = nullptr;};
    inline int32_t getLikeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0) };
    inline Skill& setLikeCount(int32_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline Skill& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // subCategoryCode Field Functions 
    bool hasSubCategoryCode() const { return this->subCategoryCode_ != nullptr;};
    void deleteSubCategoryCode() { this->subCategoryCode_ = nullptr;};
    inline string getSubCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(subCategoryCode_, "") };
    inline Skill& setSubCategoryCode(string subCategoryCode) { DARABONBA_PTR_SET_VALUE(subCategoryCode_, subCategoryCode) };


    // subCategoryName Field Functions 
    bool hasSubCategoryName() const { return this->subCategoryName_ != nullptr;};
    void deleteSubCategoryName() { this->subCategoryName_ = nullptr;};
    inline string getSubCategoryName() const { DARABONBA_PTR_GET_DEFAULT(subCategoryName_, "") };
    inline Skill& setSubCategoryName(string subCategoryName) { DARABONBA_PTR_SET_VALUE(subCategoryName_, subCategoryName) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline Skill& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<string> categoryCode_ {};
    shared_ptr<string> categoryName_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<int32_t> installCount_ {};
    shared_ptr<int32_t> likeCount_ {};
    shared_ptr<string> skillName_ {};
    shared_ptr<string> subCategoryCode_ {};
    shared_ptr<string> subCategoryName_ {};
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentExplorer20260317
#endif
