// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERREPORTSENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERREPORTSENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class TriggerReportSendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerReportSendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportTemplateId, reportTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerReportSendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportTemplateId, reportTemplateId_);
    };
    TriggerReportSendRequest() = default ;
    TriggerReportSendRequest(const TriggerReportSendRequest &) = default ;
    TriggerReportSendRequest(TriggerReportSendRequest &&) = default ;
    TriggerReportSendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerReportSendRequest() = default ;
    TriggerReportSendRequest& operator=(const TriggerReportSendRequest &) = default ;
    TriggerReportSendRequest& operator=(TriggerReportSendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportTemplateId_ == nullptr; };
    // reportTemplateId Field Functions 
    bool hasReportTemplateId() const { return this->reportTemplateId_ != nullptr;};
    void deleteReportTemplateId() { this->reportTemplateId_ = nullptr;};
    inline string getReportTemplateId() const { DARABONBA_PTR_GET_DEFAULT(reportTemplateId_, "") };
    inline TriggerReportSendRequest& setReportTemplateId(string reportTemplateId) { DARABONBA_PTR_SET_VALUE(reportTemplateId_, reportTemplateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> reportTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
