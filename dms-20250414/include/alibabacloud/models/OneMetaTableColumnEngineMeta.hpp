// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONEMETATABLECOLUMNENGINEMETA_HPP_
#define ALIBABACLOUD_MODELS_ONEMETATABLECOLUMNENGINEMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OneMetaTableColumnEngineMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OneMetaTableColumnEngineMeta& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_TO_JSON(DataLength, dataLength_);
      DARABONBA_PTR_TO_JSON(DataPrecision, dataPrecision_);
      DARABONBA_PTR_TO_JSON(DataScale, dataScale_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(GenerationColumn, generationColumn_);
      DARABONBA_PTR_TO_JSON(GenerationExpression, generationExpression_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
    };
    friend void from_json(const Darabonba::Json& j, OneMetaTableColumnEngineMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_FROM_JSON(DataLength, dataLength_);
      DARABONBA_PTR_FROM_JSON(DataPrecision, dataPrecision_);
      DARABONBA_PTR_FROM_JSON(DataScale, dataScale_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(GenerationColumn, generationColumn_);
      DARABONBA_PTR_FROM_JSON(GenerationExpression, generationExpression_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
    };
    OneMetaTableColumnEngineMeta() = default ;
    OneMetaTableColumnEngineMeta(const OneMetaTableColumnEngineMeta &) = default ;
    OneMetaTableColumnEngineMeta(OneMetaTableColumnEngineMeta &&) = default ;
    OneMetaTableColumnEngineMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OneMetaTableColumnEngineMeta() = default ;
    OneMetaTableColumnEngineMeta& operator=(const OneMetaTableColumnEngineMeta &) = default ;
    OneMetaTableColumnEngineMeta& operator=(OneMetaTableColumnEngineMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoIncrement_ == nullptr
        && this->dataLength_ == nullptr && this->dataPrecision_ == nullptr && this->dataScale_ == nullptr && this->defaultValue_ == nullptr && this->encoding_ == nullptr
        && this->extra_ == nullptr && this->generationColumn_ == nullptr && this->generationExpression_ == nullptr && this->nullable_ == nullptr; };
    // autoIncrement Field Functions 
    bool hasAutoIncrement() const { return this->autoIncrement_ != nullptr;};
    void deleteAutoIncrement() { this->autoIncrement_ = nullptr;};
    inline bool getAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(autoIncrement_, false) };
    inline OneMetaTableColumnEngineMeta& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


    // dataLength Field Functions 
    bool hasDataLength() const { return this->dataLength_ != nullptr;};
    void deleteDataLength() { this->dataLength_ = nullptr;};
    inline int64_t getDataLength() const { DARABONBA_PTR_GET_DEFAULT(dataLength_, 0L) };
    inline OneMetaTableColumnEngineMeta& setDataLength(int64_t dataLength) { DARABONBA_PTR_SET_VALUE(dataLength_, dataLength) };


    // dataPrecision Field Functions 
    bool hasDataPrecision() const { return this->dataPrecision_ != nullptr;};
    void deleteDataPrecision() { this->dataPrecision_ = nullptr;};
    inline int32_t getDataPrecision() const { DARABONBA_PTR_GET_DEFAULT(dataPrecision_, 0) };
    inline OneMetaTableColumnEngineMeta& setDataPrecision(int32_t dataPrecision) { DARABONBA_PTR_SET_VALUE(dataPrecision_, dataPrecision) };


    // dataScale Field Functions 
    bool hasDataScale() const { return this->dataScale_ != nullptr;};
    void deleteDataScale() { this->dataScale_ = nullptr;};
    inline int32_t getDataScale() const { DARABONBA_PTR_GET_DEFAULT(dataScale_, 0) };
    inline OneMetaTableColumnEngineMeta& setDataScale(int32_t dataScale) { DARABONBA_PTR_SET_VALUE(dataScale_, dataScale) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline OneMetaTableColumnEngineMeta& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline OneMetaTableColumnEngineMeta& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline OneMetaTableColumnEngineMeta& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // generationColumn Field Functions 
    bool hasGenerationColumn() const { return this->generationColumn_ != nullptr;};
    void deleteGenerationColumn() { this->generationColumn_ = nullptr;};
    inline bool getGenerationColumn() const { DARABONBA_PTR_GET_DEFAULT(generationColumn_, false) };
    inline OneMetaTableColumnEngineMeta& setGenerationColumn(bool generationColumn) { DARABONBA_PTR_SET_VALUE(generationColumn_, generationColumn) };


    // generationExpression Field Functions 
    bool hasGenerationExpression() const { return this->generationExpression_ != nullptr;};
    void deleteGenerationExpression() { this->generationExpression_ = nullptr;};
    inline string getGenerationExpression() const { DARABONBA_PTR_GET_DEFAULT(generationExpression_, "") };
    inline OneMetaTableColumnEngineMeta& setGenerationExpression(string generationExpression) { DARABONBA_PTR_SET_VALUE(generationExpression_, generationExpression) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline OneMetaTableColumnEngineMeta& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


  protected:
    shared_ptr<bool> autoIncrement_ {};
    shared_ptr<int64_t> dataLength_ {};
    shared_ptr<int32_t> dataPrecision_ {};
    shared_ptr<int32_t> dataScale_ {};
    shared_ptr<string> defaultValue_ {};
    shared_ptr<string> encoding_ {};
    shared_ptr<string> extra_ {};
    shared_ptr<bool> generationColumn_ {};
    shared_ptr<string> generationExpression_ {};
    shared_ptr<bool> nullable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
