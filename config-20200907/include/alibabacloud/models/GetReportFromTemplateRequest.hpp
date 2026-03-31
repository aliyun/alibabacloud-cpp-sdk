// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTFROMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTFROMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetReportFromTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportFromTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportTemplateId, reportTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportFromTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportTemplateId, reportTemplateId_);
    };
    GetReportFromTemplateRequest() = default ;
    GetReportFromTemplateRequest(const GetReportFromTemplateRequest &) = default ;
    GetReportFromTemplateRequest(GetReportFromTemplateRequest &&) = default ;
    GetReportFromTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportFromTemplateRequest() = default ;
    GetReportFromTemplateRequest& operator=(const GetReportFromTemplateRequest &) = default ;
    GetReportFromTemplateRequest& operator=(GetReportFromTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportTemplateId_ == nullptr; };
    // reportTemplateId Field Functions 
    bool hasReportTemplateId() const { return this->reportTemplateId_ != nullptr;};
    void deleteReportTemplateId() { this->reportTemplateId_ = nullptr;};
    inline string getReportTemplateId() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateId_, "") };
    inline GetReportFromTemplateRequest& setReportTemplateId(string reportTemplateId) { DARABONBA_PTR_SET_VALUE(reportTemplateId_, reportTemplateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> reportTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
