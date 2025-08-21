// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECDNSUBTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECDNSUBTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class UpdateCdnSubTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCdnSubTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ReportIds, reportIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCdnSubTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ReportIds, reportIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    UpdateCdnSubTaskRequest() = default ;
    UpdateCdnSubTaskRequest(const UpdateCdnSubTaskRequest &) = default ;
    UpdateCdnSubTaskRequest(UpdateCdnSubTaskRequest &&) = default ;
    UpdateCdnSubTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCdnSubTaskRequest() = default ;
    UpdateCdnSubTaskRequest& operator=(const UpdateCdnSubTaskRequest &) = default ;
    UpdateCdnSubTaskRequest& operator=(UpdateCdnSubTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->endTime_ != nullptr && this->reportIds_ != nullptr && this->startTime_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateCdnSubTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateCdnSubTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // reportIds Field Functions 
    bool hasReportIds() const { return this->reportIds_ != nullptr;};
    void deleteReportIds() { this->reportIds_ = nullptr;};
    inline string reportIds() const { DARABONBA_PTR_GET_DEFAULT(reportIds_, "") };
    inline UpdateCdnSubTaskRequest& setReportIds(string reportIds) { DARABONBA_PTR_SET_VALUE(reportIds_, reportIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateCdnSubTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The domain name that you want to track. You can specify up to 500 domain names in each request. If you specify multiple domain names, separate them with commas (,). If you do not specify a domain name, operations reports are updated for all domain names in your Alibaba Cloud account.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end time of the operations report. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The IDs of operations reports that you want to update. Separate IDs with commas (,).
    std::shared_ptr<string> reportIds_ = nullptr;
    // The start time of the operations report. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
