// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLINGCOSTBREAKDOWNRESPDTO_HPP_
#define ALIBABACLOUD_MODELS_BILLINGCOSTBREAKDOWNRESPDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BillingCostBreakdownRowDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BillingCostBreakdownRespDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BillingCostBreakdownRespDTO& obj) { 
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(rows, rows_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, BillingCostBreakdownRespDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(rows, rows_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    BillingCostBreakdownRespDTO() = default ;
    BillingCostBreakdownRespDTO(const BillingCostBreakdownRespDTO &) = default ;
    BillingCostBreakdownRespDTO(BillingCostBreakdownRespDTO &&) = default ;
    BillingCostBreakdownRespDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BillingCostBreakdownRespDTO() = default ;
    BillingCostBreakdownRespDTO& operator=(const BillingCostBreakdownRespDTO &) = default ;
    BillingCostBreakdownRespDTO& operator=(BillingCostBreakdownRespDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->granularity_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->rows_ == nullptr && this->total_ == nullptr; };
    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline BillingCostBreakdownRespDTO& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline BillingCostBreakdownRespDTO& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline BillingCostBreakdownRespDTO& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<BillingCostBreakdownRowDTO> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<BillingCostBreakdownRowDTO>) };
    inline vector<BillingCostBreakdownRowDTO> getRows() { DARABONBA_PTR_GET(rows_, vector<BillingCostBreakdownRowDTO>) };
    inline BillingCostBreakdownRespDTO& setRows(const vector<BillingCostBreakdownRowDTO> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline BillingCostBreakdownRespDTO& setRows(vector<BillingCostBreakdownRowDTO> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline BillingCostBreakdownRespDTO& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> granularity_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<BillingCostBreakdownRowDTO>> rows_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
