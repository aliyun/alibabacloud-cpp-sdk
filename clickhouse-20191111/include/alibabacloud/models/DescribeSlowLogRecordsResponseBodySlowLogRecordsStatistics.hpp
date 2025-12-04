// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYSLOWLOGRECORDSSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYSLOWLOGRECORDSSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(BytesRead, bytesRead_);
      DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
      DARABONBA_PTR_TO_JSON(RowsRead, rowsRead_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(BytesRead, bytesRead_);
      DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
      DARABONBA_PTR_FROM_JSON(RowsRead, rowsRead_);
    };
    DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics() = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics(const DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics &) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics(DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics &&) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics() = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics& operator=(const DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics &) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics& operator=(DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bytesRead_ == nullptr
        && return this->elapsedTime_ == nullptr && return this->rowsRead_ == nullptr; };
    // bytesRead Field Functions 
    bool hasBytesRead() const { return this->bytesRead_ != nullptr;};
    void deleteBytesRead() { this->bytesRead_ = nullptr;};
    inline int32_t bytesRead() const { DARABONBA_PTR_GET_DEFAULT(bytesRead_, 0) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics& setBytesRead(int32_t bytesRead) { DARABONBA_PTR_SET_VALUE(bytesRead_, bytesRead) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline float elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0.0) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics& setElapsedTime(float elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // rowsRead Field Functions 
    bool hasRowsRead() const { return this->rowsRead_ != nullptr;};
    void deleteRowsRead() { this->rowsRead_ = nullptr;};
    inline int32_t rowsRead() const { DARABONBA_PTR_GET_DEFAULT(rowsRead_, 0) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics& setRowsRead(int32_t rowsRead) { DARABONBA_PTR_SET_VALUE(rowsRead_, rowsRead) };


  protected:
    // The total size of data that were read. Unit: bytes.
    std::shared_ptr<int32_t> bytesRead_ = nullptr;
    // The time consumed by the slow query. Unit: milliseconds.
    std::shared_ptr<float> elapsedTime_ = nullptr;
    // The total number of rows that were read.
    std::shared_ptr<int32_t> rowsRead_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
