// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATEMIGRATIONTARGETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATEMIGRATIONTARGETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ActivateMigrationTargetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateMigrationTargetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateMigrationTargetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ActivateMigrationTargetInstanceResponseBody() = default ;
    ActivateMigrationTargetInstanceResponseBody(const ActivateMigrationTargetInstanceResponseBody &) = default ;
    ActivateMigrationTargetInstanceResponseBody(ActivateMigrationTargetInstanceResponseBody &&) = default ;
    ActivateMigrationTargetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateMigrationTargetInstanceResponseBody() = default ;
    ActivateMigrationTargetInstanceResponseBody& operator=(const ActivateMigrationTargetInstanceResponseBody &) = default ;
    ActivateMigrationTargetInstanceResponseBody& operator=(ActivateMigrationTargetInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->requestId_ == nullptr && return this->sourceIpAddress_ == nullptr && return this->sourcePort_ == nullptr && return this->taskId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ActivateMigrationTargetInstanceResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ActivateMigrationTargetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string sourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline ActivateMigrationTargetInstanceResponseBody& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline ActivateMigrationTargetInstanceResponseBody& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ActivateMigrationTargetInstanceResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The name of the destination instance.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The private IP address that is used to connect to the self-managed PostgreSQL instance.
    std::shared_ptr<string> sourceIpAddress_ = nullptr;
    // The port number that is used to connect to the self-managed PostgreSQL instance.
    std::shared_ptr<int64_t> sourcePort_ = nullptr;
    // The ID of the identification task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
