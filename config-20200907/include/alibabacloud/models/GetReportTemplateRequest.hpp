// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetReportTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportTemplateId, reportTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportTemplateId, reportTemplateId_);
    };
    GetReportTemplateRequest() = default ;
    GetReportTemplateRequest(const GetReportTemplateRequest &) = default ;
    GetReportTemplateRequest(GetReportTemplateRequest &&) = default ;
    GetReportTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateRequest() = default ;
    GetReportTemplateRequest& operator=(const GetReportTemplateRequest &) = default ;
    GetReportTemplateRequest& operator=(GetReportTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportTemplateId_ == nullptr; };
    // reportTemplateId Field Functions 
    bool hasReportTemplateId() const { return this->reportTemplateId_ != nullptr;};
    void deleteReportTemplateId() { this->reportTemplateId_ = nullptr;};
    inline string getReportTemplateId() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateId_, "") };
    inline GetReportTemplateRequest& setReportTemplateId(string reportTemplateId) { DARABONBA_PTR_SET_VALUE(reportTemplateId_, reportTemplateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> reportTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
