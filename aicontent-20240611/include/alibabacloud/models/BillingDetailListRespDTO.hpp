// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLINGDETAILLISTRESPDTO_HPP_
#define ALIBABACLOUD_MODELS_BILLINGDETAILLISTRESPDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricDefRespDTO.hpp>
#include <alibabacloud/models/BillingDetailRowDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BillingDetailListRespDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BillingDetailListRespDTO& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(rows, rows_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, BillingDetailListRespDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(rows, rows_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    BillingDetailListRespDTO() = default ;
    BillingDetailListRespDTO(const BillingDetailListRespDTO &) = default ;
    BillingDetailListRespDTO(BillingDetailListRespDTO &&) = default ;
    BillingDetailListRespDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BillingDetailListRespDTO() = default ;
    BillingDetailListRespDTO& operator=(const BillingDetailListRespDTO &) = default ;
    BillingDetailListRespDTO& operator=(BillingDetailListRespDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->rows_ == nullptr && this->total_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<MetricDefRespDTO> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<MetricDefRespDTO>) };
    inline vector<MetricDefRespDTO> getColumns() { DARABONBA_PTR_GET(columns_, vector<MetricDefRespDTO>) };
    inline BillingDetailListRespDTO& setColumns(const vector<MetricDefRespDTO> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline BillingDetailListRespDTO& setColumns(vector<MetricDefRespDTO> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline BillingDetailListRespDTO& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline BillingDetailListRespDTO& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<BillingDetailRowDTO> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<BillingDetailRowDTO>) };
    inline vector<BillingDetailRowDTO> getRows() { DARABONBA_PTR_GET(rows_, vector<BillingDetailRowDTO>) };
    inline BillingDetailListRespDTO& setRows(const vector<BillingDetailRowDTO> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline BillingDetailListRespDTO& setRows(vector<BillingDetailRowDTO> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline BillingDetailListRespDTO& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The column definitions, which are dynamically generated based on the model types that appear in the query results.
    shared_ptr<vector<MetricDefRespDTO>> columns_ {};
    // The current page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The list of bill details data.
    shared_ptr<vector<BillingDetailRowDTO>> rows_ {};
    // The total number of entries.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
