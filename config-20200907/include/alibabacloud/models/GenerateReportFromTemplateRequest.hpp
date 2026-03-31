// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEREPORTFROMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEREPORTFROMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateReportFromTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateReportFromTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportTemplateId, reportTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateReportFromTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportTemplateId, reportTemplateId_);
    };
    GenerateReportFromTemplateRequest() = default ;
    GenerateReportFromTemplateRequest(const GenerateReportFromTemplateRequest &) = default ;
    GenerateReportFromTemplateRequest(GenerateReportFromTemplateRequest &&) = default ;
    GenerateReportFromTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateReportFromTemplateRequest() = default ;
    GenerateReportFromTemplateRequest& operator=(const GenerateReportFromTemplateRequest &) = default ;
    GenerateReportFromTemplateRequest& operator=(GenerateReportFromTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportTemplateId_ == nullptr; };
    // reportTemplateId Field Functions 
    bool hasReportTemplateId() const { return this->reportTemplateId_ != nullptr;};
    void deleteReportTemplateId() { this->reportTemplateId_ = nullptr;};
    inline string getReportTemplateId() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateId_, "") };
    inline GenerateReportFromTemplateRequest& setReportTemplateId(string reportTemplateId) { DARABONBA_PTR_SET_VALUE(reportTemplateId_, reportTemplateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> reportTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
