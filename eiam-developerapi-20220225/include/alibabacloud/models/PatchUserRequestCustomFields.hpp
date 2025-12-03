// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHUSERREQUESTCUSTOMFIELDS_HPP_
#define ALIBABACLOUD_MODELS_PATCHUSERREQUESTCUSTOMFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class PatchUserRequestCustomFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchUserRequestCustomFields& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(operation, operation_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, PatchUserRequestCustomFields& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(operation, operation_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
    };
    PatchUserRequestCustomFields() = default ;
    PatchUserRequestCustomFields(const PatchUserRequestCustomFields &) = default ;
    PatchUserRequestCustomFields(PatchUserRequestCustomFields &&) = default ;
    PatchUserRequestCustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchUserRequestCustomFields() = default ;
    PatchUserRequestCustomFields& operator=(const PatchUserRequestCustomFields &) = default ;
    PatchUserRequestCustomFields& operator=(PatchUserRequestCustomFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldValue_ == nullptr && return this->operation_ == nullptr && return this->operator_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline PatchUserRequestCustomFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline PatchUserRequestCustomFields& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline PatchUserRequestCustomFields& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline PatchUserRequestCustomFields& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    // The name of the extended field. For more information about the type and valid values of the extended field, see the detailed description of the extended field in the IDaaS console.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The value of the extended field.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // The operation to be performed on the field. Valid values:
    // 
    // *   add
    // *   replace If you leave the value of the extended field empty, the replace operation is converted to an add operation.
    // *   remove
    std::shared_ptr<string> operation_ = nullptr;
    // The type of the operation. This parameter is deprecated. Replace it with operation.
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
