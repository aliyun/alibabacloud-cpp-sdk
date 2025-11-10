// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTopicsResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListTopicsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListTopicsResponseBodyData() = default ;
    ListTopicsResponseBodyData(const ListTopicsResponseBodyData &) = default ;
    ListTopicsResponseBodyData(ListTopicsResponseBodyData &&) = default ;
    ListTopicsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicsResponseBodyData() = default ;
    ListTopicsResponseBodyData& operator=(const ListTopicsResponseBodyData &) = default ;
    ListTopicsResponseBodyData& operator=(ListTopicsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListTopicsResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListTopicsResponseBodyDataList>) };
    inline vector<Models::ListTopicsResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListTopicsResponseBodyDataList>) };
    inline ListTopicsResponseBodyData& setList(const vector<Models::ListTopicsResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListTopicsResponseBodyData& setList(vector<Models::ListTopicsResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListTopicsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTopicsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTopicsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The topics.
    std::shared_ptr<vector<Models::ListTopicsResponseBodyDataList>> list_ = nullptr;
    // Current page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // Page size.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Total number of results returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
