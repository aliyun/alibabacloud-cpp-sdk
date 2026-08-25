// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSELOGSYNCTOSLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSELOGSYNCTOSLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CloseLogSyncToSLSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseLogSyncToSLSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CloseLogSyncToSLSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CloseLogSyncToSLSRequest() = default ;
    CloseLogSyncToSLSRequest(const CloseLogSyncToSLSRequest &) = default ;
    CloseLogSyncToSLSRequest(CloseLogSyncToSLSRequest &&) = default ;
    CloseLogSyncToSLSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseLogSyncToSLSRequest() = default ;
    CloseLogSyncToSLSRequest& operator=(const CloseLogSyncToSLSRequest &) = default ;
    CloseLogSyncToSLSRequest& operator=(CloseLogSyncToSLSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->logType_ == nullptr && this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CloseLogSyncToSLSRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline CloseLogSyncToSLSRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CloseLogSyncToSLSRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
