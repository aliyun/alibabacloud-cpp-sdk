// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLESQLDRYRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SINGLESQLDRYRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class SingleSqlDryRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleSqlDryRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(datasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, SingleSqlDryRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(datasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(sql, sql_);
    };
    SingleSqlDryRunRequest() = default ;
    SingleSqlDryRunRequest(const SingleSqlDryRunRequest &) = default ;
    SingleSqlDryRunRequest(SingleSqlDryRunRequest &&) = default ;
    SingleSqlDryRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleSqlDryRunRequest() = default ;
    SingleSqlDryRunRequest& operator=(const SingleSqlDryRunRequest &) = default ;
    SingleSqlDryRunRequest& operator=(SingleSqlDryRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasourceName_ == nullptr
        && this->sql_ == nullptr; };
    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline SingleSqlDryRunRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline SingleSqlDryRunRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The data source name.
    shared_ptr<string> datasourceName_ {};
    // The SQL statement.
    shared_ptr<string> sql_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
