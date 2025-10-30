// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETIMVMONITORDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETIMVMONITORDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ResetIMVMonitorDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetIMVMonitorDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
    };
    friend void from_json(const Darabonba::Json& j, ResetIMVMonitorDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
    };
    ResetIMVMonitorDataRequest() = default ;
    ResetIMVMonitorDataRequest(const ResetIMVMonitorDataRequest &) = default ;
    ResetIMVMonitorDataRequest(ResetIMVMonitorDataRequest &&) = default ;
    ResetIMVMonitorDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetIMVMonitorDataRequest() = default ;
    ResetIMVMonitorDataRequest& operator=(const ResetIMVMonitorDataRequest &) = default ;
    ResetIMVMonitorDataRequest& operator=(ResetIMVMonitorDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->database_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ResetIMVMonitorDataRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ResetIMVMonitorDataRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> database_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
