// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINITIALIZATIONSTATUSRESPONSEBODYDATAINITIALIZATIONDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINITIALIZATIONSTATUSRESPONSEBODYDATAINITIALIZATIONDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeInitializationStatusResponseBodyDataInitializationDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInitializationStatusResponseBodyDataInitializationDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FinishRowNum, finishRowNum_);
      DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TotalRowNum, totalRowNum_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInitializationStatusResponseBodyDataInitializationDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FinishRowNum, finishRowNum_);
      DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TotalRowNum, totalRowNum_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
    };
    DescribeInitializationStatusResponseBodyDataInitializationDetails() = default ;
    DescribeInitializationStatusResponseBodyDataInitializationDetails(const DescribeInitializationStatusResponseBodyDataInitializationDetails &) = default ;
    DescribeInitializationStatusResponseBodyDataInitializationDetails(DescribeInitializationStatusResponseBodyDataInitializationDetails &&) = default ;
    DescribeInitializationStatusResponseBodyDataInitializationDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInitializationStatusResponseBodyDataInitializationDetails() = default ;
    DescribeInitializationStatusResponseBodyDataInitializationDetails& operator=(const DescribeInitializationStatusResponseBodyDataInitializationDetails &) = default ;
    DescribeInitializationStatusResponseBodyDataInitializationDetails& operator=(DescribeInitializationStatusResponseBodyDataInitializationDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationOwnerDBName_ != nullptr
        && this->errorMessage_ != nullptr && this->finishRowNum_ != nullptr && this->sourceOwnerDBName_ != nullptr && this->status_ != nullptr && this->tableName_ != nullptr
        && this->totalRowNum_ != nullptr && this->usedTime_ != nullptr; };
    // destinationOwnerDBName Field Functions 
    bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
    void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
    inline string destinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
    inline DescribeInitializationStatusResponseBodyDataInitializationDetails& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeInitializationStatusResponseBodyDataInitializationDetails& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishRowNum Field Functions 
    bool hasFinishRowNum() const { return this->finishRowNum_ != nullptr;};
    void deleteFinishRowNum() { this->finishRowNum_ = nullptr;};
    inline string finishRowNum() const { DARABONBA_PTR_GET_DEFAULT(finishRowNum_, "") };
    inline DescribeInitializationStatusResponseBodyDataInitializationDetails& setFinishRowNum(string finishRowNum) { DARABONBA_PTR_SET_VALUE(finishRowNum_, finishRowNum) };


    // sourceOwnerDBName Field Functions 
    bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
    void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
    inline string sourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
    inline DescribeInitializationStatusResponseBodyDataInitializationDetails& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInitializationStatusResponseBodyDataInitializationDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeInitializationStatusResponseBodyDataInitializationDetails& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalRowNum Field Functions 
    bool hasTotalRowNum() const { return this->totalRowNum_ != nullptr;};
    void deleteTotalRowNum() { this->totalRowNum_ = nullptr;};
    inline string totalRowNum() const { DARABONBA_PTR_GET_DEFAULT(totalRowNum_, "") };
    inline DescribeInitializationStatusResponseBodyDataInitializationDetails& setTotalRowNum(string totalRowNum) { DARABONBA_PTR_SET_VALUE(totalRowNum_, totalRowNum) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline DescribeInitializationStatusResponseBodyDataInitializationDetails& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    // The name of the database to which the object in the destination instance belongs.
    std::shared_ptr<string> destinationOwnerDBName_ = nullptr;
    // The error message returned if initial full data synchronization failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The total number of rows that are actually synchronized.
    // 
    // >  This parameter indicates the total number of actually synchronized rows. In contrast, the value of the **TotalRowNum** parameter is calculated based on the system tables in the source database. The values of the two parameters may be different due to time difference.
    std::shared_ptr<string> finishRowNum_ = nullptr;
    // The name of the database to which the object in the source instance belongs.
    std::shared_ptr<string> sourceOwnerDBName_ = nullptr;
    // The status of initial full data synchronization. Valid values:
    // 
    // *   **NotStarted**
    // *   **Migrating**
    // *   **Failed**
    // *   **Finished**
    std::shared_ptr<string> status_ = nullptr;
    // The table name.
    std::shared_ptr<string> tableName_ = nullptr;
    // The total number of rows that are supposed to be synchronized.
    // 
    // >  The value of this parameter is calculated based on the system tables in the source database. In contrast, the **FinishRowNum** parameter indicates the total number of actually synchronized rows. The values of the two parameters may be different due to time difference.
    std::shared_ptr<string> totalRowNum_ = nullptr;
    // The time spent on full data synchronization.
    std::shared_ptr<string> usedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
