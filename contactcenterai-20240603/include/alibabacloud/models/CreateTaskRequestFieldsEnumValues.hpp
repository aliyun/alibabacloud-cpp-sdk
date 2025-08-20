// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTFIELDSENUMVALUES_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTFIELDSENUMVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateTaskRequestFieldsEnumValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestFieldsEnumValues& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(enumValue, enumValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestFieldsEnumValues& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(enumValue, enumValue_);
    };
    CreateTaskRequestFieldsEnumValues() = default ;
    CreateTaskRequestFieldsEnumValues(const CreateTaskRequestFieldsEnumValues &) = default ;
    CreateTaskRequestFieldsEnumValues(CreateTaskRequestFieldsEnumValues &&) = default ;
    CreateTaskRequestFieldsEnumValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestFieldsEnumValues() = default ;
    CreateTaskRequestFieldsEnumValues& operator=(const CreateTaskRequestFieldsEnumValues &) = default ;
    CreateTaskRequestFieldsEnumValues& operator=(CreateTaskRequestFieldsEnumValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->enumValue_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreateTaskRequestFieldsEnumValues& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // enumValue Field Functions 
    bool hasEnumValue() const { return this->enumValue_ != nullptr;};
    void deleteEnumValue() { this->enumValue_ = nullptr;};
    inline string enumValue() const { DARABONBA_PTR_GET_DEFAULT(enumValue_, "") };
    inline CreateTaskRequestFieldsEnumValues& setEnumValue(string enumValue) { DARABONBA_PTR_SET_VALUE(enumValue_, enumValue) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> desc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> enumValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
