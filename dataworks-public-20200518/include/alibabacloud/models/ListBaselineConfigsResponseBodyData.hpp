// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECONFIGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECONFIGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBaselineConfigsResponseBodyDataBaselines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselineConfigsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Baselines, baselines_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Baselines, baselines_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBaselineConfigsResponseBodyData() = default ;
    ListBaselineConfigsResponseBodyData(const ListBaselineConfigsResponseBodyData &) = default ;
    ListBaselineConfigsResponseBodyData(ListBaselineConfigsResponseBodyData &&) = default ;
    ListBaselineConfigsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineConfigsResponseBodyData() = default ;
    ListBaselineConfigsResponseBodyData& operator=(const ListBaselineConfigsResponseBodyData &) = default ;
    ListBaselineConfigsResponseBodyData& operator=(ListBaselineConfigsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselines_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // baselines Field Functions 
    bool hasBaselines() const { return this->baselines_ != nullptr;};
    void deleteBaselines() { this->baselines_ = nullptr;};
    inline const vector<Models::ListBaselineConfigsResponseBodyDataBaselines> & baselines() const { DARABONBA_PTR_GET_CONST(baselines_, vector<Models::ListBaselineConfigsResponseBodyDataBaselines>) };
    inline vector<Models::ListBaselineConfigsResponseBodyDataBaselines> baselines() { DARABONBA_PTR_GET(baselines_, vector<Models::ListBaselineConfigsResponseBodyDataBaselines>) };
    inline ListBaselineConfigsResponseBodyData& setBaselines(const vector<Models::ListBaselineConfigsResponseBodyDataBaselines> & baselines) { DARABONBA_PTR_SET_VALUE(baselines_, baselines) };
    inline ListBaselineConfigsResponseBodyData& setBaselines(vector<Models::ListBaselineConfigsResponseBodyDataBaselines> && baselines) { DARABONBA_PTR_SET_RVALUE(baselines_, baselines) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBaselineConfigsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBaselineConfigsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBaselineConfigsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The baselines.
    std::shared_ptr<vector<Models::ListBaselineConfigsResponseBodyDataBaselines>> baselines_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of baselines returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
