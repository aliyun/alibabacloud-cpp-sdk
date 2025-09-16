// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListIndexesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(catalog, catalog_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(newMode, newMode_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(newMode, newMode_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    ListIndexesRequest() = default ;
    ListIndexesRequest(const ListIndexesRequest &) = default ;
    ListIndexesRequest(ListIndexesRequest &&) = default ;
    ListIndexesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesRequest() = default ;
    ListIndexesRequest& operator=(const ListIndexesRequest &) = default ;
    ListIndexesRequest& operator=(ListIndexesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalog_ != nullptr
        && this->database_ != nullptr && this->newMode_ != nullptr && this->table_ != nullptr; };
    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline string catalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
    inline ListIndexesRequest& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ListIndexesRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // newMode Field Functions 
    bool hasNewMode() const { return this->newMode_ != nullptr;};
    void deleteNewMode() { this->newMode_ = nullptr;};
    inline bool newMode() const { DARABONBA_PTR_GET_DEFAULT(newMode_, false) };
    inline ListIndexesRequest& setNewMode(bool newMode) { DARABONBA_PTR_SET_VALUE(newMode_, newMode) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline ListIndexesRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    std::shared_ptr<string> catalog_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    // Specifies whether the OpenSearch Vector Search Edition instance is of the new version.
    std::shared_ptr<bool> newMode_ = nullptr;
    std::shared_ptr<string> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
