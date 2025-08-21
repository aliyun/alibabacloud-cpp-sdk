// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORREQUESTSAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETERRORREQUESTSAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetErrorRequestSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorRequestSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorRequestSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    GetErrorRequestSampleRequest() = default ;
    GetErrorRequestSampleRequest(const GetErrorRequestSampleRequest &) = default ;
    GetErrorRequestSampleRequest(GetErrorRequestSampleRequest &&) = default ;
    GetErrorRequestSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorRequestSampleRequest() = default ;
    GetErrorRequestSampleRequest& operator=(const GetErrorRequestSampleRequest &) = default ;
    GetErrorRequestSampleRequest& operator=(GetErrorRequestSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->end_ != nullptr && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->sqlId_ != nullptr && this->start_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetErrorRequestSampleRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetErrorRequestSampleRequest& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetErrorRequestSampleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetErrorRequestSampleRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetErrorRequestSampleRequest& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline GetErrorRequestSampleRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time. The interval cannot exceed 24 hours.
    std::shared_ptr<int64_t> end_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The node ID.
    // 
    // >  You must specify the node ID if your database instance is a PolarDB for MySQL cluster.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The SQL query ID. You can call the [GetAsyncErrorRequestListByCode](https://help.aliyun.com/document_detail/410746.html) operation to query the ID of the SQL query for which MySQL error code is returned.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The start time must be within the storage duration of the SQL Explorer feature of the database instance, and can be up to 90 days earlier than the current time.
    std::shared_ptr<int64_t> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
