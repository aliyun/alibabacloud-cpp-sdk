// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTRESPONSEBODYDATAOSSINFO_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURERESULTEXPORTRESPONSEBODYDATAOSSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ConfigureResultExportResponseBodyDataOssInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureResultExportResponseBodyDataOssInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ExportBasePath, exportBasePath_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(ResultFileTtl, resultFileTtl_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureResultExportResponseBodyDataOssInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportBasePath, exportBasePath_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(ResultFileTtl, resultFileTtl_);
    };
    ConfigureResultExportResponseBodyDataOssInfo() = default ;
    ConfigureResultExportResponseBodyDataOssInfo(const ConfigureResultExportResponseBodyDataOssInfo &) = default ;
    ConfigureResultExportResponseBodyDataOssInfo(ConfigureResultExportResponseBodyDataOssInfo &&) = default ;
    ConfigureResultExportResponseBodyDataOssInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureResultExportResponseBodyDataOssInfo() = default ;
    ConfigureResultExportResponseBodyDataOssInfo& operator=(const ConfigureResultExportResponseBodyDataOssInfo &) = default ;
    ConfigureResultExportResponseBodyDataOssInfo& operator=(ConfigureResultExportResponseBodyDataOssInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportBasePath_ == nullptr
        && return this->resourceGroup_ == nullptr && return this->resultFileTtl_ == nullptr; };
    // exportBasePath Field Functions 
    bool hasExportBasePath() const { return this->exportBasePath_ != nullptr;};
    void deleteExportBasePath() { this->exportBasePath_ = nullptr;};
    inline string exportBasePath() const { DARABONBA_PTR_GET_DEFAULT(exportBasePath_, "") };
    inline ConfigureResultExportResponseBodyDataOssInfo& setExportBasePath(string exportBasePath) { DARABONBA_PTR_SET_VALUE(exportBasePath_, exportBasePath) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline ConfigureResultExportResponseBodyDataOssInfo& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // resultFileTtl Field Functions 
    bool hasResultFileTtl() const { return this->resultFileTtl_ != nullptr;};
    void deleteResultFileTtl() { this->resultFileTtl_ = nullptr;};
    inline int32_t resultFileTtl() const { DARABONBA_PTR_GET_DEFAULT(resultFileTtl_, 0) };
    inline ConfigureResultExportResponseBodyDataOssInfo& setResultFileTtl(int32_t resultFileTtl) { DARABONBA_PTR_SET_VALUE(resultFileTtl_, resultFileTtl) };


  protected:
    std::shared_ptr<string> exportBasePath_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<int32_t> resultFileTtl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
