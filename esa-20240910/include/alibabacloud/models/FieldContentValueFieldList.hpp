// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDCONTENTVALUEFIELDLIST_HPP_
#define ALIBABACLOUD_MODELS_FIELDCONTENTVALUEFIELDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class FieldContentValueFieldList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldContentValueFieldList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionCn, descriptionCn_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
    };
    friend void from_json(const Darabonba::Json& j, FieldContentValueFieldList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionCn, descriptionCn_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
    };
    FieldContentValueFieldList() = default ;
    FieldContentValueFieldList(const FieldContentValueFieldList &) = default ;
    FieldContentValueFieldList(FieldContentValueFieldList &&) = default ;
    FieldContentValueFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldContentValueFieldList() = default ;
    FieldContentValueFieldList& operator=(const FieldContentValueFieldList &) = default ;
    FieldContentValueFieldList& operator=(FieldContentValueFieldList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->description_ == nullptr && return this->descriptionCn_ == nullptr && return this->category_ == nullptr && return this->dataType_ == nullptr && return this->sortOrder_ == nullptr
        && return this->isDefault_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline FieldContentValueFieldList& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline FieldContentValueFieldList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionCn Field Functions 
    bool hasDescriptionCn() const { return this->descriptionCn_ != nullptr;};
    void deleteDescriptionCn() { this->descriptionCn_ = nullptr;};
    inline string descriptionCn() const { DARABONBA_PTR_GET_DEFAULT(descriptionCn_, "") };
    inline FieldContentValueFieldList& setDescriptionCn(string descriptionCn) { DARABONBA_PTR_SET_VALUE(descriptionCn_, descriptionCn) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline FieldContentValueFieldList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline FieldContentValueFieldList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline int64_t sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0L) };
    inline FieldContentValueFieldList& setSortOrder(int64_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline FieldContentValueFieldList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


  protected:
    // The field name.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The description of the field in English.
    std::shared_ptr<string> description_ = nullptr;
    // The description of the field in Chinese.
    std::shared_ptr<string> descriptionCn_ = nullptr;
    // The category of the field.
    std::shared_ptr<string> category_ = nullptr;
    // The data type of the field.
    std::shared_ptr<string> dataType_ = nullptr;
    // The sequence number of the field.
    std::shared_ptr<int64_t> sortOrder_ = nullptr;
    // Indicates whether the field is available by default.
    std::shared_ptr<bool> isDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
