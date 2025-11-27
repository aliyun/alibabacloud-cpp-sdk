// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOLLATIONTIMEZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOLLATIONTIMEZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyCollationTimeZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCollationTimeZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Collation, collation_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCollationTimeZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Collation, collation_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
    };
    ModifyCollationTimeZoneResponseBody() = default ;
    ModifyCollationTimeZoneResponseBody(const ModifyCollationTimeZoneResponseBody &) = default ;
    ModifyCollationTimeZoneResponseBody(ModifyCollationTimeZoneResponseBody &&) = default ;
    ModifyCollationTimeZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCollationTimeZoneResponseBody() = default ;
    ModifyCollationTimeZoneResponseBody& operator=(const ModifyCollationTimeZoneResponseBody &) = default ;
    ModifyCollationTimeZoneResponseBody& operator=(ModifyCollationTimeZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collation_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->requestId_ == nullptr && return this->taskId_ == nullptr && return this->timezone_ == nullptr; };
    // collation Field Functions 
    bool hasCollation() const { return this->collation_ != nullptr;};
    void deleteCollation() { this->collation_ = nullptr;};
    inline string collation() const { DARABONBA_PTR_GET_DEFAULT(collation_, "") };
    inline ModifyCollationTimeZoneResponseBody& setCollation(string collation) { DARABONBA_PTR_SET_VALUE(collation_, collation) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyCollationTimeZoneResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCollationTimeZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyCollationTimeZoneResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ModifyCollationTimeZoneResponseBody& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


  protected:
    // The character set collation of the instance.
    std::shared_ptr<string> collation_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The time zone.
    std::shared_ptr<string> timezone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
