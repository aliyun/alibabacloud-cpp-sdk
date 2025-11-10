// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSRESPONSEBODYRDACCOUNTDELETIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONSTATUSRESPONSEBODYRDACCOUNTDELETIONSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletionTime, deletionTime_);
      DARABONBA_PTR_TO_JSON(DeletionType, deletionType_);
      DARABONBA_PTR_TO_JSON(FailReasonList, failReasonList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletionTime, deletionTime_);
      DARABONBA_PTR_FROM_JSON(DeletionType, deletionType_);
      DARABONBA_PTR_FROM_JSON(FailReasonList, failReasonList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus() = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus(const GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus &) = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus(GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus &&) = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus() = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& operator=(const GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus &) = default ;
    GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& operator=(GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->createTime_ == nullptr && return this->deletionTime_ == nullptr && return this->deletionType_ == nullptr && return this->failReasonList_ == nullptr && return this->status_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionTime Field Functions 
    bool hasDeletionTime() const { return this->deletionTime_ != nullptr;};
    void deleteDeletionTime() { this->deletionTime_ = nullptr;};
    inline string deletionTime() const { DARABONBA_PTR_GET_DEFAULT(deletionTime_, "") };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& setDeletionTime(string deletionTime) { DARABONBA_PTR_SET_VALUE(deletionTime_, deletionTime) };


    // deletionType Field Functions 
    bool hasDeletionType() const { return this->deletionType_ != nullptr;};
    void deleteDeletionType() { this->deletionType_ = nullptr;};
    inline string deletionType() const { DARABONBA_PTR_GET_DEFAULT(deletionType_, "") };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& setDeletionType(string deletionType) { DARABONBA_PTR_SET_VALUE(deletionType_, deletionType) };


    // failReasonList Field Functions 
    bool hasFailReasonList() const { return this->failReasonList_ != nullptr;};
    void deleteFailReasonList() { this->failReasonList_ = nullptr;};
    inline const vector<Models::GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList> & failReasonList() const { DARABONBA_PTR_GET_CONST(failReasonList_, vector<Models::GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList>) };
    inline vector<Models::GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList> failReasonList() { DARABONBA_PTR_GET(failReasonList_, vector<Models::GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList>) };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& setFailReasonList(const vector<Models::GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList> & failReasonList) { DARABONBA_PTR_SET_VALUE(failReasonList_, failReasonList) };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& setFailReasonList(vector<Models::GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList> && failReasonList) { DARABONBA_PTR_SET_RVALUE(failReasonList_, failReasonList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The Alibaba Cloud account ID of the member.
    std::shared_ptr<string> accountId_ = nullptr;
    // The start time of the deletion.
    std::shared_ptr<string> createTime_ = nullptr;
    // The end time of the deletion.
    // 
    // This parameter is required.
    std::shared_ptr<string> deletionTime_ = nullptr;
    // The type of the deletion. Valid values:
    // 
    // *   0: direct deletion. If the member does not have pay-as-you-go resources that are purchased within the previous 30 days, the system directly deletes the member.
    // *   1: deletion with a silence period. If the member has pay-as-you-go resources that are purchased within the previous 30 days, the member enters a silence period of 45 days. The system starts to delete the member until the silence period ends. For more information about the silence period, see [What is the silence period for member deletion?](https://help.aliyun.com/document_detail/446079.html)
    std::shared_ptr<string> deletionType_ = nullptr;
    // The reasons why the member fails to be deleted.
    std::shared_ptr<vector<Models::GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList>> failReasonList_ = nullptr;
    // The status. Valid values:
    // 
    // *   Success: The member is deleted.
    // *   Checking: A deletion check is being performed for the member.
    // *   Deleting: The member is being deleted.
    // *   CheckFailed: The deletion check for the member fails.
    // *   DeleteFailed: The member fails to be deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
