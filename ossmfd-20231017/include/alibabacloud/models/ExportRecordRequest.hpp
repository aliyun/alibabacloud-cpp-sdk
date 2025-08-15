// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssMfd20231017
{
namespace Models
{
  class ExportRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, ExportRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    ExportRecordRequest() = default ;
    ExportRecordRequest(const ExportRecordRequest &) = default ;
    ExportRecordRequest(ExportRecordRequest &&) = default ;
    ExportRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportRecordRequest() = default ;
    ExportRecordRequest& operator=(const ExportRecordRequest &) = default ;
    ExportRecordRequest& operator=(ExportRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exportType_ != nullptr
        && this->lang_ != nullptr && this->params_ != nullptr; };
    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportRecordRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExportRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ExportRecordRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> exportType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssMfd20231017
#endif
