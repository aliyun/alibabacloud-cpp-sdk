// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGCONFIGSRESPONSEBODYDATALOGCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGCONFIGSRESPONSEBODYDATALOGCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListLogConfigsResponseBodyDataLogConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogConfigsResponseBodyDataLogConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LogDir, logDir_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(StoreType, storeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogConfigsResponseBodyDataLogConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LogDir, logDir_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(StoreType, storeType_);
    };
    ListLogConfigsResponseBodyDataLogConfigs() = default ;
    ListLogConfigsResponseBodyDataLogConfigs(const ListLogConfigsResponseBodyDataLogConfigs &) = default ;
    ListLogConfigsResponseBodyDataLogConfigs(ListLogConfigsResponseBodyDataLogConfigs &&) = default ;
    ListLogConfigsResponseBodyDataLogConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogConfigsResponseBodyDataLogConfigs() = default ;
    ListLogConfigsResponseBodyDataLogConfigs& operator=(const ListLogConfigsResponseBodyDataLogConfigs &) = default ;
    ListLogConfigsResponseBodyDataLogConfigs& operator=(ListLogConfigsResponseBodyDataLogConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configName_ == nullptr
        && return this->createTime_ == nullptr && return this->logDir_ == nullptr && return this->logType_ == nullptr && return this->regionId_ == nullptr && return this->slsLogStore_ == nullptr
        && return this->slsProject_ == nullptr && return this->storeType_ == nullptr; };
    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string configName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline ListLogConfigsResponseBodyDataLogConfigs& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLogConfigsResponseBodyDataLogConfigs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // logDir Field Functions 
    bool hasLogDir() const { return this->logDir_ != nullptr;};
    void deleteLogDir() { this->logDir_ = nullptr;};
    inline string logDir() const { DARABONBA_PTR_GET_DEFAULT(logDir_, "") };
    inline ListLogConfigsResponseBodyDataLogConfigs& setLogDir(string logDir) { DARABONBA_PTR_SET_VALUE(logDir_, logDir) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListLogConfigsResponseBodyDataLogConfigs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListLogConfigsResponseBodyDataLogConfigs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsLogStore Field Functions 
    bool hasSlsLogStore() const { return this->slsLogStore_ != nullptr;};
    void deleteSlsLogStore() { this->slsLogStore_ = nullptr;};
    inline string slsLogStore() const { DARABONBA_PTR_GET_DEFAULT(slsLogStore_, "") };
    inline ListLogConfigsResponseBodyDataLogConfigs& setSlsLogStore(string slsLogStore) { DARABONBA_PTR_SET_VALUE(slsLogStore_, slsLogStore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline ListLogConfigsResponseBodyDataLogConfigs& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // storeType Field Functions 
    bool hasStoreType() const { return this->storeType_ != nullptr;};
    void deleteStoreType() { this->storeType_ = nullptr;};
    inline string storeType() const { DARABONBA_PTR_GET_DEFAULT(storeType_, "") };
    inline ListLogConfigsResponseBodyDataLogConfigs& setStoreType(string storeType) { DARABONBA_PTR_SET_VALUE(storeType_, storeType) };


  protected:
    // The path of logs.
    std::shared_ptr<string> configName_ = nullptr;
    // The storage type of logs.
    std::shared_ptr<string> createTime_ = nullptr;
    // The path of the log file (log source).
    std::shared_ptr<string> logDir_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> logType_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the configuration was created.
    std::shared_ptr<string> slsLogStore_ = nullptr;
    // The type of the log. Set this value to **file_log**.
    std::shared_ptr<string> slsProject_ = nullptr;
    // The ID of the Log Service project.
    std::shared_ptr<string> storeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
