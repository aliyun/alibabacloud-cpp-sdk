// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMediaResponseBodyMedia.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateMediaResponseBody() = default ;
    UpdateMediaResponseBody(const UpdateMediaResponseBody &) = default ;
    UpdateMediaResponseBody(UpdateMediaResponseBody &&) = default ;
    UpdateMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaResponseBody() = default ;
    UpdateMediaResponseBody& operator=(const UpdateMediaResponseBody &) = default ;
    UpdateMediaResponseBody& operator=(UpdateMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->requestId_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline const UpdateMediaResponseBodyMedia & media() const { DARABONBA_PTR_GET_CONST(media_, UpdateMediaResponseBodyMedia) };
    inline UpdateMediaResponseBodyMedia media() { DARABONBA_PTR_GET(media_, UpdateMediaResponseBodyMedia) };
    inline UpdateMediaResponseBody& setMedia(const UpdateMediaResponseBodyMedia & media) { DARABONBA_PTR_SET_VALUE(media_, media) };
    inline UpdateMediaResponseBody& setMedia(UpdateMediaResponseBodyMedia && media) { DARABONBA_PTR_SET_RVALUE(media_, media) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the media file.
    std::shared_ptr<UpdateMediaResponseBodyMedia> media_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
