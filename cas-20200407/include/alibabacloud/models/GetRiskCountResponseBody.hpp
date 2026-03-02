// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRISKCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetRiskCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunAssetCertificateExpiredCount, aliyunAssetCertificateExpiredCount_);
      DARABONBA_PTR_TO_JSON(AliyunAssetCertificateWillExpiredCount, aliyunAssetCertificateWillExpiredCount_);
      DARABONBA_PTR_TO_JSON(BuyCertificateExpireCount, buyCertificateExpireCount_);
      DARABONBA_PTR_TO_JSON(BuyCertificateNotDeploymentCount, buyCertificateNotDeploymentCount_);
      DARABONBA_PTR_TO_JSON(BuyCertificateNotTrusteeCount, buyCertificateNotTrusteeCount_);
      DARABONBA_PTR_TO_JSON(BuyCertificateWillExpiredCount, buyCertificateWillExpiredCount_);
      DARABONBA_PTR_TO_JSON(BuyCheckedFailCount, buyCheckedFailCount_);
      DARABONBA_PTR_TO_JSON(DomainAssetNotMonitorCount, domainAssetNotMonitorCount_);
      DARABONBA_PTR_TO_JSON(FreeCertificateExpireCount, freeCertificateExpireCount_);
      DARABONBA_PTR_TO_JSON(FreeCertificateNotDeploymentCount, freeCertificateNotDeploymentCount_);
      DARABONBA_PTR_TO_JSON(FreeCertificateWillExpiredCount, freeCertificateWillExpiredCount_);
      DARABONBA_PTR_TO_JSON(FreeCheckedFailCount, freeCheckedFailCount_);
      DARABONBA_PTR_TO_JSON(MultiCloudAssetCertificateExpiredCount, multiCloudAssetCertificateExpiredCount_);
      DARABONBA_PTR_TO_JSON(MultiCloudAssetCertificateWillExpiredCount, multiCloudAssetCertificateWillExpiredCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadCertificateExpireCount, uploadCertificateExpireCount_);
      DARABONBA_PTR_TO_JSON(UploadCertificateNotDeploymentCount, uploadCertificateNotDeploymentCount_);
      DARABONBA_PTR_TO_JSON(UploadCertificateNotNoticeCount, uploadCertificateNotNoticeCount_);
      DARABONBA_PTR_TO_JSON(UploadCertificateWillExpiredCount, uploadCertificateWillExpiredCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunAssetCertificateExpiredCount, aliyunAssetCertificateExpiredCount_);
      DARABONBA_PTR_FROM_JSON(AliyunAssetCertificateWillExpiredCount, aliyunAssetCertificateWillExpiredCount_);
      DARABONBA_PTR_FROM_JSON(BuyCertificateExpireCount, buyCertificateExpireCount_);
      DARABONBA_PTR_FROM_JSON(BuyCertificateNotDeploymentCount, buyCertificateNotDeploymentCount_);
      DARABONBA_PTR_FROM_JSON(BuyCertificateNotTrusteeCount, buyCertificateNotTrusteeCount_);
      DARABONBA_PTR_FROM_JSON(BuyCertificateWillExpiredCount, buyCertificateWillExpiredCount_);
      DARABONBA_PTR_FROM_JSON(BuyCheckedFailCount, buyCheckedFailCount_);
      DARABONBA_PTR_FROM_JSON(DomainAssetNotMonitorCount, domainAssetNotMonitorCount_);
      DARABONBA_PTR_FROM_JSON(FreeCertificateExpireCount, freeCertificateExpireCount_);
      DARABONBA_PTR_FROM_JSON(FreeCertificateNotDeploymentCount, freeCertificateNotDeploymentCount_);
      DARABONBA_PTR_FROM_JSON(FreeCertificateWillExpiredCount, freeCertificateWillExpiredCount_);
      DARABONBA_PTR_FROM_JSON(FreeCheckedFailCount, freeCheckedFailCount_);
      DARABONBA_PTR_FROM_JSON(MultiCloudAssetCertificateExpiredCount, multiCloudAssetCertificateExpiredCount_);
      DARABONBA_PTR_FROM_JSON(MultiCloudAssetCertificateWillExpiredCount, multiCloudAssetCertificateWillExpiredCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadCertificateExpireCount, uploadCertificateExpireCount_);
      DARABONBA_PTR_FROM_JSON(UploadCertificateNotDeploymentCount, uploadCertificateNotDeploymentCount_);
      DARABONBA_PTR_FROM_JSON(UploadCertificateNotNoticeCount, uploadCertificateNotNoticeCount_);
      DARABONBA_PTR_FROM_JSON(UploadCertificateWillExpiredCount, uploadCertificateWillExpiredCount_);
    };
    GetRiskCountResponseBody() = default ;
    GetRiskCountResponseBody(const GetRiskCountResponseBody &) = default ;
    GetRiskCountResponseBody(GetRiskCountResponseBody &&) = default ;
    GetRiskCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskCountResponseBody() = default ;
    GetRiskCountResponseBody& operator=(const GetRiskCountResponseBody &) = default ;
    GetRiskCountResponseBody& operator=(GetRiskCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunAssetCertificateExpiredCount_ == nullptr
        && this->aliyunAssetCertificateWillExpiredCount_ == nullptr && this->buyCertificateExpireCount_ == nullptr && this->buyCertificateNotDeploymentCount_ == nullptr && this->buyCertificateNotTrusteeCount_ == nullptr && this->buyCertificateWillExpiredCount_ == nullptr
        && this->buyCheckedFailCount_ == nullptr && this->domainAssetNotMonitorCount_ == nullptr && this->freeCertificateExpireCount_ == nullptr && this->freeCertificateNotDeploymentCount_ == nullptr && this->freeCertificateWillExpiredCount_ == nullptr
        && this->freeCheckedFailCount_ == nullptr && this->multiCloudAssetCertificateExpiredCount_ == nullptr && this->multiCloudAssetCertificateWillExpiredCount_ == nullptr && this->requestId_ == nullptr && this->uploadCertificateExpireCount_ == nullptr
        && this->uploadCertificateNotDeploymentCount_ == nullptr && this->uploadCertificateNotNoticeCount_ == nullptr && this->uploadCertificateWillExpiredCount_ == nullptr; };
    // aliyunAssetCertificateExpiredCount Field Functions 
    bool hasAliyunAssetCertificateExpiredCount() const { return this->aliyunAssetCertificateExpiredCount_ != nullptr;};
    void deleteAliyunAssetCertificateExpiredCount() { this->aliyunAssetCertificateExpiredCount_ = nullptr;};
    inline int32_t getAliyunAssetCertificateExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(aliyunAssetCertificateExpiredCount_, 0) };
    inline GetRiskCountResponseBody& setAliyunAssetCertificateExpiredCount(int32_t aliyunAssetCertificateExpiredCount) { DARABONBA_PTR_SET_VALUE(aliyunAssetCertificateExpiredCount_, aliyunAssetCertificateExpiredCount) };


    // aliyunAssetCertificateWillExpiredCount Field Functions 
    bool hasAliyunAssetCertificateWillExpiredCount() const { return this->aliyunAssetCertificateWillExpiredCount_ != nullptr;};
    void deleteAliyunAssetCertificateWillExpiredCount() { this->aliyunAssetCertificateWillExpiredCount_ = nullptr;};
    inline int32_t getAliyunAssetCertificateWillExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(aliyunAssetCertificateWillExpiredCount_, 0) };
    inline GetRiskCountResponseBody& setAliyunAssetCertificateWillExpiredCount(int32_t aliyunAssetCertificateWillExpiredCount) { DARABONBA_PTR_SET_VALUE(aliyunAssetCertificateWillExpiredCount_, aliyunAssetCertificateWillExpiredCount) };


    // buyCertificateExpireCount Field Functions 
    bool hasBuyCertificateExpireCount() const { return this->buyCertificateExpireCount_ != nullptr;};
    void deleteBuyCertificateExpireCount() { this->buyCertificateExpireCount_ = nullptr;};
    inline int32_t getBuyCertificateExpireCount() const { DARABONBA_PTR_GET_DEFAULT(buyCertificateExpireCount_, 0) };
    inline GetRiskCountResponseBody& setBuyCertificateExpireCount(int32_t buyCertificateExpireCount) { DARABONBA_PTR_SET_VALUE(buyCertificateExpireCount_, buyCertificateExpireCount) };


    // buyCertificateNotDeploymentCount Field Functions 
    bool hasBuyCertificateNotDeploymentCount() const { return this->buyCertificateNotDeploymentCount_ != nullptr;};
    void deleteBuyCertificateNotDeploymentCount() { this->buyCertificateNotDeploymentCount_ = nullptr;};
    inline int32_t getBuyCertificateNotDeploymentCount() const { DARABONBA_PTR_GET_DEFAULT(buyCertificateNotDeploymentCount_, 0) };
    inline GetRiskCountResponseBody& setBuyCertificateNotDeploymentCount(int32_t buyCertificateNotDeploymentCount) { DARABONBA_PTR_SET_VALUE(buyCertificateNotDeploymentCount_, buyCertificateNotDeploymentCount) };


    // buyCertificateNotTrusteeCount Field Functions 
    bool hasBuyCertificateNotTrusteeCount() const { return this->buyCertificateNotTrusteeCount_ != nullptr;};
    void deleteBuyCertificateNotTrusteeCount() { this->buyCertificateNotTrusteeCount_ = nullptr;};
    inline int32_t getBuyCertificateNotTrusteeCount() const { DARABONBA_PTR_GET_DEFAULT(buyCertificateNotTrusteeCount_, 0) };
    inline GetRiskCountResponseBody& setBuyCertificateNotTrusteeCount(int32_t buyCertificateNotTrusteeCount) { DARABONBA_PTR_SET_VALUE(buyCertificateNotTrusteeCount_, buyCertificateNotTrusteeCount) };


    // buyCertificateWillExpiredCount Field Functions 
    bool hasBuyCertificateWillExpiredCount() const { return this->buyCertificateWillExpiredCount_ != nullptr;};
    void deleteBuyCertificateWillExpiredCount() { this->buyCertificateWillExpiredCount_ = nullptr;};
    inline int32_t getBuyCertificateWillExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(buyCertificateWillExpiredCount_, 0) };
    inline GetRiskCountResponseBody& setBuyCertificateWillExpiredCount(int32_t buyCertificateWillExpiredCount) { DARABONBA_PTR_SET_VALUE(buyCertificateWillExpiredCount_, buyCertificateWillExpiredCount) };


    // buyCheckedFailCount Field Functions 
    bool hasBuyCheckedFailCount() const { return this->buyCheckedFailCount_ != nullptr;};
    void deleteBuyCheckedFailCount() { this->buyCheckedFailCount_ = nullptr;};
    inline int32_t getBuyCheckedFailCount() const { DARABONBA_PTR_GET_DEFAULT(buyCheckedFailCount_, 0) };
    inline GetRiskCountResponseBody& setBuyCheckedFailCount(int32_t buyCheckedFailCount) { DARABONBA_PTR_SET_VALUE(buyCheckedFailCount_, buyCheckedFailCount) };


    // domainAssetNotMonitorCount Field Functions 
    bool hasDomainAssetNotMonitorCount() const { return this->domainAssetNotMonitorCount_ != nullptr;};
    void deleteDomainAssetNotMonitorCount() { this->domainAssetNotMonitorCount_ = nullptr;};
    inline int32_t getDomainAssetNotMonitorCount() const { DARABONBA_PTR_GET_DEFAULT(domainAssetNotMonitorCount_, 0) };
    inline GetRiskCountResponseBody& setDomainAssetNotMonitorCount(int32_t domainAssetNotMonitorCount) { DARABONBA_PTR_SET_VALUE(domainAssetNotMonitorCount_, domainAssetNotMonitorCount) };


    // freeCertificateExpireCount Field Functions 
    bool hasFreeCertificateExpireCount() const { return this->freeCertificateExpireCount_ != nullptr;};
    void deleteFreeCertificateExpireCount() { this->freeCertificateExpireCount_ = nullptr;};
    inline int32_t getFreeCertificateExpireCount() const { DARABONBA_PTR_GET_DEFAULT(freeCertificateExpireCount_, 0) };
    inline GetRiskCountResponseBody& setFreeCertificateExpireCount(int32_t freeCertificateExpireCount) { DARABONBA_PTR_SET_VALUE(freeCertificateExpireCount_, freeCertificateExpireCount) };


    // freeCertificateNotDeploymentCount Field Functions 
    bool hasFreeCertificateNotDeploymentCount() const { return this->freeCertificateNotDeploymentCount_ != nullptr;};
    void deleteFreeCertificateNotDeploymentCount() { this->freeCertificateNotDeploymentCount_ = nullptr;};
    inline int32_t getFreeCertificateNotDeploymentCount() const { DARABONBA_PTR_GET_DEFAULT(freeCertificateNotDeploymentCount_, 0) };
    inline GetRiskCountResponseBody& setFreeCertificateNotDeploymentCount(int32_t freeCertificateNotDeploymentCount) { DARABONBA_PTR_SET_VALUE(freeCertificateNotDeploymentCount_, freeCertificateNotDeploymentCount) };


    // freeCertificateWillExpiredCount Field Functions 
    bool hasFreeCertificateWillExpiredCount() const { return this->freeCertificateWillExpiredCount_ != nullptr;};
    void deleteFreeCertificateWillExpiredCount() { this->freeCertificateWillExpiredCount_ = nullptr;};
    inline int32_t getFreeCertificateWillExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(freeCertificateWillExpiredCount_, 0) };
    inline GetRiskCountResponseBody& setFreeCertificateWillExpiredCount(int32_t freeCertificateWillExpiredCount) { DARABONBA_PTR_SET_VALUE(freeCertificateWillExpiredCount_, freeCertificateWillExpiredCount) };


    // freeCheckedFailCount Field Functions 
    bool hasFreeCheckedFailCount() const { return this->freeCheckedFailCount_ != nullptr;};
    void deleteFreeCheckedFailCount() { this->freeCheckedFailCount_ = nullptr;};
    inline int32_t getFreeCheckedFailCount() const { DARABONBA_PTR_GET_DEFAULT(freeCheckedFailCount_, 0) };
    inline GetRiskCountResponseBody& setFreeCheckedFailCount(int32_t freeCheckedFailCount) { DARABONBA_PTR_SET_VALUE(freeCheckedFailCount_, freeCheckedFailCount) };


    // multiCloudAssetCertificateExpiredCount Field Functions 
    bool hasMultiCloudAssetCertificateExpiredCount() const { return this->multiCloudAssetCertificateExpiredCount_ != nullptr;};
    void deleteMultiCloudAssetCertificateExpiredCount() { this->multiCloudAssetCertificateExpiredCount_ = nullptr;};
    inline int32_t getMultiCloudAssetCertificateExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(multiCloudAssetCertificateExpiredCount_, 0) };
    inline GetRiskCountResponseBody& setMultiCloudAssetCertificateExpiredCount(int32_t multiCloudAssetCertificateExpiredCount) { DARABONBA_PTR_SET_VALUE(multiCloudAssetCertificateExpiredCount_, multiCloudAssetCertificateExpiredCount) };


    // multiCloudAssetCertificateWillExpiredCount Field Functions 
    bool hasMultiCloudAssetCertificateWillExpiredCount() const { return this->multiCloudAssetCertificateWillExpiredCount_ != nullptr;};
    void deleteMultiCloudAssetCertificateWillExpiredCount() { this->multiCloudAssetCertificateWillExpiredCount_ = nullptr;};
    inline int32_t getMultiCloudAssetCertificateWillExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(multiCloudAssetCertificateWillExpiredCount_, 0) };
    inline GetRiskCountResponseBody& setMultiCloudAssetCertificateWillExpiredCount(int32_t multiCloudAssetCertificateWillExpiredCount) { DARABONBA_PTR_SET_VALUE(multiCloudAssetCertificateWillExpiredCount_, multiCloudAssetCertificateWillExpiredCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRiskCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadCertificateExpireCount Field Functions 
    bool hasUploadCertificateExpireCount() const { return this->uploadCertificateExpireCount_ != nullptr;};
    void deleteUploadCertificateExpireCount() { this->uploadCertificateExpireCount_ = nullptr;};
    inline int32_t getUploadCertificateExpireCount() const { DARABONBA_PTR_GET_DEFAULT(uploadCertificateExpireCount_, 0) };
    inline GetRiskCountResponseBody& setUploadCertificateExpireCount(int32_t uploadCertificateExpireCount) { DARABONBA_PTR_SET_VALUE(uploadCertificateExpireCount_, uploadCertificateExpireCount) };


    // uploadCertificateNotDeploymentCount Field Functions 
    bool hasUploadCertificateNotDeploymentCount() const { return this->uploadCertificateNotDeploymentCount_ != nullptr;};
    void deleteUploadCertificateNotDeploymentCount() { this->uploadCertificateNotDeploymentCount_ = nullptr;};
    inline int32_t getUploadCertificateNotDeploymentCount() const { DARABONBA_PTR_GET_DEFAULT(uploadCertificateNotDeploymentCount_, 0) };
    inline GetRiskCountResponseBody& setUploadCertificateNotDeploymentCount(int32_t uploadCertificateNotDeploymentCount) { DARABONBA_PTR_SET_VALUE(uploadCertificateNotDeploymentCount_, uploadCertificateNotDeploymentCount) };


    // uploadCertificateNotNoticeCount Field Functions 
    bool hasUploadCertificateNotNoticeCount() const { return this->uploadCertificateNotNoticeCount_ != nullptr;};
    void deleteUploadCertificateNotNoticeCount() { this->uploadCertificateNotNoticeCount_ = nullptr;};
    inline int32_t getUploadCertificateNotNoticeCount() const { DARABONBA_PTR_GET_DEFAULT(uploadCertificateNotNoticeCount_, 0) };
    inline GetRiskCountResponseBody& setUploadCertificateNotNoticeCount(int32_t uploadCertificateNotNoticeCount) { DARABONBA_PTR_SET_VALUE(uploadCertificateNotNoticeCount_, uploadCertificateNotNoticeCount) };


    // uploadCertificateWillExpiredCount Field Functions 
    bool hasUploadCertificateWillExpiredCount() const { return this->uploadCertificateWillExpiredCount_ != nullptr;};
    void deleteUploadCertificateWillExpiredCount() { this->uploadCertificateWillExpiredCount_ = nullptr;};
    inline int32_t getUploadCertificateWillExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(uploadCertificateWillExpiredCount_, 0) };
    inline GetRiskCountResponseBody& setUploadCertificateWillExpiredCount(int32_t uploadCertificateWillExpiredCount) { DARABONBA_PTR_SET_VALUE(uploadCertificateWillExpiredCount_, uploadCertificateWillExpiredCount) };


  protected:
    shared_ptr<int32_t> aliyunAssetCertificateExpiredCount_ {};
    shared_ptr<int32_t> aliyunAssetCertificateWillExpiredCount_ {};
    shared_ptr<int32_t> buyCertificateExpireCount_ {};
    shared_ptr<int32_t> buyCertificateNotDeploymentCount_ {};
    shared_ptr<int32_t> buyCertificateNotTrusteeCount_ {};
    shared_ptr<int32_t> buyCertificateWillExpiredCount_ {};
    shared_ptr<int32_t> buyCheckedFailCount_ {};
    shared_ptr<int32_t> domainAssetNotMonitorCount_ {};
    shared_ptr<int32_t> freeCertificateExpireCount_ {};
    shared_ptr<int32_t> freeCertificateNotDeploymentCount_ {};
    shared_ptr<int32_t> freeCertificateWillExpiredCount_ {};
    shared_ptr<int32_t> freeCheckedFailCount_ {};
    shared_ptr<int32_t> multiCloudAssetCertificateExpiredCount_ {};
    shared_ptr<int32_t> multiCloudAssetCertificateWillExpiredCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> uploadCertificateExpireCount_ {};
    shared_ptr<int32_t> uploadCertificateNotDeploymentCount_ {};
    shared_ptr<int32_t> uploadCertificateNotNoticeCount_ {};
    shared_ptr<int32_t> uploadCertificateWillExpiredCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
