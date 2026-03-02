// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetAssetCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunAssetCount, aliyunAssetCount_);
      DARABONBA_PTR_TO_JSON(AwsAssetCount, awsAssetCount_);
      DARABONBA_PTR_TO_JSON(BuyCertificateCount, buyCertificateCount_);
      DARABONBA_PTR_TO_JSON(DomainAssetCount, domainAssetCount_);
      DARABONBA_PTR_TO_JSON(FreeCertificateCount, freeCertificateCount_);
      DARABONBA_PTR_TO_JSON(HuaweiAssetCount, huaweiAssetCount_);
      DARABONBA_PTR_TO_JSON(LastPoint, lastPoint_);
      DARABONBA_PTR_TO_JSON(Point, point_);
      DARABONBA_PTR_TO_JSON(PointRatio, pointRatio_);
      DARABONBA_PTR_TO_JSON(PointTime, pointTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TencentAssetCount, tencentAssetCount_);
      DARABONBA_PTR_TO_JSON(UploadCertificateCount, uploadCertificateCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunAssetCount, aliyunAssetCount_);
      DARABONBA_PTR_FROM_JSON(AwsAssetCount, awsAssetCount_);
      DARABONBA_PTR_FROM_JSON(BuyCertificateCount, buyCertificateCount_);
      DARABONBA_PTR_FROM_JSON(DomainAssetCount, domainAssetCount_);
      DARABONBA_PTR_FROM_JSON(FreeCertificateCount, freeCertificateCount_);
      DARABONBA_PTR_FROM_JSON(HuaweiAssetCount, huaweiAssetCount_);
      DARABONBA_PTR_FROM_JSON(LastPoint, lastPoint_);
      DARABONBA_PTR_FROM_JSON(Point, point_);
      DARABONBA_PTR_FROM_JSON(PointRatio, pointRatio_);
      DARABONBA_PTR_FROM_JSON(PointTime, pointTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TencentAssetCount, tencentAssetCount_);
      DARABONBA_PTR_FROM_JSON(UploadCertificateCount, uploadCertificateCount_);
    };
    GetAssetCountResponseBody() = default ;
    GetAssetCountResponseBody(const GetAssetCountResponseBody &) = default ;
    GetAssetCountResponseBody(GetAssetCountResponseBody &&) = default ;
    GetAssetCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetCountResponseBody() = default ;
    GetAssetCountResponseBody& operator=(const GetAssetCountResponseBody &) = default ;
    GetAssetCountResponseBody& operator=(GetAssetCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunAssetCount_ == nullptr
        && this->awsAssetCount_ == nullptr && this->buyCertificateCount_ == nullptr && this->domainAssetCount_ == nullptr && this->freeCertificateCount_ == nullptr && this->huaweiAssetCount_ == nullptr
        && this->lastPoint_ == nullptr && this->point_ == nullptr && this->pointRatio_ == nullptr && this->pointTime_ == nullptr && this->requestId_ == nullptr
        && this->tencentAssetCount_ == nullptr && this->uploadCertificateCount_ == nullptr; };
    // aliyunAssetCount Field Functions 
    bool hasAliyunAssetCount() const { return this->aliyunAssetCount_ != nullptr;};
    void deleteAliyunAssetCount() { this->aliyunAssetCount_ = nullptr;};
    inline int32_t getAliyunAssetCount() const { DARABONBA_PTR_GET_DEFAULT(aliyunAssetCount_, 0) };
    inline GetAssetCountResponseBody& setAliyunAssetCount(int32_t aliyunAssetCount) { DARABONBA_PTR_SET_VALUE(aliyunAssetCount_, aliyunAssetCount) };


    // awsAssetCount Field Functions 
    bool hasAwsAssetCount() const { return this->awsAssetCount_ != nullptr;};
    void deleteAwsAssetCount() { this->awsAssetCount_ = nullptr;};
    inline int32_t getAwsAssetCount() const { DARABONBA_PTR_GET_DEFAULT(awsAssetCount_, 0) };
    inline GetAssetCountResponseBody& setAwsAssetCount(int32_t awsAssetCount) { DARABONBA_PTR_SET_VALUE(awsAssetCount_, awsAssetCount) };


    // buyCertificateCount Field Functions 
    bool hasBuyCertificateCount() const { return this->buyCertificateCount_ != nullptr;};
    void deleteBuyCertificateCount() { this->buyCertificateCount_ = nullptr;};
    inline int32_t getBuyCertificateCount() const { DARABONBA_PTR_GET_DEFAULT(buyCertificateCount_, 0) };
    inline GetAssetCountResponseBody& setBuyCertificateCount(int32_t buyCertificateCount) { DARABONBA_PTR_SET_VALUE(buyCertificateCount_, buyCertificateCount) };


    // domainAssetCount Field Functions 
    bool hasDomainAssetCount() const { return this->domainAssetCount_ != nullptr;};
    void deleteDomainAssetCount() { this->domainAssetCount_ = nullptr;};
    inline int32_t getDomainAssetCount() const { DARABONBA_PTR_GET_DEFAULT(domainAssetCount_, 0) };
    inline GetAssetCountResponseBody& setDomainAssetCount(int32_t domainAssetCount) { DARABONBA_PTR_SET_VALUE(domainAssetCount_, domainAssetCount) };


    // freeCertificateCount Field Functions 
    bool hasFreeCertificateCount() const { return this->freeCertificateCount_ != nullptr;};
    void deleteFreeCertificateCount() { this->freeCertificateCount_ = nullptr;};
    inline int32_t getFreeCertificateCount() const { DARABONBA_PTR_GET_DEFAULT(freeCertificateCount_, 0) };
    inline GetAssetCountResponseBody& setFreeCertificateCount(int32_t freeCertificateCount) { DARABONBA_PTR_SET_VALUE(freeCertificateCount_, freeCertificateCount) };


    // huaweiAssetCount Field Functions 
    bool hasHuaweiAssetCount() const { return this->huaweiAssetCount_ != nullptr;};
    void deleteHuaweiAssetCount() { this->huaweiAssetCount_ = nullptr;};
    inline int32_t getHuaweiAssetCount() const { DARABONBA_PTR_GET_DEFAULT(huaweiAssetCount_, 0) };
    inline GetAssetCountResponseBody& setHuaweiAssetCount(int32_t huaweiAssetCount) { DARABONBA_PTR_SET_VALUE(huaweiAssetCount_, huaweiAssetCount) };


    // lastPoint Field Functions 
    bool hasLastPoint() const { return this->lastPoint_ != nullptr;};
    void deleteLastPoint() { this->lastPoint_ = nullptr;};
    inline int32_t getLastPoint() const { DARABONBA_PTR_GET_DEFAULT(lastPoint_, 0) };
    inline GetAssetCountResponseBody& setLastPoint(int32_t lastPoint) { DARABONBA_PTR_SET_VALUE(lastPoint_, lastPoint) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline int32_t getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, 0) };
    inline GetAssetCountResponseBody& setPoint(int32_t point) { DARABONBA_PTR_SET_VALUE(point_, point) };


    // pointRatio Field Functions 
    bool hasPointRatio() const { return this->pointRatio_ != nullptr;};
    void deletePointRatio() { this->pointRatio_ = nullptr;};
    inline int32_t getPointRatio() const { DARABONBA_PTR_GET_DEFAULT(pointRatio_, 0) };
    inline GetAssetCountResponseBody& setPointRatio(int32_t pointRatio) { DARABONBA_PTR_SET_VALUE(pointRatio_, pointRatio) };


    // pointTime Field Functions 
    bool hasPointTime() const { return this->pointTime_ != nullptr;};
    void deletePointTime() { this->pointTime_ = nullptr;};
    inline int64_t getPointTime() const { DARABONBA_PTR_GET_DEFAULT(pointTime_, 0L) };
    inline GetAssetCountResponseBody& setPointTime(int64_t pointTime) { DARABONBA_PTR_SET_VALUE(pointTime_, pointTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tencentAssetCount Field Functions 
    bool hasTencentAssetCount() const { return this->tencentAssetCount_ != nullptr;};
    void deleteTencentAssetCount() { this->tencentAssetCount_ = nullptr;};
    inline int32_t getTencentAssetCount() const { DARABONBA_PTR_GET_DEFAULT(tencentAssetCount_, 0) };
    inline GetAssetCountResponseBody& setTencentAssetCount(int32_t tencentAssetCount) { DARABONBA_PTR_SET_VALUE(tencentAssetCount_, tencentAssetCount) };


    // uploadCertificateCount Field Functions 
    bool hasUploadCertificateCount() const { return this->uploadCertificateCount_ != nullptr;};
    void deleteUploadCertificateCount() { this->uploadCertificateCount_ = nullptr;};
    inline int32_t getUploadCertificateCount() const { DARABONBA_PTR_GET_DEFAULT(uploadCertificateCount_, 0) };
    inline GetAssetCountResponseBody& setUploadCertificateCount(int32_t uploadCertificateCount) { DARABONBA_PTR_SET_VALUE(uploadCertificateCount_, uploadCertificateCount) };


  protected:
    shared_ptr<int32_t> aliyunAssetCount_ {};
    shared_ptr<int32_t> awsAssetCount_ {};
    shared_ptr<int32_t> buyCertificateCount_ {};
    shared_ptr<int32_t> domainAssetCount_ {};
    shared_ptr<int32_t> freeCertificateCount_ {};
    shared_ptr<int32_t> huaweiAssetCount_ {};
    shared_ptr<int32_t> lastPoint_ {};
    shared_ptr<int32_t> point_ {};
    shared_ptr<int32_t> pointRatio_ {};
    shared_ptr<int64_t> pointTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> tencentAssetCount_ {};
    shared_ptr<int32_t> uploadCertificateCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
