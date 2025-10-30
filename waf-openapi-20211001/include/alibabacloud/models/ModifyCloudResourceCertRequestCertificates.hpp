// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCECERTREQUESTCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCECERTREQUESTCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyCloudResourceCertRequestCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceCertRequestCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceCertRequestCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    ModifyCloudResourceCertRequestCertificates() = default ;
    ModifyCloudResourceCertRequestCertificates(const ModifyCloudResourceCertRequestCertificates &) = default ;
    ModifyCloudResourceCertRequestCertificates(ModifyCloudResourceCertRequestCertificates &&) = default ;
    ModifyCloudResourceCertRequestCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceCertRequestCertificates() = default ;
    ModifyCloudResourceCertRequestCertificates& operator=(const ModifyCloudResourceCertRequestCertificates &) = default ;
    ModifyCloudResourceCertRequestCertificates& operator=(ModifyCloudResourceCertRequestCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appliedType_ == nullptr
        && return this->certificateId_ == nullptr; };
    // appliedType Field Functions 
    bool hasAppliedType() const { return this->appliedType_ != nullptr;};
    void deleteAppliedType() { this->appliedType_ = nullptr;};
    inline string appliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
    inline ModifyCloudResourceCertRequestCertificates& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline ModifyCloudResourceCertRequestCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appliedType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
