// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUESTCUSTOMFIELDS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUESTCUSTOMFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateUserRequestCustomFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserRequestCustomFields& obj) { 
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequestCustomFields& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
    };
    UpdateUserRequestCustomFields() = default ;
    UpdateUserRequestCustomFields(const UpdateUserRequestCustomFields &) = default ;
    UpdateUserRequestCustomFields(UpdateUserRequestCustomFields &&) = default ;
    UpdateUserRequestCustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserRequestCustomFields() = default ;
    UpdateUserRequestCustomFields& operator=(const UpdateUserRequestCustomFields &) = default ;
    UpdateUserRequestCustomFields& operator=(UpdateUserRequestCustomFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldValue_ == nullptr && return this->operation_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline UpdateUserRequestCustomFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline UpdateUserRequestCustomFields& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline UpdateUserRequestCustomFields& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


  protected:
    // The name of the extended field. You must create an extended field before you specify this parameter. To create an extended field, go to the Extended Fields page of the specified EIAM instance in the IDaaS console.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The value of the extended field. The value follows the limits on the properties of the extended field.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // The operation type of the extended field. Valid values:
    // 
    // *   add: adds a value to the extended field of the account.
    // *   replace: replaces the existing value of the extended field of the account. If the existing value to be replaced does not exist, this operation changes to the add operation.
    // *   remove: removes a value from the extended field of the account.
    std::shared_ptr<string> operation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
