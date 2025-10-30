// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHSUBJECTCUSTOMATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHSUBJECTCUSTOMATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectIdentifier, objectIdentifier_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectIdentifier, objectIdentifier_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes() = default ;
    CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes(const CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes &) = default ;
    CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes(CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes &&) = default ;
    CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes() = default ;
    CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes& operator=(const CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes &) = default ;
    CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes& operator=(CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectIdentifier_ == nullptr
        && return this->value_ == nullptr; };
    // objectIdentifier Field Functions 
    bool hasObjectIdentifier() const { return this->objectIdentifier_ != nullptr;};
    void deleteObjectIdentifier() { this->objectIdentifier_ = nullptr;};
    inline string objectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(objectIdentifier_, "") };
    inline CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes& setObjectIdentifier(string objectIdentifier) { DARABONBA_PTR_SET_VALUE(objectIdentifier_, objectIdentifier) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Custom attribute type as:
    // 
    // - 2.5.4.6 : country
    // - 2.5.4.10 : organization
    // - 2.5.4.11 : organizational unit
    // - 2.5.4.12 : title
    // - 2.5.4.3 : common name
    // - 2.5.4.9 : street
    // - 2.5.4.5 : serial number
    // - 2.5.4.7 : locality
    // - 2.5.4.8 : state
    // - 1.3.6.1.4.1.37244.1.1 : Matter Operational Certificate - Node ID
    // - 1.3.6.1.4.1.37244.1.5 : Matter Operational Certificate - Fabric ID
    // - 1.3.6.1.4.1.37244.2.1 : Matter Device Attestation Certificate Vender ID (VID)
    // - 1.3.6.1.4.1.37244.2.2 : Matter Device Attestation Certificate Product ID (PID).
    std::shared_ptr<string> objectIdentifier_ = nullptr;
    // Custom attribute value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
