// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OpenStructMvRecommendTaskModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeMvRecommendTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMvRecommendTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MvRecommendTaskModels, mvRecommendTaskModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMvRecommendTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MvRecommendTaskModels, mvRecommendTaskModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMvRecommendTasksResponseBodyData() = default ;
    DescribeMvRecommendTasksResponseBodyData(const DescribeMvRecommendTasksResponseBodyData &) = default ;
    DescribeMvRecommendTasksResponseBodyData(DescribeMvRecommendTasksResponseBodyData &&) = default ;
    DescribeMvRecommendTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMvRecommendTasksResponseBodyData() = default ;
    DescribeMvRecommendTasksResponseBodyData& operator=(const DescribeMvRecommendTasksResponseBodyData &) = default ;
    DescribeMvRecommendTasksResponseBodyData& operator=(DescribeMvRecommendTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mvRecommendTaskModels_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // mvRecommendTaskModels Field Functions 
    bool hasMvRecommendTaskModels() const { return this->mvRecommendTaskModels_ != nullptr;};
    void deleteMvRecommendTaskModels() { this->mvRecommendTaskModels_ = nullptr;};
    inline const vector<Models::OpenStructMvRecommendTaskModel> & mvRecommendTaskModels() const { DARABONBA_PTR_GET_CONST(mvRecommendTaskModels_, vector<Models::OpenStructMvRecommendTaskModel>) };
    inline vector<Models::OpenStructMvRecommendTaskModel> mvRecommendTaskModels() { DARABONBA_PTR_GET(mvRecommendTaskModels_, vector<Models::OpenStructMvRecommendTaskModel>) };
    inline DescribeMvRecommendTasksResponseBodyData& setMvRecommendTaskModels(const vector<Models::OpenStructMvRecommendTaskModel> & mvRecommendTaskModels) { DARABONBA_PTR_SET_VALUE(mvRecommendTaskModels_, mvRecommendTaskModels) };
    inline DescribeMvRecommendTasksResponseBodyData& setMvRecommendTaskModels(vector<Models::OpenStructMvRecommendTaskModel> && mvRecommendTaskModels) { DARABONBA_PTR_SET_RVALUE(mvRecommendTaskModels_, mvRecommendTaskModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeMvRecommendTasksResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeMvRecommendTasksResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeMvRecommendTasksResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of recommended tasks for materialized views.
    std::shared_ptr<vector<Models::OpenStructMvRecommendTaskModel>> mvRecommendTaskModels_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
