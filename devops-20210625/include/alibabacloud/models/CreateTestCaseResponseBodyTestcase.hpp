// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASE_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcaseAssignedTo.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcaseCreator.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcaseDetailInfo.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcaseDirectory.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcaseModifier.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseResponseBodyTestcase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseResponseBodyTestcase& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(detailInfo, detailInfo_);
      DARABONBA_PTR_TO_JSON(directory, directory_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseResponseBodyTestcase& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(detailInfo, detailInfo_);
      DARABONBA_PTR_FROM_JSON(directory, directory_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
    };
    CreateTestCaseResponseBodyTestcase() = default ;
    CreateTestCaseResponseBodyTestcase(const CreateTestCaseResponseBodyTestcase &) = default ;
    CreateTestCaseResponseBodyTestcase(CreateTestCaseResponseBodyTestcase &&) = default ;
    CreateTestCaseResponseBodyTestcase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseResponseBodyTestcase() = default ;
    CreateTestCaseResponseBodyTestcase& operator=(const CreateTestCaseResponseBodyTestcase &) = default ;
    CreateTestCaseResponseBodyTestcase& operator=(CreateTestCaseResponseBodyTestcase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->categoryIdentifier_ == nullptr && return this->creator_ == nullptr && return this->detailInfo_ == nullptr && return this->directory_ == nullptr && return this->identifier_ == nullptr
        && return this->modifier_ == nullptr && return this->spaceIdentifier_ == nullptr && return this->spaceType_ == nullptr && return this->subject_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline const Models::CreateTestCaseResponseBodyTestcaseAssignedTo & assignedTo() const { DARABONBA_PTR_GET_CONST(assignedTo_, Models::CreateTestCaseResponseBodyTestcaseAssignedTo) };
    inline Models::CreateTestCaseResponseBodyTestcaseAssignedTo assignedTo() { DARABONBA_PTR_GET(assignedTo_, Models::CreateTestCaseResponseBodyTestcaseAssignedTo) };
    inline CreateTestCaseResponseBodyTestcase& setAssignedTo(const Models::CreateTestCaseResponseBodyTestcaseAssignedTo & assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };
    inline CreateTestCaseResponseBodyTestcase& setAssignedTo(Models::CreateTestCaseResponseBodyTestcaseAssignedTo && assignedTo) { DARABONBA_PTR_SET_RVALUE(assignedTo_, assignedTo) };


    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline CreateTestCaseResponseBodyTestcase& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::CreateTestCaseResponseBodyTestcaseCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::CreateTestCaseResponseBodyTestcaseCreator) };
    inline Models::CreateTestCaseResponseBodyTestcaseCreator creator() { DARABONBA_PTR_GET(creator_, Models::CreateTestCaseResponseBodyTestcaseCreator) };
    inline CreateTestCaseResponseBodyTestcase& setCreator(const Models::CreateTestCaseResponseBodyTestcaseCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline CreateTestCaseResponseBodyTestcase& setCreator(Models::CreateTestCaseResponseBodyTestcaseCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const Models::CreateTestCaseResponseBodyTestcaseDetailInfo & detailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, Models::CreateTestCaseResponseBodyTestcaseDetailInfo) };
    inline Models::CreateTestCaseResponseBodyTestcaseDetailInfo detailInfo() { DARABONBA_PTR_GET(detailInfo_, Models::CreateTestCaseResponseBodyTestcaseDetailInfo) };
    inline CreateTestCaseResponseBodyTestcase& setDetailInfo(const Models::CreateTestCaseResponseBodyTestcaseDetailInfo & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline CreateTestCaseResponseBodyTestcase& setDetailInfo(Models::CreateTestCaseResponseBodyTestcaseDetailInfo && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline const Models::CreateTestCaseResponseBodyTestcaseDirectory & directory() const { DARABONBA_PTR_GET_CONST(directory_, Models::CreateTestCaseResponseBodyTestcaseDirectory) };
    inline Models::CreateTestCaseResponseBodyTestcaseDirectory directory() { DARABONBA_PTR_GET(directory_, Models::CreateTestCaseResponseBodyTestcaseDirectory) };
    inline CreateTestCaseResponseBodyTestcase& setDirectory(const Models::CreateTestCaseResponseBodyTestcaseDirectory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
    inline CreateTestCaseResponseBodyTestcase& setDirectory(Models::CreateTestCaseResponseBodyTestcaseDirectory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateTestCaseResponseBodyTestcase& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline const Models::CreateTestCaseResponseBodyTestcaseModifier & modifier() const { DARABONBA_PTR_GET_CONST(modifier_, Models::CreateTestCaseResponseBodyTestcaseModifier) };
    inline Models::CreateTestCaseResponseBodyTestcaseModifier modifier() { DARABONBA_PTR_GET(modifier_, Models::CreateTestCaseResponseBodyTestcaseModifier) };
    inline CreateTestCaseResponseBodyTestcase& setModifier(const Models::CreateTestCaseResponseBodyTestcaseModifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
    inline CreateTestCaseResponseBodyTestcase& setModifier(Models::CreateTestCaseResponseBodyTestcaseModifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline CreateTestCaseResponseBodyTestcase& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline CreateTestCaseResponseBodyTestcase& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateTestCaseResponseBodyTestcase& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    std::shared_ptr<Models::CreateTestCaseResponseBodyTestcaseAssignedTo> assignedTo_ = nullptr;
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<Models::CreateTestCaseResponseBodyTestcaseCreator> creator_ = nullptr;
    std::shared_ptr<Models::CreateTestCaseResponseBodyTestcaseDetailInfo> detailInfo_ = nullptr;
    std::shared_ptr<Models::CreateTestCaseResponseBodyTestcaseDirectory> directory_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<Models::CreateTestCaseResponseBodyTestcaseModifier> modifier_ = nullptr;
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    std::shared_ptr<string> spaceType_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
