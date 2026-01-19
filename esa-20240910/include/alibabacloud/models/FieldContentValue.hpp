// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDCONTENTVALUE_HPP_
#define ALIBABACLOUD_MODELS_FIELDCONTENTVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class FieldContentValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldContentValue& obj) { 
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
    };
    friend void from_json(const Darabonba::Json& j, FieldContentValue& obj) { 
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
    };
    FieldContentValue() = default ;
    FieldContentValue(const FieldContentValue &) = default ;
    FieldContentValue(FieldContentValue &&) = default ;
    FieldContentValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldContentValue() = default ;
    FieldContentValue& operator=(const FieldContentValue &) = default ;
    FieldContentValue& operator=(FieldContentValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FieldList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FieldList& obj) { 
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DescriptionCn, descriptionCn_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      };
      friend void from_json(const Darabonba::Json& j, FieldList& obj) { 
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DescriptionCn, descriptionCn_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      };
      FieldList() = default ;
      FieldList(const FieldList &) = default ;
      FieldList(FieldList &&) = default ;
      FieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FieldList() = default ;
      FieldList& operator=(const FieldList &) = default ;
      FieldList& operator=(FieldList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->description_ == nullptr && this->descriptionCn_ == nullptr && this->category_ == nullptr && this->dataType_ == nullptr && this->sortOrder_ == nullptr
        && this->isDefault_ == nullptr; };
      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline FieldList& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FieldList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // descriptionCn Field Functions 
      bool hasDescriptionCn() const { return this->descriptionCn_ != nullptr;};
      void deleteDescriptionCn() { this->descriptionCn_ = nullptr;};
      inline string getDescriptionCn() const { DARABONBA_PTR_GET_DEFAULT(descriptionCn_, "") };
      inline FieldList& setDescriptionCn(string descriptionCn) { DARABONBA_PTR_SET_VALUE(descriptionCn_, descriptionCn) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline FieldList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline FieldList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // sortOrder Field Functions 
      bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
      void deleteSortOrder() { this->sortOrder_ = nullptr;};
      inline int64_t getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0L) };
      inline FieldList& setSortOrder(int64_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline FieldList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    protected:
      // The field name.
      shared_ptr<string> fieldName_ {};
      // The description of the field in English.
      shared_ptr<string> description_ {};
      // The description of the field in Chinese.
      shared_ptr<string> descriptionCn_ {};
      // The category of the field.
      shared_ptr<string> category_ {};
      // The data type of the field.
      shared_ptr<string> dataType_ {};
      // The sequence number of the field.
      shared_ptr<int64_t> sortOrder_ {};
      // Indicates whether the field is available by default.
      shared_ptr<bool> isDefault_ {};
    };

    virtual bool empty() const override { return this->sortOrder_ == nullptr
        && this->fieldList_ == nullptr; };
    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline int64_t getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0L) };
    inline FieldContentValue& setSortOrder(int64_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // fieldList Field Functions 
    bool hasFieldList() const { return this->fieldList_ != nullptr;};
    void deleteFieldList() { this->fieldList_ = nullptr;};
    inline const vector<FieldContentValue::FieldList> & getFieldList() const { DARABONBA_PTR_GET_CONST(fieldList_, vector<FieldContentValue::FieldList>) };
    inline vector<FieldContentValue::FieldList> getFieldList() { DARABONBA_PTR_GET(fieldList_, vector<FieldContentValue::FieldList>) };
    inline FieldContentValue& setFieldList(const vector<FieldContentValue::FieldList> & fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };
    inline FieldContentValue& setFieldList(vector<FieldContentValue::FieldList> && fieldList) { DARABONBA_PTR_SET_RVALUE(fieldList_, fieldList) };


  protected:
    // The sequence number of the fields.
    shared_ptr<int64_t> sortOrder_ {};
    // The fields.
    shared_ptr<vector<FieldContentValue::FieldList>> fieldList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
