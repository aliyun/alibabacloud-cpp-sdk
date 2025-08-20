// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTMVDETAILMODELBASETABLEINFOS_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTMVDETAILMODELBASETABLEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OpenStructMvDetailModelBaseTableInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructMvDetailModelBaseTableInfos& obj) { 
      DARABONBA_PTR_TO_JSON(BaseTableIsMv, baseTableIsMv_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableEngine, tableEngine_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructMvDetailModelBaseTableInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseTableIsMv, baseTableIsMv_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableEngine, tableEngine_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    OpenStructMvDetailModelBaseTableInfos() = default ;
    OpenStructMvDetailModelBaseTableInfos(const OpenStructMvDetailModelBaseTableInfos &) = default ;
    OpenStructMvDetailModelBaseTableInfos(OpenStructMvDetailModelBaseTableInfos &&) = default ;
    OpenStructMvDetailModelBaseTableInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructMvDetailModelBaseTableInfos() = default ;
    OpenStructMvDetailModelBaseTableInfos& operator=(const OpenStructMvDetailModelBaseTableInfos &) = default ;
    OpenStructMvDetailModelBaseTableInfos& operator=(OpenStructMvDetailModelBaseTableInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseTableIsMv_ != nullptr
        && this->schemaName_ != nullptr && this->tableEngine_ != nullptr && this->tableName_ != nullptr; };
    // baseTableIsMv Field Functions 
    bool hasBaseTableIsMv() const { return this->baseTableIsMv_ != nullptr;};
    void deleteBaseTableIsMv() { this->baseTableIsMv_ = nullptr;};
    inline bool baseTableIsMv() const { DARABONBA_PTR_GET_DEFAULT(baseTableIsMv_, false) };
    inline OpenStructMvDetailModelBaseTableInfos& setBaseTableIsMv(bool baseTableIsMv) { DARABONBA_PTR_SET_VALUE(baseTableIsMv_, baseTableIsMv) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline OpenStructMvDetailModelBaseTableInfos& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableEngine Field Functions 
    bool hasTableEngine() const { return this->tableEngine_ != nullptr;};
    void deleteTableEngine() { this->tableEngine_ = nullptr;};
    inline string tableEngine() const { DARABONBA_PTR_GET_DEFAULT(tableEngine_, "") };
    inline OpenStructMvDetailModelBaseTableInfos& setTableEngine(string tableEngine) { DARABONBA_PTR_SET_VALUE(tableEngine_, tableEngine) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline OpenStructMvDetailModelBaseTableInfos& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<bool> baseTableIsMv_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableEngine_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
