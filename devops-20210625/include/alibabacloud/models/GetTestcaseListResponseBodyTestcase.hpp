// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTCASELISTRESPONSEBODYTESTCASE_HPP_
#define ALIBABACLOUD_MODELS_GETTESTCASELISTRESPONSEBODYTESTCASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTestcaseListResponseBodyTestcaseAssignedTo.hpp>
#include <vector>
#include <alibabacloud/models/GetTestcaseListResponseBodyTestcaseCustomFields.hpp>
#include <alibabacloud/models/GetTestcaseListResponseBodyTestcaseSpace.hpp>
#include <alibabacloud/models/GetTestcaseListResponseBodyTestcaseTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestcaseListResponseBodyTestcase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestcaseListResponseBodyTestcase& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(customFields, customFields_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(space, space_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestcaseListResponseBodyTestcase& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(customFields, customFields_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(space, space_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    GetTestcaseListResponseBodyTestcase() = default ;
    GetTestcaseListResponseBodyTestcase(const GetTestcaseListResponseBodyTestcase &) = default ;
    GetTestcaseListResponseBodyTestcase(GetTestcaseListResponseBodyTestcase &&) = default ;
    GetTestcaseListResponseBodyTestcase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestcaseListResponseBodyTestcase() = default ;
    GetTestcaseListResponseBodyTestcase& operator=(const GetTestcaseListResponseBodyTestcase &) = default ;
    GetTestcaseListResponseBodyTestcase& operator=(GetTestcaseListResponseBodyTestcase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->categoryIdentifier_ == nullptr && return this->customFields_ == nullptr && return this->gmtCreate_ == nullptr && return this->identifier_ == nullptr && return this->space_ == nullptr
        && return this->subject_ == nullptr && return this->tags_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline const Models::GetTestcaseListResponseBodyTestcaseAssignedTo & assignedTo() const { DARABONBA_PTR_GET_CONST(assignedTo_, Models::GetTestcaseListResponseBodyTestcaseAssignedTo) };
    inline Models::GetTestcaseListResponseBodyTestcaseAssignedTo assignedTo() { DARABONBA_PTR_GET(assignedTo_, Models::GetTestcaseListResponseBodyTestcaseAssignedTo) };
    inline GetTestcaseListResponseBodyTestcase& setAssignedTo(const Models::GetTestcaseListResponseBodyTestcaseAssignedTo & assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };
    inline GetTestcaseListResponseBodyTestcase& setAssignedTo(Models::GetTestcaseListResponseBodyTestcaseAssignedTo && assignedTo) { DARABONBA_PTR_SET_RVALUE(assignedTo_, assignedTo) };


    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline GetTestcaseListResponseBodyTestcase& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<Models::GetTestcaseListResponseBodyTestcaseCustomFields> & customFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<Models::GetTestcaseListResponseBodyTestcaseCustomFields>) };
    inline vector<Models::GetTestcaseListResponseBodyTestcaseCustomFields> customFields() { DARABONBA_PTR_GET(customFields_, vector<Models::GetTestcaseListResponseBodyTestcaseCustomFields>) };
    inline GetTestcaseListResponseBodyTestcase& setCustomFields(const vector<Models::GetTestcaseListResponseBodyTestcaseCustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline GetTestcaseListResponseBodyTestcase& setCustomFields(vector<Models::GetTestcaseListResponseBodyTestcaseCustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetTestcaseListResponseBodyTestcase& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetTestcaseListResponseBodyTestcase& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // space Field Functions 
    bool hasSpace() const { return this->space_ != nullptr;};
    void deleteSpace() { this->space_ = nullptr;};
    inline const Models::GetTestcaseListResponseBodyTestcaseSpace & space() const { DARABONBA_PTR_GET_CONST(space_, Models::GetTestcaseListResponseBodyTestcaseSpace) };
    inline Models::GetTestcaseListResponseBodyTestcaseSpace space() { DARABONBA_PTR_GET(space_, Models::GetTestcaseListResponseBodyTestcaseSpace) };
    inline GetTestcaseListResponseBodyTestcase& setSpace(const Models::GetTestcaseListResponseBodyTestcaseSpace & space) { DARABONBA_PTR_SET_VALUE(space_, space) };
    inline GetTestcaseListResponseBodyTestcase& setSpace(Models::GetTestcaseListResponseBodyTestcaseSpace && space) { DARABONBA_PTR_SET_RVALUE(space_, space) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline GetTestcaseListResponseBodyTestcase& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetTestcaseListResponseBodyTestcaseTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetTestcaseListResponseBodyTestcaseTags>) };
    inline vector<Models::GetTestcaseListResponseBodyTestcaseTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetTestcaseListResponseBodyTestcaseTags>) };
    inline GetTestcaseListResponseBodyTestcase& setTags(const vector<Models::GetTestcaseListResponseBodyTestcaseTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTestcaseListResponseBodyTestcase& setTags(vector<Models::GetTestcaseListResponseBodyTestcaseTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<Models::GetTestcaseListResponseBodyTestcaseAssignedTo> assignedTo_ = nullptr;
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<vector<Models::GetTestcaseListResponseBodyTestcaseCustomFields>> customFields_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<Models::GetTestcaseListResponseBodyTestcaseSpace> space_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<vector<Models::GetTestcaseListResponseBodyTestcaseTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
