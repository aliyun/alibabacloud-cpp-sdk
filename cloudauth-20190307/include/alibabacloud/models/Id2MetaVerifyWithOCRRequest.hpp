// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaVerifyWithOCRRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyWithOCRRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertFile, certFile_);
      DARABONBA_PTR_TO_JSON(CertNationalFile, certNationalFile_);
      DARABONBA_PTR_TO_JSON(CertNationalUrl, certNationalUrl_);
      DARABONBA_PTR_TO_JSON(CertUrl, certUrl_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyWithOCRRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertFile, certFile_);
      DARABONBA_PTR_FROM_JSON(CertNationalFile, certNationalFile_);
      DARABONBA_PTR_FROM_JSON(CertNationalUrl, certNationalUrl_);
      DARABONBA_PTR_FROM_JSON(CertUrl, certUrl_);
    };
    Id2MetaVerifyWithOCRRequest() = default ;
    Id2MetaVerifyWithOCRRequest(const Id2MetaVerifyWithOCRRequest &) = default ;
    Id2MetaVerifyWithOCRRequest(Id2MetaVerifyWithOCRRequest &&) = default ;
    Id2MetaVerifyWithOCRRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyWithOCRRequest() = default ;
    Id2MetaVerifyWithOCRRequest& operator=(const Id2MetaVerifyWithOCRRequest &) = default ;
    Id2MetaVerifyWithOCRRequest& operator=(Id2MetaVerifyWithOCRRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certFile_ == nullptr
        && this->certNationalFile_ == nullptr && this->certNationalUrl_ == nullptr && this->certUrl_ == nullptr; };
    // certFile Field Functions 
    bool hasCertFile() const { return this->certFile_ != nullptr;};
    void deleteCertFile() { this->certFile_ = nullptr;};
    inline string getCertFile() const { DARABONBA_PTR_GET_DEFAULT(certFile_, "") };
    inline Id2MetaVerifyWithOCRRequest& setCertFile(string certFile) { DARABONBA_PTR_SET_VALUE(certFile_, certFile) };


    // certNationalFile Field Functions 
    bool hasCertNationalFile() const { return this->certNationalFile_ != nullptr;};
    void deleteCertNationalFile() { this->certNationalFile_ = nullptr;};
    inline string getCertNationalFile() const { DARABONBA_PTR_GET_DEFAULT(certNationalFile_, "") };
    inline Id2MetaVerifyWithOCRRequest& setCertNationalFile(string certNationalFile) { DARABONBA_PTR_SET_VALUE(certNationalFile_, certNationalFile) };


    // certNationalUrl Field Functions 
    bool hasCertNationalUrl() const { return this->certNationalUrl_ != nullptr;};
    void deleteCertNationalUrl() { this->certNationalUrl_ = nullptr;};
    inline string getCertNationalUrl() const { DARABONBA_PTR_GET_DEFAULT(certNationalUrl_, "") };
    inline Id2MetaVerifyWithOCRRequest& setCertNationalUrl(string certNationalUrl) { DARABONBA_PTR_SET_VALUE(certNationalUrl_, certNationalUrl) };


    // certUrl Field Functions 
    bool hasCertUrl() const { return this->certUrl_ != nullptr;};
    void deleteCertUrl() { this->certUrl_ = nullptr;};
    inline string getCertUrl() const { DARABONBA_PTR_GET_DEFAULT(certUrl_, "") };
    inline Id2MetaVerifyWithOCRRequest& setCertUrl(string certUrl) { DARABONBA_PTR_SET_VALUE(certUrl_, certUrl) };


  protected:
    // Input stream for the portrait side of the ID card image.
    // Choose one between CertUrl and CertFile.
    shared_ptr<string> certFile_ {};
    // National emblem side of the ID card image address.
    // Choose one between CertNationalUrl and CertNationalFile, or omit both.
    shared_ptr<string> certNationalFile_ {};
    // National emblem side of the ID card image URL. National emblem side
    // A publicly accessible HTTP or HTTPS link.
    // Choose one between CertNationalUrl and CertNationalFile, or omit both.
    shared_ptr<string> certNationalUrl_ {};
    // Portrait side of the ID card image.
    // A publicly accessible HTTP or HTTPS link.
    // Choose one between CertUrl and CertFile.
    shared_ptr<string> certUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
