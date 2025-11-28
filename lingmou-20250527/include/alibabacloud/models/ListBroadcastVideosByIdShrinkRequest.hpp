// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROADCASTVIDEOSBYIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBROADCASTVIDEOSBYIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListBroadcastVideosByIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBroadcastVideosByIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(videoIds, videoIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListBroadcastVideosByIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(videoIds, videoIdsShrink_);
    };
    ListBroadcastVideosByIdShrinkRequest() = default ;
    ListBroadcastVideosByIdShrinkRequest(const ListBroadcastVideosByIdShrinkRequest &) = default ;
    ListBroadcastVideosByIdShrinkRequest(ListBroadcastVideosByIdShrinkRequest &&) = default ;
    ListBroadcastVideosByIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBroadcastVideosByIdShrinkRequest() = default ;
    ListBroadcastVideosByIdShrinkRequest& operator=(const ListBroadcastVideosByIdShrinkRequest &) = default ;
    ListBroadcastVideosByIdShrinkRequest& operator=(ListBroadcastVideosByIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoIdsShrink_ == nullptr; };
    // videoIdsShrink Field Functions 
    bool hasVideoIdsShrink() const { return this->videoIdsShrink_ != nullptr;};
    void deleteVideoIdsShrink() { this->videoIdsShrink_ = nullptr;};
    inline string videoIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(videoIdsShrink_, "") };
    inline ListBroadcastVideosByIdShrinkRequest& setVideoIdsShrink(string videoIdsShrink) { DARABONBA_PTR_SET_VALUE(videoIdsShrink_, videoIdsShrink) };


  protected:
    std::shared_ptr<string> videoIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
