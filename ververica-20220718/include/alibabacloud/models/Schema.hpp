// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMA_HPP_
#define ALIBABACLOUD_MODELS_SCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TableColumn.hpp>
#include <alibabacloud/models/PrimaryKey.hpp>
#include <alibabacloud/models/WatermarkSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Schema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Schema& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(watermarkSpecs, watermarkSpecs_);
    };
    friend void from_json(const Darabonba::Json& j, Schema& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(watermarkSpecs, watermarkSpecs_);
    };
    Schema() = default ;
    Schema(const Schema &) = default ;
    Schema(Schema &&) = default ;
    Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Schema() = default ;
    Schema& operator=(const Schema &) = default ;
    Schema& operator=(Schema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->primaryKey_ == nullptr && return this->watermarkSpecs_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<TableColumn> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<TableColumn>) };
    inline vector<TableColumn> columns() { DARABONBA_PTR_GET(columns_, vector<TableColumn>) };
    inline Schema& setColumns(const vector<TableColumn> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline Schema& setColumns(vector<TableColumn> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline const PrimaryKey & primaryKey() const { DARABONBA_PTR_GET_CONST(primaryKey_, PrimaryKey) };
    inline PrimaryKey primaryKey() { DARABONBA_PTR_GET(primaryKey_, PrimaryKey) };
    inline Schema& setPrimaryKey(const PrimaryKey & primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };
    inline Schema& setPrimaryKey(PrimaryKey && primaryKey) { DARABONBA_PTR_SET_RVALUE(primaryKey_, primaryKey) };


    // watermarkSpecs Field Functions 
    bool hasWatermarkSpecs() const { return this->watermarkSpecs_ != nullptr;};
    void deleteWatermarkSpecs() { this->watermarkSpecs_ = nullptr;};
    inline const vector<WatermarkSpec> & watermarkSpecs() const { DARABONBA_PTR_GET_CONST(watermarkSpecs_, vector<WatermarkSpec>) };
    inline vector<WatermarkSpec> watermarkSpecs() { DARABONBA_PTR_GET(watermarkSpecs_, vector<WatermarkSpec>) };
    inline Schema& setWatermarkSpecs(const vector<WatermarkSpec> & watermarkSpecs) { DARABONBA_PTR_SET_VALUE(watermarkSpecs_, watermarkSpecs) };
    inline Schema& setWatermarkSpecs(vector<WatermarkSpec> && watermarkSpecs) { DARABONBA_PTR_SET_RVALUE(watermarkSpecs_, watermarkSpecs) };


  protected:
    std::shared_ptr<vector<TableColumn>> columns_ = nullptr;
    std::shared_ptr<PrimaryKey> primaryKey_ = nullptr;
    std::shared_ptr<vector<WatermarkSpec>> watermarkSpecs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
