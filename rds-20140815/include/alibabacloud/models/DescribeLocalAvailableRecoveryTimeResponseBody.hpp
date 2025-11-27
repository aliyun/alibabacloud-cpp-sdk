// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCALAVAILABLERECOVERYTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCALAVAILABLERECOVERYTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeLocalAvailableRecoveryTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLocalAvailableRecoveryTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RecoveryBeginTime, recoveryBeginTime_);
      DARABONBA_PTR_TO_JSON(RecoveryEndTime, recoveryEndTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLocalAvailableRecoveryTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RecoveryBeginTime, recoveryBeginTime_);
      DARABONBA_PTR_FROM_JSON(RecoveryEndTime, recoveryEndTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLocalAvailableRecoveryTimeResponseBody() = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody(const DescribeLocalAvailableRecoveryTimeResponseBody &) = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody(DescribeLocalAvailableRecoveryTimeResponseBody &&) = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLocalAvailableRecoveryTimeResponseBody() = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody& operator=(const DescribeLocalAvailableRecoveryTimeResponseBody &) = default ;
    DescribeLocalAvailableRecoveryTimeResponseBody& operator=(DescribeLocalAvailableRecoveryTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->recoveryBeginTime_ == nullptr && return this->recoveryEndTime_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeLocalAvailableRecoveryTimeResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // recoveryBeginTime Field Functions 
    bool hasRecoveryBeginTime() const { return this->recoveryBeginTime_ != nullptr;};
    void deleteRecoveryBeginTime() { this->recoveryBeginTime_ = nullptr;};
    inline string recoveryBeginTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryBeginTime_, "") };
    inline DescribeLocalAvailableRecoveryTimeResponseBody& setRecoveryBeginTime(string recoveryBeginTime) { DARABONBA_PTR_SET_VALUE(recoveryBeginTime_, recoveryBeginTime) };


    // recoveryEndTime Field Functions 
    bool hasRecoveryEndTime() const { return this->recoveryEndTime_ != nullptr;};
    void deleteRecoveryEndTime() { this->recoveryEndTime_ = nullptr;};
    inline string recoveryEndTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryEndTime_, "") };
    inline DescribeLocalAvailableRecoveryTimeResponseBody& setRecoveryEndTime(string recoveryEndTime) { DARABONBA_PTR_SET_VALUE(recoveryEndTime_, recoveryEndTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLocalAvailableRecoveryTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The start of the time range to which the instance can be restored.
    std::shared_ptr<string> recoveryBeginTime_ = nullptr;
    // The end of the time range to which the instance can be restored.
    std::shared_ptr<string> recoveryEndTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
