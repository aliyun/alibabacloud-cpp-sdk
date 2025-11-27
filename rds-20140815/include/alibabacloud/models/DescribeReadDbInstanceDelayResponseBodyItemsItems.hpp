// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames.hpp>
#include <alibabacloud/models/DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes.hpp>
#include <alibabacloud/models/DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReadDBInstanceDelayResponseBodyItemsItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReadDBInstanceDelayResponseBodyItemsItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ReadDBInstanceNames, readDBInstanceNames_);
      DARABONBA_PTR_TO_JSON(ReadDelayTimes, readDelayTimes_);
      DARABONBA_PTR_TO_JSON(ReadonlyInstanceDelay, readonlyInstanceDelay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReadDBInstanceDelayResponseBodyItemsItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReadDBInstanceNames, readDBInstanceNames_);
      DARABONBA_PTR_FROM_JSON(ReadDelayTimes, readDelayTimes_);
      DARABONBA_PTR_FROM_JSON(ReadonlyInstanceDelay, readonlyInstanceDelay_);
    };
    DescribeReadDBInstanceDelayResponseBodyItemsItems() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItems(const DescribeReadDBInstanceDelayResponseBodyItemsItems &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItems(DescribeReadDBInstanceDelayResponseBodyItemsItems &&) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReadDBInstanceDelayResponseBodyItemsItems() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItems& operator=(const DescribeReadDBInstanceDelayResponseBodyItemsItems &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItems& operator=(DescribeReadDBInstanceDelayResponseBodyItemsItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->readDBInstanceNames_ == nullptr && return this->readDelayTimes_ == nullptr && return this->readonlyInstanceDelay_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // readDBInstanceNames Field Functions 
    bool hasReadDBInstanceNames() const { return this->readDBInstanceNames_ != nullptr;};
    void deleteReadDBInstanceNames() { this->readDBInstanceNames_ = nullptr;};
    inline const Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames & readDBInstanceNames() const { DARABONBA_PTR_GET_CONST(readDBInstanceNames_, Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames) };
    inline Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames readDBInstanceNames() { DARABONBA_PTR_GET(readDBInstanceNames_, Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItems& setReadDBInstanceNames(const Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames & readDBInstanceNames) { DARABONBA_PTR_SET_VALUE(readDBInstanceNames_, readDBInstanceNames) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItems& setReadDBInstanceNames(Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames && readDBInstanceNames) { DARABONBA_PTR_SET_RVALUE(readDBInstanceNames_, readDBInstanceNames) };


    // readDelayTimes Field Functions 
    bool hasReadDelayTimes() const { return this->readDelayTimes_ != nullptr;};
    void deleteReadDelayTimes() { this->readDelayTimes_ = nullptr;};
    inline const Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes & readDelayTimes() const { DARABONBA_PTR_GET_CONST(readDelayTimes_, Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes) };
    inline Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes readDelayTimes() { DARABONBA_PTR_GET(readDelayTimes_, Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItems& setReadDelayTimes(const Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes & readDelayTimes) { DARABONBA_PTR_SET_VALUE(readDelayTimes_, readDelayTimes) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItems& setReadDelayTimes(Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes && readDelayTimes) { DARABONBA_PTR_SET_RVALUE(readDelayTimes_, readDelayTimes) };


    // readonlyInstanceDelay Field Functions 
    bool hasReadonlyInstanceDelay() const { return this->readonlyInstanceDelay_ != nullptr;};
    void deleteReadonlyInstanceDelay() { this->readonlyInstanceDelay_ = nullptr;};
    inline const Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay & readonlyInstanceDelay() const { DARABONBA_PTR_GET_CONST(readonlyInstanceDelay_, Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay) };
    inline Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay readonlyInstanceDelay() { DARABONBA_PTR_GET(readonlyInstanceDelay_, Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItems& setReadonlyInstanceDelay(const Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay & readonlyInstanceDelay) { DARABONBA_PTR_SET_VALUE(readonlyInstanceDelay_, readonlyInstanceDelay) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItems& setReadonlyInstanceDelay(Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay && readonlyInstanceDelay) { DARABONBA_PTR_SET_RVALUE(readonlyInstanceDelay_, readonlyInstanceDelay) };


  protected:
    // The primary instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // An array that consists of information about the read-only instance.
    std::shared_ptr<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames> readDBInstanceNames_ = nullptr;
    // The latency of data replication.
    std::shared_ptr<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes> readDelayTimes_ = nullptr;
    // The information about the write-ahead log (WAL) latency.
    // 
    // >  This parameter is returned only when the primary instance runs PostgreSQL.
    std::shared_ptr<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay> readonlyInstanceDelay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
