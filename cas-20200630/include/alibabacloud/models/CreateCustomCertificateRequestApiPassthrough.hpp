// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGH_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGH_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCustomCertificateRequestApiPassthroughExtensions.hpp>
#include <alibabacloud/models/CreateCustomCertificateRequestApiPassthroughSubject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateCustomCertificateRequestApiPassthrough : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCertificateRequestApiPassthrough& obj) { 
      DARABONBA_PTR_TO_JSON(Extensions, extensions_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCertificateRequestApiPassthrough& obj) { 
      DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
    };
    CreateCustomCertificateRequestApiPassthrough() = default ;
    CreateCustomCertificateRequestApiPassthrough(const CreateCustomCertificateRequestApiPassthrough &) = default ;
    CreateCustomCertificateRequestApiPassthrough(CreateCustomCertificateRequestApiPassthrough &&) = default ;
    CreateCustomCertificateRequestApiPassthrough(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCertificateRequestApiPassthrough() = default ;
    CreateCustomCertificateRequestApiPassthrough& operator=(const CreateCustomCertificateRequestApiPassthrough &) = default ;
    CreateCustomCertificateRequestApiPassthrough& operator=(CreateCustomCertificateRequestApiPassthrough &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extensions_ != nullptr
        && this->serialNumber_ != nullptr && this->subject_ != nullptr; };
    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline const Models::CreateCustomCertificateRequestApiPassthroughExtensions & extensions() const { DARABONBA_PTR_GET_CONST(extensions_, Models::CreateCustomCertificateRequestApiPassthroughExtensions) };
    inline Models::CreateCustomCertificateRequestApiPassthroughExtensions extensions() { DARABONBA_PTR_GET(extensions_, Models::CreateCustomCertificateRequestApiPassthroughExtensions) };
    inline CreateCustomCertificateRequestApiPassthrough& setExtensions(const Models::CreateCustomCertificateRequestApiPassthroughExtensions & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
    inline CreateCustomCertificateRequestApiPassthrough& setExtensions(Models::CreateCustomCertificateRequestApiPassthroughExtensions && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline CreateCustomCertificateRequestApiPassthrough& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline const Models::CreateCustomCertificateRequestApiPassthroughSubject & subject() const { DARABONBA_PTR_GET_CONST(subject_, Models::CreateCustomCertificateRequestApiPassthroughSubject) };
    inline Models::CreateCustomCertificateRequestApiPassthroughSubject subject() { DARABONBA_PTR_GET(subject_, Models::CreateCustomCertificateRequestApiPassthroughSubject) };
    inline CreateCustomCertificateRequestApiPassthrough& setSubject(const Models::CreateCustomCertificateRequestApiPassthroughSubject & subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };
    inline CreateCustomCertificateRequestApiPassthrough& setSubject(Models::CreateCustomCertificateRequestApiPassthroughSubject && subject) { DARABONBA_PTR_SET_RVALUE(subject_, subject) };


  protected:
    // The extensions of the certificate.
    std::shared_ptr<Models::CreateCustomCertificateRequestApiPassthroughExtensions> extensions_ = nullptr;
    // The serial number MUST be a positive integer assigned by the CA to each certificate.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The name of the entity that uses the certificate.
    std::shared_ptr<Models::CreateCustomCertificateRequestApiPassthroughSubject> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
