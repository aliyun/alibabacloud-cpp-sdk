// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYPERFORMANCERESPONSEBODYITEMSDBINSTANCEPERFORMANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYPERFORMANCERESPONSEBODYITEMSDBINSTANCEPERFORMANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& obj) { 
      DARABONBA_PTR_TO_JSON(CPUUsage, CPUUsage_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_TO_JSON(IOPSUsage, IOPSUsage_);
      DARABONBA_PTR_TO_JSON(SessionUsage, sessionUsage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& obj) { 
      DARABONBA_PTR_FROM_JSON(CPUUsage, CPUUsage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_FROM_JSON(IOPSUsage, IOPSUsage_);
      DARABONBA_PTR_FROM_JSON(SessionUsage, sessionUsage_);
    };
    DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance() = default ;
    DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance(const DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance &) = default ;
    DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance(DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance &&) = default ;
    DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance() = default ;
    DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& operator=(const DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance &) = default ;
    DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& operator=(DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPUUsage_ == nullptr
        && return this->DBInstanceDescription_ == nullptr && return this->DBInstanceId_ == nullptr && return this->diskUsage_ == nullptr && return this->IOPSUsage_ == nullptr && return this->sessionUsage_ == nullptr; };
    // CPUUsage Field Functions 
    bool hasCPUUsage() const { return this->CPUUsage_ != nullptr;};
    void deleteCPUUsage() { this->CPUUsage_ = nullptr;};
    inline string CPUUsage() const { DARABONBA_PTR_GET_DEFAULT(CPUUsage_, "") };
    inline DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& setCPUUsage(string CPUUsage) { DARABONBA_PTR_SET_VALUE(CPUUsage_, CPUUsage) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // diskUsage Field Functions 
    bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
    void deleteDiskUsage() { this->diskUsage_ = nullptr;};
    inline string diskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, "") };
    inline DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& setDiskUsage(string diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


    // IOPSUsage Field Functions 
    bool hasIOPSUsage() const { return this->IOPSUsage_ != nullptr;};
    void deleteIOPSUsage() { this->IOPSUsage_ = nullptr;};
    inline string IOPSUsage() const { DARABONBA_PTR_GET_DEFAULT(IOPSUsage_, "") };
    inline DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& setIOPSUsage(string IOPSUsage) { DARABONBA_PTR_SET_VALUE(IOPSUsage_, IOPSUsage) };


    // sessionUsage Field Functions 
    bool hasSessionUsage() const { return this->sessionUsage_ != nullptr;};
    void deleteSessionUsage() { this->sessionUsage_ = nullptr;};
    inline string sessionUsage() const { DARABONBA_PTR_GET_DEFAULT(sessionUsage_, "") };
    inline DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance& setSessionUsage(string sessionUsage) { DARABONBA_PTR_SET_VALUE(sessionUsage_, sessionUsage) };


  protected:
    // The CPU utilization of the instance in percentage.
    std::shared_ptr<string> CPUUsage_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The disk usage of the instance in percentage.
    std::shared_ptr<string> diskUsage_ = nullptr;
    // The IOPS usage of the instance in percentage.
    std::shared_ptr<string> IOPSUsage_ = nullptr;
    // The number of sessions.
    std::shared_ptr<string> sessionUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
