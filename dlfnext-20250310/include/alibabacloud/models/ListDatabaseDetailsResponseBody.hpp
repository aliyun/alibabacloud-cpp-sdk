// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Database.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListDatabaseDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(databaseDetails, databaseDetails_);
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(databaseDetails, databaseDetails_);
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
    };
    ListDatabaseDetailsResponseBody() = default ;
    ListDatabaseDetailsResponseBody(const ListDatabaseDetailsResponseBody &) = default ;
    ListDatabaseDetailsResponseBody(ListDatabaseDetailsResponseBody &&) = default ;
    ListDatabaseDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseDetailsResponseBody() = default ;
    ListDatabaseDetailsResponseBody& operator=(const ListDatabaseDetailsResponseBody &) = default ;
    ListDatabaseDetailsResponseBody& operator=(ListDatabaseDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseDetails_ != nullptr
        && this->nextPageToken_ != nullptr; };
    // databaseDetails Field Functions 
    bool hasDatabaseDetails() const { return this->databaseDetails_ != nullptr;};
    void deleteDatabaseDetails() { this->databaseDetails_ = nullptr;};
    inline const vector<Database> & databaseDetails() const { DARABONBA_PTR_GET_CONST(databaseDetails_, vector<Database>) };
    inline vector<Database> databaseDetails() { DARABONBA_PTR_GET(databaseDetails_, vector<Database>) };
    inline ListDatabaseDetailsResponseBody& setDatabaseDetails(const vector<Database> & databaseDetails) { DARABONBA_PTR_SET_VALUE(databaseDetails_, databaseDetails) };
    inline ListDatabaseDetailsResponseBody& setDatabaseDetails(vector<Database> && databaseDetails) { DARABONBA_PTR_SET_RVALUE(databaseDetails_, databaseDetails) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDatabaseDetailsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


  protected:
    std::shared_ptr<vector<Database>> databaseDetails_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
