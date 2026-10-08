// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class MigrateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appIds, appIds_);
      DARABONBA_PTR_TO_JSON(cmd, cmd_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(rawData, rawData_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appIds, appIds_);
      DARABONBA_PTR_FROM_JSON(cmd, cmd_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(rawData, rawData_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    MigrateApplicationRequest() = default ;
    MigrateApplicationRequest(const MigrateApplicationRequest &) = default ;
    MigrateApplicationRequest(MigrateApplicationRequest &&) = default ;
    MigrateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateApplicationRequest() = default ;
    MigrateApplicationRequest& operator=(const MigrateApplicationRequest &) = default ;
    MigrateApplicationRequest& operator=(MigrateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && this->cmd_ == nullptr && this->config_ == nullptr && this->rawData_ == nullptr && this->regionId_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline const vector<string> & getAppIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
    inline vector<string> getAppIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
    inline MigrateApplicationRequest& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
    inline MigrateApplicationRequest& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline MigrateApplicationRequest& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline MigrateApplicationRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // rawData Field Functions 
    bool hasRawData() const { return this->rawData_ != nullptr;};
    void deleteRawData() { this->rawData_ = nullptr;};
    inline string getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, "") };
    inline MigrateApplicationRequest& setRawData(string rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MigrateApplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of application IDs.
    shared_ptr<vector<string>> appIds_ {};
    // The operation command. Valid values:
    // - export: Export.
    // - import: Import.
    shared_ptr<string> cmd_ {};
    // Specifies whether to export the application binary. Default value: false.
    shared_ptr<string> config_ {};
    // The raw data for the application to be imported, which is sourced from the JSON file of the exported application.
    shared_ptr<string> rawData_ {};
    // regionId
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
