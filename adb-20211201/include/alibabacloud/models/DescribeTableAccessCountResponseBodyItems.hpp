// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEACCESSCOUNTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEACCESSCOUNTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTableAccessCountResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableAccessCountResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AccessCount, accessCount_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(ReportDate, reportDate_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableAccessCountResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessCount, accessCount_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(ReportDate, reportDate_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
    };
    DescribeTableAccessCountResponseBodyItems() = default ;
    DescribeTableAccessCountResponseBodyItems(const DescribeTableAccessCountResponseBodyItems &) = default ;
    DescribeTableAccessCountResponseBodyItems(DescribeTableAccessCountResponseBodyItems &&) = default ;
    DescribeTableAccessCountResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableAccessCountResponseBodyItems() = default ;
    DescribeTableAccessCountResponseBodyItems& operator=(const DescribeTableAccessCountResponseBodyItems &) = default ;
    DescribeTableAccessCountResponseBodyItems& operator=(DescribeTableAccessCountResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessCount_ == nullptr
        && return this->instanceName_ == nullptr && return this->reportDate_ == nullptr && return this->tableName_ == nullptr && return this->tableSchema_ == nullptr; };
    // accessCount Field Functions 
    bool hasAccessCount() const { return this->accessCount_ != nullptr;};
    void deleteAccessCount() { this->accessCount_ = nullptr;};
    inline string accessCount() const { DARABONBA_PTR_GET_DEFAULT(accessCount_, "") };
    inline DescribeTableAccessCountResponseBodyItems& setAccessCount(string accessCount) { DARABONBA_PTR_SET_VALUE(accessCount_, accessCount) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeTableAccessCountResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // reportDate Field Functions 
    bool hasReportDate() const { return this->reportDate_ != nullptr;};
    void deleteReportDate() { this->reportDate_ = nullptr;};
    inline string reportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, "") };
    inline DescribeTableAccessCountResponseBodyItems& setReportDate(string reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeTableAccessCountResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchema Field Functions 
    bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
    void deleteTableSchema() { this->tableSchema_ = nullptr;};
    inline string tableSchema() const { DARABONBA_PTR_GET_DEFAULT(tableSchema_, "") };
    inline DescribeTableAccessCountResponseBodyItems& setTableSchema(string tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };


  protected:
    // The number of accesses to the table.
    std::shared_ptr<string> accessCount_ = nullptr;
    // The ID of the cluster to which the table belongs.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The date when the table was accessed.
    std::shared_ptr<string> reportDate_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The database to which the table belongs.
    std::shared_ptr<string> tableSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
