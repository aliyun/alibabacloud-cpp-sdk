// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSERVERCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSERVERCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadServerCertificateResponseBodySubjectAlternativeNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class UploadServerCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadServerCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliCloudCertificateId, aliCloudCertificateId_);
      DARABONBA_PTR_TO_JSON(AliCloudCertificateName, aliCloudCertificateName_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimeStamp, expireTimeStamp_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(IsAliCloudCertificate, isAliCloudCertificate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_TO_JSON(ServerCertificateName, serverCertificateName_);
      DARABONBA_PTR_TO_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
    };
    friend void from_json(const Darabonba::Json& j, UploadServerCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliCloudCertificateId, aliCloudCertificateId_);
      DARABONBA_PTR_FROM_JSON(AliCloudCertificateName, aliCloudCertificateName_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeStamp, expireTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(IsAliCloudCertificate, isAliCloudCertificate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateName, serverCertificateName_);
      DARABONBA_PTR_FROM_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
    };
    UploadServerCertificateResponseBody() = default ;
    UploadServerCertificateResponseBody(const UploadServerCertificateResponseBody &) = default ;
    UploadServerCertificateResponseBody(UploadServerCertificateResponseBody &&) = default ;
    UploadServerCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadServerCertificateResponseBody() = default ;
    UploadServerCertificateResponseBody& operator=(const UploadServerCertificateResponseBody &) = default ;
    UploadServerCertificateResponseBody& operator=(UploadServerCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliCloudCertificateId_ == nullptr
        && return this->aliCloudCertificateName_ == nullptr && return this->commonName_ == nullptr && return this->createTime_ == nullptr && return this->createTimeStamp_ == nullptr && return this->expireTime_ == nullptr
        && return this->expireTimeStamp_ == nullptr && return this->fingerprint_ == nullptr && return this->isAliCloudCertificate_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->serverCertificateId_ == nullptr && return this->serverCertificateName_ == nullptr && return this->subjectAlternativeNames_ == nullptr; };
    // aliCloudCertificateId Field Functions 
    bool hasAliCloudCertificateId() const { return this->aliCloudCertificateId_ != nullptr;};
    void deleteAliCloudCertificateId() { this->aliCloudCertificateId_ = nullptr;};
    inline string aliCloudCertificateId() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateId_, "") };
    inline UploadServerCertificateResponseBody& setAliCloudCertificateId(string aliCloudCertificateId) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateId_, aliCloudCertificateId) };


    // aliCloudCertificateName Field Functions 
    bool hasAliCloudCertificateName() const { return this->aliCloudCertificateName_ != nullptr;};
    void deleteAliCloudCertificateName() { this->aliCloudCertificateName_ = nullptr;};
    inline string aliCloudCertificateName() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateName_, "") };
    inline UploadServerCertificateResponseBody& setAliCloudCertificateName(string aliCloudCertificateName) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateName_, aliCloudCertificateName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline UploadServerCertificateResponseBody& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UploadServerCertificateResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline UploadServerCertificateResponseBody& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline UploadServerCertificateResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimeStamp Field Functions 
    bool hasExpireTimeStamp() const { return this->expireTimeStamp_ != nullptr;};
    void deleteExpireTimeStamp() { this->expireTimeStamp_ = nullptr;};
    inline int64_t expireTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimeStamp_, 0L) };
    inline UploadServerCertificateResponseBody& setExpireTimeStamp(int64_t expireTimeStamp) { DARABONBA_PTR_SET_VALUE(expireTimeStamp_, expireTimeStamp) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline UploadServerCertificateResponseBody& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // isAliCloudCertificate Field Functions 
    bool hasIsAliCloudCertificate() const { return this->isAliCloudCertificate_ != nullptr;};
    void deleteIsAliCloudCertificate() { this->isAliCloudCertificate_ = nullptr;};
    inline int32_t isAliCloudCertificate() const { DARABONBA_PTR_GET_DEFAULT(isAliCloudCertificate_, 0) };
    inline UploadServerCertificateResponseBody& setIsAliCloudCertificate(int32_t isAliCloudCertificate) { DARABONBA_PTR_SET_VALUE(isAliCloudCertificate_, isAliCloudCertificate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadServerCertificateResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadServerCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UploadServerCertificateResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string serverCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline UploadServerCertificateResponseBody& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


    // serverCertificateName Field Functions 
    bool hasServerCertificateName() const { return this->serverCertificateName_ != nullptr;};
    void deleteServerCertificateName() { this->serverCertificateName_ = nullptr;};
    inline string serverCertificateName() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateName_, "") };
    inline UploadServerCertificateResponseBody& setServerCertificateName(string serverCertificateName) { DARABONBA_PTR_SET_VALUE(serverCertificateName_, serverCertificateName) };


    // subjectAlternativeNames Field Functions 
    bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
    void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
    inline const UploadServerCertificateResponseBodySubjectAlternativeNames & subjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, UploadServerCertificateResponseBodySubjectAlternativeNames) };
    inline UploadServerCertificateResponseBodySubjectAlternativeNames subjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, UploadServerCertificateResponseBodySubjectAlternativeNames) };
    inline UploadServerCertificateResponseBody& setSubjectAlternativeNames(const UploadServerCertificateResponseBodySubjectAlternativeNames & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
    inline UploadServerCertificateResponseBody& setSubjectAlternativeNames(UploadServerCertificateResponseBodySubjectAlternativeNames && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


  protected:
    // The AliCloud certificate ID.
    std::shared_ptr<string> aliCloudCertificateId_ = nullptr;
    // The AliCloud certificate name.
    std::shared_ptr<string> aliCloudCertificateName_ = nullptr;
    // The domain name of the CA certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The time when the CA certificate is uploaded.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp generated when the CA certificate is uploaded.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // The time when the CA certificate expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The timestamp generated when the CA certificate expires.
    std::shared_ptr<int64_t> expireTimeStamp_ = nullptr;
    // The fingerprint of the CA certificate.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // Indicates whether the certificate is provided by Alibaba Cloud Certificate Management Service. Valid values:
    // - **0**: The certificate is not provided by Alibaba Cloud Certificate Management Service.
    // - **1**: The certificate is provided by Alibaba Cloud Certificate Management Service.
    std::shared_ptr<int32_t> isAliCloudCertificate_ = nullptr;
    // The ID of the region where the Classic Load Balancer (CLB) instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the server certificate.
    std::shared_ptr<string> serverCertificateId_ = nullptr;
    // The name of the server certificate.
    // 
    // The name must be 1 to 80 characters in length. It must start with an English letter. It can contain letters, numbers, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> serverCertificateName_ = nullptr;
    // The subject alternative names.
    // 
    // A domain name list is supported. A maximum of 10 domain names are supported.
    std::shared_ptr<UploadServerCertificateResponseBodySubjectAlternativeNames> subjectAlternativeNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
