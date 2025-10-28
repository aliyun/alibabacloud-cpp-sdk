// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTSTATBYCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTSTATBYCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAsyncErrorRequestStatByCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncErrorRequestStatByCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncErrorRequestStatByCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    GetAsyncErrorRequestStatByCodeRequest() = default ;
    GetAsyncErrorRequestStatByCodeRequest(const GetAsyncErrorRequestStatByCodeRequest &) = default ;
    GetAsyncErrorRequestStatByCodeRequest(GetAsyncErrorRequestStatByCodeRequest &&) = default ;
    GetAsyncErrorRequestStatByCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncErrorRequestStatByCodeRequest() = default ;
    GetAsyncErrorRequestStatByCodeRequest& operator=(const GetAsyncErrorRequestStatByCodeRequest &) = default ;
    GetAsyncErrorRequestStatByCodeRequest& operator=(GetAsyncErrorRequestStatByCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->end_ == nullptr && return this->instanceId_ == nullptr && return this->nodeId_ == nullptr && return this->start_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetAsyncErrorRequestStatByCodeRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetAsyncErrorRequestStatByCodeRequest& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAsyncErrorRequestStatByCodeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetAsyncErrorRequestStatByCodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline GetAsyncErrorRequestStatByCodeRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The name of a database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time. The interval between the start time and the end time cannot exceed 24 hours.
    std::shared_ptr<int64_t> end_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The node ID.
    // 
    // >  This parameter must be specified for PolarDB for MySQL clusters.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The start time must be within the storage duration of the SQL Explorer feature of the database instance and can be up to 90 days earlier than the current time.
    std::shared_ptr<int64_t> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
