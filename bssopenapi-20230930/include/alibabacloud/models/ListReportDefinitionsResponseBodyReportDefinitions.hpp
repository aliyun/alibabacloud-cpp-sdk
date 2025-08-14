// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTDEFINITIONSRESPONSEBODYREPORTDEFINITIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTDEFINITIONSRESPONSEBODYREPORTDEFINITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListReportDefinitionsResponseBodyReportDefinitions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportDefinitionsResponseBodyReportDefinitions& obj) { 
      DARABONBA_PTR_TO_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssBucketOwnerAccountId, ossBucketOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(OssBucketPath, ossBucketPath_);
      DARABONBA_PTR_TO_JSON(ReportSourceName, reportSourceName_);
      DARABONBA_PTR_TO_JSON(ReportSourceType, reportSourceType_);
      DARABONBA_PTR_TO_JSON(ReportTaskId, reportTaskId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(SubscribeCreateTime, subscribeCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportDefinitionsResponseBodyReportDefinitions& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssBucketOwnerAccountId, ossBucketOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(OssBucketPath, ossBucketPath_);
      DARABONBA_PTR_FROM_JSON(ReportSourceName, reportSourceName_);
      DARABONBA_PTR_FROM_JSON(ReportSourceType, reportSourceType_);
      DARABONBA_PTR_FROM_JSON(ReportTaskId, reportTaskId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(SubscribeCreateTime, subscribeCreateTime_);
    };
    ListReportDefinitionsResponseBodyReportDefinitions() = default ;
    ListReportDefinitionsResponseBodyReportDefinitions(const ListReportDefinitionsResponseBodyReportDefinitions &) = default ;
    ListReportDefinitionsResponseBodyReportDefinitions(ListReportDefinitionsResponseBodyReportDefinitions &&) = default ;
    ListReportDefinitionsResponseBodyReportDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportDefinitionsResponseBodyReportDefinitions() = default ;
    ListReportDefinitionsResponseBodyReportDefinitions& operator=(const ListReportDefinitionsResponseBodyReportDefinitions &) = default ;
    ListReportDefinitionsResponseBodyReportDefinitions& operator=(ListReportDefinitionsResponseBodyReportDefinitions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginBillingCycle_ != nullptr
        && this->ossBucketName_ != nullptr && this->ossBucketOwnerAccountId_ != nullptr && this->ossBucketPath_ != nullptr && this->reportSourceName_ != nullptr && this->reportSourceType_ != nullptr
        && this->reportTaskId_ != nullptr && this->reportType_ != nullptr && this->subscribeCreateTime_ != nullptr; };
    // beginBillingCycle Field Functions 
    bool hasBeginBillingCycle() const { return this->beginBillingCycle_ != nullptr;};
    void deleteBeginBillingCycle() { this->beginBillingCycle_ = nullptr;};
    inline string beginBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(beginBillingCycle_, "") };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setBeginBillingCycle(string beginBillingCycle) { DARABONBA_PTR_SET_VALUE(beginBillingCycle_, beginBillingCycle) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossBucketOwnerAccountId Field Functions 
    bool hasOssBucketOwnerAccountId() const { return this->ossBucketOwnerAccountId_ != nullptr;};
    void deleteOssBucketOwnerAccountId() { this->ossBucketOwnerAccountId_ = nullptr;};
    inline int64_t ossBucketOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ossBucketOwnerAccountId_, 0L) };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setOssBucketOwnerAccountId(int64_t ossBucketOwnerAccountId) { DARABONBA_PTR_SET_VALUE(ossBucketOwnerAccountId_, ossBucketOwnerAccountId) };


    // ossBucketPath Field Functions 
    bool hasOssBucketPath() const { return this->ossBucketPath_ != nullptr;};
    void deleteOssBucketPath() { this->ossBucketPath_ = nullptr;};
    inline string ossBucketPath() const { DARABONBA_PTR_GET_DEFAULT(ossBucketPath_, "") };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setOssBucketPath(string ossBucketPath) { DARABONBA_PTR_SET_VALUE(ossBucketPath_, ossBucketPath) };


    // reportSourceName Field Functions 
    bool hasReportSourceName() const { return this->reportSourceName_ != nullptr;};
    void deleteReportSourceName() { this->reportSourceName_ = nullptr;};
    inline string reportSourceName() const { DARABONBA_PTR_GET_DEFAULT(reportSourceName_, "") };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setReportSourceName(string reportSourceName) { DARABONBA_PTR_SET_VALUE(reportSourceName_, reportSourceName) };


    // reportSourceType Field Functions 
    bool hasReportSourceType() const { return this->reportSourceType_ != nullptr;};
    void deleteReportSourceType() { this->reportSourceType_ = nullptr;};
    inline string reportSourceType() const { DARABONBA_PTR_GET_DEFAULT(reportSourceType_, "") };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setReportSourceType(string reportSourceType) { DARABONBA_PTR_SET_VALUE(reportSourceType_, reportSourceType) };


    // reportTaskId Field Functions 
    bool hasReportTaskId() const { return this->reportTaskId_ != nullptr;};
    void deleteReportTaskId() { this->reportTaskId_ = nullptr;};
    inline int64_t reportTaskId() const { DARABONBA_PTR_GET_DEFAULT(reportTaskId_, 0L) };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setReportTaskId(int64_t reportTaskId) { DARABONBA_PTR_SET_VALUE(reportTaskId_, reportTaskId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // subscribeCreateTime Field Functions 
    bool hasSubscribeCreateTime() const { return this->subscribeCreateTime_ != nullptr;};
    void deleteSubscribeCreateTime() { this->subscribeCreateTime_ = nullptr;};
    inline string subscribeCreateTime() const { DARABONBA_PTR_GET_DEFAULT(subscribeCreateTime_, "") };
    inline ListReportDefinitionsResponseBodyReportDefinitions& setSubscribeCreateTime(string subscribeCreateTime) { DARABONBA_PTR_SET_VALUE(subscribeCreateTime_, subscribeCreateTime) };


  protected:
    std::shared_ptr<string> beginBillingCycle_ = nullptr;
    std::shared_ptr<string> ossBucketName_ = nullptr;
    std::shared_ptr<int64_t> ossBucketOwnerAccountId_ = nullptr;
    std::shared_ptr<string> ossBucketPath_ = nullptr;
    std::shared_ptr<string> reportSourceName_ = nullptr;
    std::shared_ptr<string> reportSourceType_ = nullptr;
    std::shared_ptr<int64_t> reportTaskId_ = nullptr;
    std::shared_ptr<string> reportType_ = nullptr;
    std::shared_ptr<string> subscribeCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
