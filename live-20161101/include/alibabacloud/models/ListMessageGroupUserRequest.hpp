// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageGroupUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListMessageGroupUserRequest() = default ;
    ListMessageGroupUserRequest(const ListMessageGroupUserRequest &) = default ;
    ListMessageGroupUserRequest(ListMessageGroupUserRequest &&) = default ;
    ListMessageGroupUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupUserRequest() = default ;
    ListMessageGroupUserRequest& operator=(const ListMessageGroupUserRequest &) = default ;
    ListMessageGroupUserRequest& operator=(ListMessageGroupUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->groupId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->sortType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListMessageGroupUserRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListMessageGroupUserRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMessageGroupUserRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMessageGroupUserRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline int32_t sortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, 0) };
    inline ListMessageGroupUserRequest& setSortType(int32_t sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the message group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The number of the page to return. Default value: 1.
    // 
    // Valid values: 1 to 100000.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of members to return on each page. Default value: 20.
    // 
    // Valid values: 1 to 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sort order. Valid values:
    // 
    // *   0: ascending order by time
    // *   1: descending order by time
    std::shared_ptr<int32_t> sortType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
