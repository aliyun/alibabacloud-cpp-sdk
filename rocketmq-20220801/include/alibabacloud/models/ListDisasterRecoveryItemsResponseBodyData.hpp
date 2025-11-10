// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYITEMSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYITEMSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDisasterRecoveryItemsResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryItemsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryItemsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(scrollId, scrollId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryItemsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(scrollId, scrollId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDisasterRecoveryItemsResponseBodyData() = default ;
    ListDisasterRecoveryItemsResponseBodyData(const ListDisasterRecoveryItemsResponseBodyData &) = default ;
    ListDisasterRecoveryItemsResponseBodyData(ListDisasterRecoveryItemsResponseBodyData &&) = default ;
    ListDisasterRecoveryItemsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryItemsResponseBodyData() = default ;
    ListDisasterRecoveryItemsResponseBodyData& operator=(const ListDisasterRecoveryItemsResponseBodyData &) = default ;
    ListDisasterRecoveryItemsResponseBodyData& operator=(ListDisasterRecoveryItemsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->scrollId_ == nullptr && return this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListDisasterRecoveryItemsResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListDisasterRecoveryItemsResponseBodyDataList>) };
    inline vector<Models::ListDisasterRecoveryItemsResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListDisasterRecoveryItemsResponseBodyDataList>) };
    inline ListDisasterRecoveryItemsResponseBodyData& setList(const vector<Models::ListDisasterRecoveryItemsResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListDisasterRecoveryItemsResponseBodyData& setList(vector<Models::ListDisasterRecoveryItemsResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDisasterRecoveryItemsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDisasterRecoveryItemsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline ListDisasterRecoveryItemsResponseBodyData& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDisasterRecoveryItemsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The Global Replicator tasks.
    std::shared_ptr<vector<Models::ListDisasterRecoveryItemsResponseBodyDataList>> list_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The scroll ID of the request. The ID is automatically generated by the system. The result can be paginated only if this parameter is included in the pagination request.
    std::shared_ptr<string> scrollId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
