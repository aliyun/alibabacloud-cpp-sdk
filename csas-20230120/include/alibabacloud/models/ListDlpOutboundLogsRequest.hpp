// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDLPOUTBOUNDLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDLPOUTBOUNDLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDlpOutboundLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDlpOutboundLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LogId, logId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_TO_JSON(SrcFileName, srcFileName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubChannelType, subChannelType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDlpOutboundLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LogId, logId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
      DARABONBA_PTR_FROM_JSON(SrcFileName, srcFileName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubChannelType, subChannelType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListDlpOutboundLogsRequest() = default ;
    ListDlpOutboundLogsRequest(const ListDlpOutboundLogsRequest &) = default ;
    ListDlpOutboundLogsRequest(ListDlpOutboundLogsRequest &&) = default ;
    ListDlpOutboundLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDlpOutboundLogsRequest() = default ;
    ListDlpOutboundLogsRequest& operator=(const ListDlpOutboundLogsRequest &) = default ;
    ListDlpOutboundLogsRequest& operator=(ListDlpOutboundLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->logId_ == nullptr && this->pageSize_ == nullptr && this->policyAction_ == nullptr && this->srcFileName_ == nullptr
        && this->startTime_ == nullptr && this->subChannelType_ == nullptr && this->userName_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDlpOutboundLogsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDlpOutboundLogsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // logId Field Functions 
    bool hasLogId() const { return this->logId_ != nullptr;};
    void deleteLogId() { this->logId_ = nullptr;};
    inline string getLogId() const { DARABONBA_PTR_GET_DEFAULT(logId_, "") };
    inline ListDlpOutboundLogsRequest& setLogId(string logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDlpOutboundLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyAction Field Functions 
    bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
    void deletePolicyAction() { this->policyAction_ = nullptr;};
    inline string getPolicyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
    inline ListDlpOutboundLogsRequest& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


    // srcFileName Field Functions 
    bool hasSrcFileName() const { return this->srcFileName_ != nullptr;};
    void deleteSrcFileName() { this->srcFileName_ = nullptr;};
    inline string getSrcFileName() const { DARABONBA_PTR_GET_DEFAULT(srcFileName_, "") };
    inline ListDlpOutboundLogsRequest& setSrcFileName(string srcFileName) { DARABONBA_PTR_SET_VALUE(srcFileName_, srcFileName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDlpOutboundLogsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subChannelType Field Functions 
    bool hasSubChannelType() const { return this->subChannelType_ != nullptr;};
    void deleteSubChannelType() { this->subChannelType_ = nullptr;};
    inline string getSubChannelType() const { DARABONBA_PTR_GET_DEFAULT(subChannelType_, "") };
    inline ListDlpOutboundLogsRequest& setSubChannelType(string subChannelType) { DARABONBA_PTR_SET_VALUE(subChannelType_, subChannelType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListDlpOutboundLogsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The current page number, starting from 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end time of the query. UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The log ID.
    shared_ptr<string> logId_ {};
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The policy action. Single-value exact match.
    shared_ptr<string> policyAction_ {};
    // The original file name. Fuzzy match.
    shared_ptr<string> srcFileName_ {};
    // The start time of the query. UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The secondary channel ID in the format of `PrimaryChannelID.SubChannelID`. Separate multiple values with commas.
    shared_ptr<string> subChannelType_ {};
    // The username. Exact match.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
