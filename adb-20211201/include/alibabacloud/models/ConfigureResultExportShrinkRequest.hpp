// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ConfigureResultExportShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureResultExportShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(OssInfo, ossInfoShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureResultExportShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(OssInfo, ossInfoShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfoShrink_);
    };
    ConfigureResultExportShrinkRequest() = default ;
    ConfigureResultExportShrinkRequest(const ConfigureResultExportShrinkRequest &) = default ;
    ConfigureResultExportShrinkRequest(ConfigureResultExportShrinkRequest &&) = default ;
    ConfigureResultExportShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureResultExportShrinkRequest() = default ;
    ConfigureResultExportShrinkRequest& operator=(const ConfigureResultExportShrinkRequest &) = default ;
    ConfigureResultExportShrinkRequest& operator=(ConfigureResultExportShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->exportType_ == nullptr && this->ossInfoShrink_ == nullptr && this->regionId_ == nullptr && this->slsInfoShrink_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ConfigureResultExportShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ConfigureResultExportShrinkRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // ossInfoShrink Field Functions 
    bool hasOssInfoShrink() const { return this->ossInfoShrink_ != nullptr;};
    void deleteOssInfoShrink() { this->ossInfoShrink_ = nullptr;};
    inline string getOssInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(ossInfoShrink_, "") };
    inline ConfigureResultExportShrinkRequest& setOssInfoShrink(string ossInfoShrink) { DARABONBA_PTR_SET_VALUE(ossInfoShrink_, ossInfoShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureResultExportShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfoShrink Field Functions 
    bool hasSlsInfoShrink() const { return this->slsInfoShrink_ != nullptr;};
    void deleteSlsInfoShrink() { this->slsInfoShrink_ = nullptr;};
    inline string getSlsInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(slsInfoShrink_, "") };
    inline ConfigureResultExportShrinkRequest& setSlsInfoShrink(string slsInfoShrink) { DARABONBA_PTR_SET_VALUE(slsInfoShrink_, slsInfoShrink) };


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
    shared_ptr<string> ossInfoShrink_ {};
    // The ID of the region where the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The SLS configuration details if the destination is of the SLS type.
    shared_ptr<string> slsInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
