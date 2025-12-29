// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID3METAVERIFYWITHOCRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID3METAVERIFYWITHOCRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id3MetaVerifyWithOCRRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id3MetaVerifyWithOCRRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertFile, certFile_);
      DARABONBA_PTR_TO_JSON(CertNationalFile, certNationalFile_);
      DARABONBA_PTR_TO_JSON(CertNationalUrl, certNationalUrl_);
      DARABONBA_PTR_TO_JSON(CertUrl, certUrl_);
    };
    friend void from_json(const Darabonba::Json& j, Id3MetaVerifyWithOCRRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertFile, certFile_);
      DARABONBA_PTR_FROM_JSON(CertNationalFile, certNationalFile_);
      DARABONBA_PTR_FROM_JSON(CertNationalUrl, certNationalUrl_);
      DARABONBA_PTR_FROM_JSON(CertUrl, certUrl_);
    };
    Id3MetaVerifyWithOCRRequest() = default ;
    Id3MetaVerifyWithOCRRequest(const Id3MetaVerifyWithOCRRequest &) = default ;
    Id3MetaVerifyWithOCRRequest(Id3MetaVerifyWithOCRRequest &&) = default ;
    Id3MetaVerifyWithOCRRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id3MetaVerifyWithOCRRequest() = default ;
    Id3MetaVerifyWithOCRRequest& operator=(const Id3MetaVerifyWithOCRRequest &) = default ;
    Id3MetaVerifyWithOCRRequest& operator=(Id3MetaVerifyWithOCRRequest &&) = default ;
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
    inline Id3MetaVerifyWithOCRRequest& setCertFile(string certFile) { DARABONBA_PTR_SET_VALUE(certFile_, certFile) };


    // certNationalFile Field Functions 
    bool hasCertNationalFile() const { return this->certNationalFile_ != nullptr;};
    void deleteCertNationalFile() { this->certNationalFile_ = nullptr;};
    inline string getCertNationalFile() const { DARABONBA_PTR_GET_DEFAULT(certNationalFile_, "") };
    inline Id3MetaVerifyWithOCRRequest& setCertNationalFile(string certNationalFile) { DARABONBA_PTR_SET_VALUE(certNationalFile_, certNationalFile) };


    // certNationalUrl Field Functions 
    bool hasCertNationalUrl() const { return this->certNationalUrl_ != nullptr;};
    void deleteCertNationalUrl() { this->certNationalUrl_ = nullptr;};
    inline string getCertNationalUrl() const { DARABONBA_PTR_GET_DEFAULT(certNationalUrl_, "") };
    inline Id3MetaVerifyWithOCRRequest& setCertNationalUrl(string certNationalUrl) { DARABONBA_PTR_SET_VALUE(certNationalUrl_, certNationalUrl) };


    // certUrl Field Functions 
    bool hasCertUrl() const { return this->certUrl_ != nullptr;};
    void deleteCertUrl() { this->certUrl_ = nullptr;};
    inline string getCertUrl() const { DARABONBA_PTR_GET_DEFAULT(certUrl_, "") };
    inline Id3MetaVerifyWithOCRRequest& setCertUrl(string certUrl) { DARABONBA_PTR_SET_VALUE(certUrl_, certUrl) };


  protected:
    // Input stream for the portrait side of the ID card image. Choose either CertUrl or CertFile.
    shared_ptr<string> certFile_ {};
    // URL for the national emblem side of the ID card image. Choose either CertNationalUrl or CertNationalFile, or omit both.
    shared_ptr<string> certNationalFile_ {};
    // National emblem side of the ID card image URL. A publicly accessible HTTP or HTTPS link. You can choose either CertNationalUrl or CertNationalFile, or omit both.
    shared_ptr<string> certNationalUrl_ {};
    // Portrait side of the ID card image. A publicly accessible HTTP or HTTPS link. Choose either CertUrl or CertFile.
    shared_ptr<string> certUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
