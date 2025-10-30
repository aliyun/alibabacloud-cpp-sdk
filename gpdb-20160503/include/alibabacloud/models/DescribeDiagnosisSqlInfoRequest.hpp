// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDiagnosisSQLInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSQLInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(QueryID, queryID_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSQLInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(QueryID, queryID_);
    };
    DescribeDiagnosisSQLInfoRequest() = default ;
    DescribeDiagnosisSQLInfoRequest(const DescribeDiagnosisSQLInfoRequest &) = default ;
    DescribeDiagnosisSQLInfoRequest(DescribeDiagnosisSQLInfoRequest &&) = default ;
    DescribeDiagnosisSQLInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSQLInfoRequest() = default ;
    DescribeDiagnosisSQLInfoRequest& operator=(const DescribeDiagnosisSQLInfoRequest &) = default ;
    DescribeDiagnosisSQLInfoRequest& operator=(DescribeDiagnosisSQLInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->database_ == nullptr && return this->queryID_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // queryID Field Functions 
    bool hasQueryID() const { return this->queryID_ != nullptr;};
    void deleteQueryID() { this->queryID_ = nullptr;};
    inline string queryID() const { DARABONBA_PTR_GET_DEFAULT(queryID_, "") };
    inline DescribeDiagnosisSQLInfoRequest& setQueryID(string queryID) { DARABONBA_PTR_SET_VALUE(queryID_, queryID) };


  protected:
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query details about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> database_ = nullptr;
    // The query ID. It is a unique identifier of the query.
    // 
    // > You can call the [DescribeDiagnosisRecords](https://help.aliyun.com/document_detail/450511.html) operation to obtain query IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> queryID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
