// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEPACKAGECHANNELGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEPACKAGECHANNELGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLivePackageChannelGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivePackageChannelGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannelGroups, livePackageChannelGroups_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivePackageChannelGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannelGroups, livePackageChannelGroups_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLivePackageChannelGroupsResponseBody() = default ;
    ListLivePackageChannelGroupsResponseBody(const ListLivePackageChannelGroupsResponseBody &) = default ;
    ListLivePackageChannelGroupsResponseBody(ListLivePackageChannelGroupsResponseBody &&) = default ;
    ListLivePackageChannelGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivePackageChannelGroupsResponseBody() = default ;
    ListLivePackageChannelGroupsResponseBody& operator=(const ListLivePackageChannelGroupsResponseBody &) = default ;
    ListLivePackageChannelGroupsResponseBody& operator=(ListLivePackageChannelGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LivePackageChannelGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LivePackageChannelGroups& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(OriginDomain, originDomain_);
      };
      friend void from_json(const Darabonba::Json& j, LivePackageChannelGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(OriginDomain, originDomain_);
      };
      LivePackageChannelGroups() = default ;
      LivePackageChannelGroups(const LivePackageChannelGroups &) = default ;
      LivePackageChannelGroups(LivePackageChannelGroups &&) = default ;
      LivePackageChannelGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LivePackageChannelGroups() = default ;
      LivePackageChannelGroups& operator=(const LivePackageChannelGroups &) = default ;
      LivePackageChannelGroups& operator=(LivePackageChannelGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->groupName_ == nullptr && this->lastModified_ == nullptr && this->originDomain_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LivePackageChannelGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LivePackageChannelGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline LivePackageChannelGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline LivePackageChannelGroups& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // originDomain Field Functions 
      bool hasOriginDomain() const { return this->originDomain_ != nullptr;};
      void deleteOriginDomain() { this->originDomain_ = nullptr;};
      inline string getOriginDomain() const { DARABONBA_PTR_GET_DEFAULT(originDomain_, "") };
      inline LivePackageChannelGroups& setOriginDomain(string originDomain) { DARABONBA_PTR_SET_VALUE(originDomain_, originDomain) };


    protected:
      // The time when the channel group was created. It is in the `yyyy-MM-ddTHH:mm:ssZ` format and displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The channel group description.
      shared_ptr<string> description_ {};
      // The channel group name.
      shared_ptr<string> groupName_ {};
      // The time when the channel group was last modified. It is in the `yyyy-MM-ddTHH:mm:ssZ` format and displayed in UTC.
      shared_ptr<string> lastModified_ {};
      // The origin domain.
      shared_ptr<string> originDomain_ {};
    };

    virtual bool empty() const override { return this->livePackageChannelGroups_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sortBy_ == nullptr && this->totalCount_ == nullptr; };
    // livePackageChannelGroups Field Functions 
    bool hasLivePackageChannelGroups() const { return this->livePackageChannelGroups_ != nullptr;};
    void deleteLivePackageChannelGroups() { this->livePackageChannelGroups_ = nullptr;};
    inline const vector<ListLivePackageChannelGroupsResponseBody::LivePackageChannelGroups> & getLivePackageChannelGroups() const { DARABONBA_PTR_GET_CONST(livePackageChannelGroups_, vector<ListLivePackageChannelGroupsResponseBody::LivePackageChannelGroups>) };
    inline vector<ListLivePackageChannelGroupsResponseBody::LivePackageChannelGroups> getLivePackageChannelGroups() { DARABONBA_PTR_GET(livePackageChannelGroups_, vector<ListLivePackageChannelGroupsResponseBody::LivePackageChannelGroups>) };
    inline ListLivePackageChannelGroupsResponseBody& setLivePackageChannelGroups(const vector<ListLivePackageChannelGroupsResponseBody::LivePackageChannelGroups> & livePackageChannelGroups) { DARABONBA_PTR_SET_VALUE(livePackageChannelGroups_, livePackageChannelGroups) };
    inline ListLivePackageChannelGroupsResponseBody& setLivePackageChannelGroups(vector<ListLivePackageChannelGroupsResponseBody::LivePackageChannelGroups> && livePackageChannelGroups) { DARABONBA_PTR_SET_RVALUE(livePackageChannelGroups_, livePackageChannelGroups) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLivePackageChannelGroupsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLivePackageChannelGroupsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLivePackageChannelGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLivePackageChannelGroupsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLivePackageChannelGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The channel groups returned.
    shared_ptr<vector<ListLivePackageChannelGroupsResponseBody::LivePackageChannelGroups>> livePackageChannelGroups_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sort order.
    shared_ptr<string> sortBy_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
