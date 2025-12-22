// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(views, views_);
    };
    friend void from_json(const Darabonba::Json& j, ListViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(views, views_);
    };
    ListViewsResponseBody() = default ;
    ListViewsResponseBody(const ListViewsResponseBody &) = default ;
    ListViewsResponseBody(ListViewsResponseBody &&) = default ;
    ListViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListViewsResponseBody() = default ;
    ListViewsResponseBody& operator=(const ListViewsResponseBody &) = default ;
    ListViewsResponseBody& operator=(ListViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->views_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListViewsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // views Field Functions 
    bool hasViews() const { return this->views_ != nullptr;};
    void deleteViews() { this->views_ = nullptr;};
    inline const vector<string> & views() const { DARABONBA_PTR_GET_CONST(views_, vector<string>) };
    inline vector<string> views() { DARABONBA_PTR_GET(views_, vector<string>) };
    inline ListViewsResponseBody& setViews(const vector<string> & views) { DARABONBA_PTR_SET_VALUE(views_, views) };
    inline ListViewsResponseBody& setViews(vector<string> && views) { DARABONBA_PTR_SET_RVALUE(views_, views) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<string>> views_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
