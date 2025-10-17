// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTMVBASETABLEDETAILMODEL_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTMVBASETABLEDETAILMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OpenStructMvBaseTableDetailModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructMvBaseTableDetailModel& obj) { 
      DARABONBA_PTR_TO_JSON(DataVolumn, dataVolumn_);
      DARABONBA_PTR_TO_JSON(EnableBinlog, enableBinlog_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructMvBaseTableDetailModel& obj) { 
      DARABONBA_PTR_FROM_JSON(DataVolumn, dataVolumn_);
      DARABONBA_PTR_FROM_JSON(EnableBinlog, enableBinlog_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    OpenStructMvBaseTableDetailModel() = default ;
    OpenStructMvBaseTableDetailModel(const OpenStructMvBaseTableDetailModel &) = default ;
    OpenStructMvBaseTableDetailModel(OpenStructMvBaseTableDetailModel &&) = default ;
    OpenStructMvBaseTableDetailModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructMvBaseTableDetailModel() = default ;
    OpenStructMvBaseTableDetailModel& operator=(const OpenStructMvBaseTableDetailModel &) = default ;
    OpenStructMvBaseTableDetailModel& operator=(OpenStructMvBaseTableDetailModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataVolumn_ == nullptr
        && return this->enableBinlog_ == nullptr && return this->schemaName_ == nullptr && return this->tableName_ == nullptr; };
    // dataVolumn Field Functions 
    bool hasDataVolumn() const { return this->dataVolumn_ != nullptr;};
    void deleteDataVolumn() { this->dataVolumn_ = nullptr;};
    inline string dataVolumn() const { DARABONBA_PTR_GET_DEFAULT(dataVolumn_, "") };
    inline OpenStructMvBaseTableDetailModel& setDataVolumn(string dataVolumn) { DARABONBA_PTR_SET_VALUE(dataVolumn_, dataVolumn) };


    // enableBinlog Field Functions 
    bool hasEnableBinlog() const { return this->enableBinlog_ != nullptr;};
    void deleteEnableBinlog() { this->enableBinlog_ = nullptr;};
    inline bool enableBinlog() const { DARABONBA_PTR_GET_DEFAULT(enableBinlog_, false) };
    inline OpenStructMvBaseTableDetailModel& setEnableBinlog(bool enableBinlog) { DARABONBA_PTR_SET_VALUE(enableBinlog_, enableBinlog) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline OpenStructMvBaseTableDetailModel& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline OpenStructMvBaseTableDetailModel& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<string> dataVolumn_ = nullptr;
    std::shared_ptr<bool> enableBinlog_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
