// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListLiveMessageAppsRequest() = default ;
    ListLiveMessageAppsRequest(const ListLiveMessageAppsRequest &) = default ;
    ListLiveMessageAppsRequest(ListLiveMessageAppsRequest &&) = default ;
    ListLiveMessageAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageAppsRequest() = default ;
    ListLiveMessageAppsRequest& operator=(const ListLiveMessageAppsRequest &) = default ;
    ListLiveMessageAppsRequest& operator=(ListLiveMessageAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCenter_ == nullptr
        && this->nextPageToken_ == nullptr && this->sortType_ == nullptr; };
    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ListLiveMessageAppsRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListLiveMessageAppsRequest& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline int32_t getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, 0) };
    inline ListLiveMessageAppsRequest& setSortType(int32_t sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    shared_ptr<string> dataCenter_ {};
    // The starting page number for the query. If you leave this parameter empty or set this parameter to -1, the query starts from the first page.
    shared_ptr<int64_t> nextPageToken_ {};
    // The sort order based on the creation time. Valid values:
    // 
    // *   1: ascending order
    // *   2: descending order
    // 
    // This parameter is required.
    shared_ptr<int32_t> sortType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
