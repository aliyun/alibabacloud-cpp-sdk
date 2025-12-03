// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDKGENERATEBYAPPFORREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SDKGENERATEBYAPPFORREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SdkGenerateByAppForRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdkGenerateByAppForRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SdkGenerateByAppForRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SdkGenerateByAppForRegionResponseBody() = default ;
    SdkGenerateByAppForRegionResponseBody(const SdkGenerateByAppForRegionResponseBody &) = default ;
    SdkGenerateByAppForRegionResponseBody(SdkGenerateByAppForRegionResponseBody &&) = default ;
    SdkGenerateByAppForRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdkGenerateByAppForRegionResponseBody() = default ;
    SdkGenerateByAppForRegionResponseBody& operator=(const SdkGenerateByAppForRegionResponseBody &) = default ;
    SdkGenerateByAppForRegionResponseBody& operator=(SdkGenerateByAppForRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadLink_ == nullptr
        && return this->requestId_ == nullptr; };
    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline SdkGenerateByAppForRegionResponseBody& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SdkGenerateByAppForRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The code of the SDK by using the Base64 scheme. You can obtain the file by using the Base64 decoding scheme.
    std::shared_ptr<string> downloadLink_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
