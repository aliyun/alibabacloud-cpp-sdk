// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddMediaResponseBodyMedia.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddMediaResponseBody() = default ;
    AddMediaResponseBody(const AddMediaResponseBody &) = default ;
    AddMediaResponseBody(AddMediaResponseBody &&) = default ;
    AddMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaResponseBody() = default ;
    AddMediaResponseBody& operator=(const AddMediaResponseBody &) = default ;
    AddMediaResponseBody& operator=(AddMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->requestId_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline const AddMediaResponseBodyMedia & media() const { DARABONBA_PTR_GET_CONST(media_, AddMediaResponseBodyMedia) };
    inline AddMediaResponseBodyMedia media() { DARABONBA_PTR_GET(media_, AddMediaResponseBodyMedia) };
    inline AddMediaResponseBody& setMedia(const AddMediaResponseBodyMedia & media) { DARABONBA_PTR_SET_VALUE(media_, media) };
    inline AddMediaResponseBody& setMedia(AddMediaResponseBodyMedia && media) { DARABONBA_PTR_SET_RVALUE(media_, media) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the media file.
    std::shared_ptr<AddMediaResponseBodyMedia> media_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
