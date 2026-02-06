// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHMEDIAPLAYURLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHMEDIAPLAYURLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RefreshMediaPlayUrlsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshMediaPlayUrlsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_TO_JSON(MediaRefreshJobId, mediaRefreshJobId_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshMediaPlayUrlsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_FROM_JSON(MediaRefreshJobId, mediaRefreshJobId_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshMediaPlayUrlsResponseBody() = default ;
    RefreshMediaPlayUrlsResponseBody(const RefreshMediaPlayUrlsResponseBody &) = default ;
    RefreshMediaPlayUrlsResponseBody(RefreshMediaPlayUrlsResponseBody &&) = default ;
    RefreshMediaPlayUrlsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshMediaPlayUrlsResponseBody() = default ;
    RefreshMediaPlayUrlsResponseBody& operator=(const RefreshMediaPlayUrlsResponseBody &) = default ;
    RefreshMediaPlayUrlsResponseBody& operator=(RefreshMediaPlayUrlsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbiddenMediaIds_ == nullptr
        && this->mediaRefreshJobId_ == nullptr && this->nonExistMediaIds_ == nullptr && this->requestId_ == nullptr; };
    // forbiddenMediaIds Field Functions 
    bool hasForbiddenMediaIds() const { return this->forbiddenMediaIds_ != nullptr;};
    void deleteForbiddenMediaIds() { this->forbiddenMediaIds_ = nullptr;};
    inline string getForbiddenMediaIds() const { DARABONBA_PTR_GET_DEFAULT(forbiddenMediaIds_, "") };
    inline RefreshMediaPlayUrlsResponseBody& setForbiddenMediaIds(string forbiddenMediaIds) { DARABONBA_PTR_SET_VALUE(forbiddenMediaIds_, forbiddenMediaIds) };


    // mediaRefreshJobId Field Functions 
    bool hasMediaRefreshJobId() const { return this->mediaRefreshJobId_ != nullptr;};
    void deleteMediaRefreshJobId() { this->mediaRefreshJobId_ = nullptr;};
    inline string getMediaRefreshJobId() const { DARABONBA_PTR_GET_DEFAULT(mediaRefreshJobId_, "") };
    inline RefreshMediaPlayUrlsResponseBody& setMediaRefreshJobId(string mediaRefreshJobId) { DARABONBA_PTR_SET_VALUE(mediaRefreshJobId_, mediaRefreshJobId) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline string getNonExistMediaIds() const { DARABONBA_PTR_GET_DEFAULT(nonExistMediaIds_, "") };
    inline RefreshMediaPlayUrlsResponseBody& setNonExistMediaIds(string nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshMediaPlayUrlsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the media files that cannot be operated on. In most cases, media files cannot be operated on because you are not authorized to perform the operations. For more information, see [Overview](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> forbiddenMediaIds_ {};
    // The ID of the refresh or prefetch task.
    shared_ptr<string> mediaRefreshJobId_ {};
    // The IDs of the media files that do not exist.
    shared_ptr<string> nonExistMediaIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
