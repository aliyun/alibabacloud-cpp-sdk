// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELFAVORITEPUBLICMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELFAVORITEPUBLICMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CancelFavoritePublicMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelFavoritePublicMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, CancelFavoritePublicMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    CancelFavoritePublicMediaRequest() = default ;
    CancelFavoritePublicMediaRequest(const CancelFavoritePublicMediaRequest &) = default ;
    CancelFavoritePublicMediaRequest(CancelFavoritePublicMediaRequest &&) = default ;
    CancelFavoritePublicMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelFavoritePublicMediaRequest() = default ;
    CancelFavoritePublicMediaRequest& operator=(const CancelFavoritePublicMediaRequest &) = default ;
    CancelFavoritePublicMediaRequest& operator=(CancelFavoritePublicMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIds_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline CancelFavoritePublicMediaRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    std::shared_ptr<string> mediaIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
