// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEnrolledAccountResponseBodyBaselineItems.hpp>
#include <alibabacloud/models/GetEnrolledAccountResponseBodyErrorInfo.hpp>
#include <alibabacloud/models/GetEnrolledAccountResponseBodyInputs.hpp>
#include <alibabacloud/models/GetEnrolledAccountResponseBodyProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetEnrolledAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnrolledAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Initialized, initialized_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(MasterAccountUid, masterAccountUid_);
      DARABONBA_PTR_TO_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnrolledAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Initialized, initialized_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(MasterAccountUid, masterAccountUid_);
      DARABONBA_PTR_FROM_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetEnrolledAccountResponseBody() = default ;
    GetEnrolledAccountResponseBody(const GetEnrolledAccountResponseBody &) = default ;
    GetEnrolledAccountResponseBody(GetEnrolledAccountResponseBody &&) = default ;
    GetEnrolledAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnrolledAccountResponseBody() = default ;
    GetEnrolledAccountResponseBody& operator=(const GetEnrolledAccountResponseBody &) = default ;
    GetEnrolledAccountResponseBody& operator=(GetEnrolledAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountUid_ == nullptr
        && return this->baselineId_ == nullptr && return this->baselineItems_ == nullptr && return this->createTime_ == nullptr && return this->displayName_ == nullptr && return this->errorInfo_ == nullptr
        && return this->folderId_ == nullptr && return this->initialized_ == nullptr && return this->inputs_ == nullptr && return this->masterAccountUid_ == nullptr && return this->payerAccountUid_ == nullptr
        && return this->progress_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t accountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline GetEnrolledAccountResponseBody& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline GetEnrolledAccountResponseBody& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<GetEnrolledAccountResponseBodyBaselineItems> & baselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<GetEnrolledAccountResponseBodyBaselineItems>) };
    inline vector<GetEnrolledAccountResponseBodyBaselineItems> baselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<GetEnrolledAccountResponseBodyBaselineItems>) };
    inline GetEnrolledAccountResponseBody& setBaselineItems(const vector<GetEnrolledAccountResponseBodyBaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline GetEnrolledAccountResponseBody& setBaselineItems(vector<GetEnrolledAccountResponseBodyBaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetEnrolledAccountResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetEnrolledAccountResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline const GetEnrolledAccountResponseBodyErrorInfo & errorInfo() const { DARABONBA_PTR_GET_CONST(errorInfo_, GetEnrolledAccountResponseBodyErrorInfo) };
    inline GetEnrolledAccountResponseBodyErrorInfo errorInfo() { DARABONBA_PTR_GET(errorInfo_, GetEnrolledAccountResponseBodyErrorInfo) };
    inline GetEnrolledAccountResponseBody& setErrorInfo(const GetEnrolledAccountResponseBodyErrorInfo & errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };
    inline GetEnrolledAccountResponseBody& setErrorInfo(GetEnrolledAccountResponseBodyErrorInfo && errorInfo) { DARABONBA_PTR_SET_RVALUE(errorInfo_, errorInfo) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetEnrolledAccountResponseBody& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // initialized Field Functions 
    bool hasInitialized() const { return this->initialized_ != nullptr;};
    void deleteInitialized() { this->initialized_ = nullptr;};
    inline bool initialized() const { DARABONBA_PTR_GET_DEFAULT(initialized_, false) };
    inline GetEnrolledAccountResponseBody& setInitialized(bool initialized) { DARABONBA_PTR_SET_VALUE(initialized_, initialized) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const GetEnrolledAccountResponseBodyInputs & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, GetEnrolledAccountResponseBodyInputs) };
    inline GetEnrolledAccountResponseBodyInputs inputs() { DARABONBA_PTR_GET(inputs_, GetEnrolledAccountResponseBodyInputs) };
    inline GetEnrolledAccountResponseBody& setInputs(const GetEnrolledAccountResponseBodyInputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline GetEnrolledAccountResponseBody& setInputs(GetEnrolledAccountResponseBodyInputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // masterAccountUid Field Functions 
    bool hasMasterAccountUid() const { return this->masterAccountUid_ != nullptr;};
    void deleteMasterAccountUid() { this->masterAccountUid_ = nullptr;};
    inline int64_t masterAccountUid() const { DARABONBA_PTR_GET_DEFAULT(masterAccountUid_, 0L) };
    inline GetEnrolledAccountResponseBody& setMasterAccountUid(int64_t masterAccountUid) { DARABONBA_PTR_SET_VALUE(masterAccountUid_, masterAccountUid) };


    // payerAccountUid Field Functions 
    bool hasPayerAccountUid() const { return this->payerAccountUid_ != nullptr;};
    void deletePayerAccountUid() { this->payerAccountUid_ = nullptr;};
    inline int64_t payerAccountUid() const { DARABONBA_PTR_GET_DEFAULT(payerAccountUid_, 0L) };
    inline GetEnrolledAccountResponseBody& setPayerAccountUid(int64_t payerAccountUid) { DARABONBA_PTR_SET_VALUE(payerAccountUid_, payerAccountUid) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline const vector<GetEnrolledAccountResponseBodyProgress> & progress() const { DARABONBA_PTR_GET_CONST(progress_, vector<GetEnrolledAccountResponseBodyProgress>) };
    inline vector<GetEnrolledAccountResponseBodyProgress> progress() { DARABONBA_PTR_GET(progress_, vector<GetEnrolledAccountResponseBodyProgress>) };
    inline GetEnrolledAccountResponseBody& setProgress(const vector<GetEnrolledAccountResponseBodyProgress> & progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };
    inline GetEnrolledAccountResponseBody& setProgress(vector<GetEnrolledAccountResponseBodyProgress> && progress) { DARABONBA_PTR_SET_RVALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEnrolledAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEnrolledAccountResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetEnrolledAccountResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The account ID.
    std::shared_ptr<int64_t> accountUid_ = nullptr;
    // The ID of the baseline that is implemented.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The array that contains baseline items.
    std::shared_ptr<vector<GetEnrolledAccountResponseBodyBaselineItems>> baselineItems_ = nullptr;
    // The time when the account was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The display name of the account.
    std::shared_ptr<string> displayName_ = nullptr;
    // The error message.
    // 
    // >  This parameter is returned if the value of `Status` is `Failed` or `ScheduleFailed`.
    std::shared_ptr<GetEnrolledAccountResponseBodyErrorInfo> errorInfo_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // Indicates whether the initialization is complete. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> initialized_ = nullptr;
    // Input parameters used to create an account.
    std::shared_ptr<GetEnrolledAccountResponseBodyInputs> inputs_ = nullptr;
    // The ID of the management account of the resource directory to which the account belongs.
    std::shared_ptr<int64_t> masterAccountUid_ = nullptr;
    // The ID of the settlement account.
    std::shared_ptr<int64_t> payerAccountUid_ = nullptr;
    // The progress of the applying the baseline to the account.
    std::shared_ptr<vector<GetEnrolledAccountResponseBodyProgress>> progress_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the account. Valid values:
    // 
    // *   Pending: The account is pending to be created.
    // *   Running: The account is being created.
    // *   Finished: The account is created.
    // *   Failed: The account fails to be created.
    // *   Scheduling: The account is being scheduled.
    // *   ScheduleFailed: The account fails to be scheduled.
    std::shared_ptr<string> status_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
