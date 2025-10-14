// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UploadMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(mediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(mediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UploadMediaResponseBody() = default ;
    UploadMediaResponseBody(const UploadMediaResponseBody &) = default ;
    UploadMediaResponseBody(UploadMediaResponseBody &&) = default ;
    UploadMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMediaResponseBody() = default ;
    UploadMediaResponseBody& operator=(const UploadMediaResponseBody &) = default ;
    UploadMediaResponseBody& operator=(UploadMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline UploadMediaResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> mediaId_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
