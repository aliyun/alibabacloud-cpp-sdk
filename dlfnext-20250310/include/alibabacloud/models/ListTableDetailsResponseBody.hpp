// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DlfNext20250310.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListTableDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(tableDetails, tableDetails_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(tableDetails, tableDetails_);
    };
    ListTableDetailsResponseBody() = default ;
    ListTableDetailsResponseBody(const ListTableDetailsResponseBody &) = default ;
    ListTableDetailsResponseBody(ListTableDetailsResponseBody &&) = default ;
    ListTableDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableDetailsResponseBody() = default ;
    ListTableDetailsResponseBody& operator=(const ListTableDetailsResponseBody &) = default ;
    ListTableDetailsResponseBody& operator=(ListTableDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextPageToken_ != nullptr
        && this->tableDetails_ != nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListTableDetailsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // tableDetails Field Functions 
    bool hasTableDetails() const { return this->tableDetails_ != nullptr;};
    void deleteTableDetails() { this->tableDetails_ = nullptr;};
    inline const vector<Table> & tableDetails() const { DARABONBA_PTR_GET_CONST(tableDetails_, vector<Table>) };
    inline vector<Table> tableDetails() { DARABONBA_PTR_GET(tableDetails_, vector<Table>) };
    inline ListTableDetailsResponseBody& setTableDetails(const vector<Table> & tableDetails) { DARABONBA_PTR_SET_VALUE(tableDetails_, tableDetails) };
    inline ListTableDetailsResponseBody& setTableDetails(vector<Table> && tableDetails) { DARABONBA_PTR_SET_RVALUE(tableDetails_, tableDetails) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<Table>> tableDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
