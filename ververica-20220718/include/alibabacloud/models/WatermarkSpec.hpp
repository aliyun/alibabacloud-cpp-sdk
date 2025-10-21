// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WATERMARKSPEC_HPP_
#define ALIBABACLOUD_MODELS_WATERMARKSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class WatermarkSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WatermarkSpec& obj) { 
      DARABONBA_PTR_TO_JSON(column, column_);
      DARABONBA_PTR_TO_JSON(watermarkExpression, watermarkExpression_);
      DARABONBA_PTR_TO_JSON(watermarkType, watermarkType_);
    };
    friend void from_json(const Darabonba::Json& j, WatermarkSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(column, column_);
      DARABONBA_PTR_FROM_JSON(watermarkExpression, watermarkExpression_);
      DARABONBA_PTR_FROM_JSON(watermarkType, watermarkType_);
    };
    WatermarkSpec() = default ;
    WatermarkSpec(const WatermarkSpec &) = default ;
    WatermarkSpec(WatermarkSpec &&) = default ;
    WatermarkSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WatermarkSpec() = default ;
    WatermarkSpec& operator=(const WatermarkSpec &) = default ;
    WatermarkSpec& operator=(WatermarkSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->column_ == nullptr
        && return this->watermarkExpression_ == nullptr && return this->watermarkType_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline WatermarkSpec& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // watermarkExpression Field Functions 
    bool hasWatermarkExpression() const { return this->watermarkExpression_ != nullptr;};
    void deleteWatermarkExpression() { this->watermarkExpression_ = nullptr;};
    inline string watermarkExpression() const { DARABONBA_PTR_GET_DEFAULT(watermarkExpression_, "") };
    inline WatermarkSpec& setWatermarkExpression(string watermarkExpression) { DARABONBA_PTR_SET_VALUE(watermarkExpression_, watermarkExpression) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline WatermarkSpec& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


  protected:
    std::shared_ptr<string> column_ = nullptr;
    std::shared_ptr<string> watermarkExpression_ = nullptr;
    std::shared_ptr<string> watermarkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
