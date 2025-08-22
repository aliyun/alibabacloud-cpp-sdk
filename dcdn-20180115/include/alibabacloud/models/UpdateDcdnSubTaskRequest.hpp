// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDCDNSUBTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDCDNSUBTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class UpdateDcdnSubTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDcdnSubTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ReportIds, reportIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDcdnSubTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ReportIds, reportIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    UpdateDcdnSubTaskRequest() = default ;
    UpdateDcdnSubTaskRequest(const UpdateDcdnSubTaskRequest &) = default ;
    UpdateDcdnSubTaskRequest(UpdateDcdnSubTaskRequest &&) = default ;
    UpdateDcdnSubTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDcdnSubTaskRequest() = default ;
    UpdateDcdnSubTaskRequest& operator=(const UpdateDcdnSubTaskRequest &) = default ;
    UpdateDcdnSubTaskRequest& operator=(UpdateDcdnSubTaskRequest &&) = default ;
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
    inline UpdateDcdnSubTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateDcdnSubTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // reportIds Field Functions 
    bool hasReportIds() const { return this->reportIds_ != nullptr;};
    void deleteReportIds() { this->reportIds_ = nullptr;};
    inline string reportIds() const { DARABONBA_PTR_GET_DEFAULT(reportIds_, "") };
    inline UpdateDcdnSubTaskRequest& setReportIds(string reportIds) { DARABONBA_PTR_SET_VALUE(reportIds_, reportIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateDcdnSubTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The domain names that you want to include in the operations report. If you do not specify a domain name, all domain names that belong to your Alibaba Cloud account are included.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end time of the operations report. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The IDs of the metrics that you want to update. Separate IDs with commas (,). You can call the [DescribeDcdnSubList](https://help.aliyun.com/document_detail/270075.html) operation to query the IDs.
    std::shared_ptr<string> reportIds_ = nullptr;
    // The start time of the operations report. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
