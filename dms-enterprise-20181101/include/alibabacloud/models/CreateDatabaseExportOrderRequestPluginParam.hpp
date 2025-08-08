// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERREQUESTPLUGINPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERREQUESTPLUGINPARAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDatabaseExportOrderRequestPluginParamConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDatabaseExportOrderRequestPluginParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseExportOrderRequestPluginParam& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseExportOrderRequestPluginParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
    };
    CreateDatabaseExportOrderRequestPluginParam() = default ;
    CreateDatabaseExportOrderRequestPluginParam(const CreateDatabaseExportOrderRequestPluginParam &) = default ;
    CreateDatabaseExportOrderRequestPluginParam(CreateDatabaseExportOrderRequestPluginParam &&) = default ;
    CreateDatabaseExportOrderRequestPluginParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseExportOrderRequestPluginParam() = default ;
    CreateDatabaseExportOrderRequestPluginParam& operator=(const CreateDatabaseExportOrderRequestPluginParam &) = default ;
    CreateDatabaseExportOrderRequestPluginParam& operator=(CreateDatabaseExportOrderRequestPluginParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classify_ != nullptr
        && this->config_ != nullptr && this->dbId_ != nullptr && this->instanceId_ != nullptr && this->logic_ != nullptr && this->searchName_ != nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateDatabaseExportOrderRequestPluginParam& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::CreateDatabaseExportOrderRequestPluginParamConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::CreateDatabaseExportOrderRequestPluginParamConfig) };
    inline Models::CreateDatabaseExportOrderRequestPluginParamConfig config() { DARABONBA_PTR_GET(config_, Models::CreateDatabaseExportOrderRequestPluginParamConfig) };
    inline CreateDatabaseExportOrderRequestPluginParam& setConfig(const Models::CreateDatabaseExportOrderRequestPluginParamConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateDatabaseExportOrderRequestPluginParam& setConfig(Models::CreateDatabaseExportOrderRequestPluginParamConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CreateDatabaseExportOrderRequestPluginParam& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline CreateDatabaseExportOrderRequestPluginParam& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreateDatabaseExportOrderRequestPluginParam& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline CreateDatabaseExportOrderRequestPluginParam& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    // The reason for the database export.
    // 
    // This parameter is required.
    std::shared_ptr<string> classify_ = nullptr;
    // The configurations for database export.
    // 
    // This parameter is required.
    std::shared_ptr<Models::CreateDatabaseExportOrderRequestPluginParamConfig> config_ = nullptr;
    // The database ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    std::shared_ptr<bool> logic_ = nullptr;
    // The name that is used to search for the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
