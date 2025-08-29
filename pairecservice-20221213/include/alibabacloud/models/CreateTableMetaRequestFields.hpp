// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLEMETAREQUESTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLEMETAREQUESTFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateTableMetaRequestFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTableMetaRequestFields& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(IsDimensionField, isDimensionField_);
      DARABONBA_PTR_TO_JSON(IsPartitionField, isPartitionField_);
      DARABONBA_PTR_TO_JSON(Meaning, meaning_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTableMetaRequestFields& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(IsDimensionField, isDimensionField_);
      DARABONBA_PTR_FROM_JSON(IsPartitionField, isPartitionField_);
      DARABONBA_PTR_FROM_JSON(Meaning, meaning_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateTableMetaRequestFields() = default ;
    CreateTableMetaRequestFields(const CreateTableMetaRequestFields &) = default ;
    CreateTableMetaRequestFields(CreateTableMetaRequestFields &&) = default ;
    CreateTableMetaRequestFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTableMetaRequestFields() = default ;
    CreateTableMetaRequestFields& operator=(const CreateTableMetaRequestFields &) = default ;
    CreateTableMetaRequestFields& operator=(CreateTableMetaRequestFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataType_ != nullptr
        && this->isDimensionField_ != nullptr && this->isPartitionField_ != nullptr && this->meaning_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateTableMetaRequestFields& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // isDimensionField Field Functions 
    bool hasIsDimensionField() const { return this->isDimensionField_ != nullptr;};
    void deleteIsDimensionField() { this->isDimensionField_ = nullptr;};
    inline bool isDimensionField() const { DARABONBA_PTR_GET_DEFAULT(isDimensionField_, false) };
    inline CreateTableMetaRequestFields& setIsDimensionField(bool isDimensionField) { DARABONBA_PTR_SET_VALUE(isDimensionField_, isDimensionField) };


    // isPartitionField Field Functions 
    bool hasIsPartitionField() const { return this->isPartitionField_ != nullptr;};
    void deleteIsPartitionField() { this->isPartitionField_ = nullptr;};
    inline string isPartitionField() const { DARABONBA_PTR_GET_DEFAULT(isPartitionField_, "") };
    inline CreateTableMetaRequestFields& setIsPartitionField(string isPartitionField) { DARABONBA_PTR_SET_VALUE(isPartitionField_, isPartitionField) };


    // meaning Field Functions 
    bool hasMeaning() const { return this->meaning_ != nullptr;};
    void deleteMeaning() { this->meaning_ = nullptr;};
    inline string meaning() const { DARABONBA_PTR_GET_DEFAULT(meaning_, "") };
    inline CreateTableMetaRequestFields& setMeaning(string meaning) { DARABONBA_PTR_SET_VALUE(meaning_, meaning) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTableMetaRequestFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateTableMetaRequestFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> dataType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isDimensionField_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> isPartitionField_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> meaning_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
