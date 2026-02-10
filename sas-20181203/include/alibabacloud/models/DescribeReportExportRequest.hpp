// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPORTEXPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPORTEXPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeReportExportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReportExportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportId, exportId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReportExportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportId, exportId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeReportExportRequest() = default ;
    DescribeReportExportRequest(const DescribeReportExportRequest &) = default ;
    DescribeReportExportRequest(DescribeReportExportRequest &&) = default ;
    DescribeReportExportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReportExportRequest() = default ;
    DescribeReportExportRequest& operator=(const DescribeReportExportRequest &) = default ;
    DescribeReportExportRequest& operator=(DescribeReportExportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportId_ == nullptr
        && this->lang_ == nullptr; };
    // exportId Field Functions 
    bool hasExportId() const { return this->exportId_ != nullptr;};
    void deleteExportId() { this->exportId_ = nullptr;};
    inline int64_t getExportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, 0L) };
    inline DescribeReportExportRequest& setExportId(int64_t exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeReportExportRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the export task.
    // 
    // >  You can call the [ExportCustomizeReport](https://help.aliyun.com/document_detail/2842677.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> exportId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
