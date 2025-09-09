// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTEXPANDPRECHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTEXPANDPRECHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitHotExpandPreCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotExpandPreCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(TableList, tableList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotExpandPreCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(TableList, tableList_);
    };
    SubmitHotExpandPreCheckTaskRequest() = default ;
    SubmitHotExpandPreCheckTaskRequest(const SubmitHotExpandPreCheckTaskRequest &) = default ;
    SubmitHotExpandPreCheckTaskRequest(SubmitHotExpandPreCheckTaskRequest &&) = default ;
    SubmitHotExpandPreCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotExpandPreCheckTaskRequest() = default ;
    SubmitHotExpandPreCheckTaskRequest& operator=(const SubmitHotExpandPreCheckTaskRequest &) = default ;
    SubmitHotExpandPreCheckTaskRequest& operator=(SubmitHotExpandPreCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbInstType_ != nullptr
        && this->dbName_ != nullptr && this->drdsInstanceId_ != nullptr && this->tableList_ != nullptr; };
    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline SubmitHotExpandPreCheckTaskRequest& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SubmitHotExpandPreCheckTaskRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SubmitHotExpandPreCheckTaskRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const vector<string> & tableList() const { DARABONBA_PTR_GET_CONST(tableList_, vector<string>) };
    inline vector<string> tableList() { DARABONBA_PTR_GET(tableList_, vector<string>) };
    inline SubmitHotExpandPreCheckTaskRequest& setTableList(const vector<string> & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline SubmitHotExpandPreCheckTaskRequest& setTableList(vector<string> && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


  protected:
    // The type of the database. Valid values:
    // 
    // *   RDS
    // *   PolarDB
    // 
    // This parameter is required.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The name of the PolarDB-X database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The name of the table.
    std::shared_ptr<vector<string>> tableList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
