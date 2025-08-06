// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDRMLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDRMLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDRMLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDRMLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CDMData, CDMData_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(DRMType, DRMType_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDRMLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CDMData, CDMData_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(DRMType, DRMType_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetDRMLicenseRequest() = default ;
    GetDRMLicenseRequest(const GetDRMLicenseRequest &) = default ;
    GetDRMLicenseRequest(GetDRMLicenseRequest &&) = default ;
    GetDRMLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDRMLicenseRequest() = default ;
    GetDRMLicenseRequest& operator=(const GetDRMLicenseRequest &) = default ;
    GetDRMLicenseRequest& operator=(GetDRMLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CDMData_ != nullptr
        && this->certId_ != nullptr && this->DRMType_ != nullptr && this->videoId_ != nullptr; };
    // CDMData Field Functions 
    bool hasCDMData() const { return this->CDMData_ != nullptr;};
    void deleteCDMData() { this->CDMData_ = nullptr;};
    inline string CDMData() const { DARABONBA_PTR_GET_DEFAULT(CDMData_, "") };
    inline GetDRMLicenseRequest& setCDMData(string CDMData) { DARABONBA_PTR_SET_VALUE(CDMData_, CDMData) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline GetDRMLicenseRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // DRMType Field Functions 
    bool hasDRMType() const { return this->DRMType_ != nullptr;};
    void deleteDRMType() { this->DRMType_ = nullptr;};
    inline string DRMType() const { DARABONBA_PTR_GET_DEFAULT(DRMType_, "") };
    inline GetDRMLicenseRequest& setDRMType(string DRMType) { DARABONBA_PTR_SET_VALUE(DRMType_, DRMType) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetDRMLicenseRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> CDMData_ = nullptr;
    std::shared_ptr<string> certId_ = nullptr;
    std::shared_ptr<string> DRMType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
