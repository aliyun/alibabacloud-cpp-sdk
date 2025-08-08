// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERREQUESTPLUGINPARAMWATERMARK_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERREQUESTPLUGINPARAMWATERMARK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataExportOrderRequestPluginParamWatermark : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataExportOrderRequestPluginParamWatermark& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DataWatermark, dataWatermark_);
      DARABONBA_PTR_TO_JSON(FileWatermark, fileWatermark_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(WatermarkTypes, watermarkTypes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataExportOrderRequestPluginParamWatermark& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DataWatermark, dataWatermark_);
      DARABONBA_PTR_FROM_JSON(FileWatermark, fileWatermark_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(WatermarkTypes, watermarkTypes_);
    };
    CreateDataExportOrderRequestPluginParamWatermark() = default ;
    CreateDataExportOrderRequestPluginParamWatermark(const CreateDataExportOrderRequestPluginParamWatermark &) = default ;
    CreateDataExportOrderRequestPluginParamWatermark(CreateDataExportOrderRequestPluginParamWatermark &&) = default ;
    CreateDataExportOrderRequestPluginParamWatermark(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataExportOrderRequestPluginParamWatermark() = default ;
    CreateDataExportOrderRequestPluginParamWatermark& operator=(const CreateDataExportOrderRequestPluginParamWatermark &) = default ;
    CreateDataExportOrderRequestPluginParamWatermark& operator=(CreateDataExportOrderRequestPluginParamWatermark &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->dataWatermark_ != nullptr && this->fileWatermark_ != nullptr && this->keys_ != nullptr && this->watermarkTypes_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline CreateDataExportOrderRequestPluginParamWatermark& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dataWatermark Field Functions 
    bool hasDataWatermark() const { return this->dataWatermark_ != nullptr;};
    void deleteDataWatermark() { this->dataWatermark_ = nullptr;};
    inline string dataWatermark() const { DARABONBA_PTR_GET_DEFAULT(dataWatermark_, "") };
    inline CreateDataExportOrderRequestPluginParamWatermark& setDataWatermark(string dataWatermark) { DARABONBA_PTR_SET_VALUE(dataWatermark_, dataWatermark) };


    // fileWatermark Field Functions 
    bool hasFileWatermark() const { return this->fileWatermark_ != nullptr;};
    void deleteFileWatermark() { this->fileWatermark_ = nullptr;};
    inline string fileWatermark() const { DARABONBA_PTR_GET_DEFAULT(fileWatermark_, "") };
    inline CreateDataExportOrderRequestPluginParamWatermark& setFileWatermark(string fileWatermark) { DARABONBA_PTR_SET_VALUE(fileWatermark_, fileWatermark) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> keys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline CreateDataExportOrderRequestPluginParamWatermark& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline CreateDataExportOrderRequestPluginParamWatermark& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // watermarkTypes Field Functions 
    bool hasWatermarkTypes() const { return this->watermarkTypes_ != nullptr;};
    void deleteWatermarkTypes() { this->watermarkTypes_ = nullptr;};
    inline const vector<string> & watermarkTypes() const { DARABONBA_PTR_GET_CONST(watermarkTypes_, vector<string>) };
    inline vector<string> watermarkTypes() { DARABONBA_PTR_GET(watermarkTypes_, vector<string>) };
    inline CreateDataExportOrderRequestPluginParamWatermark& setWatermarkTypes(const vector<string> & watermarkTypes) { DARABONBA_PTR_SET_VALUE(watermarkTypes_, watermarkTypes) };
    inline CreateDataExportOrderRequestPluginParamWatermark& setWatermarkTypes(vector<string> && watermarkTypes) { DARABONBA_PTR_SET_RVALUE(watermarkTypes_, watermarkTypes) };


  protected:
    // The field into which the watermark is to be embedded.
    std::shared_ptr<string> columnName_ = nullptr;
    // The information to be embedded as a watermark into data.
    std::shared_ptr<string> dataWatermark_ = nullptr;
    // The information to be embedded as a watermark into files.
    std::shared_ptr<string> fileWatermark_ = nullptr;
    // One or more primary keys or unique keys.
    std::shared_ptr<vector<string>> keys_ = nullptr;
    // The methods in which the watermark is embedded.
    std::shared_ptr<vector<string>> watermarkTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
