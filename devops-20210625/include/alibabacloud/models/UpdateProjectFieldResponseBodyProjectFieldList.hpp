// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTFIELDRESPONSEBODYPROJECTFIELDLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTFIELDRESPONSEBODYPROJECTFIELDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProjectFieldResponseBodyProjectFieldList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectFieldResponseBodyProjectFieldList& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectFieldResponseBodyProjectFieldList& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueType, valueType_);
    };
    UpdateProjectFieldResponseBodyProjectFieldList() = default ;
    UpdateProjectFieldResponseBodyProjectFieldList(const UpdateProjectFieldResponseBodyProjectFieldList &) = default ;
    UpdateProjectFieldResponseBodyProjectFieldList(UpdateProjectFieldResponseBodyProjectFieldList &&) = default ;
    UpdateProjectFieldResponseBodyProjectFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectFieldResponseBodyProjectFieldList() = default ;
    UpdateProjectFieldResponseBodyProjectFieldList& operator=(const UpdateProjectFieldResponseBodyProjectFieldList &) = default ;
    UpdateProjectFieldResponseBodyProjectFieldList& operator=(UpdateProjectFieldResponseBodyProjectFieldList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->identifier_ == nullptr && return this->value_ == nullptr && return this->valueType_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateProjectFieldResponseBodyProjectFieldList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline UpdateProjectFieldResponseBodyProjectFieldList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateProjectFieldResponseBodyProjectFieldList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline UpdateProjectFieldResponseBodyProjectFieldList& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
