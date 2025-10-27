// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCONFIGSHRINKREQUESTADDEDCHECK_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCONFIGSHRINKREQUESTADDEDCHECK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckConfigShrinkRequestAddedCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckConfigShrinkRequestAddedCheck& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckConfigShrinkRequestAddedCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
    };
    ChangeCheckConfigShrinkRequestAddedCheck() = default ;
    ChangeCheckConfigShrinkRequestAddedCheck(const ChangeCheckConfigShrinkRequestAddedCheck &) = default ;
    ChangeCheckConfigShrinkRequestAddedCheck(ChangeCheckConfigShrinkRequestAddedCheck &&) = default ;
    ChangeCheckConfigShrinkRequestAddedCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckConfigShrinkRequestAddedCheck() = default ;
    ChangeCheckConfigShrinkRequestAddedCheck& operator=(const ChangeCheckConfigShrinkRequestAddedCheck &) = default ;
    ChangeCheckConfigShrinkRequestAddedCheck& operator=(ChangeCheckConfigShrinkRequestAddedCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->sectionId_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ChangeCheckConfigShrinkRequestAddedCheck& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // sectionId Field Functions 
    bool hasSectionId() const { return this->sectionId_ != nullptr;};
    void deleteSectionId() { this->sectionId_ = nullptr;};
    inline int64_t sectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
    inline ChangeCheckConfigShrinkRequestAddedCheck& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


  protected:
    // The ID of the check item.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to obtain the ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The section ID of the check item.
    std::shared_ptr<int64_t> sectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
