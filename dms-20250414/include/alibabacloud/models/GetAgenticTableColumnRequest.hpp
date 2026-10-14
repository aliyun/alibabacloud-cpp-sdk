// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTICTABLECOLUMNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTICTABLECOLUMNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAgenticTableColumnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgenticTableColumnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(TableQualifiedName, tableQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgenticTableColumnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(TableQualifiedName, tableQualifiedName_);
    };
    GetAgenticTableColumnRequest() = default ;
    GetAgenticTableColumnRequest(const GetAgenticTableColumnRequest &) = default ;
    GetAgenticTableColumnRequest(GetAgenticTableColumnRequest &&) = default ;
    GetAgenticTableColumnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgenticTableColumnRequest() = default ;
    GetAgenticTableColumnRequest& operator=(const GetAgenticTableColumnRequest &) = default ;
    GetAgenticTableColumnRequest& operator=(GetAgenticTableColumnRequest &&) = default ;
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
    inline GetAgenticTableColumnRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // tableQualifiedName Field Functions 
    bool hasTableQualifiedName() const { return this->tableQualifiedName_ != nullptr;};
    void deleteTableQualifiedName() { this->tableQualifiedName_ = nullptr;};
    inline string getTableQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(tableQualifiedName_, "") };
    inline GetAgenticTableColumnRequest& setTableQualifiedName(string tableQualifiedName) { DARABONBA_PTR_SET_VALUE(tableQualifiedName_, tableQualifiedName) };


  protected:
    // The UUID of the database to which the table belongs. You can obtain the UUID by calling the ListAgenticDatabase or SearchAgenticDatabase operation.
    // 
    // This parameter is required.
    shared_ptr<string> databaseUuid_ {};
    // The fully qualified name of the table. You can obtain the name from the QualifiedName parameter returned by the ListAgenticTableBaseInfo operation. You must specify the complete name.
    // 
    // This parameter is required.
    shared_ptr<string> tableQualifiedName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
