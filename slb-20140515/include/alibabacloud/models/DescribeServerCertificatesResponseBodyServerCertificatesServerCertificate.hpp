// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODYSERVERCERTIFICATESSERVERCERTIFICATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODYSERVERCERTIFICATESSERVERCERTIFICATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames.hpp>
#include <alibabacloud/models/DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& obj) { 
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
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_TO_JSON(ServerCertificateName, serverCertificateName_);
      DARABONBA_PTR_TO_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateName, serverCertificateName_);
      DARABONBA_PTR_FROM_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate() = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate(const DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate &) = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate(DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate &&) = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate() = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& operator=(const DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate &) = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& operator=(DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliCloudCertificateId_ == nullptr
        && return this->aliCloudCertificateName_ == nullptr && return this->commonName_ == nullptr && return this->createTime_ == nullptr && return this->createTimeStamp_ == nullptr && return this->expireTime_ == nullptr
        && return this->expireTimeStamp_ == nullptr && return this->fingerprint_ == nullptr && return this->isAliCloudCertificate_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->serverCertificateId_ == nullptr && return this->serverCertificateName_ == nullptr && return this->subjectAlternativeNames_ == nullptr && return this->tags_ == nullptr; };
    // aliCloudCertificateId Field Functions 
    bool hasAliCloudCertificateId() const { return this->aliCloudCertificateId_ != nullptr;};
    void deleteAliCloudCertificateId() { this->aliCloudCertificateId_ = nullptr;};
    inline string aliCloudCertificateId() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateId_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setAliCloudCertificateId(string aliCloudCertificateId) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateId_, aliCloudCertificateId) };


    // aliCloudCertificateName Field Functions 
    bool hasAliCloudCertificateName() const { return this->aliCloudCertificateName_ != nullptr;};
    void deleteAliCloudCertificateName() { this->aliCloudCertificateName_ = nullptr;};
    inline string aliCloudCertificateName() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateName_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setAliCloudCertificateName(string aliCloudCertificateName) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateName_, aliCloudCertificateName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimeStamp Field Functions 
    bool hasExpireTimeStamp() const { return this->expireTimeStamp_ != nullptr;};
    void deleteExpireTimeStamp() { this->expireTimeStamp_ = nullptr;};
    inline int64_t expireTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimeStamp_, 0L) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setExpireTimeStamp(int64_t expireTimeStamp) { DARABONBA_PTR_SET_VALUE(expireTimeStamp_, expireTimeStamp) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // isAliCloudCertificate Field Functions 
    bool hasIsAliCloudCertificate() const { return this->isAliCloudCertificate_ != nullptr;};
    void deleteIsAliCloudCertificate() { this->isAliCloudCertificate_ = nullptr;};
    inline int32_t isAliCloudCertificate() const { DARABONBA_PTR_GET_DEFAULT(isAliCloudCertificate_, 0) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setIsAliCloudCertificate(int32_t isAliCloudCertificate) { DARABONBA_PTR_SET_VALUE(isAliCloudCertificate_, isAliCloudCertificate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string serverCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


    // serverCertificateName Field Functions 
    bool hasServerCertificateName() const { return this->serverCertificateName_ != nullptr;};
    void deleteServerCertificateName() { this->serverCertificateName_ = nullptr;};
    inline string serverCertificateName() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateName_, "") };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setServerCertificateName(string serverCertificateName) { DARABONBA_PTR_SET_VALUE(serverCertificateName_, serverCertificateName) };


    // subjectAlternativeNames Field Functions 
    bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
    void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
    inline const Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames & subjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames) };
    inline Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames subjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setSubjectAlternativeNames(const Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setSubjectAlternativeNames(Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags) };
    inline Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setTags(const Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate& setTags(Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the server certificate from Alibaba Cloud Certificate Management Service.
    std::shared_ptr<string> aliCloudCertificateId_ = nullptr;
    // The name of the server certificate from Alibaba Cloud Certificate Management Service.
    std::shared_ptr<string> aliCloudCertificateName_ = nullptr;
    // The domain name of the server certificate. The domain name is specified in the `CommonName` field.
    std::shared_ptr<string> commonName_ = nullptr;
    // The time when the server certificate was uploaded.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp when the server certificate was uploaded.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // The time when the server certificate expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The timestamp when the server certificate expires.
    std::shared_ptr<int64_t> expireTimeStamp_ = nullptr;
    // The fingerprint of the server certificate.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // Indicates whether the server certificate is from Alibaba Cloud Certificate Management Service. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> isAliCloudCertificate_ = nullptr;
    // The region ID of the server certificate.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The server certificate ID.
    std::shared_ptr<string> serverCertificateId_ = nullptr;
    // The name of the server certificate.
    std::shared_ptr<string> serverCertificateName_ = nullptr;
    // The alternative domain names of the server certificate. The alternative domain names are specified in the Subject Alternative Name field of the server certificate.
    std::shared_ptr<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateSubjectAlternativeNames> subjectAlternativeNames_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
