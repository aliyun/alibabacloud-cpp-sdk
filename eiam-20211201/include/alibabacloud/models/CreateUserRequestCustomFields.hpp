// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERREQUESTCUSTOMFIELDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERREQUESTCUSTOMFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateUserRequestCustomFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserRequestCustomFields& obj) { 
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserRequestCustomFields& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
    };
    CreateUserRequestCustomFields() = default ;
    CreateUserRequestCustomFields(const CreateUserRequestCustomFields &) = default ;
    CreateUserRequestCustomFields(CreateUserRequestCustomFields &&) = default ;
    CreateUserRequestCustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserRequestCustomFields() = default ;
    CreateUserRequestCustomFields& operator=(const CreateUserRequestCustomFields &) = default ;
    CreateUserRequestCustomFields& operator=(CreateUserRequestCustomFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldValue_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline CreateUserRequestCustomFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline CreateUserRequestCustomFields& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


  protected:
    // The name of the extended field. You must create the extended field in advance. To create an extended field, log on to the IDaaS console. In the left-side navigation pane, choose Accounts > Extended Fields, and then click Create Field on the Extended Fields page.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The value of the extended field. The value follows the limits on the properties of the extended field.
    std::shared_ptr<string> fieldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
