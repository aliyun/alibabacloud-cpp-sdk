// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMVIEWSRESPONSEBODYCUSTOMVIEWS_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMVIEWSRESPONSEBODYCUSTOMVIEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomViewsResponseBodyCustomViewsCustomView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomViewsResponseBodyCustomViews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomViewsResponseBodyCustomViews& obj) { 
      DARABONBA_PTR_TO_JSON(CustomView, customView_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomViewsResponseBodyCustomViews& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomView, customView_);
    };
    ListCustomViewsResponseBodyCustomViews() = default ;
    ListCustomViewsResponseBodyCustomViews(const ListCustomViewsResponseBodyCustomViews &) = default ;
    ListCustomViewsResponseBodyCustomViews(ListCustomViewsResponseBodyCustomViews &&) = default ;
    ListCustomViewsResponseBodyCustomViews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomViewsResponseBodyCustomViews() = default ;
    ListCustomViewsResponseBodyCustomViews& operator=(const ListCustomViewsResponseBodyCustomViews &) = default ;
    ListCustomViewsResponseBodyCustomViews& operator=(ListCustomViewsResponseBodyCustomViews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customView_ == nullptr; };
    // customView Field Functions 
    bool hasCustomView() const { return this->customView_ != nullptr;};
    void deleteCustomView() { this->customView_ = nullptr;};
    inline const vector<Models::ListCustomViewsResponseBodyCustomViewsCustomView> & customView() const { DARABONBA_PTR_GET_CONST(customView_, vector<Models::ListCustomViewsResponseBodyCustomViewsCustomView>) };
    inline vector<Models::ListCustomViewsResponseBodyCustomViewsCustomView> customView() { DARABONBA_PTR_GET(customView_, vector<Models::ListCustomViewsResponseBodyCustomViewsCustomView>) };
    inline ListCustomViewsResponseBodyCustomViews& setCustomView(const vector<Models::ListCustomViewsResponseBodyCustomViewsCustomView> & customView) { DARABONBA_PTR_SET_VALUE(customView_, customView) };
    inline ListCustomViewsResponseBodyCustomViews& setCustomView(vector<Models::ListCustomViewsResponseBodyCustomViewsCustomView> && customView) { DARABONBA_PTR_SET_RVALUE(customView_, customView) };


  protected:
    std::shared_ptr<vector<Models::ListCustomViewsResponseBodyCustomViewsCustomView>> customView_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
