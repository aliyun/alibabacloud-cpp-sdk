// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTICEBERGTABLEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTICEBERGTABLEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IcebergTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListIcebergTableDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIcebergTableDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(tableDetails, tableDetails_);
    };
    friend void from_json(const Darabonba::Json& j, ListIcebergTableDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(tableDetails, tableDetails_);
    };
    ListIcebergTableDetailsResponseBody() = default ;
    ListIcebergTableDetailsResponseBody(const ListIcebergTableDetailsResponseBody &) = default ;
    ListIcebergTableDetailsResponseBody(ListIcebergTableDetailsResponseBody &&) = default ;
    ListIcebergTableDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIcebergTableDetailsResponseBody() = default ;
    ListIcebergTableDetailsResponseBody& operator=(const ListIcebergTableDetailsResponseBody &) = default ;
    ListIcebergTableDetailsResponseBody& operator=(ListIcebergTableDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->tableDetails_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListIcebergTableDetailsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // tableDetails Field Functions 
    bool hasTableDetails() const { return this->tableDetails_ != nullptr;};
    void deleteTableDetails() { this->tableDetails_ = nullptr;};
    inline const vector<IcebergTable> & tableDetails() const { DARABONBA_PTR_GET_CONST(tableDetails_, vector<IcebergTable>) };
    inline vector<IcebergTable> tableDetails() { DARABONBA_PTR_GET(tableDetails_, vector<IcebergTable>) };
    inline ListIcebergTableDetailsResponseBody& setTableDetails(const vector<IcebergTable> & tableDetails) { DARABONBA_PTR_SET_VALUE(tableDetails_, tableDetails) };
    inline ListIcebergTableDetailsResponseBody& setTableDetails(vector<IcebergTable> && tableDetails) { DARABONBA_PTR_SET_RVALUE(tableDetails_, tableDetails) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<IcebergTable>> tableDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
