// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINEAGENTDETAILREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINEAGENTDETAILREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHotlineAgentDetailReportResponseBodyDataColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineAgentDetailReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineAgentDetailReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineAgentDetailReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetHotlineAgentDetailReportResponseBodyData() = default ;
    GetHotlineAgentDetailReportResponseBodyData(const GetHotlineAgentDetailReportResponseBodyData &) = default ;
    GetHotlineAgentDetailReportResponseBodyData(GetHotlineAgentDetailReportResponseBodyData &&) = default ;
    GetHotlineAgentDetailReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineAgentDetailReportResponseBodyData() = default ;
    GetHotlineAgentDetailReportResponseBodyData& operator=(const GetHotlineAgentDetailReportResponseBodyData &) = default ;
    GetHotlineAgentDetailReportResponseBodyData& operator=(GetHotlineAgentDetailReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr && this->rows_ != nullptr && this->total_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Models::GetHotlineAgentDetailReportResponseBodyDataColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Models::GetHotlineAgentDetailReportResponseBodyDataColumns>) };
    inline vector<Models::GetHotlineAgentDetailReportResponseBodyDataColumns> columns() { DARABONBA_PTR_GET(columns_, vector<Models::GetHotlineAgentDetailReportResponseBodyDataColumns>) };
    inline GetHotlineAgentDetailReportResponseBodyData& setColumns(const vector<Models::GetHotlineAgentDetailReportResponseBodyDataColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline GetHotlineAgentDetailReportResponseBodyData& setColumns(vector<Models::GetHotlineAgentDetailReportResponseBodyDataColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetHotlineAgentDetailReportResponseBodyData& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetHotlineAgentDetailReportResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<Darabonba::Json> & rows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> rows() { DARABONBA_PTR_GET(rows_, vector<Darabonba::Json>) };
    inline GetHotlineAgentDetailReportResponseBodyData& setRows(const vector<Darabonba::Json> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline GetHotlineAgentDetailReportResponseBodyData& setRows(vector<Darabonba::Json> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetHotlineAgentDetailReportResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::GetHotlineAgentDetailReportResponseBodyDataColumns>> columns_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> rows_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
