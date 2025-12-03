// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATESRESPONSEBODYCACERTIFICATESCACERTIFICATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATESRESPONSEBODYCACERTIFICATESCACERTIFICATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCACertificatesResponseBodyCACertificatesCACertificateTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeCACertificatesResponseBodyCACertificatesCACertificate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificatesResponseBodyCACertificatesCACertificate& obj) { 
      DARABONBA_PTR_TO_JSON(CACertificateId, CACertificateId_);
      DARABONBA_PTR_TO_JSON(CACertificateName, CACertificateName_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimeStamp, expireTimeStamp_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificatesResponseBodyCACertificatesCACertificate& obj) { 
      DARABONBA_PTR_FROM_JSON(CACertificateId, CACertificateId_);
      DARABONBA_PTR_FROM_JSON(CACertificateName, CACertificateName_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeStamp, expireTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeCACertificatesResponseBodyCACertificatesCACertificate() = default ;
    DescribeCACertificatesResponseBodyCACertificatesCACertificate(const DescribeCACertificatesResponseBodyCACertificatesCACertificate &) = default ;
    DescribeCACertificatesResponseBodyCACertificatesCACertificate(DescribeCACertificatesResponseBodyCACertificatesCACertificate &&) = default ;
    DescribeCACertificatesResponseBodyCACertificatesCACertificate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificatesResponseBodyCACertificatesCACertificate() = default ;
    DescribeCACertificatesResponseBodyCACertificatesCACertificate& operator=(const DescribeCACertificatesResponseBodyCACertificatesCACertificate &) = default ;
    DescribeCACertificatesResponseBodyCACertificatesCACertificate& operator=(DescribeCACertificatesResponseBodyCACertificatesCACertificate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CACertificateId_ == nullptr
        && return this->CACertificateName_ == nullptr && return this->commonName_ == nullptr && return this->createTime_ == nullptr && return this->createTimeStamp_ == nullptr && return this->expireTime_ == nullptr
        && return this->expireTimeStamp_ == nullptr && return this->fingerprint_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr; };
    // CACertificateId Field Functions 
    bool hasCACertificateId() const { return this->CACertificateId_ != nullptr;};
    void deleteCACertificateId() { this->CACertificateId_ = nullptr;};
    inline string CACertificateId() const { DARABONBA_PTR_GET_DEFAULT(CACertificateId_, "") };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setCACertificateId(string CACertificateId) { DARABONBA_PTR_SET_VALUE(CACertificateId_, CACertificateId) };


    // CACertificateName Field Functions 
    bool hasCACertificateName() const { return this->CACertificateName_ != nullptr;};
    void deleteCACertificateName() { this->CACertificateName_ = nullptr;};
    inline string CACertificateName() const { DARABONBA_PTR_GET_DEFAULT(CACertificateName_, "") };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setCACertificateName(string CACertificateName) { DARABONBA_PTR_SET_VALUE(CACertificateName_, CACertificateName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimeStamp Field Functions 
    bool hasExpireTimeStamp() const { return this->expireTimeStamp_ != nullptr;};
    void deleteExpireTimeStamp() { this->expireTimeStamp_ = nullptr;};
    inline int64_t expireTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimeStamp_, 0L) };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setExpireTimeStamp(int64_t expireTimeStamp) { DARABONBA_PTR_SET_VALUE(expireTimeStamp_, expireTimeStamp) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeCACertificatesResponseBodyCACertificatesCACertificateTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeCACertificatesResponseBodyCACertificatesCACertificateTags) };
    inline Models::DescribeCACertificatesResponseBodyCACertificatesCACertificateTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeCACertificatesResponseBodyCACertificatesCACertificateTags) };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setTags(const Models::DescribeCACertificatesResponseBodyCACertificatesCACertificateTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeCACertificatesResponseBodyCACertificatesCACertificate& setTags(Models::DescribeCACertificatesResponseBodyCACertificatesCACertificateTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The CA certificate ID.
    std::shared_ptr<string> CACertificateId_ = nullptr;
    // The CA certificate name.
    std::shared_ptr<string> CACertificateName_ = nullptr;
    // The domain name of the CA certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The time when the CA certificate was created. The time is in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp when the CA certificate was created. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // The time when the CA certificate expires. The time is in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The timestamp that indicates when the CA certificate expires. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expireTimeStamp_ = nullptr;
    // The fingerprint of the CA certificate.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The region of the CA certificate.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tag.
    std::shared_ptr<Models::DescribeCACertificatesResponseBodyCACertificatesCACertificateTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
