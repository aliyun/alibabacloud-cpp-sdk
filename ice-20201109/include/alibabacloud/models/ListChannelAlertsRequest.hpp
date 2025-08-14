// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANNELALERTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANNELALERTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListChannelAlertsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChannelAlertsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(GmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(GmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(SortByModifiedTime, sortByModifiedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListChannelAlertsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(GmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(GmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(SortByModifiedTime, sortByModifiedTime_);
    };
    ListChannelAlertsRequest() = default ;
    ListChannelAlertsRequest(const ListChannelAlertsRequest &) = default ;
    ListChannelAlertsRequest(ListChannelAlertsRequest &&) = default ;
    ListChannelAlertsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChannelAlertsRequest() = default ;
    ListChannelAlertsRequest& operator=(const ListChannelAlertsRequest &) = default ;
    ListChannelAlertsRequest& operator=(ListChannelAlertsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->gmtEnd_ != nullptr && this->gmtStart_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->resourceArn_ != nullptr
        && this->sortByModifiedTime_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListChannelAlertsRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline string gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, "") };
    inline ListChannelAlertsRequest& setGmtEnd(string gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline string gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, "") };
    inline ListChannelAlertsRequest& setGmtStart(string gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChannelAlertsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChannelAlertsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline ListChannelAlertsRequest& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // sortByModifiedTime Field Functions 
    bool hasSortByModifiedTime() const { return this->sortByModifiedTime_ != nullptr;};
    void deleteSortByModifiedTime() { this->sortByModifiedTime_ = nullptr;};
    inline string sortByModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(sortByModifiedTime_, "") };
    inline ListChannelAlertsRequest& setSortByModifiedTime(string sortByModifiedTime) { DARABONBA_PTR_SET_VALUE(sortByModifiedTime_, sortByModifiedTime) };


  protected:
    // The alert type.
    std::shared_ptr<string> category_ = nullptr;
    // The end of the time range to query.
    std::shared_ptr<string> gmtEnd_ = nullptr;
    // The beginning of the time range to query.
    std::shared_ptr<string> gmtStart_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ARN of the channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceArn_ = nullptr;
    // The sorting order by modification time. Valid values: asc and desc.
    std::shared_ptr<string> sortByModifiedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
