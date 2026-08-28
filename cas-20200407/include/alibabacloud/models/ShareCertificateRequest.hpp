// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHARECERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHARECERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ShareCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShareCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ShareCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    ShareCertificateRequest() = default ;
    ShareCertificateRequest(const ShareCertificateRequest &) = default ;
    ShareCertificateRequest(ShareCertificateRequest &&) = default ;
    ShareCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShareCertificateRequest() = default ;
    ShareCertificateRequest& operator=(const ShareCertificateRequest &) = default ;
    ShareCertificateRequest& operator=(ShareCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->targetUserId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline int64_t getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, 0L) };
    inline ShareCertificateRequest& setCertificateId(int64_t certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline ShareCertificateRequest& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> certificateId_ {};
    // This parameter is required.
    shared_ptr<int64_t> targetUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
