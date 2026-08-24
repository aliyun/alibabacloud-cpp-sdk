// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPORTDEFINITIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPORTDEFINITIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateReportDefinitionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReportDefinitionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_TO_JSON(IncludeMembers, includeMembers_);
      DARABONBA_PTR_TO_JSON(McProject, mcProject_);
      DARABONBA_PTR_TO_JSON(McTableName, mcTableName_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(NotSendOnNoData, notSendOnNoData_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssBucketOwnerAccountId, ossBucketOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(OssBucketPath, ossBucketPath_);
      DARABONBA_PTR_TO_JSON(ReportSourceType, reportSourceType_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(SelectedFields, selectedFieldsShrink_);
      DARABONBA_PTR_TO_JSON(SendWithAttach, sendWithAttach_);
      DARABONBA_PTR_TO_JSON(SplitFileOnUserId, splitFileOnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReportDefinitionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_FROM_JSON(IncludeMembers, includeMembers_);
      DARABONBA_PTR_FROM_JSON(McProject, mcProject_);
      DARABONBA_PTR_FROM_JSON(McTableName, mcTableName_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(NotSendOnNoData, notSendOnNoData_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssBucketOwnerAccountId, ossBucketOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(OssBucketPath, ossBucketPath_);
      DARABONBA_PTR_FROM_JSON(ReportSourceType, reportSourceType_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(SelectedFields, selectedFieldsShrink_);
      DARABONBA_PTR_FROM_JSON(SendWithAttach, sendWithAttach_);
      DARABONBA_PTR_FROM_JSON(SplitFileOnUserId, splitFileOnUserId_);
    };
    CreateReportDefinitionShrinkRequest() = default ;
    CreateReportDefinitionShrinkRequest(const CreateReportDefinitionShrinkRequest &) = default ;
    CreateReportDefinitionShrinkRequest(CreateReportDefinitionShrinkRequest &&) = default ;
    CreateReportDefinitionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReportDefinitionShrinkRequest() = default ;
    CreateReportDefinitionShrinkRequest& operator=(const CreateReportDefinitionShrinkRequest &) = default ;
    CreateReportDefinitionShrinkRequest& operator=(CreateReportDefinitionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginBillingCycle_ == nullptr
        && this->includeMembers_ == nullptr && this->mcProject_ == nullptr && this->mcTableName_ == nullptr && this->nbid_ == nullptr && this->notSendOnNoData_ == nullptr
        && this->ossBucketName_ == nullptr && this->ossBucketOwnerAccountId_ == nullptr && this->ossBucketPath_ == nullptr && this->reportSourceType_ == nullptr && this->reportType_ == nullptr
        && this->selectedFieldsShrink_ == nullptr && this->sendWithAttach_ == nullptr && this->splitFileOnUserId_ == nullptr; };
    // beginBillingCycle Field Functions 
    bool hasBeginBillingCycle() const { return this->beginBillingCycle_ != nullptr;};
    void deleteBeginBillingCycle() { this->beginBillingCycle_ = nullptr;};
    inline string getBeginBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(beginBillingCycle_, "") };
    inline CreateReportDefinitionShrinkRequest& setBeginBillingCycle(string beginBillingCycle) { DARABONBA_PTR_SET_VALUE(beginBillingCycle_, beginBillingCycle) };


    // includeMembers Field Functions 
    bool hasIncludeMembers() const { return this->includeMembers_ != nullptr;};
    void deleteIncludeMembers() { this->includeMembers_ = nullptr;};
    inline string getIncludeMembers() const { DARABONBA_PTR_GET_DEFAULT(includeMembers_, "") };
    inline CreateReportDefinitionShrinkRequest& setIncludeMembers(string includeMembers) { DARABONBA_PTR_SET_VALUE(includeMembers_, includeMembers) };


    // mcProject Field Functions 
    bool hasMcProject() const { return this->mcProject_ != nullptr;};
    void deleteMcProject() { this->mcProject_ = nullptr;};
    inline string getMcProject() const { DARABONBA_PTR_GET_DEFAULT(mcProject_, "") };
    inline CreateReportDefinitionShrinkRequest& setMcProject(string mcProject) { DARABONBA_PTR_SET_VALUE(mcProject_, mcProject) };


    // mcTableName Field Functions 
    bool hasMcTableName() const { return this->mcTableName_ != nullptr;};
    void deleteMcTableName() { this->mcTableName_ = nullptr;};
    inline string getMcTableName() const { DARABONBA_PTR_GET_DEFAULT(mcTableName_, "") };
    inline CreateReportDefinitionShrinkRequest& setMcTableName(string mcTableName) { DARABONBA_PTR_SET_VALUE(mcTableName_, mcTableName) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateReportDefinitionShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // notSendOnNoData Field Functions 
    bool hasNotSendOnNoData() const { return this->notSendOnNoData_ != nullptr;};
    void deleteNotSendOnNoData() { this->notSendOnNoData_ = nullptr;};
    inline string getNotSendOnNoData() const { DARABONBA_PTR_GET_DEFAULT(notSendOnNoData_, "") };
    inline CreateReportDefinitionShrinkRequest& setNotSendOnNoData(string notSendOnNoData) { DARABONBA_PTR_SET_VALUE(notSendOnNoData_, notSendOnNoData) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline CreateReportDefinitionShrinkRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossBucketOwnerAccountId Field Functions 
    bool hasOssBucketOwnerAccountId() const { return this->ossBucketOwnerAccountId_ != nullptr;};
    void deleteOssBucketOwnerAccountId() { this->ossBucketOwnerAccountId_ = nullptr;};
    inline int64_t getOssBucketOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ossBucketOwnerAccountId_, 0L) };
    inline CreateReportDefinitionShrinkRequest& setOssBucketOwnerAccountId(int64_t ossBucketOwnerAccountId) { DARABONBA_PTR_SET_VALUE(ossBucketOwnerAccountId_, ossBucketOwnerAccountId) };


    // ossBucketPath Field Functions 
    bool hasOssBucketPath() const { return this->ossBucketPath_ != nullptr;};
    void deleteOssBucketPath() { this->ossBucketPath_ = nullptr;};
    inline string getOssBucketPath() const { DARABONBA_PTR_GET_DEFAULT(ossBucketPath_, "") };
    inline CreateReportDefinitionShrinkRequest& setOssBucketPath(string ossBucketPath) { DARABONBA_PTR_SET_VALUE(ossBucketPath_, ossBucketPath) };


    // reportSourceType Field Functions 
    bool hasReportSourceType() const { return this->reportSourceType_ != nullptr;};
    void deleteReportSourceType() { this->reportSourceType_ = nullptr;};
    inline string getReportSourceType() const { DARABONBA_PTR_GET_DEFAULT(reportSourceType_, "") };
    inline CreateReportDefinitionShrinkRequest& setReportSourceType(string reportSourceType) { DARABONBA_PTR_SET_VALUE(reportSourceType_, reportSourceType) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline CreateReportDefinitionShrinkRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // selectedFieldsShrink Field Functions 
    bool hasSelectedFieldsShrink() const { return this->selectedFieldsShrink_ != nullptr;};
    void deleteSelectedFieldsShrink() { this->selectedFieldsShrink_ = nullptr;};
    inline string getSelectedFieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(selectedFieldsShrink_, "") };
    inline CreateReportDefinitionShrinkRequest& setSelectedFieldsShrink(string selectedFieldsShrink) { DARABONBA_PTR_SET_VALUE(selectedFieldsShrink_, selectedFieldsShrink) };


    // sendWithAttach Field Functions 
    bool hasSendWithAttach() const { return this->sendWithAttach_ != nullptr;};
    void deleteSendWithAttach() { this->sendWithAttach_ = nullptr;};
    inline string getSendWithAttach() const { DARABONBA_PTR_GET_DEFAULT(sendWithAttach_, "") };
    inline CreateReportDefinitionShrinkRequest& setSendWithAttach(string sendWithAttach) { DARABONBA_PTR_SET_VALUE(sendWithAttach_, sendWithAttach) };


    // splitFileOnUserId Field Functions 
    bool hasSplitFileOnUserId() const { return this->splitFileOnUserId_ != nullptr;};
    void deleteSplitFileOnUserId() { this->splitFileOnUserId_ = nullptr;};
    inline string getSplitFileOnUserId() const { DARABONBA_PTR_GET_DEFAULT(splitFileOnUserId_, "") };
    inline CreateReportDefinitionShrinkRequest& setSplitFileOnUserId(string splitFileOnUserId) { DARABONBA_PTR_SET_VALUE(splitFileOnUserId_, splitFileOnUserId) };


  protected:
    // The start billing cycle for push. After successful subscription, the system automatically pushes data from the start billing cycle to the current time. This parameter is invalid for monthly bill PDF subscriptions and does not re-push historical data. Data within the last year can be pushed.
    shared_ptr<string> beginBillingCycle_ {};
    // Email subscription configuration. Specifies whether to include enterprise multi-account members in the bill.
    shared_ptr<string> includeMembers_ {};
    // The MaxCompute project name.
    shared_ptr<string> mcProject_ {};
    // The MaxCompute subscription table name.
    shared_ptr<string> mcTableName_ {};
    // The primary sales site ID. If left empty, the system uses the site ID of the current user by default.
    shared_ptr<string> nbid_ {};
    // Email subscription configuration. Specifies whether to skip sending emails when no bills are available.
    shared_ptr<string> notSendOnNoData_ {};
    // The name of the OSS bucket for file storage.
    shared_ptr<string> ossBucketName_ {};
    // The UID of the OSS owner that stores the files. If this is a Bid/Reseller subscription and you need to push to a sub-account\\"s OSS, specify this parameter. The account must be a sub-account of the calling account, and the AliyunConsumeDump2OSSRole permission must be granted to this account. Regular users do not need to specify this parameter. The default value is the calling account.
    shared_ptr<int64_t> ossBucketOwnerAccountId_ {};
    // The OSS bucket storage path.
    shared_ptr<string> ossBucketPath_ {};
    // The subscription source. Valid values: OSS, MC, or MSC_EMAIL.
    shared_ptr<string> reportSourceType_ {};
    // The subscription type. Valid values:
    // - consumeDetailBillV2: consumption details (supported only for OSS/MC subscriptions).
    // - splitDetailBillV2: split details (supported only for OSS/MC subscriptions).
    // - costDetailBillV2: cost details (supported only for OSS/MC subscriptions).
    // - monthBillOverview: monthly bill summary (supported only for OSS/MSC_EMAIL subscriptions).
    // - focus: FOCUS bill (supported only for OSS/MC subscriptions).
    // 
    // This parameter is required.
    shared_ptr<string> reportType_ {};
    // The user-specified subscription fields.
    shared_ptr<string> selectedFieldsShrink_ {};
    // Email subscription configuration. Specifies whether to include bill attachments in emails.
    shared_ptr<string> sendWithAttach_ {};
    // Email subscription configuration. Specifies whether to split attachments by user ID.
    shared_ptr<string> splitFileOnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
