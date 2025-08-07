// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHEXTENSIONSSUBJECTALTERNATIVENAMES_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHEXTENSIONSSUBJECTALTERNATIVENAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames() = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames(const CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames &) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames(CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames &&) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames() = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames& operator=(const CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames &) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames& operator=(CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->value_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The type of the alias. Valid values:
    // 
    // *   rfc822Name: email address
    // *   dNSName: domain name
    // *   uniformResourceIdentifier: URI
    // *   iPAddress: IP address
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The alias that meets the requirement of a specified type.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
