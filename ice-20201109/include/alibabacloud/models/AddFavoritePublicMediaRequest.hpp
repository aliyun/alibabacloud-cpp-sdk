// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFAVORITEPUBLICMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFAVORITEPUBLICMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddFavoritePublicMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFavoritePublicMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, AddFavoritePublicMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    AddFavoritePublicMediaRequest() = default ;
    AddFavoritePublicMediaRequest(const AddFavoritePublicMediaRequest &) = default ;
    AddFavoritePublicMediaRequest(AddFavoritePublicMediaRequest &&) = default ;
    AddFavoritePublicMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFavoritePublicMediaRequest() = default ;
    AddFavoritePublicMediaRequest& operator=(const AddFavoritePublicMediaRequest &) = default ;
    AddFavoritePublicMediaRequest& operator=(AddFavoritePublicMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIds_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline AddFavoritePublicMediaRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    std::shared_ptr<string> mediaIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
