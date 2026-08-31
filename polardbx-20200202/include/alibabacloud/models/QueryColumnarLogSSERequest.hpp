// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLUMNARLOGSSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLUMNARLOGSSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class QueryColumnarLogSSERequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryColumnarLogSSERequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(MaxResultRows, maxResultRows_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
    };
    friend void from_json(const Darabonba::Json& j, QueryColumnarLogSSERequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(MaxResultRows, maxResultRows_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
    };
    QueryColumnarLogSSERequest() = default ;
    QueryColumnarLogSSERequest(const QueryColumnarLogSSERequest &) = default ;
    QueryColumnarLogSSERequest(QueryColumnarLogSSERequest &&) = default ;
    QueryColumnarLogSSERequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryColumnarLogSSERequest() = default ;
    QueryColumnarLogSSERequest& operator=(const QueryColumnarLogSSERequest &) = default ;
    QueryColumnarLogSSERequest& operator=(QueryColumnarLogSSERequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->maxResultRows_ == nullptr && this->regionId_ == nullptr && this->SQL_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline QueryColumnarLogSSERequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // maxResultRows Field Functions 
    bool hasMaxResultRows() const { return this->maxResultRows_ != nullptr;};
    void deleteMaxResultRows() { this->maxResultRows_ = nullptr;};
    inline int64_t getMaxResultRows() const { DARABONBA_PTR_GET_DEFAULT(maxResultRows_, 0L) };
    inline QueryColumnarLogSSERequest& setMaxResultRows(int64_t maxResultRows) { DARABONBA_PTR_SET_VALUE(maxResultRows_, maxResultRows) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryColumnarLogSSERequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline QueryColumnarLogSSERequest& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


  protected:
    // The ID of the PolarDB-X instance whose column store audit logs you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The maximum number of result rows to return for this request. Valid values: 1 to 10000. If this parameter is not specified, no additional row limit is imposed on the SQL submitted by the caller. The server-side SSE upper limit of 10000 rows and the top-level LIMIT clause in the SQL statement still apply.
    shared_ptr<int64_t> maxResultRows_ {};
    // The region ID of the request. The value must match the region where the SQLQuery service is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The read-only query statement to execute. Only a single MySQL SELECT statement is supported, and it must access the fully qualified polardbx_sls table. Multi-statement queries, write operations, locks, user variables, dynamic placeholders, and reserved hints are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> SQL_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
