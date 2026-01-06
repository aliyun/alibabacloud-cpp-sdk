// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class SlsInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsInfo& obj) { 
        DARABONBA_PTR_TO_JSON(LogstoreTtl, logstoreTtl_);
        DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
      };
      friend void from_json(const Darabonba::Json& j, SlsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(LogstoreTtl, logstoreTtl_);
        DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
      };
      SlsInfo() = default ;
      SlsInfo(const SlsInfo &) = default ;
      SlsInfo(SlsInfo &&) = default ;
      SlsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsInfo() = default ;
      SlsInfo& operator=(const SlsInfo &) = default ;
      SlsInfo& operator=(SlsInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logstoreTtl_ == nullptr
        && this->resourceGroup_ == nullptr && this->slsProject_ == nullptr; };
      // logstoreTtl Field Functions 
      bool hasLogstoreTtl() const { return this->logstoreTtl_ != nullptr;};
      void deleteLogstoreTtl() { this->logstoreTtl_ = nullptr;};
      inline int32_t getLogstoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logstoreTtl_, 0) };
      inline SlsInfo& setLogstoreTtl(int32_t logstoreTtl) { DARABONBA_PTR_SET_VALUE(logstoreTtl_, logstoreTtl) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline SlsInfo& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // slsProject Field Functions 
      bool hasSlsProject() const { return this->slsProject_ != nullptr;};
      void deleteSlsProject() { this->slsProject_ = nullptr;};
      inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
      inline SlsInfo& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    protected:
      // The expiration time of the Logstore temporarily generated during the result set export. Unit: days. The Logstore is automatically deleted after it expires. Minimum value: 1 day, maximum: 30 days. Values outside this range will result in an error.
      shared_ptr<int32_t> logstoreTtl_ {};
      // The name of the resource group that runs the job.
      shared_ptr<string> resourceGroup_ {};
      // The name of the SLS project.
      shared_ptr<string> slsProject_ {};
    };

    class OssInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OssInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ExportBasePath, exportBasePath_);
        DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_TO_JSON(ResultFileTtl, resultFileTtl_);
      };
      friend void from_json(const Darabonba::Json& j, OssInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ExportBasePath, exportBasePath_);
        DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_FROM_JSON(ResultFileTtl, resultFileTtl_);
      };
      OssInfo() = default ;
      OssInfo(const OssInfo &) = default ;
      OssInfo(OssInfo &&) = default ;
      OssInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OssInfo() = default ;
      OssInfo& operator=(const OssInfo &) = default ;
      OssInfo& operator=(OssInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exportBasePath_ == nullptr
        && this->resourceGroup_ == nullptr && this->resultFileTtl_ == nullptr; };
      // exportBasePath Field Functions 
      bool hasExportBasePath() const { return this->exportBasePath_ != nullptr;};
      void deleteExportBasePath() { this->exportBasePath_ = nullptr;};
      inline string getExportBasePath() const { DARABONBA_PTR_GET_DEFAULT(exportBasePath_, "") };
      inline OssInfo& setExportBasePath(string exportBasePath) { DARABONBA_PTR_SET_VALUE(exportBasePath_, exportBasePath) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline OssInfo& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // resultFileTtl Field Functions 
      bool hasResultFileTtl() const { return this->resultFileTtl_ != nullptr;};
      void deleteResultFileTtl() { this->resultFileTtl_ = nullptr;};
      inline int32_t getResultFileTtl() const { DARABONBA_PTR_GET_DEFAULT(resultFileTtl_, 0) };
      inline OssInfo& setResultFileTtl(int32_t resultFileTtl) { DARABONBA_PTR_SET_VALUE(resultFileTtl_, resultFileTtl) };


    protected:
      // The OSS path where the result sets are stored.
      shared_ptr<string> exportBasePath_ {};
      // The name of the resource group that runs the job.
      shared_ptr<string> resourceGroup_ {};
      // The expiration time of the OSS file. Unit: days. Minimum: 1 day, maximum: 30 days. Values outside this range will result in an error.
      shared_ptr<int32_t> resultFileTtl_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->exportType_ == nullptr && this->ossInfo_ == nullptr && this->regionId_ == nullptr && this->slsInfo_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ConfigureResultExportRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ConfigureResultExportRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // ossInfo Field Functions 
    bool hasOssInfo() const { return this->ossInfo_ != nullptr;};
    void deleteOssInfo() { this->ossInfo_ = nullptr;};
    inline const ConfigureResultExportRequest::OssInfo & getOssInfo() const { DARABONBA_PTR_GET_CONST(ossInfo_, ConfigureResultExportRequest::OssInfo) };
    inline ConfigureResultExportRequest::OssInfo getOssInfo() { DARABONBA_PTR_GET(ossInfo_, ConfigureResultExportRequest::OssInfo) };
    inline ConfigureResultExportRequest& setOssInfo(const ConfigureResultExportRequest::OssInfo & ossInfo) { DARABONBA_PTR_SET_VALUE(ossInfo_, ossInfo) };
    inline ConfigureResultExportRequest& setOssInfo(ConfigureResultExportRequest::OssInfo && ossInfo) { DARABONBA_PTR_SET_RVALUE(ossInfo_, ossInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureResultExportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const ConfigureResultExportRequest::SlsInfo & getSlsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, ConfigureResultExportRequest::SlsInfo) };
    inline ConfigureResultExportRequest::SlsInfo getSlsInfo() { DARABONBA_PTR_GET(slsInfo_, ConfigureResultExportRequest::SlsInfo) };
    inline ConfigureResultExportRequest& setSlsInfo(const ConfigureResultExportRequest::SlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline ConfigureResultExportRequest& setSlsInfo(ConfigureResultExportRequest::SlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the information about all AnalyticDB for MySQL clusters within a region, including cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The export type. Valid values:
    // 
    // *   SLS: Specifies that the export destination is SLS.
    // *   OSS: Specifies that the export destination is OSS.
    shared_ptr<string> exportType_ {};
    // The OSS configuration details if the destination is of the OSS type.
    shared_ptr<ConfigureResultExportRequest::OssInfo> ossInfo_ {};
    // The ID of the region where the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The SLS configuration details if the destination is of the SLS type.
    shared_ptr<ConfigureResultExportRequest::SlsInfo> slsInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
