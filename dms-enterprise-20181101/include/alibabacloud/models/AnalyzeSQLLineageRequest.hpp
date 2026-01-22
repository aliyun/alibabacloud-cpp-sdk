// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZESQLLINEAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZESQLLINEAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AnalyzeSQLLineageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeSQLLineageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(SqlContent, sqlContent_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeSQLLineageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(SqlContent, sqlContent_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    AnalyzeSQLLineageRequest() = default ;
    AnalyzeSQLLineageRequest(const AnalyzeSQLLineageRequest &) = default ;
    AnalyzeSQLLineageRequest(AnalyzeSQLLineageRequest &&) = default ;
    AnalyzeSQLLineageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeSQLLineageRequest() = default ;
    AnalyzeSQLLineageRequest& operator=(const AnalyzeSQLLineageRequest &) = default ;
    AnalyzeSQLLineageRequest& operator=(AnalyzeSQLLineageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && this->sqlContent_ == nullptr && this->tid_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline AnalyzeSQLLineageRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // sqlContent Field Functions 
    bool hasSqlContent() const { return this->sqlContent_ != nullptr;};
    void deleteSqlContent() { this->sqlContent_ = nullptr;};
    inline string getSqlContent() const { DARABONBA_PTR_GET_DEFAULT(sqlContent_, "") };
    inline AnalyzeSQLLineageRequest& setSqlContent(string sqlContent) { DARABONBA_PTR_SET_VALUE(sqlContent_, sqlContent) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AnalyzeSQLLineageRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The database ID.
    // 
    // >  You can call one of the [SearchDatabase](https://help.aliyun.com/document_detail/141876.html), [ListDatabases](https://help.aliyun.com/document_detail/141873.html), and [GetDatabase](https://help.aliyun.com/document_detail/141869.html) operations to obtain the database ID provided in the DatabaseId response parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dbId_ {};
    // The SQL statement.
    // 
    // This parameter is required.
    shared_ptr<string> sqlContent_ {};
    // The tenant ID.
    // 
    // >  To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
