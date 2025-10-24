// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMVIEWSRESPONSEBODYCUSTOMVIEWSCUSTOMVIEW_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMVIEWSRESPONSEBODYCUSTOMVIEWSCUSTOMVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomViewsResponseBodyCustomViewsCustomView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomViewsResponseBodyCustomViewsCustomView& obj) { 
      DARABONBA_PTR_TO_JSON(CustomViewId, customViewId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomViewsResponseBodyCustomViewsCustomView& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomViewId, customViewId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    ListCustomViewsResponseBodyCustomViewsCustomView() = default ;
    ListCustomViewsResponseBodyCustomViewsCustomView(const ListCustomViewsResponseBodyCustomViewsCustomView &) = default ;
    ListCustomViewsResponseBodyCustomViewsCustomView(ListCustomViewsResponseBodyCustomViewsCustomView &&) = default ;
    ListCustomViewsResponseBodyCustomViewsCustomView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomViewsResponseBodyCustomViewsCustomView() = default ;
    ListCustomViewsResponseBodyCustomViewsCustomView& operator=(const ListCustomViewsResponseBodyCustomViewsCustomView &) = default ;
    ListCustomViewsResponseBodyCustomViewsCustomView& operator=(ListCustomViewsResponseBodyCustomViewsCustomView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customViewId_ == nullptr
        && return this->imageUrl_ == nullptr; };
    // customViewId Field Functions 
    bool hasCustomViewId() const { return this->customViewId_ != nullptr;};
    void deleteCustomViewId() { this->customViewId_ = nullptr;};
    inline string customViewId() const { DARABONBA_PTR_GET_DEFAULT(customViewId_, "") };
    inline ListCustomViewsResponseBodyCustomViewsCustomView& setCustomViewId(string customViewId) { DARABONBA_PTR_SET_VALUE(customViewId_, customViewId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ListCustomViewsResponseBodyCustomViewsCustomView& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    std::shared_ptr<string> customViewId_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
