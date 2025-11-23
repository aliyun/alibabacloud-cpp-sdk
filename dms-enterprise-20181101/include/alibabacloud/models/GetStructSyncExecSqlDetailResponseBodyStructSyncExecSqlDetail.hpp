// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCEXECSQLDETAILRESPONSEBODYSTRUCTSYNCEXECSQLDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCEXECSQLDETAILRESPONSEBODYSTRUCTSYNCEXECSQLDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ExecSql, execSql_);
      DARABONBA_PTR_TO_JSON(TotalSqlCount, totalSqlCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecSql, execSql_);
      DARABONBA_PTR_FROM_JSON(TotalSqlCount, totalSqlCount_);
    };
    GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail() = default ;
    GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail(const GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail &) = default ;
    GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail(GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail &&) = default ;
    GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail() = default ;
    GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail& operator=(const GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail &) = default ;
    GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail& operator=(GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execSql_ == nullptr
        && return this->totalSqlCount_ == nullptr; };
    // execSql Field Functions 
    bool hasExecSql() const { return this->execSql_ != nullptr;};
    void deleteExecSql() { this->execSql_ = nullptr;};
    inline string execSql() const { DARABONBA_PTR_GET_DEFAULT(execSql_, "") };
    inline GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail& setExecSql(string execSql) { DARABONBA_PTR_SET_VALUE(execSql_, execSql) };


    // totalSqlCount Field Functions 
    bool hasTotalSqlCount() const { return this->totalSqlCount_ != nullptr;};
    void deleteTotalSqlCount() { this->totalSqlCount_ = nullptr;};
    inline int64_t totalSqlCount() const { DARABONBA_PTR_GET_DEFAULT(totalSqlCount_, 0L) };
    inline GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail& setTotalSqlCount(int64_t totalSqlCount) { DARABONBA_PTR_SET_VALUE(totalSqlCount_, totalSqlCount) };


  protected:
    // The SQL statements that are executed.
    std::shared_ptr<string> execSql_ = nullptr;
    // The total number of SQL statements.
    std::shared_ptr<int64_t> totalSqlCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
