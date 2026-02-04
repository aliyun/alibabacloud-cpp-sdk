// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASTERNODESHUTDOWNFAILOVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MASTERNODESHUTDOWNFAILOVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class MasterNodeShutDownFailOverResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MasterNodeShutDownFailOverResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskID, taskID_);
    };
    friend void from_json(const Darabonba::Json& j, MasterNodeShutDownFailOverResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskID, taskID_);
    };
    MasterNodeShutDownFailOverResponseBody() = default ;
    MasterNodeShutDownFailOverResponseBody(const MasterNodeShutDownFailOverResponseBody &) = default ;
    MasterNodeShutDownFailOverResponseBody(MasterNodeShutDownFailOverResponseBody &&) = default ;
    MasterNodeShutDownFailOverResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MasterNodeShutDownFailOverResponseBody() = default ;
    MasterNodeShutDownFailOverResponseBody& operator=(const MasterNodeShutDownFailOverResponseBody &) = default ;
    MasterNodeShutDownFailOverResponseBody& operator=(MasterNodeShutDownFailOverResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->requestId_ == nullptr && this->taskID_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline MasterNodeShutDownFailOverResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MasterNodeShutDownFailOverResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskID Field Functions 
    bool hasTaskID() const { return this->taskID_ != nullptr;};
    void deleteTaskID() { this->taskID_ = nullptr;};
    inline string getTaskID() const { DARABONBA_PTR_GET_DEFAULT(taskID_, "") };
    inline MasterNodeShutDownFailOverResponseBody& setTaskID(string taskID) { DARABONBA_PTR_SET_VALUE(taskID_, taskID) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task ID.
    shared_ptr<string> taskID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
