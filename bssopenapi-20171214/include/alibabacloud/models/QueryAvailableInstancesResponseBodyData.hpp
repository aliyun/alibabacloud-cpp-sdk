// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVAILABLEINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVAILABLEINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAvailableInstancesResponseBodyDataInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAvailableInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvailableInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvailableInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryAvailableInstancesResponseBodyData() = default ;
    QueryAvailableInstancesResponseBodyData(const QueryAvailableInstancesResponseBodyData &) = default ;
    QueryAvailableInstancesResponseBodyData(QueryAvailableInstancesResponseBodyData &&) = default ;
    QueryAvailableInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvailableInstancesResponseBodyData() = default ;
    QueryAvailableInstancesResponseBodyData& operator=(const QueryAvailableInstancesResponseBodyData &) = default ;
    QueryAvailableInstancesResponseBodyData& operator=(QueryAvailableInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceList_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<Models::QueryAvailableInstancesResponseBodyDataInstanceList> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<Models::QueryAvailableInstancesResponseBodyDataInstanceList>) };
    inline vector<Models::QueryAvailableInstancesResponseBodyDataInstanceList> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<Models::QueryAvailableInstancesResponseBodyDataInstanceList>) };
    inline QueryAvailableInstancesResponseBodyData& setInstanceList(const vector<Models::QueryAvailableInstancesResponseBodyDataInstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline QueryAvailableInstancesResponseBodyData& setInstanceList(vector<Models::QueryAvailableInstancesResponseBodyDataInstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryAvailableInstancesResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAvailableInstancesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryAvailableInstancesResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instances returned.
    std::shared_ptr<vector<Models::QueryAvailableInstancesResponseBodyDataInstanceList>> instanceList_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
