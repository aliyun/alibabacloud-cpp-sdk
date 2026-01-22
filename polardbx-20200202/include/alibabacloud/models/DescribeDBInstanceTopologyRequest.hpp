// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTopologyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTopologyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MinuteSimple, minuteSimple_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTopologyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MinuteSimple, minuteSimple_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBInstanceTopologyRequest() = default ;
    DescribeDBInstanceTopologyRequest(const DescribeDBInstanceTopologyRequest &) = default ;
    DescribeDBInstanceTopologyRequest(DescribeDBInstanceTopologyRequest &&) = default ;
    DescribeDBInstanceTopologyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTopologyRequest() = default ;
    DescribeDBInstanceTopologyRequest& operator=(const DescribeDBInstanceTopologyRequest &) = default ;
    DescribeDBInstanceTopologyRequest& operator=(DescribeDBInstanceTopologyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->endTime_ == nullptr && this->minuteSimple_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceTopologyRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBInstanceTopologyRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // minuteSimple Field Functions 
    bool hasMinuteSimple() const { return this->minuteSimple_ != nullptr;};
    void deleteMinuteSimple() { this->minuteSimple_ = nullptr;};
    inline bool getMinuteSimple() const { DARABONBA_PTR_GET_DEFAULT(minuteSimple_, false) };
    inline DescribeDBInstanceTopologyRequest& setMinuteSimple(bool minuteSimple) { DARABONBA_PTR_SET_VALUE(minuteSimple_, minuteSimple) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceTopologyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBInstanceTopologyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<bool> minuteSimple_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
