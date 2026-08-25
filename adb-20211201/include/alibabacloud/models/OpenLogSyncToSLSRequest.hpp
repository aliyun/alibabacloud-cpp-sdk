// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENLOGSYNCTOSLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENLOGSYNCTOSLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OpenLogSyncToSLSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenLogSyncToSLSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetLogStore, targetLogStore_);
      DARABONBA_PTR_TO_JSON(TargetProject, targetProject_);
    };
    friend void from_json(const Darabonba::Json& j, OpenLogSyncToSLSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetLogStore, targetLogStore_);
      DARABONBA_PTR_FROM_JSON(TargetProject, targetProject_);
    };
    OpenLogSyncToSLSRequest() = default ;
    OpenLogSyncToSLSRequest(const OpenLogSyncToSLSRequest &) = default ;
    OpenLogSyncToSLSRequest(OpenLogSyncToSLSRequest &&) = default ;
    OpenLogSyncToSLSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenLogSyncToSLSRequest() = default ;
    OpenLogSyncToSLSRequest& operator=(const OpenLogSyncToSLSRequest &) = default ;
    OpenLogSyncToSLSRequest& operator=(OpenLogSyncToSLSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->logType_ == nullptr && this->regionId_ == nullptr && this->targetLogStore_ == nullptr && this->targetProject_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline OpenLogSyncToSLSRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline OpenLogSyncToSLSRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline OpenLogSyncToSLSRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetLogStore Field Functions 
    bool hasTargetLogStore() const { return this->targetLogStore_ != nullptr;};
    void deleteTargetLogStore() { this->targetLogStore_ = nullptr;};
    inline string getTargetLogStore() const { DARABONBA_PTR_GET_DEFAULT(targetLogStore_, "") };
    inline OpenLogSyncToSLSRequest& setTargetLogStore(string targetLogStore) { DARABONBA_PTR_SET_VALUE(targetLogStore_, targetLogStore) };


    // targetProject Field Functions 
    bool hasTargetProject() const { return this->targetProject_ != nullptr;};
    void deleteTargetProject() { this->targetProject_ = nullptr;};
    inline string getTargetProject() const { DARABONBA_PTR_GET_DEFAULT(targetProject_, "") };
    inline OpenLogSyncToSLSRequest& setTargetProject(string targetProject) { DARABONBA_PTR_SET_VALUE(targetProject_, targetProject) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The log type. Valid values:
    // 
    // - **ADBMYSQL_AUDIT_LOG**
    // - **ADBMYSQL_INSERT_LOG**
    // 
    // Default value: `ADBMYSQL_AUDIT_LOG`.
    shared_ptr<string> logType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The Simple Log Service LogStore.
    // 
    // This parameter is required.
    shared_ptr<string> targetLogStore_ {};
    // The Simple Log Service project.
    // 
    // This parameter is required.
    shared_ptr<string> targetProject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
