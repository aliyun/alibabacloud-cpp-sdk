// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveMessageGroupByPageResponseBodyGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveMessageGroupByPageResponseBody() = default ;
    ListLiveMessageGroupByPageResponseBody(const ListLiveMessageGroupByPageResponseBody &) = default ;
    ListLiveMessageGroupByPageResponseBody(ListLiveMessageGroupByPageResponseBody &&) = default ;
    ListLiveMessageGroupByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupByPageResponseBody() = default ;
    ListLiveMessageGroupByPageResponseBody& operator=(const ListLiveMessageGroupByPageResponseBody &) = default ;
    ListLiveMessageGroupByPageResponseBody& operator=(ListLiveMessageGroupByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<ListLiveMessageGroupByPageResponseBodyGroupList> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<ListLiveMessageGroupByPageResponseBodyGroupList>) };
    inline vector<ListLiveMessageGroupByPageResponseBodyGroupList> groupList() { DARABONBA_PTR_GET(groupList_, vector<ListLiveMessageGroupByPageResponseBodyGroupList>) };
    inline ListLiveMessageGroupByPageResponseBody& setGroupList(const vector<ListLiveMessageGroupByPageResponseBodyGroupList> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline ListLiveMessageGroupByPageResponseBody& setGroupList(vector<ListLiveMessageGroupByPageResponseBodyGroupList> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLiveMessageGroupByPageResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveMessageGroupByPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveMessageGroupByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLiveMessageGroupByPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of groups.
    std::shared_ptr<vector<ListLiveMessageGroupByPageResponseBodyGroupList>> groupList_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
