// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDSUBTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDSUBTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OpenStructMvRecommendSubTaskModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeMvRecommendSubTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMvRecommendSubTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MvRecommendSubTaskModels, mvRecommendSubTaskModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMvRecommendSubTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MvRecommendSubTaskModels, mvRecommendSubTaskModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMvRecommendSubTasksResponseBodyData() = default ;
    DescribeMvRecommendSubTasksResponseBodyData(const DescribeMvRecommendSubTasksResponseBodyData &) = default ;
    DescribeMvRecommendSubTasksResponseBodyData(DescribeMvRecommendSubTasksResponseBodyData &&) = default ;
    DescribeMvRecommendSubTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMvRecommendSubTasksResponseBodyData() = default ;
    DescribeMvRecommendSubTasksResponseBodyData& operator=(const DescribeMvRecommendSubTasksResponseBodyData &) = default ;
    DescribeMvRecommendSubTasksResponseBodyData& operator=(DescribeMvRecommendSubTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mvRecommendSubTaskModels_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // mvRecommendSubTaskModels Field Functions 
    bool hasMvRecommendSubTaskModels() const { return this->mvRecommendSubTaskModels_ != nullptr;};
    void deleteMvRecommendSubTaskModels() { this->mvRecommendSubTaskModels_ = nullptr;};
    inline const vector<Models::OpenStructMvRecommendSubTaskModel> & mvRecommendSubTaskModels() const { DARABONBA_PTR_GET_CONST(mvRecommendSubTaskModels_, vector<Models::OpenStructMvRecommendSubTaskModel>) };
    inline vector<Models::OpenStructMvRecommendSubTaskModel> mvRecommendSubTaskModels() { DARABONBA_PTR_GET(mvRecommendSubTaskModels_, vector<Models::OpenStructMvRecommendSubTaskModel>) };
    inline DescribeMvRecommendSubTasksResponseBodyData& setMvRecommendSubTaskModels(const vector<Models::OpenStructMvRecommendSubTaskModel> & mvRecommendSubTaskModels) { DARABONBA_PTR_SET_VALUE(mvRecommendSubTaskModels_, mvRecommendSubTaskModels) };
    inline DescribeMvRecommendSubTasksResponseBodyData& setMvRecommendSubTaskModels(vector<Models::OpenStructMvRecommendSubTaskModel> && mvRecommendSubTaskModels) { DARABONBA_PTR_SET_RVALUE(mvRecommendSubTaskModels_, mvRecommendSubTaskModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeMvRecommendSubTasksResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeMvRecommendSubTasksResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeMvRecommendSubTasksResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of recommended tasks to be executed.
    std::shared_ptr<vector<Models::OpenStructMvRecommendSubTaskModel>> mvRecommendSubTaskModels_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
