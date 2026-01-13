// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELD_HPP_
#define ALIBABACLOUD_MODELS_FIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class Field : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Field& obj) { 
      DARABONBA_PTR_TO_JSON(BlobValue, blobValue_);
      DARABONBA_PTR_TO_JSON(BooleanValue, booleanValue_);
      DARABONBA_PTR_TO_JSON(DoubleValue, doubleValue_);
      DARABONBA_PTR_TO_JSON(IsNull, isNull_);
      DARABONBA_PTR_TO_JSON(LongValue, longValue_);
      DARABONBA_PTR_TO_JSON(StringValue, stringValue_);
    };
    friend void from_json(const Darabonba::Json& j, Field& obj) { 
      DARABONBA_PTR_FROM_JSON(BlobValue, blobValue_);
      DARABONBA_PTR_FROM_JSON(BooleanValue, booleanValue_);
      DARABONBA_PTR_FROM_JSON(DoubleValue, doubleValue_);
      DARABONBA_PTR_FROM_JSON(IsNull, isNull_);
      DARABONBA_PTR_FROM_JSON(LongValue, longValue_);
      DARABONBA_PTR_FROM_JSON(StringValue, stringValue_);
    };
    Field() = default ;
    Field(const Field &) = default ;
    Field(Field &&) = default ;
    Field(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Field() = default ;
    Field& operator=(const Field &) = default ;
    Field& operator=(Field &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blobValue_ == nullptr
        && this->booleanValue_ == nullptr && this->doubleValue_ == nullptr && this->isNull_ == nullptr && this->longValue_ == nullptr && this->stringValue_ == nullptr; };
    // blobValue Field Functions 
    bool hasBlobValue() const { return this->blobValue_ != nullptr;};
    void deleteBlobValue() { this->blobValue_ = nullptr;};
    inline string getBlobValue() const { DARABONBA_PTR_GET_DEFAULT(blobValue_, "") };
    inline Field& setBlobValue(string blobValue) { DARABONBA_PTR_SET_VALUE(blobValue_, blobValue) };


    // booleanValue Field Functions 
    bool hasBooleanValue() const { return this->booleanValue_ != nullptr;};
    void deleteBooleanValue() { this->booleanValue_ = nullptr;};
    inline bool getBooleanValue() const { DARABONBA_PTR_GET_DEFAULT(booleanValue_, false) };
    inline Field& setBooleanValue(bool booleanValue) { DARABONBA_PTR_SET_VALUE(booleanValue_, booleanValue) };


    // doubleValue Field Functions 
    bool hasDoubleValue() const { return this->doubleValue_ != nullptr;};
    void deleteDoubleValue() { this->doubleValue_ = nullptr;};
    inline double getDoubleValue() const { DARABONBA_PTR_GET_DEFAULT(doubleValue_, 0.0) };
    inline Field& setDoubleValue(double doubleValue) { DARABONBA_PTR_SET_VALUE(doubleValue_, doubleValue) };


    // isNull Field Functions 
    bool hasIsNull() const { return this->isNull_ != nullptr;};
    void deleteIsNull() { this->isNull_ = nullptr;};
    inline bool getIsNull() const { DARABONBA_PTR_GET_DEFAULT(isNull_, false) };
    inline Field& setIsNull(bool isNull) { DARABONBA_PTR_SET_VALUE(isNull_, isNull) };


    // longValue Field Functions 
    bool hasLongValue() const { return this->longValue_ != nullptr;};
    void deleteLongValue() { this->longValue_ = nullptr;};
    inline int64_t getLongValue() const { DARABONBA_PTR_GET_DEFAULT(longValue_, 0L) };
    inline Field& setLongValue(int64_t longValue) { DARABONBA_PTR_SET_VALUE(longValue_, longValue) };


    // stringValue Field Functions 
    bool hasStringValue() const { return this->stringValue_ != nullptr;};
    void deleteStringValue() { this->stringValue_ = nullptr;};
    inline string getStringValue() const { DARABONBA_PTR_GET_DEFAULT(stringValue_, "") };
    inline Field& setStringValue(string stringValue) { DARABONBA_PTR_SET_VALUE(stringValue_, stringValue) };


  protected:
    shared_ptr<string> blobValue_ {};
    shared_ptr<bool> booleanValue_ {};
    shared_ptr<double> doubleValue_ {};
    shared_ptr<bool> isNull_ {};
    shared_ptr<int64_t> longValue_ {};
    shared_ptr<string> stringValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
