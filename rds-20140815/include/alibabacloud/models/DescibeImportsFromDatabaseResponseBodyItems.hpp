// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCIBEIMPORTSFROMDATABASERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCIBEIMPORTSFROMDATABASERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescibeImportsFromDatabaseResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescibeImportsFromDatabaseResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ImportResultFromDB, importResultFromDB_);
    };
    friend void from_json(const Darabonba::Json& j, DescibeImportsFromDatabaseResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportResultFromDB, importResultFromDB_);
    };
    DescibeImportsFromDatabaseResponseBodyItems() = default ;
    DescibeImportsFromDatabaseResponseBodyItems(const DescibeImportsFromDatabaseResponseBodyItems &) = default ;
    DescibeImportsFromDatabaseResponseBodyItems(DescibeImportsFromDatabaseResponseBodyItems &&) = default ;
    DescibeImportsFromDatabaseResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescibeImportsFromDatabaseResponseBodyItems() = default ;
    DescibeImportsFromDatabaseResponseBodyItems& operator=(const DescibeImportsFromDatabaseResponseBodyItems &) = default ;
    DescibeImportsFromDatabaseResponseBodyItems& operator=(DescibeImportsFromDatabaseResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importResultFromDB_ == nullptr; };
    // importResultFromDB Field Functions 
    bool hasImportResultFromDB() const { return this->importResultFromDB_ != nullptr;};
    void deleteImportResultFromDB() { this->importResultFromDB_ = nullptr;};
    inline const vector<Models::DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB> & importResultFromDB() const { DARABONBA_PTR_GET_CONST(importResultFromDB_, vector<Models::DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB>) };
    inline vector<Models::DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB> importResultFromDB() { DARABONBA_PTR_GET(importResultFromDB_, vector<Models::DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB>) };
    inline DescibeImportsFromDatabaseResponseBodyItems& setImportResultFromDB(const vector<Models::DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB> & importResultFromDB) { DARABONBA_PTR_SET_VALUE(importResultFromDB_, importResultFromDB) };
    inline DescibeImportsFromDatabaseResponseBodyItems& setImportResultFromDB(vector<Models::DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB> && importResultFromDB) { DARABONBA_PTR_SET_RVALUE(importResultFromDB_, importResultFromDB) };


  protected:
    std::shared_ptr<vector<Models::DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB>> importResultFromDB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
