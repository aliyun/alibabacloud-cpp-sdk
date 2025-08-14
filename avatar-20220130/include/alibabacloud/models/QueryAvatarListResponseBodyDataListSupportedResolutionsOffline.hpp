// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARLISTRESPONSEBODYDATALISTSUPPORTEDRESOLUTIONSOFFLINE_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARLISTRESPONSEBODYDATALISTSUPPORTEDRESOLUTIONSOFFLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryAvatarListResponseBodyDataListSupportedResolutionsOffline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarListResponseBodyDataListSupportedResolutionsOffline& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarListResponseBodyDataListSupportedResolutionsOffline& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    QueryAvatarListResponseBodyDataListSupportedResolutionsOffline() = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutionsOffline(const QueryAvatarListResponseBodyDataListSupportedResolutionsOffline &) = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutionsOffline(QueryAvatarListResponseBodyDataListSupportedResolutionsOffline &&) = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutionsOffline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarListResponseBodyDataListSupportedResolutionsOffline() = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutionsOffline& operator=(const QueryAvatarListResponseBodyDataListSupportedResolutionsOffline &) = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutionsOffline& operator=(QueryAvatarListResponseBodyDataListSupportedResolutionsOffline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->height_ != nullptr && this->width_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline QueryAvatarListResponseBodyDataListSupportedResolutionsOffline& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline QueryAvatarListResponseBodyDataListSupportedResolutionsOffline& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline QueryAvatarListResponseBodyDataListSupportedResolutionsOffline& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
