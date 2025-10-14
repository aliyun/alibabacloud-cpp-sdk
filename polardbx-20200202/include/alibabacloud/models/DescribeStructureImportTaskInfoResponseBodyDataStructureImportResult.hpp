// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRUCTUREIMPORTTASKINFORESPONSEBODYDATASTRUCTUREIMPORTRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRUCTUREIMPORTTASKINFORESPONSEBODYDATASTRUCTUREIMPORTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionDetail, exceptionDetail_);
      DARABONBA_PTR_TO_JSON(ExceptionFullTableName, exceptionFullTableName_);
      DARABONBA_PTR_TO_JSON(FinishedNum, finishedNum_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionDetail, exceptionDetail_);
      DARABONBA_PTR_FROM_JSON(ExceptionFullTableName, exceptionFullTableName_);
      DARABONBA_PTR_FROM_JSON(FinishedNum, finishedNum_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult() = default ;
    DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult(const DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult &) = default ;
    DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult(DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult &&) = default ;
    DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult() = default ;
    DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& operator=(const DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult &) = default ;
    DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& operator=(DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionDetail_ == nullptr
        && return this->exceptionFullTableName_ == nullptr && return this->finishedNum_ == nullptr && return this->percentage_ == nullptr && return this->status_ == nullptr && return this->totalNum_ == nullptr; };
    // exceptionDetail Field Functions 
    bool hasExceptionDetail() const { return this->exceptionDetail_ != nullptr;};
    void deleteExceptionDetail() { this->exceptionDetail_ = nullptr;};
    inline string exceptionDetail() const { DARABONBA_PTR_GET_DEFAULT(exceptionDetail_, "") };
    inline DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& setExceptionDetail(string exceptionDetail) { DARABONBA_PTR_SET_VALUE(exceptionDetail_, exceptionDetail) };


    // exceptionFullTableName Field Functions 
    bool hasExceptionFullTableName() const { return this->exceptionFullTableName_ != nullptr;};
    void deleteExceptionFullTableName() { this->exceptionFullTableName_ = nullptr;};
    inline string exceptionFullTableName() const { DARABONBA_PTR_GET_DEFAULT(exceptionFullTableName_, "") };
    inline DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& setExceptionFullTableName(string exceptionFullTableName) { DARABONBA_PTR_SET_VALUE(exceptionFullTableName_, exceptionFullTableName) };


    // finishedNum Field Functions 
    bool hasFinishedNum() const { return this->finishedNum_ != nullptr;};
    void deleteFinishedNum() { this->finishedNum_ = nullptr;};
    inline int32_t finishedNum() const { DARABONBA_PTR_GET_DEFAULT(finishedNum_, 0) };
    inline DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& setFinishedNum(int32_t finishedNum) { DARABONBA_PTR_SET_VALUE(finishedNum_, finishedNum) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline DescribeStructureImportTaskInfoResponseBodyDataStructureImportResult& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<string> exceptionDetail_ = nullptr;
    std::shared_ptr<string> exceptionFullTableName_ = nullptr;
    std::shared_ptr<int32_t> finishedNum_ = nullptr;
    std::shared_ptr<int32_t> percentage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
