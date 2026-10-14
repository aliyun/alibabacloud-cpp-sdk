// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTICTABLEINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTICTABLEINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAgenticTableIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgenticTableIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(TableQualifiedName, tableQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgenticTableIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(TableQualifiedName, tableQualifiedName_);
    };
    GetAgenticTableIndexRequest() = default ;
    GetAgenticTableIndexRequest(const GetAgenticTableIndexRequest &) = default ;
    GetAgenticTableIndexRequest(GetAgenticTableIndexRequest &&) = default ;
    GetAgenticTableIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgenticTableIndexRequest() = default ;
    GetAgenticTableIndexRequest& operator=(const GetAgenticTableIndexRequest &) = default ;
    GetAgenticTableIndexRequest& operator=(GetAgenticTableIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseUuid_ == nullptr
        && this->tableQualifiedName_ == nullptr; };
    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline GetAgenticTableIndexRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // tableQualifiedName Field Functions 
    bool hasTableQualifiedName() const { return this->tableQualifiedName_ != nullptr;};
    void deleteTableQualifiedName() { this->tableQualifiedName_ = nullptr;};
    inline string getTableQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(tableQualifiedName_, "") };
    inline GetAgenticTableIndexRequest& setTableQualifiedName(string tableQualifiedName) { DARABONBA_PTR_SET_VALUE(tableQualifiedName_, tableQualifiedName) };


  protected:
    // The UUID of the database to which the table belongs. You can obtain this value by calling ListAgenticDatabase or SearchAgenticDatabase.
    // 
    // This parameter is required.
    shared_ptr<string> databaseUuid_ {};
    // The fully qualified name of the table. You can obtain this value from the QualifiedName parameter returned by ListAgenticTableBaseInfo. You must specify the full name.
    // 
    // This parameter is required.
    shared_ptr<string> tableQualifiedName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
