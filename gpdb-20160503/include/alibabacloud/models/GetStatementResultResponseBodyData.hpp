// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATEMENTRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTATEMENTRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStatementResultResponseBodyDataColumnMetadata.hpp>
#include <alibabacloud/models/GetStatementResultResponseBodyDataRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetStatementResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatementResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnMetadata, columnMetadata_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(TotalNumRows, totalNumRows_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatementResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnMetadata, columnMetadata_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(TotalNumRows, totalNumRows_);
    };
    GetStatementResultResponseBodyData() = default ;
    GetStatementResultResponseBodyData(const GetStatementResultResponseBodyData &) = default ;
    GetStatementResultResponseBodyData(GetStatementResultResponseBodyData &&) = default ;
    GetStatementResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatementResultResponseBodyData() = default ;
    GetStatementResultResponseBodyData& operator=(const GetStatementResultResponseBodyData &) = default ;
    GetStatementResultResponseBodyData& operator=(GetStatementResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnMetadata_ == nullptr
        && return this->records_ == nullptr && return this->totalNumRows_ == nullptr; };
    // columnMetadata Field Functions 
    bool hasColumnMetadata() const { return this->columnMetadata_ != nullptr;};
    void deleteColumnMetadata() { this->columnMetadata_ = nullptr;};
    inline const Models::GetStatementResultResponseBodyDataColumnMetadata & columnMetadata() const { DARABONBA_PTR_GET_CONST(columnMetadata_, Models::GetStatementResultResponseBodyDataColumnMetadata) };
    inline Models::GetStatementResultResponseBodyDataColumnMetadata columnMetadata() { DARABONBA_PTR_GET(columnMetadata_, Models::GetStatementResultResponseBodyDataColumnMetadata) };
    inline GetStatementResultResponseBodyData& setColumnMetadata(const Models::GetStatementResultResponseBodyDataColumnMetadata & columnMetadata) { DARABONBA_PTR_SET_VALUE(columnMetadata_, columnMetadata) };
    inline GetStatementResultResponseBodyData& setColumnMetadata(Models::GetStatementResultResponseBodyDataColumnMetadata && columnMetadata) { DARABONBA_PTR_SET_RVALUE(columnMetadata_, columnMetadata) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const Models::GetStatementResultResponseBodyDataRecords & records() const { DARABONBA_PTR_GET_CONST(records_, Models::GetStatementResultResponseBodyDataRecords) };
    inline Models::GetStatementResultResponseBodyDataRecords records() { DARABONBA_PTR_GET(records_, Models::GetStatementResultResponseBodyDataRecords) };
    inline GetStatementResultResponseBodyData& setRecords(const Models::GetStatementResultResponseBodyDataRecords & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetStatementResultResponseBodyData& setRecords(Models::GetStatementResultResponseBodyDataRecords && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // totalNumRows Field Functions 
    bool hasTotalNumRows() const { return this->totalNumRows_ != nullptr;};
    void deleteTotalNumRows() { this->totalNumRows_ = nullptr;};
    inline int64_t totalNumRows() const { DARABONBA_PTR_GET_DEFAULT(totalNumRows_, 0L) };
    inline GetStatementResultResponseBodyData& setTotalNumRows(int64_t totalNumRows) { DARABONBA_PTR_SET_VALUE(totalNumRows_, totalNumRows) };


  protected:
    // List of column metadata.
    std::shared_ptr<Models::GetStatementResultResponseBodyDataColumnMetadata> columnMetadata_ = nullptr;
    // Multiple rows of data.
    std::shared_ptr<Models::GetStatementResultResponseBodyDataRecords> records_ = nullptr;
    // Total number of entries.
    std::shared_ptr<int64_t> totalNumRows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
