// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDRMCERTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDRMCERTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDRMCertInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDRMCertInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDRMCertInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetDRMCertInfoRequest() = default ;
    GetDRMCertInfoRequest(const GetDRMCertInfoRequest &) = default ;
    GetDRMCertInfoRequest(GetDRMCertInfoRequest &&) = default ;
    GetDRMCertInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDRMCertInfoRequest() = default ;
    GetDRMCertInfoRequest& operator=(const GetDRMCertInfoRequest &) = default ;
    GetDRMCertInfoRequest& operator=(GetDRMCertInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr
        && this->videoId_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline GetDRMCertInfoRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetDRMCertInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> certId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
