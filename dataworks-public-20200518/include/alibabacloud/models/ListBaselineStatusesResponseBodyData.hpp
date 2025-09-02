// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINESTATUSESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINESTATUSESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBaselineStatusesResponseBodyDataBaselineStatuses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselineStatusesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineStatusesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineStatuses, baselineStatuses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineStatusesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineStatuses, baselineStatuses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBaselineStatusesResponseBodyData() = default ;
    ListBaselineStatusesResponseBodyData(const ListBaselineStatusesResponseBodyData &) = default ;
    ListBaselineStatusesResponseBodyData(ListBaselineStatusesResponseBodyData &&) = default ;
    ListBaselineStatusesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineStatusesResponseBodyData() = default ;
    ListBaselineStatusesResponseBodyData& operator=(const ListBaselineStatusesResponseBodyData &) = default ;
    ListBaselineStatusesResponseBodyData& operator=(ListBaselineStatusesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineStatuses_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // baselineStatuses Field Functions 
    bool hasBaselineStatuses() const { return this->baselineStatuses_ != nullptr;};
    void deleteBaselineStatuses() { this->baselineStatuses_ = nullptr;};
    inline const vector<Models::ListBaselineStatusesResponseBodyDataBaselineStatuses> & baselineStatuses() const { DARABONBA_PTR_GET_CONST(baselineStatuses_, vector<Models::ListBaselineStatusesResponseBodyDataBaselineStatuses>) };
    inline vector<Models::ListBaselineStatusesResponseBodyDataBaselineStatuses> baselineStatuses() { DARABONBA_PTR_GET(baselineStatuses_, vector<Models::ListBaselineStatusesResponseBodyDataBaselineStatuses>) };
    inline ListBaselineStatusesResponseBodyData& setBaselineStatuses(const vector<Models::ListBaselineStatusesResponseBodyDataBaselineStatuses> & baselineStatuses) { DARABONBA_PTR_SET_VALUE(baselineStatuses_, baselineStatuses) };
    inline ListBaselineStatusesResponseBodyData& setBaselineStatuses(vector<Models::ListBaselineStatusesResponseBodyDataBaselineStatuses> && baselineStatuses) { DARABONBA_PTR_SET_RVALUE(baselineStatuses_, baselineStatuses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBaselineStatusesResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBaselineStatusesResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBaselineStatusesResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of baseline instances.
    std::shared_ptr<vector<Models::ListBaselineStatusesResponseBodyDataBaselineStatuses>> baselineStatuses_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of baseline instances.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
