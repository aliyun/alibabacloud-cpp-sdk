// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReadDBInstanceDelayResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReadDBInstanceDelayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReadDBInstanceDelayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ReadDBInstanceId, readDBInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReadDBInstanceDelayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ReadDBInstanceId, readDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeReadDBInstanceDelayResponseBody() = default ;
    DescribeReadDBInstanceDelayResponseBody(const DescribeReadDBInstanceDelayResponseBody &) = default ;
    DescribeReadDBInstanceDelayResponseBody(DescribeReadDBInstanceDelayResponseBody &&) = default ;
    DescribeReadDBInstanceDelayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReadDBInstanceDelayResponseBody() = default ;
    DescribeReadDBInstanceDelayResponseBody& operator=(const DescribeReadDBInstanceDelayResponseBody &) = default ;
    DescribeReadDBInstanceDelayResponseBody& operator=(DescribeReadDBInstanceDelayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->delayTime_ == nullptr && return this->items_ == nullptr && return this->readDBInstanceId_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeReadDBInstanceDelayResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline DescribeReadDBInstanceDelayResponseBody& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeReadDBInstanceDelayResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeReadDBInstanceDelayResponseBodyItems) };
    inline DescribeReadDBInstanceDelayResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeReadDBInstanceDelayResponseBodyItems) };
    inline DescribeReadDBInstanceDelayResponseBody& setItems(const DescribeReadDBInstanceDelayResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeReadDBInstanceDelayResponseBody& setItems(DescribeReadDBInstanceDelayResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // readDBInstanceId Field Functions 
    bool hasReadDBInstanceId() const { return this->readDBInstanceId_ != nullptr;};
    void deleteReadDBInstanceId() { this->readDBInstanceId_ = nullptr;};
    inline string readDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(readDBInstanceId_, "") };
    inline DescribeReadDBInstanceDelayResponseBody& setReadDBInstanceId(string readDBInstanceId) { DARABONBA_PTR_SET_VALUE(readDBInstanceId_, readDBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReadDBInstanceDelayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The primary instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The latency of data replication. Unit: seconds.
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    // The latency information.
    std::shared_ptr<DescribeReadDBInstanceDelayResponseBodyItems> items_ = nullptr;
    // The read-only instance ID.
    std::shared_ptr<string> readDBInstanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
