// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTSAMPLEBYINSTANCEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTSAMPLEBYINSTANCEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetFullRequestSampleByInstanceIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestSampleByInstanceIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestSampleByInstanceIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetFullRequestSampleByInstanceIdRequest() = default ;
    GetFullRequestSampleByInstanceIdRequest(const GetFullRequestSampleByInstanceIdRequest &) = default ;
    GetFullRequestSampleByInstanceIdRequest(GetFullRequestSampleByInstanceIdRequest &&) = default ;
    GetFullRequestSampleByInstanceIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestSampleByInstanceIdRequest() = default ;
    GetFullRequestSampleByInstanceIdRequest& operator=(const GetFullRequestSampleByInstanceIdRequest &) = default ;
    GetFullRequestSampleByInstanceIdRequest& operator=(GetFullRequestSampleByInstanceIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && this->instanceId_ == nullptr && this->role_ == nullptr && this->sqlId_ == nullptr && this->start_ == nullptr && this->userId_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetFullRequestSampleByInstanceIdRequest& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetFullRequestSampleByInstanceIdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetFullRequestSampleByInstanceIdRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetFullRequestSampleByInstanceIdRequest& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline GetFullRequestSampleByInstanceIdRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetFullRequestSampleByInstanceIdRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time. The interval between the start time and the end time must be equal to or greater than 1 hour.
    // 
    // This parameter is required.
    shared_ptr<int64_t> end_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The role of the PolarDB-X 2.0 node. Valid values:
    // 
    // *   **polarx_cn**: compute node.
    // *   **polarx_en**: data node.
    shared_ptr<string> role_ {};
    // The SQL statement ID.
    // 
    // This parameter is required.
    shared_ptr<string> sqlId_ {};
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The start time must be within the storage duration of the SQL Explorer feature of the database instance, and can be up to 90 days earlier than the current time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> start_ {};
    // The ID of the Alibaba Cloud account that is used to create the database instance.
    // 
    // >  This parameter is optional. The system can automatically obtain the account ID based on the value of InstanceId when you call this operation.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
