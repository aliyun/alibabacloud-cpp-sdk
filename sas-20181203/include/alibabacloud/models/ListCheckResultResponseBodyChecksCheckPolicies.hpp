// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRESULTRESPONSEBODYCHECKSCHECKPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRESULTRESPONSEBODYCHECKSCHECKPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckResultResponseBodyChecksCheckPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckResultResponseBodyChecksCheckPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(RequirementId, requirementId_);
      DARABONBA_PTR_TO_JSON(RequirementShowName, requirementShowName_);
      DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
      DARABONBA_PTR_TO_JSON(SectionShowName, sectionShowName_);
      DARABONBA_PTR_TO_JSON(StandardId, standardId_);
      DARABONBA_PTR_TO_JSON(StandardShowName, standardShowName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckResultResponseBodyChecksCheckPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(RequirementId, requirementId_);
      DARABONBA_PTR_FROM_JSON(RequirementShowName, requirementShowName_);
      DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
      DARABONBA_PTR_FROM_JSON(SectionShowName, sectionShowName_);
      DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
      DARABONBA_PTR_FROM_JSON(StandardShowName, standardShowName_);
    };
    ListCheckResultResponseBodyChecksCheckPolicies() = default ;
    ListCheckResultResponseBodyChecksCheckPolicies(const ListCheckResultResponseBodyChecksCheckPolicies &) = default ;
    ListCheckResultResponseBodyChecksCheckPolicies(ListCheckResultResponseBodyChecksCheckPolicies &&) = default ;
    ListCheckResultResponseBodyChecksCheckPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckResultResponseBodyChecksCheckPolicies() = default ;
    ListCheckResultResponseBodyChecksCheckPolicies& operator=(const ListCheckResultResponseBodyChecksCheckPolicies &) = default ;
    ListCheckResultResponseBodyChecksCheckPolicies& operator=(ListCheckResultResponseBodyChecksCheckPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requirementId_ != nullptr
        && this->requirementShowName_ != nullptr && this->sectionId_ != nullptr && this->sectionShowName_ != nullptr && this->standardId_ != nullptr && this->standardShowName_ != nullptr; };
    // requirementId Field Functions 
    bool hasRequirementId() const { return this->requirementId_ != nullptr;};
    void deleteRequirementId() { this->requirementId_ = nullptr;};
    inline int64_t requirementId() const { DARABONBA_PTR_GET_DEFAULT(requirementId_, 0L) };
    inline ListCheckResultResponseBodyChecksCheckPolicies& setRequirementId(int64_t requirementId) { DARABONBA_PTR_SET_VALUE(requirementId_, requirementId) };


    // requirementShowName Field Functions 
    bool hasRequirementShowName() const { return this->requirementShowName_ != nullptr;};
    void deleteRequirementShowName() { this->requirementShowName_ = nullptr;};
    inline string requirementShowName() const { DARABONBA_PTR_GET_DEFAULT(requirementShowName_, "") };
    inline ListCheckResultResponseBodyChecksCheckPolicies& setRequirementShowName(string requirementShowName) { DARABONBA_PTR_SET_VALUE(requirementShowName_, requirementShowName) };


    // sectionId Field Functions 
    bool hasSectionId() const { return this->sectionId_ != nullptr;};
    void deleteSectionId() { this->sectionId_ = nullptr;};
    inline int64_t sectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
    inline ListCheckResultResponseBodyChecksCheckPolicies& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


    // sectionShowName Field Functions 
    bool hasSectionShowName() const { return this->sectionShowName_ != nullptr;};
    void deleteSectionShowName() { this->sectionShowName_ = nullptr;};
    inline string sectionShowName() const { DARABONBA_PTR_GET_DEFAULT(sectionShowName_, "") };
    inline ListCheckResultResponseBodyChecksCheckPolicies& setSectionShowName(string sectionShowName) { DARABONBA_PTR_SET_VALUE(sectionShowName_, sectionShowName) };


    // standardId Field Functions 
    bool hasStandardId() const { return this->standardId_ != nullptr;};
    void deleteStandardId() { this->standardId_ = nullptr;};
    inline int64_t standardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
    inline ListCheckResultResponseBodyChecksCheckPolicies& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


    // standardShowName Field Functions 
    bool hasStandardShowName() const { return this->standardShowName_ != nullptr;};
    void deleteStandardShowName() { this->standardShowName_ = nullptr;};
    inline string standardShowName() const { DARABONBA_PTR_GET_DEFAULT(standardShowName_, "") };
    inline ListCheckResultResponseBodyChecksCheckPolicies& setStandardShowName(string standardShowName) { DARABONBA_PTR_SET_VALUE(standardShowName_, standardShowName) };


  protected:
    // The ID of the requirement item for the check item.
    std::shared_ptr<int64_t> requirementId_ = nullptr;
    // The display name of the requirement item for the check item.
    std::shared_ptr<string> requirementShowName_ = nullptr;
    // The ID of the section for the check item.
    std::shared_ptr<int64_t> sectionId_ = nullptr;
    // The display name of the section for the check item.
    std::shared_ptr<string> sectionShowName_ = nullptr;
    // The standard ID of the check item.
    std::shared_ptr<int64_t> standardId_ = nullptr;
    // The standard display name of the check item.
    std::shared_ptr<string> standardShowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
