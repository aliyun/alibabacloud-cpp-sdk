// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDRESULTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDRESULTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OpenStructMVRecommendResultModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeMVRecommendResultsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMVRecommendResultsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MvRecommendResultModels, mvRecommendResultModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMVRecommendResultsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MvRecommendResultModels, mvRecommendResultModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMVRecommendResultsResponseBodyData() = default ;
    DescribeMVRecommendResultsResponseBodyData(const DescribeMVRecommendResultsResponseBodyData &) = default ;
    DescribeMVRecommendResultsResponseBodyData(DescribeMVRecommendResultsResponseBodyData &&) = default ;
    DescribeMVRecommendResultsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMVRecommendResultsResponseBodyData() = default ;
    DescribeMVRecommendResultsResponseBodyData& operator=(const DescribeMVRecommendResultsResponseBodyData &) = default ;
    DescribeMVRecommendResultsResponseBodyData& operator=(DescribeMVRecommendResultsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mvRecommendResultModels_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // mvRecommendResultModels Field Functions 
    bool hasMvRecommendResultModels() const { return this->mvRecommendResultModels_ != nullptr;};
    void deleteMvRecommendResultModels() { this->mvRecommendResultModels_ = nullptr;};
    inline const vector<Models::OpenStructMVRecommendResultModel> & mvRecommendResultModels() const { DARABONBA_PTR_GET_CONST(mvRecommendResultModels_, vector<Models::OpenStructMVRecommendResultModel>) };
    inline vector<Models::OpenStructMVRecommendResultModel> mvRecommendResultModels() { DARABONBA_PTR_GET(mvRecommendResultModels_, vector<Models::OpenStructMVRecommendResultModel>) };
    inline DescribeMVRecommendResultsResponseBodyData& setMvRecommendResultModels(const vector<Models::OpenStructMVRecommendResultModel> & mvRecommendResultModels) { DARABONBA_PTR_SET_VALUE(mvRecommendResultModels_, mvRecommendResultModels) };
    inline DescribeMVRecommendResultsResponseBodyData& setMvRecommendResultModels(vector<Models::OpenStructMVRecommendResultModel> && mvRecommendResultModels) { DARABONBA_PTR_SET_RVALUE(mvRecommendResultModels_, mvRecommendResultModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeMVRecommendResultsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeMVRecommendResultsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeMVRecommendResultsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::OpenStructMVRecommendResultModel>> mvRecommendResultModels_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Valid values:
    // 
    // *   **30** (default).
    // *   **50**.
    // *   **100**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
