// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPORTDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPORTDEFINITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateReportDefinitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReportDefinitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssBucketOwnerAccountId, ossBucketOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(OssBucketPath, ossBucketPath_);
      DARABONBA_PTR_TO_JSON(ReportSourceName, reportSourceName_);
      DARABONBA_PTR_TO_JSON(ReportSourceType, reportSourceType_);
      DARABONBA_PTR_TO_JSON(ReportTaskId, reportTaskId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubscribeCreateTime, subscribeCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReportDefinitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssBucketOwnerAccountId, ossBucketOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(OssBucketPath, ossBucketPath_);
      DARABONBA_PTR_FROM_JSON(ReportSourceName, reportSourceName_);
      DARABONBA_PTR_FROM_JSON(ReportSourceType, reportSourceType_);
      DARABONBA_PTR_FROM_JSON(ReportTaskId, reportTaskId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubscribeCreateTime, subscribeCreateTime_);
    };
    CreateReportDefinitionResponseBody() = default ;
    CreateReportDefinitionResponseBody(const CreateReportDefinitionResponseBody &) = default ;
    CreateReportDefinitionResponseBody(CreateReportDefinitionResponseBody &&) = default ;
    CreateReportDefinitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReportDefinitionResponseBody() = default ;
    CreateReportDefinitionResponseBody& operator=(const CreateReportDefinitionResponseBody &) = default ;
    CreateReportDefinitionResponseBody& operator=(CreateReportDefinitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginBillingCycle_ == nullptr
        && this->metadata_ == nullptr && this->ossBucketName_ == nullptr && this->ossBucketOwnerAccountId_ == nullptr && this->ossBucketPath_ == nullptr && this->reportSourceName_ == nullptr
        && this->reportSourceType_ == nullptr && this->reportTaskId_ == nullptr && this->reportType_ == nullptr && this->requestId_ == nullptr && this->subscribeCreateTime_ == nullptr; };
    // beginBillingCycle Field Functions 
    bool hasBeginBillingCycle() const { return this->beginBillingCycle_ != nullptr;};
    void deleteBeginBillingCycle() { this->beginBillingCycle_ = nullptr;};
    inline string getBeginBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(beginBillingCycle_, "") };
    inline CreateReportDefinitionResponseBody& setBeginBillingCycle(string beginBillingCycle) { DARABONBA_PTR_SET_VALUE(beginBillingCycle_, beginBillingCycle) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreateReportDefinitionResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateReportDefinitionResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateReportDefinitionResponseBody& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossBucketOwnerAccountId Field Functions 
    bool hasOssBucketOwnerAccountId() const { return this->ossBucketOwnerAccountId_ != nullptr;};
    void deleteOssBucketOwnerAccountId() { this->ossBucketOwnerAccountId_ = nullptr;};
    inline int64_t getOssBucketOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ossBucketOwnerAccountId_, 0L) };
    inline CreateReportDefinitionResponseBody& setOssBucketOwnerAccountId(int64_t ossBucketOwnerAccountId) { DARABONBA_PTR_SET_VALUE(ossBucketOwnerAccountId_, ossBucketOwnerAccountId) };


    // ossBucketPath Field Functions 
    bool hasOssBucketPath() const { return this->ossBucketPath_ != nullptr;};
    void deleteOssBucketPath() { this->ossBucketPath_ = nullptr;};
    inline string getOssBucketPath() const { DARABONBA_PTR_GET_DEFAULT(ossBucketPath_, "") };
    inline CreateReportDefinitionResponseBody& setOssBucketPath(string ossBucketPath) { DARABONBA_PTR_SET_VALUE(ossBucketPath_, ossBucketPath) };


    // reportSourceName Field Functions 
    bool hasReportSourceName() const { return this->reportSourceName_ != nullptr;};
    void deleteReportSourceName() { this->reportSourceName_ = nullptr;};
    inline string getReportSourceName() const { DARABONBA_PTR_GET_DEFAULT(reportSourceName_, "") };
    inline CreateReportDefinitionResponseBody& setReportSourceName(string reportSourceName) { DARABONBA_PTR_SET_VALUE(reportSourceName_, reportSourceName) };


    // reportSourceType Field Functions 
    bool hasReportSourceType() const { return this->reportSourceType_ != nullptr;};
    void deleteReportSourceType() { this->reportSourceType_ = nullptr;};
    inline string getReportSourceType() const { DARABONBA_PTR_GET_DEFAULT(reportSourceType_, "") };
    inline CreateReportDefinitionResponseBody& setReportSourceType(string reportSourceType) { DARABONBA_PTR_SET_VALUE(reportSourceType_, reportSourceType) };


    // reportTaskId Field Functions 
    bool hasReportTaskId() const { return this->reportTaskId_ != nullptr;};
    void deleteReportTaskId() { this->reportTaskId_ = nullptr;};
    inline int64_t getReportTaskId() const { DARABONBA_PTR_GET_DEFAULT(reportTaskId_, 0L) };
    inline CreateReportDefinitionResponseBody& setReportTaskId(int64_t reportTaskId) { DARABONBA_PTR_SET_VALUE(reportTaskId_, reportTaskId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline CreateReportDefinitionResponseBody& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateReportDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscribeCreateTime Field Functions 
    bool hasSubscribeCreateTime() const { return this->subscribeCreateTime_ != nullptr;};
    void deleteSubscribeCreateTime() { this->subscribeCreateTime_ = nullptr;};
    inline string getSubscribeCreateTime() const { DARABONBA_PTR_GET_DEFAULT(subscribeCreateTime_, "") };
    inline CreateReportDefinitionResponseBody& setSubscribeCreateTime(string subscribeCreateTime) { DARABONBA_PTR_SET_VALUE(subscribeCreateTime_, subscribeCreateTime) };


  protected:
    // The start billing cycle for push. After the subscription succeeds, the system automatically pushes data from the start billing cycle to the current time. This parameter is invalid for monthly bill PDF subscriptions, and historical data will not be re-pushed. You can push data within the last year.
    shared_ptr<string> beginBillingCycle_ {};
    // The metadata of the response.
    Darabonba::Json metadata_ {};
    // The name of the OSS bucket for file storage.
    shared_ptr<string> ossBucketName_ {};
    // The UID of the OSS bucket owner that stores the files. If this is a Bid/Reseller subscription and you need to push data to a sub-account\\"s OSS, specify this parameter. The account must be a sub-account of the calling account, and the AliyunConsumeDump2OSSRole permission must be granted to this account. Regular users do not need to specify this parameter. The default value is the calling account.
    shared_ptr<int64_t> ossBucketOwnerAccountId_ {};
    // The storage path of the OSS bucket.
    shared_ptr<string> ossBucketPath_ {};
    // The name of the subscription source.
    shared_ptr<string> reportSourceName_ {};
    // The subscription source. Valid values: OSS and MC.
    shared_ptr<string> reportSourceType_ {};
    // The ID of the billing subscription task.
    shared_ptr<int64_t> reportTaskId_ {};
    // The subscription type. Valid values:
    // - consumeDetailBillV2: consumption details. This value is supported only by OSS/MC subscriptions.
    // - splitDetailBillV2: split details. This value is supported only by OSS/MC subscriptions.
    // - costDetailBillV2: cost details. This value is supported only by OSS/MC subscriptions.
    // - monthBillOverview: monthly bill overview. This value is supported only by OSS/MSC_EMAIL subscriptions.
    // - focus: FOCUS bill. This value is supported only by OSS/MC subscriptions.
    shared_ptr<string> reportType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The time when the subscription was created.
    shared_ptr<string> subscribeCreateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
