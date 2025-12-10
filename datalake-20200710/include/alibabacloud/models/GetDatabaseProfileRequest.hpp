// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetDatabaseProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
    };
    GetDatabaseProfileRequest() = default ;
    GetDatabaseProfileRequest(const GetDatabaseProfileRequest &) = default ;
    GetDatabaseProfileRequest(GetDatabaseProfileRequest &&) = default ;
    GetDatabaseProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseProfileRequest() = default ;
    GetDatabaseProfileRequest& operator=(const GetDatabaseProfileRequest &) = default ;
    GetDatabaseProfileRequest& operator=(GetDatabaseProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline GetDatabaseProfileRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetDatabaseProfileRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


  protected:
    // The ID of the data directory. By default, the ID of the primary account is entered.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The name of the metadatabase.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
