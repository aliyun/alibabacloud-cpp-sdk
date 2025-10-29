// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupStatus, groupStatus_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupStatus, groupStatus_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListLiveMessageGroupsRequest() = default ;
    ListLiveMessageGroupsRequest(const ListLiveMessageGroupsRequest &) = default ;
    ListLiveMessageGroupsRequest(ListLiveMessageGroupsRequest &&) = default ;
    ListLiveMessageGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupsRequest() = default ;
    ListLiveMessageGroupsRequest& operator=(const ListLiveMessageGroupsRequest &) = default ;
    ListLiveMessageGroupsRequest& operator=(ListLiveMessageGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->dataCenter_ == nullptr && return this->groupStatus_ == nullptr && return this->nextPageToken_ == nullptr && return this->sortType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListLiveMessageGroupsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ListLiveMessageGroupsRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupStatus Field Functions 
    bool hasGroupStatus() const { return this->groupStatus_ != nullptr;};
    void deleteGroupStatus() { this->groupStatus_ = nullptr;};
    inline int32_t groupStatus() const { DARABONBA_PTR_GET_DEFAULT(groupStatus_, 0) };
    inline ListLiveMessageGroupsRequest& setGroupStatus(int32_t groupStatus) { DARABONBA_PTR_SET_VALUE(groupStatus_, groupStatus) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListLiveMessageGroupsRequest& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline int32_t sortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, 0) };
    inline ListLiveMessageGroupsRequest& setSortType(int32_t sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // The application ID.
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
    // The starting page number for the query. If you leave this parameter empty, the query starts from the first page.
    std::shared_ptr<int64_t> nextPageToken_ = nullptr;
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
