// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPoolsResponseBodyPoolList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PoolList, poolList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PoolList, poolList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPoolsResponseBody() = default ;
    ListPoolsResponseBody(const ListPoolsResponseBody &) = default ;
    ListPoolsResponseBody(ListPoolsResponseBody &&) = default ;
    ListPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoolsResponseBody() = default ;
    ListPoolsResponseBody& operator=(const ListPoolsResponseBody &) = default ;
    ListPoolsResponseBody& operator=(ListPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->poolList_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPoolsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPoolsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // poolList Field Functions 
    bool hasPoolList() const { return this->poolList_ != nullptr;};
    void deletePoolList() { this->poolList_ = nullptr;};
    inline const vector<ListPoolsResponseBodyPoolList> & poolList() const { DARABONBA_PTR_GET_CONST(poolList_, vector<ListPoolsResponseBodyPoolList>) };
    inline vector<ListPoolsResponseBodyPoolList> poolList() { DARABONBA_PTR_GET(poolList_, vector<ListPoolsResponseBodyPoolList>) };
    inline ListPoolsResponseBody& setPoolList(const vector<ListPoolsResponseBodyPoolList> & poolList) { DARABONBA_PTR_SET_VALUE(poolList_, poolList) };
    inline ListPoolsResponseBody& setPoolList(vector<ListPoolsResponseBodyPoolList> && poolList) { DARABONBA_PTR_SET_RVALUE(poolList_, poolList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPoolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries on each page. Maximum value: 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Queries the resource pool list.
    std::shared_ptr<vector<ListPoolsResponseBodyPoolList>> poolList_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of list entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
