// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPBYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPBYPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupByPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupByPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupStatus, groupStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupByPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupStatus, groupStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListLiveMessageGroupByPageRequest() = default ;
    ListLiveMessageGroupByPageRequest(const ListLiveMessageGroupByPageRequest &) = default ;
    ListLiveMessageGroupByPageRequest(ListLiveMessageGroupByPageRequest &&) = default ;
    ListLiveMessageGroupByPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupByPageRequest() = default ;
    ListLiveMessageGroupByPageRequest& operator=(const ListLiveMessageGroupByPageRequest &) = default ;
    ListLiveMessageGroupByPageRequest& operator=(ListLiveMessageGroupByPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->dataCenter_ == nullptr && return this->groupStatus_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->sortType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListLiveMessageGroupByPageRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ListLiveMessageGroupByPageRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupStatus Field Functions 
    bool hasGroupStatus() const { return this->groupStatus_ != nullptr;};
    void deleteGroupStatus() { this->groupStatus_ = nullptr;};
    inline int32_t groupStatus() const { DARABONBA_PTR_GET_DEFAULT(groupStatus_, 0) };
    inline ListLiveMessageGroupByPageRequest& setGroupStatus(int32_t groupStatus) { DARABONBA_PTR_SET_VALUE(groupStatus_, groupStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLiveMessageGroupByPageRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveMessageGroupByPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline int32_t sortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, 0) };
    inline ListLiveMessageGroupByPageRequest& setSortType(int32_t sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The status of the groups to query. Default value: 0. Valid values:
    // 
    // *   0: all groups
    // *   1: existing groups
    // *   2: deleted groups
    std::shared_ptr<int32_t> groupStatus_ = nullptr;
    // The page number. Valid values: [1,10000].
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:[1,50].
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sort order based on the time when the groups were created. Valid values:
    // 
    // *   1: ascending order
    // *   2: descending order
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> sortType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
