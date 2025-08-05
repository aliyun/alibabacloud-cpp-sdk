// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDETAILSRESPONSEBODYTABLEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDETAILSRESPONSEBODYTABLEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDataCheckTableDetailsResponseBodyTableDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataCheckTableDetailsResponseBodyTableDetails& obj) { 
      DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
      DARABONBA_PTR_TO_JSON(DiffCount, diffCount_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SourceDbName, sourceDbName_);
      DARABONBA_PTR_TO_JSON(SourceTbName, sourceTbName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetDbName, targetDbName_);
      DARABONBA_PTR_TO_JSON(TargetTbName, targetTbName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataCheckTableDetailsResponseBodyTableDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
      DARABONBA_PTR_FROM_JSON(DiffCount, diffCount_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SourceDbName, sourceDbName_);
      DARABONBA_PTR_FROM_JSON(SourceTbName, sourceTbName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetDbName, targetDbName_);
      DARABONBA_PTR_FROM_JSON(TargetTbName, targetTbName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataCheckTableDetailsResponseBodyTableDetails() = default ;
    DescribeDataCheckTableDetailsResponseBodyTableDetails(const DescribeDataCheckTableDetailsResponseBodyTableDetails &) = default ;
    DescribeDataCheckTableDetailsResponseBodyTableDetails(DescribeDataCheckTableDetailsResponseBodyTableDetails &&) = default ;
    DescribeDataCheckTableDetailsResponseBodyTableDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataCheckTableDetailsResponseBodyTableDetails() = default ;
    DescribeDataCheckTableDetailsResponseBodyTableDetails& operator=(const DescribeDataCheckTableDetailsResponseBodyTableDetails &) = default ;
    DescribeDataCheckTableDetailsResponseBodyTableDetails& operator=(DescribeDataCheckTableDetailsResponseBodyTableDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bootTime_ != nullptr
        && this->diffCount_ != nullptr && this->errorCode_ != nullptr && this->finishCount_ != nullptr && this->id_ != nullptr && this->sourceDbName_ != nullptr
        && this->sourceTbName_ != nullptr && this->status_ != nullptr && this->targetDbName_ != nullptr && this->targetTbName_ != nullptr && this->totalCount_ != nullptr; };
    // bootTime Field Functions 
    bool hasBootTime() const { return this->bootTime_ != nullptr;};
    void deleteBootTime() { this->bootTime_ = nullptr;};
    inline string bootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


    // diffCount Field Functions 
    bool hasDiffCount() const { return this->diffCount_ != nullptr;};
    void deleteDiffCount() { this->diffCount_ = nullptr;};
    inline int64_t diffCount() const { DARABONBA_PTR_GET_DEFAULT(diffCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setDiffCount(int64_t diffCount) { DARABONBA_PTR_SET_VALUE(diffCount_, diffCount) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int64_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setFinishCount(int64_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sourceDbName Field Functions 
    bool hasSourceDbName() const { return this->sourceDbName_ != nullptr;};
    void deleteSourceDbName() { this->sourceDbName_ = nullptr;};
    inline string sourceDbName() const { DARABONBA_PTR_GET_DEFAULT(sourceDbName_, "") };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setSourceDbName(string sourceDbName) { DARABONBA_PTR_SET_VALUE(sourceDbName_, sourceDbName) };


    // sourceTbName Field Functions 
    bool hasSourceTbName() const { return this->sourceTbName_ != nullptr;};
    void deleteSourceTbName() { this->sourceTbName_ = nullptr;};
    inline string sourceTbName() const { DARABONBA_PTR_GET_DEFAULT(sourceTbName_, "") };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setSourceTbName(string sourceTbName) { DARABONBA_PTR_SET_VALUE(sourceTbName_, sourceTbName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetDbName Field Functions 
    bool hasTargetDbName() const { return this->targetDbName_ != nullptr;};
    void deleteTargetDbName() { this->targetDbName_ = nullptr;};
    inline string targetDbName() const { DARABONBA_PTR_GET_DEFAULT(targetDbName_, "") };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setTargetDbName(string targetDbName) { DARABONBA_PTR_SET_VALUE(targetDbName_, targetDbName) };


    // targetTbName Field Functions 
    bool hasTargetTbName() const { return this->targetTbName_ != nullptr;};
    void deleteTargetTbName() { this->targetTbName_ = nullptr;};
    inline string targetTbName() const { DARABONBA_PTR_GET_DEFAULT(targetTbName_, "") };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setTargetTbName(string targetTbName) { DARABONBA_PTR_SET_VALUE(targetTbName_, targetTbName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBodyTableDetails& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when data verification was performed.
    std::shared_ptr<string> bootTime_ = nullptr;
    // The number of data rows that contain inconsistent data.
    std::shared_ptr<int64_t> diffCount_ = nullptr;
    // The error code returned if the data verification task failed. Valid values:
    // 
    // *   **1**: The number of tables that do not contain primary keys exceeds the limit.
    // *   **2**: The number of data rows that contain inconsistent data exceeds 300.
    // *   **3**: One or more tables to be verified do not exist.
    // *   **4**: The SQL statements used for verifying data contain a syntax error.
    std::shared_ptr<int32_t> errorCode_ = nullptr;
    // The number of data rows that were verified.
    std::shared_ptr<int64_t> finishCount_ = nullptr;
    // The auto-increment primary key that is used to identify the data in a verification result.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the source database.
    std::shared_ptr<string> sourceDbName_ = nullptr;
    // The name of the source table.
    std::shared_ptr<string> sourceTbName_ = nullptr;
    // The status of data verification results. Valid values:
    // 
    // *   **0**: The data verification task was complete.
    // *   **2**: The data verification task was being initialized.
    // *   **3**: The data verification task was in progress.
    // *   **5**: The data verification task failed.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the destination database.
    std::shared_ptr<string> targetDbName_ = nullptr;
    // The name of the destination table.
    std::shared_ptr<string> targetTbName_ = nullptr;
    // The total number of data rows.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
