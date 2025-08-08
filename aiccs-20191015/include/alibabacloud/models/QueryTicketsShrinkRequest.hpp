// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTICKETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTICKETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTicketsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTicketsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaseId, caseId_);
      DARABONBA_PTR_TO_JSON(CaseStatus, caseStatus_);
      DARABONBA_PTR_TO_JSON(CaseType, caseType_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DealId, dealId_);
      DARABONBA_PTR_TO_JSON(Extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrType, srType_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TouchId, touchId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTicketsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
      DARABONBA_PTR_FROM_JSON(CaseStatus, caseStatus_);
      DARABONBA_PTR_FROM_JSON(CaseType, caseType_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DealId, dealId_);
      DARABONBA_PTR_FROM_JSON(Extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrType, srType_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TouchId, touchId_);
    };
    QueryTicketsShrinkRequest() = default ;
    QueryTicketsShrinkRequest(const QueryTicketsShrinkRequest &) = default ;
    QueryTicketsShrinkRequest(QueryTicketsShrinkRequest &&) = default ;
    QueryTicketsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTicketsShrinkRequest() = default ;
    QueryTicketsShrinkRequest& operator=(const QueryTicketsShrinkRequest &) = default ;
    QueryTicketsShrinkRequest& operator=(QueryTicketsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caseId_ != nullptr
        && this->caseStatus_ != nullptr && this->caseType_ != nullptr && this->channelId_ != nullptr && this->channelType_ != nullptr && this->currentPage_ != nullptr
        && this->dealId_ != nullptr && this->extraShrink_ != nullptr && this->instanceId_ != nullptr && this->pageSize_ != nullptr && this->srType_ != nullptr
        && this->taskStatus_ != nullptr && this->touchId_ != nullptr; };
    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline int64_t caseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, 0L) };
    inline QueryTicketsShrinkRequest& setCaseId(int64_t caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // caseStatus Field Functions 
    bool hasCaseStatus() const { return this->caseStatus_ != nullptr;};
    void deleteCaseStatus() { this->caseStatus_ = nullptr;};
    inline int32_t caseStatus() const { DARABONBA_PTR_GET_DEFAULT(caseStatus_, 0) };
    inline QueryTicketsShrinkRequest& setCaseStatus(int32_t caseStatus) { DARABONBA_PTR_SET_VALUE(caseStatus_, caseStatus) };


    // caseType Field Functions 
    bool hasCaseType() const { return this->caseType_ != nullptr;};
    void deleteCaseType() { this->caseType_ = nullptr;};
    inline int32_t caseType() const { DARABONBA_PTR_GET_DEFAULT(caseType_, 0) };
    inline QueryTicketsShrinkRequest& setCaseType(int32_t caseType) { DARABONBA_PTR_SET_VALUE(caseType_, caseType) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline QueryTicketsShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline int32_t channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0) };
    inline QueryTicketsShrinkRequest& setChannelType(int32_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryTicketsShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealId Field Functions 
    bool hasDealId() const { return this->dealId_ != nullptr;};
    void deleteDealId() { this->dealId_ = nullptr;};
    inline int64_t dealId() const { DARABONBA_PTR_GET_DEFAULT(dealId_, 0L) };
    inline QueryTicketsShrinkRequest& setDealId(int64_t dealId) { DARABONBA_PTR_SET_VALUE(dealId_, dealId) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string extraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline QueryTicketsShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTicketsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTicketsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srType Field Functions 
    bool hasSrType() const { return this->srType_ != nullptr;};
    void deleteSrType() { this->srType_ = nullptr;};
    inline int64_t srType() const { DARABONBA_PTR_GET_DEFAULT(srType_, 0L) };
    inline QueryTicketsShrinkRequest& setSrType(int64_t srType) { DARABONBA_PTR_SET_VALUE(srType_, srType) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline QueryTicketsShrinkRequest& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // touchId Field Functions 
    bool hasTouchId() const { return this->touchId_ != nullptr;};
    void deleteTouchId() { this->touchId_ = nullptr;};
    inline int64_t touchId() const { DARABONBA_PTR_GET_DEFAULT(touchId_, 0L) };
    inline QueryTicketsShrinkRequest& setTouchId(int64_t touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };


  protected:
    std::shared_ptr<int64_t> caseId_ = nullptr;
    std::shared_ptr<int32_t> caseStatus_ = nullptr;
    std::shared_ptr<int32_t> caseType_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int32_t> channelType_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int64_t> dealId_ = nullptr;
    std::shared_ptr<string> extraShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> srType_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<int64_t> touchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
