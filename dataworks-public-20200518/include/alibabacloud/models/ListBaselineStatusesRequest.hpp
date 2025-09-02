// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINESTATUSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINESTATUSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselineStatusesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineStatusesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineTypes, baselineTypes_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(FinishStatus, finishStatus_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineStatusesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineTypes, baselineTypes_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(FinishStatus, finishStatus_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    ListBaselineStatusesRequest() = default ;
    ListBaselineStatusesRequest(const ListBaselineStatusesRequest &) = default ;
    ListBaselineStatusesRequest(ListBaselineStatusesRequest &&) = default ;
    ListBaselineStatusesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineStatusesRequest() = default ;
    ListBaselineStatusesRequest& operator=(const ListBaselineStatusesRequest &) = default ;
    ListBaselineStatusesRequest& operator=(ListBaselineStatusesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineTypes_ != nullptr
        && this->bizdate_ != nullptr && this->finishStatus_ != nullptr && this->owner_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->priority_ != nullptr && this->searchText_ != nullptr && this->status_ != nullptr && this->topicId_ != nullptr; };
    // baselineTypes Field Functions 
    bool hasBaselineTypes() const { return this->baselineTypes_ != nullptr;};
    void deleteBaselineTypes() { this->baselineTypes_ = nullptr;};
    inline string baselineTypes() const { DARABONBA_PTR_GET_DEFAULT(baselineTypes_, "") };
    inline ListBaselineStatusesRequest& setBaselineTypes(string baselineTypes) { DARABONBA_PTR_SET_VALUE(baselineTypes_, baselineTypes) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline string bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, "") };
    inline ListBaselineStatusesRequest& setBizdate(string bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // finishStatus Field Functions 
    bool hasFinishStatus() const { return this->finishStatus_ != nullptr;};
    void deleteFinishStatus() { this->finishStatus_ = nullptr;};
    inline string finishStatus() const { DARABONBA_PTR_GET_DEFAULT(finishStatus_, "") };
    inline ListBaselineStatusesRequest& setFinishStatus(string finishStatus) { DARABONBA_PTR_SET_VALUE(finishStatus_, finishStatus) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListBaselineStatusesRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBaselineStatusesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBaselineStatusesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ListBaselineStatusesRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListBaselineStatusesRequest& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBaselineStatusesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline ListBaselineStatusesRequest& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // The type of the baseline. Valid values: DAILY and HOURLY. The value DAILY indicates that the baseline is scheduled by day. The value HOURLY indicates that the baseline is scheduled by hour. Multiple types are separated by commas (,).
    std::shared_ptr<string> baselineTypes_ = nullptr;
    // The data timestamp of the baseline instance. Specify the time in the ISO 8601 standard in the yyyy-MM-dd\\"T\\"HH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizdate_ = nullptr;
    // The status of the baseline instance. Valid values: UNFINISH and FINISH. The value UNFINISH indicates that the baseline instance is still running. The value FINISH indicates that the baseline instance finishes running. Multiple states are separated by commas (,).
    std::shared_ptr<string> finishStatus_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The number of the page to return. Valid values: 1 to 30. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 10. Maximum value: 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The priority of the baseline. Valid values: 1, 3, 5, 7, and 8. Multiple priorities are separated by commas (,).
    std::shared_ptr<string> priority_ = nullptr;
    // The keyword of the baseline name used to search for the baseline.
    std::shared_ptr<string> searchText_ = nullptr;
    // The status of the baseline. Valid values: ERROR, SAFE, DANGEROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes finish running before the alerting time. The value DANGEROUS indicates that nodes are still running after the alerting time but before the committed completion time. The value OVER indicates that nodes are still running after the committed completion time. Multiple states are separated by commas (,).
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the event.
    std::shared_ptr<int64_t> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
