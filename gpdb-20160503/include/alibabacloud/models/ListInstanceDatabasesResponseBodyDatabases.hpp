// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEDATABASESRESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEDATABASESRESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListInstanceDatabasesResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceDatabasesResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceDatabasesResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    ListInstanceDatabasesResponseBodyDatabases() = default ;
    ListInstanceDatabasesResponseBodyDatabases(const ListInstanceDatabasesResponseBodyDatabases &) = default ;
    ListInstanceDatabasesResponseBodyDatabases(ListInstanceDatabasesResponseBodyDatabases &&) = default ;
    ListInstanceDatabasesResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceDatabasesResponseBodyDatabases() = default ;
    ListInstanceDatabasesResponseBodyDatabases& operator=(const ListInstanceDatabasesResponseBodyDatabases &) = default ;
    ListInstanceDatabasesResponseBodyDatabases& operator=(ListInstanceDatabasesResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->description_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListInstanceDatabasesResponseBodyDatabases& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstanceDatabasesResponseBodyDatabases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
