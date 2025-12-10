// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORAGEFORMAT_HPP_
#define ALIBABACLOUD_MODELS_STORAGEFORMAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class StorageFormat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StorageFormat& obj) { 
      DARABONBA_PTR_TO_JSON(Avro, avro_);
      DARABONBA_PTR_TO_JSON(Csv, csv_);
      DARABONBA_PTR_TO_JSON(Delta, delta_);
      DARABONBA_PTR_TO_JSON(Hudi, hudi_);
      DARABONBA_PTR_TO_JSON(Iceberg, iceberg_);
      DARABONBA_PTR_TO_JSON(Json, json_);
      DARABONBA_PTR_TO_JSON(Orc, orc_);
      DARABONBA_PTR_TO_JSON(Parquet, parquet_);
      DARABONBA_PTR_TO_JSON(Uncategorized, uncategorized_);
    };
    friend void from_json(const Darabonba::Json& j, StorageFormat& obj) { 
      DARABONBA_PTR_FROM_JSON(Avro, avro_);
      DARABONBA_PTR_FROM_JSON(Csv, csv_);
      DARABONBA_PTR_FROM_JSON(Delta, delta_);
      DARABONBA_PTR_FROM_JSON(Hudi, hudi_);
      DARABONBA_PTR_FROM_JSON(Iceberg, iceberg_);
      DARABONBA_PTR_FROM_JSON(Json, json_);
      DARABONBA_PTR_FROM_JSON(Orc, orc_);
      DARABONBA_PTR_FROM_JSON(Parquet, parquet_);
      DARABONBA_PTR_FROM_JSON(Uncategorized, uncategorized_);
    };
    StorageFormat() = default ;
    StorageFormat(const StorageFormat &) = default ;
    StorageFormat(StorageFormat &&) = default ;
    StorageFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StorageFormat() = default ;
    StorageFormat& operator=(const StorageFormat &) = default ;
    StorageFormat& operator=(StorageFormat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avro_ == nullptr
        && return this->csv_ == nullptr && return this->delta_ == nullptr && return this->hudi_ == nullptr && return this->iceberg_ == nullptr && return this->json_ == nullptr
        && return this->orc_ == nullptr && return this->parquet_ == nullptr && return this->uncategorized_ == nullptr; };
    // avro Field Functions 
    bool hasAvro() const { return this->avro_ != nullptr;};
    void deleteAvro() { this->avro_ = nullptr;};
    inline int64_t avro() const { DARABONBA_PTR_GET_DEFAULT(avro_, 0L) };
    inline StorageFormat& setAvro(int64_t avro) { DARABONBA_PTR_SET_VALUE(avro_, avro) };


    // csv Field Functions 
    bool hasCsv() const { return this->csv_ != nullptr;};
    void deleteCsv() { this->csv_ = nullptr;};
    inline int64_t csv() const { DARABONBA_PTR_GET_DEFAULT(csv_, 0L) };
    inline StorageFormat& setCsv(int64_t csv) { DARABONBA_PTR_SET_VALUE(csv_, csv) };


    // delta Field Functions 
    bool hasDelta() const { return this->delta_ != nullptr;};
    void deleteDelta() { this->delta_ = nullptr;};
    inline int64_t delta() const { DARABONBA_PTR_GET_DEFAULT(delta_, 0L) };
    inline StorageFormat& setDelta(int64_t delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };


    // hudi Field Functions 
    bool hasHudi() const { return this->hudi_ != nullptr;};
    void deleteHudi() { this->hudi_ = nullptr;};
    inline int64_t hudi() const { DARABONBA_PTR_GET_DEFAULT(hudi_, 0L) };
    inline StorageFormat& setHudi(int64_t hudi) { DARABONBA_PTR_SET_VALUE(hudi_, hudi) };


    // iceberg Field Functions 
    bool hasIceberg() const { return this->iceberg_ != nullptr;};
    void deleteIceberg() { this->iceberg_ = nullptr;};
    inline int64_t iceberg() const { DARABONBA_PTR_GET_DEFAULT(iceberg_, 0L) };
    inline StorageFormat& setIceberg(int64_t iceberg) { DARABONBA_PTR_SET_VALUE(iceberg_, iceberg) };


    // json Field Functions 
    bool hasJson() const { return this->json_ != nullptr;};
    void deleteJson() { this->json_ = nullptr;};
    inline int64_t json() const { DARABONBA_PTR_GET_DEFAULT(json_, 0L) };
    inline StorageFormat& setJson(int64_t json) { DARABONBA_PTR_SET_VALUE(json_, json) };


    // orc Field Functions 
    bool hasOrc() const { return this->orc_ != nullptr;};
    void deleteOrc() { this->orc_ = nullptr;};
    inline int64_t orc() const { DARABONBA_PTR_GET_DEFAULT(orc_, 0L) };
    inline StorageFormat& setOrc(int64_t orc) { DARABONBA_PTR_SET_VALUE(orc_, orc) };


    // parquet Field Functions 
    bool hasParquet() const { return this->parquet_ != nullptr;};
    void deleteParquet() { this->parquet_ = nullptr;};
    inline int64_t parquet() const { DARABONBA_PTR_GET_DEFAULT(parquet_, 0L) };
    inline StorageFormat& setParquet(int64_t parquet) { DARABONBA_PTR_SET_VALUE(parquet_, parquet) };


    // uncategorized Field Functions 
    bool hasUncategorized() const { return this->uncategorized_ != nullptr;};
    void deleteUncategorized() { this->uncategorized_ = nullptr;};
    inline int64_t uncategorized() const { DARABONBA_PTR_GET_DEFAULT(uncategorized_, 0L) };
    inline StorageFormat& setUncategorized(int64_t uncategorized) { DARABONBA_PTR_SET_VALUE(uncategorized_, uncategorized) };


  protected:
    std::shared_ptr<int64_t> avro_ = nullptr;
    std::shared_ptr<int64_t> csv_ = nullptr;
    std::shared_ptr<int64_t> delta_ = nullptr;
    std::shared_ptr<int64_t> hudi_ = nullptr;
    std::shared_ptr<int64_t> iceberg_ = nullptr;
    std::shared_ptr<int64_t> json_ = nullptr;
    std::shared_ptr<int64_t> orc_ = nullptr;
    std::shared_ptr<int64_t> parquet_ = nullptr;
    std::shared_ptr<int64_t> uncategorized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
