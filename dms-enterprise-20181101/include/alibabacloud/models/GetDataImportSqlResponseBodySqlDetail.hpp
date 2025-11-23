// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAIMPORTSQLRESPONSEBODYSQLDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATAIMPORTSQLRESPONSEBODYSQLDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataImportSQLResponseBodySQLDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataImportSQLResponseBodySQLDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ExecSql, execSql_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataImportSQLResponseBodySQLDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecSql, execSql_);
    };
    GetDataImportSQLResponseBodySQLDetail() = default ;
    GetDataImportSQLResponseBodySQLDetail(const GetDataImportSQLResponseBodySQLDetail &) = default ;
    GetDataImportSQLResponseBodySQLDetail(GetDataImportSQLResponseBodySQLDetail &&) = default ;
    GetDataImportSQLResponseBodySQLDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataImportSQLResponseBodySQLDetail() = default ;
    GetDataImportSQLResponseBodySQLDetail& operator=(const GetDataImportSQLResponseBodySQLDetail &) = default ;
    GetDataImportSQLResponseBodySQLDetail& operator=(GetDataImportSQLResponseBodySQLDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execSql_ == nullptr; };
    // execSql Field Functions 
    bool hasExecSql() const { return this->execSql_ != nullptr;};
    void deleteExecSql() { this->execSql_ = nullptr;};
    inline string execSql() const { DARABONBA_PTR_GET_DEFAULT(execSql_, "") };
    inline GetDataImportSQLResponseBodySQLDetail& setExecSql(string execSql) { DARABONBA_PTR_SET_VALUE(execSql_, execSql) };


  protected:
    // The SQL script.
    std::shared_ptr<string> execSql_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
