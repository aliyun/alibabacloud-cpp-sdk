// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIEWDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIEWDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/View.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListViewDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListViewDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(viewDetails, viewDetails_);
    };
    friend void from_json(const Darabonba::Json& j, ListViewDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(viewDetails, viewDetails_);
    };
    ListViewDetailsResponseBody() = default ;
    ListViewDetailsResponseBody(const ListViewDetailsResponseBody &) = default ;
    ListViewDetailsResponseBody(ListViewDetailsResponseBody &&) = default ;
    ListViewDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListViewDetailsResponseBody() = default ;
    ListViewDetailsResponseBody& operator=(const ListViewDetailsResponseBody &) = default ;
    ListViewDetailsResponseBody& operator=(ListViewDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->viewDetails_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListViewDetailsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // viewDetails Field Functions 
    bool hasViewDetails() const { return this->viewDetails_ != nullptr;};
    void deleteViewDetails() { this->viewDetails_ = nullptr;};
    inline const vector<View> & viewDetails() const { DARABONBA_PTR_GET_CONST(viewDetails_, vector<View>) };
    inline vector<View> viewDetails() { DARABONBA_PTR_GET(viewDetails_, vector<View>) };
    inline ListViewDetailsResponseBody& setViewDetails(const vector<View> & viewDetails) { DARABONBA_PTR_SET_VALUE(viewDetails_, viewDetails) };
    inline ListViewDetailsResponseBody& setViewDetails(vector<View> && viewDetails) { DARABONBA_PTR_SET_RVALUE(viewDetails_, viewDetails) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<View>> viewDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
