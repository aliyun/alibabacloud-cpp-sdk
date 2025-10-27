// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGRECORDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGRECORDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAutoScalingRecordsResponseBodyDataScaleRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListAutoScalingRecordsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScaleRecords, scaleRecords_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScaleRecords, scaleRecords_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListAutoScalingRecordsResponseBodyData() = default ;
    ListAutoScalingRecordsResponseBodyData(const ListAutoScalingRecordsResponseBodyData &) = default ;
    ListAutoScalingRecordsResponseBodyData(ListAutoScalingRecordsResponseBodyData &&) = default ;
    ListAutoScalingRecordsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingRecordsResponseBodyData() = default ;
    ListAutoScalingRecordsResponseBodyData& operator=(const ListAutoScalingRecordsResponseBodyData &) = default ;
    ListAutoScalingRecordsResponseBodyData& operator=(ListAutoScalingRecordsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->scaleRecords_ == nullptr && return this->totalNum_ == nullptr && return this->totalPage_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListAutoScalingRecordsResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAutoScalingRecordsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scaleRecords Field Functions 
    bool hasScaleRecords() const { return this->scaleRecords_ != nullptr;};
    void deleteScaleRecords() { this->scaleRecords_ = nullptr;};
    inline const vector<Models::ListAutoScalingRecordsResponseBodyDataScaleRecords> & scaleRecords() const { DARABONBA_PTR_GET_CONST(scaleRecords_, vector<Models::ListAutoScalingRecordsResponseBodyDataScaleRecords>) };
    inline vector<Models::ListAutoScalingRecordsResponseBodyDataScaleRecords> scaleRecords() { DARABONBA_PTR_GET(scaleRecords_, vector<Models::ListAutoScalingRecordsResponseBodyDataScaleRecords>) };
    inline ListAutoScalingRecordsResponseBodyData& setScaleRecords(const vector<Models::ListAutoScalingRecordsResponseBodyDataScaleRecords> & scaleRecords) { DARABONBA_PTR_SET_VALUE(scaleRecords_, scaleRecords) };
    inline ListAutoScalingRecordsResponseBodyData& setScaleRecords(vector<Models::ListAutoScalingRecordsResponseBodyDataScaleRecords> && scaleRecords) { DARABONBA_PTR_SET_RVALUE(scaleRecords_, scaleRecords) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListAutoScalingRecordsResponseBodyData& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListAutoScalingRecordsResponseBodyData& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::ListAutoScalingRecordsResponseBodyDataScaleRecords>> scaleRecords_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
