// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADINSTANCECACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADINSTANCECACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DownloadInstanceCACertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadInstanceCACertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadInstanceCACertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DownloadInstanceCACertificateResponseBody() = default ;
    DownloadInstanceCACertificateResponseBody(const DownloadInstanceCACertificateResponseBody &) = default ;
    DownloadInstanceCACertificateResponseBody(DownloadInstanceCACertificateResponseBody &&) = default ;
    DownloadInstanceCACertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadInstanceCACertificateResponseBody() = default ;
    DownloadInstanceCACertificateResponseBody& operator=(const DownloadInstanceCACertificateResponseBody &) = default ;
    DownloadInstanceCACertificateResponseBody& operator=(DownloadInstanceCACertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && return this->requestId_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DownloadInstanceCACertificateResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadInstanceCACertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The OSS URL of the downloaded certificate.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
