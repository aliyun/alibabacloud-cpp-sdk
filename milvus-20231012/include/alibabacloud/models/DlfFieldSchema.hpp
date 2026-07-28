// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLFFIELDSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_DLFFIELDSCHEMA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DlfFieldSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DlfFieldSchema& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(dimension, dimension_);
      DARABONBA_PTR_TO_JSON(dlfFieldType, dlfFieldType_);
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(isPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_TO_JSON(isSupported, isSupported_);
      DARABONBA_PTR_TO_JSON(isVectorField, isVectorField_);
      DARABONBA_PTR_TO_JSON(milvusFieldType, milvusFieldType_);
      DARABONBA_PTR_TO_JSON(nullable, nullable_);
      DARABONBA_PTR_TO_JSON(unsupportedReason, unsupportedReason_);
    };
    friend void from_json(const Darabonba::Json& j, DlfFieldSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(dlfFieldType, dlfFieldType_);
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(isPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_FROM_JSON(isSupported, isSupported_);
      DARABONBA_PTR_FROM_JSON(isVectorField, isVectorField_);
      DARABONBA_PTR_FROM_JSON(milvusFieldType, milvusFieldType_);
      DARABONBA_PTR_FROM_JSON(nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(unsupportedReason, unsupportedReason_);
    };
    DlfFieldSchema() = default ;
    DlfFieldSchema(const DlfFieldSchema &) = default ;
    DlfFieldSchema(DlfFieldSchema &&) = default ;
    DlfFieldSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DlfFieldSchema() = default ;
    DlfFieldSchema& operator=(const DlfFieldSchema &) = default ;
    DlfFieldSchema& operator=(DlfFieldSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->dimension_ == nullptr && this->dlfFieldType_ == nullptr && this->fieldName_ == nullptr && this->isPrimaryKey_ == nullptr && this->isSupported_ == nullptr
        && this->isVectorField_ == nullptr && this->milvusFieldType_ == nullptr && this->nullable_ == nullptr && this->unsupportedReason_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DlfFieldSchema& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline DlfFieldSchema& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // dlfFieldType Field Functions 
    bool hasDlfFieldType() const { return this->dlfFieldType_ != nullptr;};
    void deleteDlfFieldType() { this->dlfFieldType_ = nullptr;};
    inline string getDlfFieldType() const { DARABONBA_PTR_GET_DEFAULT(dlfFieldType_, "") };
    inline DlfFieldSchema& setDlfFieldType(string dlfFieldType) { DARABONBA_PTR_SET_VALUE(dlfFieldType_, dlfFieldType) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DlfFieldSchema& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // isPrimaryKey Field Functions 
    bool hasIsPrimaryKey() const { return this->isPrimaryKey_ != nullptr;};
    void deleteIsPrimaryKey() { this->isPrimaryKey_ = nullptr;};
    inline bool getIsPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKey_, false) };
    inline DlfFieldSchema& setIsPrimaryKey(bool isPrimaryKey) { DARABONBA_PTR_SET_VALUE(isPrimaryKey_, isPrimaryKey) };


    // isSupported Field Functions 
    bool hasIsSupported() const { return this->isSupported_ != nullptr;};
    void deleteIsSupported() { this->isSupported_ = nullptr;};
    inline bool getIsSupported() const { DARABONBA_PTR_GET_DEFAULT(isSupported_, false) };
    inline DlfFieldSchema& setIsSupported(bool isSupported) { DARABONBA_PTR_SET_VALUE(isSupported_, isSupported) };


    // isVectorField Field Functions 
    bool hasIsVectorField() const { return this->isVectorField_ != nullptr;};
    void deleteIsVectorField() { this->isVectorField_ = nullptr;};
    inline bool getIsVectorField() const { DARABONBA_PTR_GET_DEFAULT(isVectorField_, false) };
    inline DlfFieldSchema& setIsVectorField(bool isVectorField) { DARABONBA_PTR_SET_VALUE(isVectorField_, isVectorField) };


    // milvusFieldType Field Functions 
    bool hasMilvusFieldType() const { return this->milvusFieldType_ != nullptr;};
    void deleteMilvusFieldType() { this->milvusFieldType_ = nullptr;};
    inline string getMilvusFieldType() const { DARABONBA_PTR_GET_DEFAULT(milvusFieldType_, "") };
    inline DlfFieldSchema& setMilvusFieldType(string milvusFieldType) { DARABONBA_PTR_SET_VALUE(milvusFieldType_, milvusFieldType) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline DlfFieldSchema& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // unsupportedReason Field Functions 
    bool hasUnsupportedReason() const { return this->unsupportedReason_ != nullptr;};
    void deleteUnsupportedReason() { this->unsupportedReason_ = nullptr;};
    inline string getUnsupportedReason() const { DARABONBA_PTR_GET_DEFAULT(unsupportedReason_, "") };
    inline DlfFieldSchema& setUnsupportedReason(string unsupportedReason) { DARABONBA_PTR_SET_VALUE(unsupportedReason_, unsupportedReason) };


  protected:
    // A comment for the field.
    shared_ptr<string> comment_ {};
    // The dimension of the vector field. This parameter applies only when `isVectorField` is `true`.
    shared_ptr<int32_t> dimension_ {};
    // The DLF field type.
    shared_ptr<string> dlfFieldType_ {};
    // The field name.
    shared_ptr<string> fieldName_ {};
    // Indicates whether the field is a primary key.
    shared_ptr<bool> isPrimaryKey_ {};
    // Indicates whether the DLF field type can be mapped to a Milvus field type.
    shared_ptr<bool> isSupported_ {};
    // Indicates whether the field is a vector field.
    shared_ptr<bool> isVectorField_ {};
    // The corresponding Milvus field type.
    shared_ptr<string> milvusFieldType_ {};
    // Indicates whether the field can be null.
    shared_ptr<bool> nullable_ {};
    // The reason the DLF field type is unsupported. This field is present only when `isSupported` is `false`.
    shared_ptr<string> unsupportedReason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
