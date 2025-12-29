// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaVerifyWithOCRAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyWithOCRAdvanceRequest& obj) { 
      // certFileObject_ is stream
      // certNationalFileObject_ is stream
      DARABONBA_PTR_TO_JSON(CertNationalUrl, certNationalUrl_);
      DARABONBA_PTR_TO_JSON(CertUrl, certUrl_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyWithOCRAdvanceRequest& obj) { 
      // certFileObject_ is stream
      // certNationalFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(CertNationalUrl, certNationalUrl_);
      DARABONBA_PTR_FROM_JSON(CertUrl, certUrl_);
    };
    Id2MetaVerifyWithOCRAdvanceRequest() = default ;
    Id2MetaVerifyWithOCRAdvanceRequest(const Id2MetaVerifyWithOCRAdvanceRequest &) = default ;
    Id2MetaVerifyWithOCRAdvanceRequest(Id2MetaVerifyWithOCRAdvanceRequest &&) = default ;
    Id2MetaVerifyWithOCRAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyWithOCRAdvanceRequest() = default ;
    Id2MetaVerifyWithOCRAdvanceRequest& operator=(const Id2MetaVerifyWithOCRAdvanceRequest &) = default ;
    Id2MetaVerifyWithOCRAdvanceRequest& operator=(Id2MetaVerifyWithOCRAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certFileObject_ == nullptr
        && this->certNationalFileObject_ == nullptr && this->certNationalUrl_ == nullptr && this->certUrl_ == nullptr; };
    // certFileObject Field Functions 
    bool hasCertFileObject() const { return this->certFileObject_ != nullptr;};
    void deleteCertFileObject() { this->certFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getCertFileObject() const { DARABONBA_GET(certFileObject_) };
    inline Id2MetaVerifyWithOCRAdvanceRequest& setCertFileObject(shared_ptr<Darabonba::IStream> certFileObject) { DARABONBA_SET_VALUE(certFileObject_, certFileObject) };


    // certNationalFileObject Field Functions 
    bool hasCertNationalFileObject() const { return this->certNationalFileObject_ != nullptr;};
    void deleteCertNationalFileObject() { this->certNationalFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getCertNationalFileObject() const { DARABONBA_GET(certNationalFileObject_) };
    inline Id2MetaVerifyWithOCRAdvanceRequest& setCertNationalFileObject(shared_ptr<Darabonba::IStream> certNationalFileObject) { DARABONBA_SET_VALUE(certNationalFileObject_, certNationalFileObject) };


    // certNationalUrl Field Functions 
    bool hasCertNationalUrl() const { return this->certNationalUrl_ != nullptr;};
    void deleteCertNationalUrl() { this->certNationalUrl_ = nullptr;};
    inline string getCertNationalUrl() const { DARABONBA_PTR_GET_DEFAULT(certNationalUrl_, "") };
    inline Id2MetaVerifyWithOCRAdvanceRequest& setCertNationalUrl(string certNationalUrl) { DARABONBA_PTR_SET_VALUE(certNationalUrl_, certNationalUrl) };


    // certUrl Field Functions 
    bool hasCertUrl() const { return this->certUrl_ != nullptr;};
    void deleteCertUrl() { this->certUrl_ = nullptr;};
    inline string getCertUrl() const { DARABONBA_PTR_GET_DEFAULT(certUrl_, "") };
    inline Id2MetaVerifyWithOCRAdvanceRequest& setCertUrl(string certUrl) { DARABONBA_PTR_SET_VALUE(certUrl_, certUrl) };


  protected:
    // Input stream for the portrait side of the ID card image.
    // Choose one between CertUrl and CertFile.
    shared_ptr<Darabonba::IStream> certFileObject_ {};
    // National emblem side of the ID card image address.
    // Choose one between CertNationalUrl and CertNationalFile, or omit both.
    shared_ptr<Darabonba::IStream> certNationalFileObject_ {};
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
