// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigureResultExportResponseBodyDataOssInfo.hpp>
#include <alibabacloud/models/ConfigureResultExportResponseBodyDataSlsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ConfigureResultExportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureResultExportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(OssInfo, ossInfo_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureResultExportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(OssInfo, ossInfo_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    ConfigureResultExportResponseBodyData() = default ;
    ConfigureResultExportResponseBodyData(const ConfigureResultExportResponseBodyData &) = default ;
    ConfigureResultExportResponseBodyData(ConfigureResultExportResponseBodyData &&) = default ;
    ConfigureResultExportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureResultExportResponseBodyData() = default ;
    ConfigureResultExportResponseBodyData& operator=(const ConfigureResultExportResponseBodyData &) = default ;
    ConfigureResultExportResponseBodyData& operator=(ConfigureResultExportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportType_ == nullptr
        && return this->ossInfo_ == nullptr && return this->slsInfo_ == nullptr; };
    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ConfigureResultExportResponseBodyData& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // ossInfo Field Functions 
    bool hasOssInfo() const { return this->ossInfo_ != nullptr;};
    void deleteOssInfo() { this->ossInfo_ = nullptr;};
    inline const Models::ConfigureResultExportResponseBodyDataOssInfo & ossInfo() const { DARABONBA_PTR_GET_CONST(ossInfo_, Models::ConfigureResultExportResponseBodyDataOssInfo) };
    inline Models::ConfigureResultExportResponseBodyDataOssInfo ossInfo() { DARABONBA_PTR_GET(ossInfo_, Models::ConfigureResultExportResponseBodyDataOssInfo) };
    inline ConfigureResultExportResponseBodyData& setOssInfo(const Models::ConfigureResultExportResponseBodyDataOssInfo & ossInfo) { DARABONBA_PTR_SET_VALUE(ossInfo_, ossInfo) };
    inline ConfigureResultExportResponseBodyData& setOssInfo(Models::ConfigureResultExportResponseBodyDataOssInfo && ossInfo) { DARABONBA_PTR_SET_RVALUE(ossInfo_, ossInfo) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const Models::ConfigureResultExportResponseBodyDataSlsInfo & slsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, Models::ConfigureResultExportResponseBodyDataSlsInfo) };
    inline Models::ConfigureResultExportResponseBodyDataSlsInfo slsInfo() { DARABONBA_PTR_GET(slsInfo_, Models::ConfigureResultExportResponseBodyDataSlsInfo) };
    inline ConfigureResultExportResponseBodyData& setSlsInfo(const Models::ConfigureResultExportResponseBodyDataSlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline ConfigureResultExportResponseBodyData& setSlsInfo(Models::ConfigureResultExportResponseBodyDataSlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    std::shared_ptr<string> exportType_ = nullptr;
    std::shared_ptr<Models::ConfigureResultExportResponseBodyDataOssInfo> ossInfo_ = nullptr;
    std::shared_ptr<Models::ConfigureResultExportResponseBodyDataSlsInfo> slsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
