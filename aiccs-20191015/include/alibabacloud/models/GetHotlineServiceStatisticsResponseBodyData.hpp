// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINESERVICESTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINESERVICESTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineServiceStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineServiceStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineServiceStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    GetHotlineServiceStatisticsResponseBodyData() = default ;
    GetHotlineServiceStatisticsResponseBodyData(const GetHotlineServiceStatisticsResponseBodyData &) = default ;
    GetHotlineServiceStatisticsResponseBodyData(GetHotlineServiceStatisticsResponseBodyData &&) = default ;
    GetHotlineServiceStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineServiceStatisticsResponseBodyData() = default ;
    GetHotlineServiceStatisticsResponseBodyData& operator=(const GetHotlineServiceStatisticsResponseBodyData &) = default ;
    GetHotlineServiceStatisticsResponseBodyData& operator=(GetHotlineServiceStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->rows_ == nullptr && return this->totalNum_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetHotlineServiceStatisticsResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetHotlineServiceStatisticsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline string rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
    inline GetHotlineServiceStatisticsResponseBodyData& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline GetHotlineServiceStatisticsResponseBodyData& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> rows_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
