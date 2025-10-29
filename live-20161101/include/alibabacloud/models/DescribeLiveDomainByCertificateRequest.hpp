// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBYCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBYCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainByCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainByCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(SSLStatus, SSLStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainByCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(SSLStatus, SSLStatus_);
    };
    DescribeLiveDomainByCertificateRequest() = default ;
    DescribeLiveDomainByCertificateRequest(const DescribeLiveDomainByCertificateRequest &) = default ;
    DescribeLiveDomainByCertificateRequest(DescribeLiveDomainByCertificateRequest &&) = default ;
    DescribeLiveDomainByCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainByCertificateRequest() = default ;
    DescribeLiveDomainByCertificateRequest& operator=(const DescribeLiveDomainByCertificateRequest &) = default ;
    DescribeLiveDomainByCertificateRequest& operator=(DescribeLiveDomainByCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->SSLPub_ == nullptr && return this->SSLStatus_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveDomainByCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveDomainByCertificateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline DescribeLiveDomainByCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // SSLStatus Field Functions 
    bool hasSSLStatus() const { return this->SSLStatus_ != nullptr;};
    void deleteSSLStatus() { this->SSLStatus_ = nullptr;};
    inline bool SSLStatus() const { DARABONBA_PTR_GET_DEFAULT(SSLStatus_, false) };
    inline DescribeLiveDomainByCertificateRequest& setSSLStatus(bool SSLStatus) { DARABONBA_PTR_SET_VALUE(SSLStatus_, SSLStatus) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The public key of the SSL certificate. You must Base64-encode the public key before you invoke the encodeURIComponent function to encode a URI component. The public key must be in the PEM format.
    // 
    // This parameter is required.
    std::shared_ptr<string> SSLPub_ = nullptr;
    // Specifies whether to return only domain names with HTTPS enabled or disabled.
    // 
    // *   **true**: returns only domain names with HTTPS enabled.
    // *   **false**: The rule is disabled.
    std::shared_ptr<bool> SSLStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
