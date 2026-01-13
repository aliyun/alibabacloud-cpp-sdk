// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeWaitingSQLInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWaitingSQLInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(PID, PID_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWaitingSQLInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(PID, PID_);
    };
    DescribeWaitingSQLInfoRequest() = default ;
    DescribeWaitingSQLInfoRequest(const DescribeWaitingSQLInfoRequest &) = default ;
    DescribeWaitingSQLInfoRequest(DescribeWaitingSQLInfoRequest &&) = default ;
    DescribeWaitingSQLInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWaitingSQLInfoRequest() = default ;
    DescribeWaitingSQLInfoRequest& operator=(const DescribeWaitingSQLInfoRequest &) = default ;
    DescribeWaitingSQLInfoRequest& operator=(DescribeWaitingSQLInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->database_ == nullptr && this->PID_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeWaitingSQLInfoRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeWaitingSQLInfoRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // PID Field Functions 
    bool hasPID() const { return this->PID_ != nullptr;};
    void deletePID() { this->PID_ = nullptr;};
    inline string getPID() const { DARABONBA_PTR_GET_DEFAULT(PID_, "") };
    inline DescribeWaitingSQLInfoRequest& setPID(string PID) { DARABONBA_PTR_SET_VALUE(PID_, PID) };


  protected:
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the instance IDs of all AnalyticDB for PostgreSQL instances in a specific region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database.
    // 
    // This parameter is required.
    shared_ptr<string> database_ {};
    // The ID of the process that uniquely identifies the query.
    // 
    // >  You can call the [DescribeWaitingSQLRecords](https://help.aliyun.com/document_detail/461735.html) operation to obtain the process IDs of lock-waiting queries.
    // 
    // This parameter is required.
    shared_ptr<string> PID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
