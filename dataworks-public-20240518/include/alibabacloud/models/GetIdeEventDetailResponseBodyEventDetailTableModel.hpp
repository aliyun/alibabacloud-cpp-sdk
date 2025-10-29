// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILTABLEMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILTABLEMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIDEEventDetailResponseBodyEventDetailTableModelColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetailTableModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetailTableModel& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetailTableModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetIDEEventDetailResponseBodyEventDetailTableModel() = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModel(const GetIDEEventDetailResponseBodyEventDetailTableModel &) = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModel(GetIDEEventDetailResponseBodyEventDetailTableModel &&) = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetailTableModel() = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModel& operator=(const GetIDEEventDetailResponseBodyEventDetailTableModel &) = default ;
    GetIDEEventDetailResponseBodyEventDetailTableModel& operator=(GetIDEEventDetailResponseBodyEventDetailTableModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->comment_ == nullptr && return this->dataSourceName_ == nullptr && return this->env_ == nullptr && return this->lifeCycle_ == nullptr && return this->location_ == nullptr
        && return this->tableName_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Models::GetIDEEventDetailResponseBodyEventDetailTableModelColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Models::GetIDEEventDetailResponseBodyEventDetailTableModelColumns>) };
    inline vector<Models::GetIDEEventDetailResponseBodyEventDetailTableModelColumns> columns() { DARABONBA_PTR_GET(columns_, vector<Models::GetIDEEventDetailResponseBodyEventDetailTableModelColumns>) };
    inline GetIDEEventDetailResponseBodyEventDetailTableModel& setColumns(const vector<Models::GetIDEEventDetailResponseBodyEventDetailTableModelColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline GetIDEEventDetailResponseBodyEventDetailTableModel& setColumns(vector<Models::GetIDEEventDetailResponseBodyEventDetailTableModelColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailTableModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailTableModel& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailTableModel& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // lifeCycle Field Functions 
    bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
    void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
    inline int64_t lifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailTableModel& setLifeCycle(int64_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailTableModel& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailTableModel& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The columns in the table.
    std::shared_ptr<vector<Models::GetIDEEventDetailResponseBodyEventDetailTableModelColumns>> columns_ = nullptr;
    // The remarks of the table.
    std::shared_ptr<string> comment_ = nullptr;
    // The name of the data source to which the table belongs.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The environment in which the table is used. Valid values:
    // 
    // *   DEV
    // *   PROD
    std::shared_ptr<string> env_ = nullptr;
    // The lifecycle of the table. Unit: day.
    std::shared_ptr<int64_t> lifeCycle_ = nullptr;
    // The path of the table.
    std::shared_ptr<string> location_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
