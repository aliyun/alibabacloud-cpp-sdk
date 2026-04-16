// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTMODELDETAILRESPDTO_HPP_
#define ALIBABACLOUD_MODELS_COSTMODELDETAILRESPDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricDefRespDTO.hpp>
#include <alibabacloud/models/CostModelDetailRowDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class CostModelDetailRespDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostModelDetailRespDTO& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(rows, rows_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, CostModelDetailRespDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(rows, rows_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    CostModelDetailRespDTO() = default ;
    CostModelDetailRespDTO(const CostModelDetailRespDTO &) = default ;
    CostModelDetailRespDTO(CostModelDetailRespDTO &&) = default ;
    CostModelDetailRespDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostModelDetailRespDTO() = default ;
    CostModelDetailRespDTO& operator=(const CostModelDetailRespDTO &) = default ;
    CostModelDetailRespDTO& operator=(CostModelDetailRespDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && this->granularity_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->rows_ == nullptr && this->total_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<MetricDefRespDTO> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<MetricDefRespDTO>) };
    inline vector<MetricDefRespDTO> getColumns() { DARABONBA_PTR_GET(columns_, vector<MetricDefRespDTO>) };
    inline CostModelDetailRespDTO& setColumns(const vector<MetricDefRespDTO> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CostModelDetailRespDTO& setColumns(vector<MetricDefRespDTO> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline CostModelDetailRespDTO& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline CostModelDetailRespDTO& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CostModelDetailRespDTO& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline CostModelDetailRespDTO& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CostModelDetailRespDTO& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<CostModelDetailRowDTO> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<CostModelDetailRowDTO>) };
    inline vector<CostModelDetailRowDTO> getRows() { DARABONBA_PTR_GET(rows_, vector<CostModelDetailRowDTO>) };
    inline CostModelDetailRespDTO& setRows(const vector<CostModelDetailRowDTO> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline CostModelDetailRespDTO& setRows(vector<CostModelDetailRowDTO> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline CostModelDetailRespDTO& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<MetricDefRespDTO>> columns_ {};
    shared_ptr<string> granularity_ {};
    shared_ptr<int64_t> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<CostModelDetailRowDTO>> rows_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
