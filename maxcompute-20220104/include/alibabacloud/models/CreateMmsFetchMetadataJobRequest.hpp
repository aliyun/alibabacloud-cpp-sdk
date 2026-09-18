// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSFETCHMETADATAJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSFETCHMETADATAJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsFetchMetadataJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsFetchMetadataJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(tableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsFetchMetadataJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(tableNames, tableNames_);
    };
    CreateMmsFetchMetadataJobRequest() = default ;
    CreateMmsFetchMetadataJobRequest(const CreateMmsFetchMetadataJobRequest &) = default ;
    CreateMmsFetchMetadataJobRequest(CreateMmsFetchMetadataJobRequest &&) = default ;
    CreateMmsFetchMetadataJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsFetchMetadataJobRequest() = default ;
    CreateMmsFetchMetadataJobRequest& operator=(const CreateMmsFetchMetadataJobRequest &) = default ;
    CreateMmsFetchMetadataJobRequest& operator=(CreateMmsFetchMetadataJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->tableNames_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateMmsFetchMetadataJobRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> getTableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline CreateMmsFetchMetadataJobRequest& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline CreateMmsFetchMetadataJobRequest& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


  protected:
    // Updates metadata for the specified source database, schema, or dataset.
    shared_ptr<string> dbName_ {};
    // Updates metadata for the specified source tables.
    shared_ptr<vector<string>> tableNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
