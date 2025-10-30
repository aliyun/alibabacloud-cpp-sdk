// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExecuteStatementResponseBodyDataColumnMetadata.hpp>
#include <alibabacloud/models/ExecuteStatementResponseBodyDataRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ExecuteStatementResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnMetadata, columnMetadata_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(TotalNumRows, totalNumRows_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnMetadata, columnMetadata_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(TotalNumRows, totalNumRows_);
    };
    ExecuteStatementResponseBodyData() = default ;
    ExecuteStatementResponseBodyData(const ExecuteStatementResponseBodyData &) = default ;
    ExecuteStatementResponseBodyData(ExecuteStatementResponseBodyData &&) = default ;
    ExecuteStatementResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementResponseBodyData() = default ;
    ExecuteStatementResponseBodyData& operator=(const ExecuteStatementResponseBodyData &) = default ;
    ExecuteStatementResponseBodyData& operator=(ExecuteStatementResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnMetadata_ == nullptr
        && return this->records_ == nullptr && return this->totalNumRows_ == nullptr; };
    // columnMetadata Field Functions 
    bool hasColumnMetadata() const { return this->columnMetadata_ != nullptr;};
    void deleteColumnMetadata() { this->columnMetadata_ = nullptr;};
    inline const Models::ExecuteStatementResponseBodyDataColumnMetadata & columnMetadata() const { DARABONBA_PTR_GET_CONST(columnMetadata_, Models::ExecuteStatementResponseBodyDataColumnMetadata) };
    inline Models::ExecuteStatementResponseBodyDataColumnMetadata columnMetadata() { DARABONBA_PTR_GET(columnMetadata_, Models::ExecuteStatementResponseBodyDataColumnMetadata) };
    inline ExecuteStatementResponseBodyData& setColumnMetadata(const Models::ExecuteStatementResponseBodyDataColumnMetadata & columnMetadata) { DARABONBA_PTR_SET_VALUE(columnMetadata_, columnMetadata) };
    inline ExecuteStatementResponseBodyData& setColumnMetadata(Models::ExecuteStatementResponseBodyDataColumnMetadata && columnMetadata) { DARABONBA_PTR_SET_RVALUE(columnMetadata_, columnMetadata) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const Models::ExecuteStatementResponseBodyDataRecords & records() const { DARABONBA_PTR_GET_CONST(records_, Models::ExecuteStatementResponseBodyDataRecords) };
    inline Models::ExecuteStatementResponseBodyDataRecords records() { DARABONBA_PTR_GET(records_, Models::ExecuteStatementResponseBodyDataRecords) };
    inline ExecuteStatementResponseBodyData& setRecords(const Models::ExecuteStatementResponseBodyDataRecords & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ExecuteStatementResponseBodyData& setRecords(Models::ExecuteStatementResponseBodyDataRecords && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // totalNumRows Field Functions 
    bool hasTotalNumRows() const { return this->totalNumRows_ != nullptr;};
    void deleteTotalNumRows() { this->totalNumRows_ = nullptr;};
    inline int64_t totalNumRows() const { DARABONBA_PTR_GET_DEFAULT(totalNumRows_, 0L) };
    inline ExecuteStatementResponseBodyData& setTotalNumRows(int64_t totalNumRows) { DARABONBA_PTR_SET_VALUE(totalNumRows_, totalNumRows) };


  protected:
    // The metadata of the columns.
    std::shared_ptr<Models::ExecuteStatementResponseBodyDataColumnMetadata> columnMetadata_ = nullptr;
    // The rows of data.
    std::shared_ptr<Models::ExecuteStatementResponseBodyDataRecords> records_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalNumRows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
