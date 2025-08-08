// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMAPPCENTERAPPCONFIGRESPONSEBODYEXPORTMAPPCENTERAPPCONFIGRESULT_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMAPPCENTERAPPCONFIGRESPONSEBODYEXPORTMAPPCENTERAPPCONFIGRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigDownloadUrl, configDownloadUrl_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigDownloadUrl, configDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult() = default ;
    ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult(const ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult &) = default ;
    ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult(ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult &&) = default ;
    ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult() = default ;
    ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult& operator=(const ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult &) = default ;
    ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult& operator=(ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configDownloadUrl_ != nullptr
        && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // configDownloadUrl Field Functions 
    bool hasConfigDownloadUrl() const { return this->configDownloadUrl_ != nullptr;};
    void deleteConfigDownloadUrl() { this->configDownloadUrl_ = nullptr;};
    inline string configDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(configDownloadUrl_, "") };
    inline ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult& setConfigDownloadUrl(string configDownloadUrl) { DARABONBA_PTR_SET_VALUE(configDownloadUrl_, configDownloadUrl) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExportMappCenterAppConfigResponseBodyExportMappCenterAppConfigResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> configDownloadUrl_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
