// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUESTTESTSETTINGDTOCHECKCONFIGCHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUESTTESTSETTINGDTOCHECKCONFIGCHECKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(isRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(isRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems() = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems(const CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems &) = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems(CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems &&) = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems() = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems& operator=(const CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems &) = default ;
    CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems& operator=(CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isRequired_ == nullptr
        && return this->name_ == nullptr; };
    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateProtectdBranchRequestTestSettingDTOCheckConfigCheckItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
