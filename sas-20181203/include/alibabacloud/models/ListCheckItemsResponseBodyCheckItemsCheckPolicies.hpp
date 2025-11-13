// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMSRESPONSEBODYCHECKITEMSCHECKPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMSRESPONSEBODYCHECKITEMSCHECKPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemsResponseBodyCheckItemsCheckPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemsResponseBodyCheckItemsCheckPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(RequirementId, requirementId_);
      DARABONBA_PTR_TO_JSON(RequirementShowName, requirementShowName_);
      DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
      DARABONBA_PTR_TO_JSON(SectionShowName, sectionShowName_);
      DARABONBA_PTR_TO_JSON(StandardId, standardId_);
      DARABONBA_PTR_TO_JSON(StandardShowName, standardShowName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemsResponseBodyCheckItemsCheckPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(RequirementId, requirementId_);
      DARABONBA_PTR_FROM_JSON(RequirementShowName, requirementShowName_);
      DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
      DARABONBA_PTR_FROM_JSON(SectionShowName, sectionShowName_);
      DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
      DARABONBA_PTR_FROM_JSON(StandardShowName, standardShowName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCheckItemsResponseBodyCheckItemsCheckPolicies() = default ;
    ListCheckItemsResponseBodyCheckItemsCheckPolicies(const ListCheckItemsResponseBodyCheckItemsCheckPolicies &) = default ;
    ListCheckItemsResponseBodyCheckItemsCheckPolicies(ListCheckItemsResponseBodyCheckItemsCheckPolicies &&) = default ;
    ListCheckItemsResponseBodyCheckItemsCheckPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemsResponseBodyCheckItemsCheckPolicies() = default ;
    ListCheckItemsResponseBodyCheckItemsCheckPolicies& operator=(const ListCheckItemsResponseBodyCheckItemsCheckPolicies &) = default ;
    ListCheckItemsResponseBodyCheckItemsCheckPolicies& operator=(ListCheckItemsResponseBodyCheckItemsCheckPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requirementId_ == nullptr
        && return this->requirementShowName_ == nullptr && return this->sectionId_ == nullptr && return this->sectionShowName_ == nullptr && return this->standardId_ == nullptr && return this->standardShowName_ == nullptr
        && return this->type_ == nullptr; };
    // requirementId Field Functions 
    bool hasRequirementId() const { return this->requirementId_ != nullptr;};
    void deleteRequirementId() { this->requirementId_ = nullptr;};
    inline int64_t requirementId() const { DARABONBA_PTR_GET_DEFAULT(requirementId_, 0L) };
    inline ListCheckItemsResponseBodyCheckItemsCheckPolicies& setRequirementId(int64_t requirementId) { DARABONBA_PTR_SET_VALUE(requirementId_, requirementId) };


    // requirementShowName Field Functions 
    bool hasRequirementShowName() const { return this->requirementShowName_ != nullptr;};
    void deleteRequirementShowName() { this->requirementShowName_ = nullptr;};
    inline string requirementShowName() const { DARABONBA_PTR_GET_DEFAULT(requirementShowName_, "") };
    inline ListCheckItemsResponseBodyCheckItemsCheckPolicies& setRequirementShowName(string requirementShowName) { DARABONBA_PTR_SET_VALUE(requirementShowName_, requirementShowName) };


    // sectionId Field Functions 
    bool hasSectionId() const { return this->sectionId_ != nullptr;};
    void deleteSectionId() { this->sectionId_ = nullptr;};
    inline int64_t sectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
    inline ListCheckItemsResponseBodyCheckItemsCheckPolicies& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


    // sectionShowName Field Functions 
    bool hasSectionShowName() const { return this->sectionShowName_ != nullptr;};
    void deleteSectionShowName() { this->sectionShowName_ = nullptr;};
    inline string sectionShowName() const { DARABONBA_PTR_GET_DEFAULT(sectionShowName_, "") };
    inline ListCheckItemsResponseBodyCheckItemsCheckPolicies& setSectionShowName(string sectionShowName) { DARABONBA_PTR_SET_VALUE(sectionShowName_, sectionShowName) };


    // standardId Field Functions 
    bool hasStandardId() const { return this->standardId_ != nullptr;};
    void deleteStandardId() { this->standardId_ = nullptr;};
    inline int64_t standardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
    inline ListCheckItemsResponseBodyCheckItemsCheckPolicies& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


    // standardShowName Field Functions 
    bool hasStandardShowName() const { return this->standardShowName_ != nullptr;};
    void deleteStandardShowName() { this->standardShowName_ = nullptr;};
    inline string standardShowName() const { DARABONBA_PTR_GET_DEFAULT(standardShowName_, "") };
    inline ListCheckItemsResponseBodyCheckItemsCheckPolicies& setStandardShowName(string standardShowName) { DARABONBA_PTR_SET_VALUE(standardShowName_, standardShowName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCheckItemsResponseBodyCheckItemsCheckPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the requirement for the check item.
    std::shared_ptr<int64_t> requirementId_ = nullptr;
    // The display name of the requirement for the check item.
    std::shared_ptr<string> requirementShowName_ = nullptr;
    // The ID of the section for the check item.
    std::shared_ptr<int64_t> sectionId_ = nullptr;
    // The display name of the section for the check item.
    std::shared_ptr<string> sectionShowName_ = nullptr;
    // 检查项的标准ID。
    std::shared_ptr<int64_t> standardId_ = nullptr;
    // The display name of the standard for the check item.
    std::shared_ptr<string> standardShowName_ = nullptr;
    // The name of the associated policy category:
    // - **AISPM**：AI Configuration Management (AI-SPM)
    // - **KISPM**：Kubernetes Configuration Management (KSPM)
    // - **IDENTITY_PERMISSION**：Identity and Permission Management (CIEM)
    // - **RISK**：Security Risk
    // - **COMPLIANCE**：Compliance Risk
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
