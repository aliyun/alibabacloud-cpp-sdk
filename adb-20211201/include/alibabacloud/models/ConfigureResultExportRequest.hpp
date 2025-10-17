// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigureResultExportRequestOssInfo.hpp>
#include <alibabacloud/models/ConfigureResultExportRequestSlsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ConfigureResultExportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureResultExportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(OssInfo, ossInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureResultExportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(OssInfo, ossInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    ConfigureResultExportRequest() = default ;
    ConfigureResultExportRequest(const ConfigureResultExportRequest &) = default ;
    ConfigureResultExportRequest(ConfigureResultExportRequest &&) = default ;
    ConfigureResultExportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureResultExportRequest() = default ;
    ConfigureResultExportRequest& operator=(const ConfigureResultExportRequest &) = default ;
    ConfigureResultExportRequest& operator=(ConfigureResultExportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->exportType_ == nullptr && return this->ossInfo_ == nullptr && return this->regionId_ == nullptr && return this->slsInfo_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ConfigureResultExportRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ConfigureResultExportRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // ossInfo Field Functions 
    bool hasOssInfo() const { return this->ossInfo_ != nullptr;};
    void deleteOssInfo() { this->ossInfo_ = nullptr;};
    inline const ConfigureResultExportRequestOssInfo & ossInfo() const { DARABONBA_PTR_GET_CONST(ossInfo_, ConfigureResultExportRequestOssInfo) };
    inline ConfigureResultExportRequestOssInfo ossInfo() { DARABONBA_PTR_GET(ossInfo_, ConfigureResultExportRequestOssInfo) };
    inline ConfigureResultExportRequest& setOssInfo(const ConfigureResultExportRequestOssInfo & ossInfo) { DARABONBA_PTR_SET_VALUE(ossInfo_, ossInfo) };
    inline ConfigureResultExportRequest& setOssInfo(ConfigureResultExportRequestOssInfo && ossInfo) { DARABONBA_PTR_SET_RVALUE(ossInfo_, ossInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureResultExportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const ConfigureResultExportRequestSlsInfo & slsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, ConfigureResultExportRequestSlsInfo) };
    inline ConfigureResultExportRequestSlsInfo slsInfo() { DARABONBA_PTR_GET(slsInfo_, ConfigureResultExportRequestSlsInfo) };
    inline ConfigureResultExportRequest& setSlsInfo(const ConfigureResultExportRequestSlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline ConfigureResultExportRequest& setSlsInfo(ConfigureResultExportRequestSlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> exportType_ = nullptr;
    std::shared_ptr<ConfigureResultExportRequestOssInfo> ossInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<ConfigureResultExportRequestSlsInfo> slsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
