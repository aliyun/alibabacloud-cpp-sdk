// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEEXTERNALSAMLIDPCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEEXTERNALSAMLIDPCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class RemoveExternalSAMLIdPCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveExternalSAMLIdPCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveExternalSAMLIdPCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
    };
    RemoveExternalSAMLIdPCertificateRequest() = default ;
    RemoveExternalSAMLIdPCertificateRequest(const RemoveExternalSAMLIdPCertificateRequest &) = default ;
    RemoveExternalSAMLIdPCertificateRequest(RemoveExternalSAMLIdPCertificateRequest &&) = default ;
    RemoveExternalSAMLIdPCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveExternalSAMLIdPCertificateRequest() = default ;
    RemoveExternalSAMLIdPCertificateRequest& operator=(const RemoveExternalSAMLIdPCertificateRequest &) = default ;
    RemoveExternalSAMLIdPCertificateRequest& operator=(RemoveExternalSAMLIdPCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->directoryId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline RemoveExternalSAMLIdPCertificateRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline RemoveExternalSAMLIdPCertificateRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


  protected:
    // The ID of the certificate.
    // 
    // You can call the [ListExternalSAMLIdPCertificates](https://help.aliyun.com/document_detail/341629.html) operation to query the IDs of certificates.
    shared_ptr<string> certificateId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
