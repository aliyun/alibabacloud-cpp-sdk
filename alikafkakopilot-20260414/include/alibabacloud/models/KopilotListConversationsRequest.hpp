// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTLISTCONVERSATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotListConversationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotListConversationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCursor, destinationCursor_);
      DARABONBA_PTR_TO_JSON(DestinationPageSize, destinationPageSize_);
      DARABONBA_PTR_TO_JSON(IncludeAutomationOverview, includeAutomationOverview_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TaskCursor, taskCursor_);
      DARABONBA_PTR_TO_JSON(TaskPageSize, taskPageSize_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotListConversationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCursor, destinationCursor_);
      DARABONBA_PTR_FROM_JSON(DestinationPageSize, destinationPageSize_);
      DARABONBA_PTR_FROM_JSON(IncludeAutomationOverview, includeAutomationOverview_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TaskCursor, taskCursor_);
      DARABONBA_PTR_FROM_JSON(TaskPageSize, taskPageSize_);
    };
    KopilotListConversationsRequest() = default ;
    KopilotListConversationsRequest(const KopilotListConversationsRequest &) = default ;
    KopilotListConversationsRequest(KopilotListConversationsRequest &&) = default ;
    KopilotListConversationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotListConversationsRequest() = default ;
    KopilotListConversationsRequest& operator=(const KopilotListConversationsRequest &) = default ;
    KopilotListConversationsRequest& operator=(KopilotListConversationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCursor_ == nullptr
        && this->destinationPageSize_ == nullptr && this->includeAutomationOverview_ == nullptr && this->page_ == nullptr && this->regionId_ == nullptr && this->size_ == nullptr
        && this->taskCursor_ == nullptr && this->taskPageSize_ == nullptr; };
    // destinationCursor Field Functions 
    bool hasDestinationCursor() const { return this->destinationCursor_ != nullptr;};
    void deleteDestinationCursor() { this->destinationCursor_ = nullptr;};
    inline string getDestinationCursor() const { DARABONBA_PTR_GET_DEFAULT(destinationCursor_, "") };
    inline KopilotListConversationsRequest& setDestinationCursor(string destinationCursor) { DARABONBA_PTR_SET_VALUE(destinationCursor_, destinationCursor) };


    // destinationPageSize Field Functions 
    bool hasDestinationPageSize() const { return this->destinationPageSize_ != nullptr;};
    void deleteDestinationPageSize() { this->destinationPageSize_ = nullptr;};
    inline int32_t getDestinationPageSize() const { DARABONBA_PTR_GET_DEFAULT(destinationPageSize_, 0) };
    inline KopilotListConversationsRequest& setDestinationPageSize(int32_t destinationPageSize) { DARABONBA_PTR_SET_VALUE(destinationPageSize_, destinationPageSize) };


    // includeAutomationOverview Field Functions 
    bool hasIncludeAutomationOverview() const { return this->includeAutomationOverview_ != nullptr;};
    void deleteIncludeAutomationOverview() { this->includeAutomationOverview_ = nullptr;};
    inline bool getIncludeAutomationOverview() const { DARABONBA_PTR_GET_DEFAULT(includeAutomationOverview_, false) };
    inline KopilotListConversationsRequest& setIncludeAutomationOverview(bool includeAutomationOverview) { DARABONBA_PTR_SET_VALUE(includeAutomationOverview_, includeAutomationOverview) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline KopilotListConversationsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline KopilotListConversationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline KopilotListConversationsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // taskCursor Field Functions 
    bool hasTaskCursor() const { return this->taskCursor_ != nullptr;};
    void deleteTaskCursor() { this->taskCursor_ = nullptr;};
    inline string getTaskCursor() const { DARABONBA_PTR_GET_DEFAULT(taskCursor_, "") };
    inline KopilotListConversationsRequest& setTaskCursor(string taskCursor) { DARABONBA_PTR_SET_VALUE(taskCursor_, taskCursor) };


    // taskPageSize Field Functions 
    bool hasTaskPageSize() const { return this->taskPageSize_ != nullptr;};
    void deleteTaskPageSize() { this->taskPageSize_ = nullptr;};
    inline int32_t getTaskPageSize() const { DARABONBA_PTR_GET_DEFAULT(taskPageSize_, 0) };
    inline KopilotListConversationsRequest& setTaskPageSize(int32_t taskPageSize) { DARABONBA_PTR_SET_VALUE(taskPageSize_, taskPageSize) };


  protected:
    // The pagination cursor for notification channels. Do not specify this parameter for the first query. For subsequent queries, pass in the value of Data.AutomationOverview.Destinations.NextCursor from the previous response.
    shared_ptr<string> destinationCursor_ {};
    // The number of entries per page for the notification channel list. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> destinationPageSize_ {};
    // Specifies whether to return the overview of scheduled tasks and notification channels for the account. A value of true indicates that the overview is returned. If this parameter is not specified, the overview is not returned.
    shared_ptr<bool> includeAutomationOverview_ {};
    // The current page number.
    shared_ptr<int32_t> page_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The page size.
    shared_ptr<int32_t> size_ {};
    // The pagination cursor. Do not specify this parameter for the first query. For subsequent queries, pass in the value of Data.AutomationOverview.Tasks.NextCursor from the previous response.
    shared_ptr<string> taskCursor_ {};
    // The number of entries per page for the scheduled task list. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> taskPageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
