// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DeleteDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(Cascade, cascade_);
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(Cascade, cascade_);
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteDatabaseRequest() = default ;
    DeleteDatabaseRequest(const DeleteDatabaseRequest &) = default ;
    DeleteDatabaseRequest(DeleteDatabaseRequest &&) = default ;
    DeleteDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDatabaseRequest() = default ;
    DeleteDatabaseRequest& operator=(const DeleteDatabaseRequest &) = default ;
    DeleteDatabaseRequest& operator=(DeleteDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && return this->cascade_ == nullptr && return this->catalogId_ == nullptr && return this->name_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline DeleteDatabaseRequest& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // cascade Field Functions 
    bool hasCascade() const { return this->cascade_ != nullptr;};
    void deleteCascade() { this->cascade_ = nullptr;};
    inline bool cascade() const { DARABONBA_PTR_GET_DEFAULT(cascade_, false) };
    inline DeleteDatabaseRequest& setCascade(bool cascade) { DARABONBA_PTR_SET_VALUE(cascade_, cascade) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline DeleteDatabaseRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteDatabaseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Whether to asynchronously execute.
    std::shared_ptr<bool> async_ = nullptr;
    // Whether to cascade delete data. Valid values:
    // 
    // *   true: deletes a table from the database.
    // *   false: does not delete tables from the database. If a table still exists in the database, the deletion fails.
    std::shared_ptr<bool> cascade_ = nullptr;
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
