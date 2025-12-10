// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABASERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DATABASERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DatabaseResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatabaseResource& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseWildcard, databaseWildcard_);
    };
    friend void from_json(const Darabonba::Json& j, DatabaseResource& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseWildcard, databaseWildcard_);
    };
    DatabaseResource() = default ;
    DatabaseResource(const DatabaseResource &) = default ;
    DatabaseResource(DatabaseResource &&) = default ;
    DatabaseResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatabaseResource() = default ;
    DatabaseResource& operator=(const DatabaseResource &) = default ;
    DatabaseResource& operator=(DatabaseResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->databaseWildcard_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DatabaseResource& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseWildcard Field Functions 
    bool hasDatabaseWildcard() const { return this->databaseWildcard_ != nullptr;};
    void deleteDatabaseWildcard() { this->databaseWildcard_ = nullptr;};
    inline string databaseWildcard() const { DARABONBA_PTR_GET_DEFAULT(databaseWildcard_, "") };
    inline DatabaseResource& setDatabaseWildcard(string databaseWildcard) { DARABONBA_PTR_SET_VALUE(databaseWildcard_, databaseWildcard) };


  protected:
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> databaseWildcard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
