// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONEMETATABLEENGINEMETA_HPP_
#define ALIBABACLOUD_MODELS_ONEMETATABLEENGINEMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OneMetaTableEngineMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OneMetaTableEngineMeta& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataBytes, dataBytes_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(IndexBytes, indexBytes_);
      DARABONBA_PTR_TO_JSON(LastDdlTime, lastDdlTime_);
      DARABONBA_PTR_TO_JSON(NumRows, numRows_);
      DARABONBA_PTR_TO_JSON(RefInfo, refInfo_);
      DARABONBA_PTR_TO_JSON(StorageCapacity, storageCapacity_);
      DARABONBA_PTR_TO_JSON(TableSchemaName, tableSchemaName_);
    };
    friend void from_json(const Darabonba::Json& j, OneMetaTableEngineMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataBytes, dataBytes_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(IndexBytes, indexBytes_);
      DARABONBA_PTR_FROM_JSON(LastDdlTime, lastDdlTime_);
      DARABONBA_PTR_FROM_JSON(NumRows, numRows_);
      DARABONBA_PTR_FROM_JSON(RefInfo, refInfo_);
      DARABONBA_PTR_FROM_JSON(StorageCapacity, storageCapacity_);
      DARABONBA_PTR_FROM_JSON(TableSchemaName, tableSchemaName_);
    };
    OneMetaTableEngineMeta() = default ;
    OneMetaTableEngineMeta(const OneMetaTableEngineMeta &) = default ;
    OneMetaTableEngineMeta(OneMetaTableEngineMeta &&) = default ;
    OneMetaTableEngineMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OneMetaTableEngineMeta() = default ;
    OneMetaTableEngineMeta& operator=(const OneMetaTableEngineMeta &) = default ;
    OneMetaTableEngineMeta& operator=(OneMetaTableEngineMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataBytes_ == nullptr && this->encoding_ == nullptr && this->engine_ == nullptr && this->indexBytes_ == nullptr && this->lastDdlTime_ == nullptr
        && this->numRows_ == nullptr && this->refInfo_ == nullptr && this->storageCapacity_ == nullptr && this->tableSchemaName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline OneMetaTableEngineMeta& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataBytes Field Functions 
    bool hasDataBytes() const { return this->dataBytes_ != nullptr;};
    void deleteDataBytes() { this->dataBytes_ = nullptr;};
    inline int64_t getDataBytes() const { DARABONBA_PTR_GET_DEFAULT(dataBytes_, 0L) };
    inline OneMetaTableEngineMeta& setDataBytes(int64_t dataBytes) { DARABONBA_PTR_SET_VALUE(dataBytes_, dataBytes) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline OneMetaTableEngineMeta& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline OneMetaTableEngineMeta& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // indexBytes Field Functions 
    bool hasIndexBytes() const { return this->indexBytes_ != nullptr;};
    void deleteIndexBytes() { this->indexBytes_ = nullptr;};
    inline int64_t getIndexBytes() const { DARABONBA_PTR_GET_DEFAULT(indexBytes_, 0L) };
    inline OneMetaTableEngineMeta& setIndexBytes(int64_t indexBytes) { DARABONBA_PTR_SET_VALUE(indexBytes_, indexBytes) };


    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline string getLastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
    inline OneMetaTableEngineMeta& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline int64_t getNumRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
    inline OneMetaTableEngineMeta& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // refInfo Field Functions 
    bool hasRefInfo() const { return this->refInfo_ != nullptr;};
    void deleteRefInfo() { this->refInfo_ = nullptr;};
    inline string getRefInfo() const { DARABONBA_PTR_GET_DEFAULT(refInfo_, "") };
    inline OneMetaTableEngineMeta& setRefInfo(string refInfo) { DARABONBA_PTR_SET_VALUE(refInfo_, refInfo) };


    // storageCapacity Field Functions 
    bool hasStorageCapacity() const { return this->storageCapacity_ != nullptr;};
    void deleteStorageCapacity() { this->storageCapacity_ = nullptr;};
    inline int64_t getStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(storageCapacity_, 0L) };
    inline OneMetaTableEngineMeta& setStorageCapacity(int64_t storageCapacity) { DARABONBA_PTR_SET_VALUE(storageCapacity_, storageCapacity) };


    // tableSchemaName Field Functions 
    bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
    void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
    inline string getTableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
    inline OneMetaTableEngineMeta& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<int64_t> dataBytes_ {};
    shared_ptr<string> encoding_ {};
    shared_ptr<string> engine_ {};
    shared_ptr<int64_t> indexBytes_ {};
    shared_ptr<string> lastDdlTime_ {};
    shared_ptr<int64_t> numRows_ {};
    shared_ptr<string> refInfo_ {};
    shared_ptr<int64_t> storageCapacity_ {};
    shared_ptr<string> tableSchemaName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
