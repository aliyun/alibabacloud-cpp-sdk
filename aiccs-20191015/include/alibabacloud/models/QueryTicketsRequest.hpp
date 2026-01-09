// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTICKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTICKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTicketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTicketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaseId, caseId_);
      DARABONBA_PTR_TO_JSON(CaseStatus, caseStatus_);
      DARABONBA_PTR_TO_JSON(CaseType, caseType_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DealId, dealId_);
      DARABONBA_ANY_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrType, srType_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TouchId, touchId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTicketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
      DARABONBA_PTR_FROM_JSON(CaseStatus, caseStatus_);
      DARABONBA_PTR_FROM_JSON(CaseType, caseType_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DealId, dealId_);
      DARABONBA_ANY_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrType, srType_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TouchId, touchId_);
    };
    QueryTicketsRequest() = default ;
    QueryTicketsRequest(const QueryTicketsRequest &) = default ;
    QueryTicketsRequest(QueryTicketsRequest &&) = default ;
    QueryTicketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTicketsRequest() = default ;
    QueryTicketsRequest& operator=(const QueryTicketsRequest &) = default ;
    QueryTicketsRequest& operator=(QueryTicketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caseId_ == nullptr
        && this->caseStatus_ == nullptr && this->caseType_ == nullptr && this->channelId_ == nullptr && this->channelType_ == nullptr && this->currentPage_ == nullptr
        && this->dealId_ == nullptr && this->extra_ == nullptr && this->instanceId_ == nullptr && this->pageSize_ == nullptr && this->srType_ == nullptr
        && this->taskStatus_ == nullptr && this->touchId_ == nullptr; };
    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline int64_t getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, 0L) };
    inline QueryTicketsRequest& setCaseId(int64_t caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // caseStatus Field Functions 
    bool hasCaseStatus() const { return this->caseStatus_ != nullptr;};
    void deleteCaseStatus() { this->caseStatus_ = nullptr;};
    inline int32_t getCaseStatus() const { DARABONBA_PTR_GET_DEFAULT(caseStatus_, 0) };
    inline QueryTicketsRequest& setCaseStatus(int32_t caseStatus) { DARABONBA_PTR_SET_VALUE(caseStatus_, caseStatus) };


    // caseType Field Functions 
    bool hasCaseType() const { return this->caseType_ != nullptr;};
    void deleteCaseType() { this->caseType_ = nullptr;};
    inline int32_t getCaseType() const { DARABONBA_PTR_GET_DEFAULT(caseType_, 0) };
    inline QueryTicketsRequest& setCaseType(int32_t caseType) { DARABONBA_PTR_SET_VALUE(caseType_, caseType) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryTicketsRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline int32_t getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0) };
    inline QueryTicketsRequest& setChannelType(int32_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryTicketsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealId Field Functions 
    bool hasDealId() const { return this->dealId_ != nullptr;};
    void deleteDealId() { this->dealId_ = nullptr;};
    inline int64_t getDealId() const { DARABONBA_PTR_GET_DEFAULT(dealId_, 0L) };
    inline QueryTicketsRequest& setDealId(int64_t dealId) { DARABONBA_PTR_SET_VALUE(dealId_, dealId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
    inline QueryTicketsRequest& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline QueryTicketsRequest& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTicketsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTicketsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srType Field Functions 
    bool hasSrType() const { return this->srType_ != nullptr;};
    void deleteSrType() { this->srType_ = nullptr;};
    inline int64_t getSrType() const { DARABONBA_PTR_GET_DEFAULT(srType_, 0L) };
    inline QueryTicketsRequest& setSrType(int64_t srType) { DARABONBA_PTR_SET_VALUE(srType_, srType) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline QueryTicketsRequest& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // touchId Field Functions 
    bool hasTouchId() const { return this->touchId_ != nullptr;};
    void deleteTouchId() { this->touchId_ = nullptr;};
    inline int64_t getTouchId() const { DARABONBA_PTR_GET_DEFAULT(touchId_, 0L) };
    inline QueryTicketsRequest& setTouchId(int64_t touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };


  protected:
    shared_ptr<int64_t> caseId_ {};
    shared_ptr<int32_t> caseStatus_ {};
    shared_ptr<int32_t> caseType_ {};
    shared_ptr<string> channelId_ {};
    shared_ptr<int32_t> channelType_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int64_t> dealId_ {};
    Darabonba::Json extra_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> srType_ {};
    shared_ptr<int32_t> taskStatus_ {};
    shared_ptr<int64_t> touchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
