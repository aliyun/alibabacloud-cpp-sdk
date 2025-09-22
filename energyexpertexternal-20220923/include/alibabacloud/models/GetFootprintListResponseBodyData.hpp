// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOOTPRINTLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFOOTPRINTLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFootprintListResponseBodyDataRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetFootprintListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFootprintListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, GetFootprintListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    GetFootprintListResponseBodyData() = default ;
    GetFootprintListResponseBodyData(const GetFootprintListResponseBodyData &) = default ;
    GetFootprintListResponseBodyData(GetFootprintListResponseBodyData &&) = default ;
    GetFootprintListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFootprintListResponseBodyData() = default ;
    GetFootprintListResponseBodyData& operator=(const GetFootprintListResponseBodyData &) = default ;
    GetFootprintListResponseBodyData& operator=(GetFootprintListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageSize_ != nullptr && this->records_ != nullptr && this->total_ != nullptr && this->totalPage_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline GetFootprintListResponseBodyData& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetFootprintListResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::GetFootprintListResponseBodyDataRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::GetFootprintListResponseBodyDataRecords>) };
    inline vector<Models::GetFootprintListResponseBodyDataRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::GetFootprintListResponseBodyDataRecords>) };
    inline GetFootprintListResponseBodyData& setRecords(const vector<Models::GetFootprintListResponseBodyDataRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetFootprintListResponseBodyData& setRecords(vector<Models::GetFootprintListResponseBodyDataRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetFootprintListResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline GetFootprintListResponseBodyData& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Product Detail List.
    std::shared_ptr<vector<Models::GetFootprintListResponseBodyDataRecords>> records_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
    // Total Pages
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
