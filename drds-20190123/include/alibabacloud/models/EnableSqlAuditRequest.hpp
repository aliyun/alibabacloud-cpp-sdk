// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESQLAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESQLAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class EnableSqlAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSqlAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(IsRecall, isRecall_);
      DARABONBA_PTR_TO_JSON(RecallEndTimestamp, recallEndTimestamp_);
      DARABONBA_PTR_TO_JSON(RecallStartTimestamp, recallStartTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSqlAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(IsRecall, isRecall_);
      DARABONBA_PTR_FROM_JSON(RecallEndTimestamp, recallEndTimestamp_);
      DARABONBA_PTR_FROM_JSON(RecallStartTimestamp, recallStartTimestamp_);
    };
    EnableSqlAuditRequest() = default ;
    EnableSqlAuditRequest(const EnableSqlAuditRequest &) = default ;
    EnableSqlAuditRequest(EnableSqlAuditRequest &&) = default ;
    EnableSqlAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSqlAuditRequest() = default ;
    EnableSqlAuditRequest& operator=(const EnableSqlAuditRequest &) = default ;
    EnableSqlAuditRequest& operator=(EnableSqlAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->isRecall_ != nullptr && this->recallEndTimestamp_ != nullptr && this->recallStartTimestamp_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline EnableSqlAuditRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline EnableSqlAuditRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // isRecall Field Functions 
    bool hasIsRecall() const { return this->isRecall_ != nullptr;};
    void deleteIsRecall() { this->isRecall_ = nullptr;};
    inline bool isRecall() const { DARABONBA_PTR_GET_DEFAULT(isRecall_, false) };
    inline EnableSqlAuditRequest& setIsRecall(bool isRecall) { DARABONBA_PTR_SET_VALUE(isRecall_, isRecall) };


    // recallEndTimestamp Field Functions 
    bool hasRecallEndTimestamp() const { return this->recallEndTimestamp_ != nullptr;};
    void deleteRecallEndTimestamp() { this->recallEndTimestamp_ = nullptr;};
    inline string recallEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(recallEndTimestamp_, "") };
    inline EnableSqlAuditRequest& setRecallEndTimestamp(string recallEndTimestamp) { DARABONBA_PTR_SET_VALUE(recallEndTimestamp_, recallEndTimestamp) };


    // recallStartTimestamp Field Functions 
    bool hasRecallStartTimestamp() const { return this->recallStartTimestamp_ != nullptr;};
    void deleteRecallStartTimestamp() { this->recallStartTimestamp_ = nullptr;};
    inline string recallStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(recallStartTimestamp_, "") };
    inline EnableSqlAuditRequest& setRecallStartTimestamp(string recallStartTimestamp) { DARABONBA_PTR_SET_VALUE(recallStartTimestamp_, recallStartTimestamp) };


  protected:
    // The name of the database for which you want to enable the SQL audit feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // Specifies whether to backtrack historical SQL statements for auditing.
    std::shared_ptr<bool> isRecall_ = nullptr;
    // The timestamp that indicates when the backtracking ends. Unit: milliseconds.
    // 
    // > The end time of the backtracking must be later than the start time of the backtracking.
    std::shared_ptr<string> recallEndTimestamp_ = nullptr;
    // The timestamp that indicates when the backtracking starts. Unit: milliseconds.
    std::shared_ptr<string> recallStartTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
