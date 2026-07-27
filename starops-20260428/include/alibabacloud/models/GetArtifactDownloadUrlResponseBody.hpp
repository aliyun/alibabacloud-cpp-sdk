// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class GetArtifactDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(expire, expire_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(expire, expire_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    GetArtifactDownloadUrlResponseBody() = default ;
    GetArtifactDownloadUrlResponseBody(const GetArtifactDownloadUrlResponseBody &) = default ;
    GetArtifactDownloadUrlResponseBody(GetArtifactDownloadUrlResponseBody &&) = default ;
    GetArtifactDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactDownloadUrlResponseBody() = default ;
    GetArtifactDownloadUrlResponseBody& operator=(const GetArtifactDownloadUrlResponseBody &) = default ;
    GetArtifactDownloadUrlResponseBody& operator=(GetArtifactDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expire_ == nullptr
        && this->requestId_ == nullptr && this->url_ == nullptr; };
    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline GetArtifactDownloadUrlResponseBody& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetArtifactDownloadUrlResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<int64_t> expire_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
