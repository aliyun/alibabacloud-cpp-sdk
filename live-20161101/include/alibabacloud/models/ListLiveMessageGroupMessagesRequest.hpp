// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MsgType, msgType_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MsgType, msgType_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListLiveMessageGroupMessagesRequest() = default ;
    ListLiveMessageGroupMessagesRequest(const ListLiveMessageGroupMessagesRequest &) = default ;
    ListLiveMessageGroupMessagesRequest(ListLiveMessageGroupMessagesRequest &&) = default ;
    ListLiveMessageGroupMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupMessagesRequest() = default ;
    ListLiveMessageGroupMessagesRequest& operator=(const ListLiveMessageGroupMessagesRequest &) = default ;
    ListLiveMessageGroupMessagesRequest& operator=(ListLiveMessageGroupMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->beginTime_ == nullptr && return this->dataCenter_ == nullptr && return this->endTime_ == nullptr && return this->groupId_ == nullptr && return this->msgType_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr && return this->sortType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListLiveMessageGroupMessagesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline ListLiveMessageGroupMessagesRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ListLiveMessageGroupMessagesRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListLiveMessageGroupMessagesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListLiveMessageGroupMessagesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // msgType Field Functions 
    bool hasMsgType() const { return this->msgType_ != nullptr;};
    void deleteMsgType() { this->msgType_ = nullptr;};
    inline int64_t msgType() const { DARABONBA_PTR_GET_DEFAULT(msgType_, 0L) };
    inline ListLiveMessageGroupMessagesRequest& setMsgType(int64_t msgType) { DARABONBA_PTR_SET_VALUE(msgType_, msgType) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListLiveMessageGroupMessagesRequest& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveMessageGroupMessagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline int32_t sortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, 0) };
    inline ListLiveMessageGroupMessagesRequest& setSortType(int32_t sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // The ID of the interactive messaging application to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds. If you leave this parameter empty, the earliest available time is used.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds. If you leave this parameter empty, the latest available time is used.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the group to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The type of messages that you want to query. If you leave this parameter empty, all types of messages are queried.
    std::shared_ptr<int64_t> msgType_ = nullptr;
    // The starting page number for the query. If you leave this parameter empty, the query starts from the first page.
    std::shared_ptr<int64_t> nextPageToken_ = nullptr;
    // The number of entries per page. Valid values: **10 to 50**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sort order based on the time when the messages were sent. Valid values:
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
