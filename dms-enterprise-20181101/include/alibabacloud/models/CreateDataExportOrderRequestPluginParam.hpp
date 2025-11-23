// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERREQUESTPLUGINPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERREQUESTPLUGINPARAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataExportOrderRequestPluginParamWatermark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataExportOrderRequestPluginParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataExportOrderRequestPluginParam& obj) { 
      DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(ExeSQL, exeSQL_);
      DARABONBA_PTR_TO_JSON(IgnoreAffectRows, ignoreAffectRows_);
      DARABONBA_PTR_TO_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataExportOrderRequestPluginParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(ExeSQL, exeSQL_);
      DARABONBA_PTR_FROM_JSON(IgnoreAffectRows, ignoreAffectRows_);
      DARABONBA_PTR_FROM_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    CreateDataExportOrderRequestPluginParam() = default ;
    CreateDataExportOrderRequestPluginParam(const CreateDataExportOrderRequestPluginParam &) = default ;
    CreateDataExportOrderRequestPluginParam(CreateDataExportOrderRequestPluginParam &&) = default ;
    CreateDataExportOrderRequestPluginParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataExportOrderRequestPluginParam() = default ;
    CreateDataExportOrderRequestPluginParam& operator=(const CreateDataExportOrderRequestPluginParam &) = default ;
    CreateDataExportOrderRequestPluginParam& operator=(CreateDataExportOrderRequestPluginParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectRows_ == nullptr
        && return this->classify_ == nullptr && return this->dbId_ == nullptr && return this->exeSQL_ == nullptr && return this->ignoreAffectRows_ == nullptr && return this->ignoreAffectRowsReason_ == nullptr
        && return this->instanceId_ == nullptr && return this->logic_ == nullptr && return this->watermark_ == nullptr; };
    // affectRows Field Functions 
    bool hasAffectRows() const { return this->affectRows_ != nullptr;};
    void deleteAffectRows() { this->affectRows_ = nullptr;};
    inline int64_t affectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
    inline CreateDataExportOrderRequestPluginParam& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateDataExportOrderRequestPluginParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CreateDataExportOrderRequestPluginParam& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // exeSQL Field Functions 
    bool hasExeSQL() const { return this->exeSQL_ != nullptr;};
    void deleteExeSQL() { this->exeSQL_ = nullptr;};
    inline string exeSQL() const { DARABONBA_PTR_GET_DEFAULT(exeSQL_, "") };
    inline CreateDataExportOrderRequestPluginParam& setExeSQL(string exeSQL) { DARABONBA_PTR_SET_VALUE(exeSQL_, exeSQL) };


    // ignoreAffectRows Field Functions 
    bool hasIgnoreAffectRows() const { return this->ignoreAffectRows_ != nullptr;};
    void deleteIgnoreAffectRows() { this->ignoreAffectRows_ = nullptr;};
    inline bool ignoreAffectRows() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRows_, false) };
    inline CreateDataExportOrderRequestPluginParam& setIgnoreAffectRows(bool ignoreAffectRows) { DARABONBA_PTR_SET_VALUE(ignoreAffectRows_, ignoreAffectRows) };


    // ignoreAffectRowsReason Field Functions 
    bool hasIgnoreAffectRowsReason() const { return this->ignoreAffectRowsReason_ != nullptr;};
    void deleteIgnoreAffectRowsReason() { this->ignoreAffectRowsReason_ = nullptr;};
    inline string ignoreAffectRowsReason() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRowsReason_, "") };
    inline CreateDataExportOrderRequestPluginParam& setIgnoreAffectRowsReason(string ignoreAffectRowsReason) { DARABONBA_PTR_SET_VALUE(ignoreAffectRowsReason_, ignoreAffectRowsReason) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline CreateDataExportOrderRequestPluginParam& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreateDataExportOrderRequestPluginParam& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const Models::CreateDataExportOrderRequestPluginParamWatermark & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, Models::CreateDataExportOrderRequestPluginParamWatermark) };
    inline Models::CreateDataExportOrderRequestPluginParamWatermark watermark() { DARABONBA_PTR_GET(watermark_, Models::CreateDataExportOrderRequestPluginParamWatermark) };
    inline CreateDataExportOrderRequestPluginParam& setWatermark(const Models::CreateDataExportOrderRequestPluginParamWatermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline CreateDataExportOrderRequestPluginParam& setWatermark(Models::CreateDataExportOrderRequestPluginParamWatermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


  protected:
    // The estimated number of data rows to be affected.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> affectRows_ = nullptr;
    // The reason for the export ticket.
    // 
    // This parameter is required.
    std::shared_ptr<string> classify_ = nullptr;
    // The database ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The SQL statements that can be executed.
    // 
    // This parameter is required.
    std::shared_ptr<string> exeSQL_ = nullptr;
    // Specifies whether to skip verification. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    std::shared_ptr<bool> ignoreAffectRows_ = nullptr;
    // The reason for skipping verification. This parameter is required if you set IgnoreAffectRows to true.
    std::shared_ptr<string> ignoreAffectRowsReason_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > If you set this parameter to **true**, the database that you specify must be a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<bool> logic_ = nullptr;
    // The information about the watermarks.
    std::shared_ptr<Models::CreateDataExportOrderRequestPluginParamWatermark> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
