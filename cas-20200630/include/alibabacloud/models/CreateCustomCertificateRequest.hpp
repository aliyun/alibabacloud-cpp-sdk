// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateCustomCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_TO_JSON(Immediately, immediately_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Validity, validity_);
      DARABONBA_PTR_TO_JSON(customIdentifier, customIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_FROM_JSON(Immediately, immediately_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Validity, validity_);
      DARABONBA_PTR_FROM_JSON(customIdentifier, customIdentifier_);
    };
    CreateCustomCertificateRequest() = default ;
    CreateCustomCertificateRequest(const CreateCustomCertificateRequest &) = default ;
    CreateCustomCertificateRequest(CreateCustomCertificateRequest &&) = default ;
    CreateCustomCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCertificateRequest() = default ;
    CreateCustomCertificateRequest& operator=(const CreateCustomCertificateRequest &) = default ;
    CreateCustomCertificateRequest& operator=(CreateCustomCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class ApiPassthrough : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiPassthrough& obj) { 
        DARABONBA_PTR_TO_JSON(Extensions, extensions_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
      };
      friend void from_json(const Darabonba::Json& j, ApiPassthrough& obj) { 
        DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
      };
      ApiPassthrough() = default ;
      ApiPassthrough(const ApiPassthrough &) = default ;
      ApiPassthrough(ApiPassthrough &&) = default ;
      ApiPassthrough(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiPassthrough() = default ;
      ApiPassthrough& operator=(const ApiPassthrough &) = default ;
      ApiPassthrough& operator=(ApiPassthrough &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Subject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Subject& obj) { 
          DARABONBA_PTR_TO_JSON(CommonName, commonName_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributes_);
          DARABONBA_PTR_TO_JSON(Locality, locality_);
          DARABONBA_PTR_TO_JSON(Organization, organization_);
          DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, Subject& obj) { 
          DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributes_);
          DARABONBA_PTR_FROM_JSON(Locality, locality_);
          DARABONBA_PTR_FROM_JSON(Organization, organization_);
          DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        Subject() = default ;
        Subject(const Subject &) = default ;
        Subject(Subject &&) = default ;
        Subject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Subject() = default ;
        Subject& operator=(const Subject &) = default ;
        Subject& operator=(Subject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CustomAttributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomAttributes& obj) { 
            DARABONBA_PTR_TO_JSON(ObjectIdentifier, objectIdentifier_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, CustomAttributes& obj) { 
            DARABONBA_PTR_FROM_JSON(ObjectIdentifier, objectIdentifier_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          CustomAttributes() = default ;
          CustomAttributes(const CustomAttributes &) = default ;
          CustomAttributes(CustomAttributes &&) = default ;
          CustomAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomAttributes() = default ;
          CustomAttributes& operator=(const CustomAttributes &) = default ;
          CustomAttributes& operator=(CustomAttributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->objectIdentifier_ == nullptr
        && this->value_ == nullptr; };
          // objectIdentifier Field Functions 
          bool hasObjectIdentifier() const { return this->objectIdentifier_ != nullptr;};
          void deleteObjectIdentifier() { this->objectIdentifier_ = nullptr;};
          inline string getObjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(objectIdentifier_, "") };
          inline CustomAttributes& setObjectIdentifier(string objectIdentifier) { DARABONBA_PTR_SET_VALUE(objectIdentifier_, objectIdentifier) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline CustomAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the custom property. It must comply with industry standards. Examples:
          // 
          // - 2.5.4.6: Country code
          // 
          // - 2.5.4.10: Organization
          // 
          // - 2.5.4.11: Organizational unit name
          // 
          // - 2.5.4.12: Title
          // 
          // - 2.5.4.3: Common name
          // 
          // - 2.5.4.9: Street
          // 
          // - 2.5.4.5: Serial number
          // 
          // - 2.5.4.7: Locality
          // 
          // - 2.5.4.8: State or province
          // 
          // - 1.3.6.1.4.1.37244.1.1: Matter certificate - Node ID
          // 
          // - 1.3.6.1.4.1.37244.1.5: Matter certificate - Fabric ID
          // 
          // - 1.3.6.1.4.1.37244.2.1: Matter certificate Vendor ID (VID)
          // 
          // - 1.3.6.1.4.1.37244.2.2: Matter certificate Product ID (PID)
          shared_ptr<string> objectIdentifier_ {};
          // The value of the custom property.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->commonName_ == nullptr
        && this->country_ == nullptr && this->customAttributes_ == nullptr && this->locality_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr
        && this->state_ == nullptr; };
        // commonName Field Functions 
        bool hasCommonName() const { return this->commonName_ != nullptr;};
        void deleteCommonName() { this->commonName_ = nullptr;};
        inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
        inline Subject& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
        inline Subject& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // customAttributes Field Functions 
        bool hasCustomAttributes() const { return this->customAttributes_ != nullptr;};
        void deleteCustomAttributes() { this->customAttributes_ = nullptr;};
        inline const vector<Subject::CustomAttributes> & getCustomAttributes() const { DARABONBA_PTR_GET_CONST(customAttributes_, vector<Subject::CustomAttributes>) };
        inline vector<Subject::CustomAttributes> getCustomAttributes() { DARABONBA_PTR_GET(customAttributes_, vector<Subject::CustomAttributes>) };
        inline Subject& setCustomAttributes(const vector<Subject::CustomAttributes> & customAttributes) { DARABONBA_PTR_SET_VALUE(customAttributes_, customAttributes) };
        inline Subject& setCustomAttributes(vector<Subject::CustomAttributes> && customAttributes) { DARABONBA_PTR_SET_RVALUE(customAttributes_, customAttributes) };


        // locality Field Functions 
        bool hasLocality() const { return this->locality_ != nullptr;};
        void deleteLocality() { this->locality_ = nullptr;};
        inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
        inline Subject& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


        // organization Field Functions 
        bool hasOrganization() const { return this->organization_ != nullptr;};
        void deleteOrganization() { this->organization_ = nullptr;};
        inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
        inline Subject& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


        // organizationUnit Field Functions 
        bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
        void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
        inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
        inline Subject& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Subject& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        // The common name of the certificate user.
        shared_ptr<string> commonName_ {};
        // The country code. Use the two-letter country code from ISO 3166-1. For more information, see [ISO](https://www.iso.org/obp/ui/#search/code/).
        shared_ptr<string> country_ {};
        // The custom subject properties of the certificate.
        shared_ptr<vector<Subject::CustomAttributes>> customAttributes_ {};
        // The name of the city where the organization is located. Chinese characters and letters are supported.
        shared_ptr<string> locality_ {};
        // The name of the organization.
        shared_ptr<string> organization_ {};
        // The name of the department or branch within the organization.
        shared_ptr<string> organizationUnit_ {};
        // The province or state where the organization is located.
        shared_ptr<string> state_ {};
      };

      class Extensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Extensions& obj) { 
          DARABONBA_PTR_TO_JSON(Criticals, criticals_);
          DARABONBA_PTR_TO_JSON(ExtendedKeyUsages, extendedKeyUsages_);
          DARABONBA_PTR_TO_JSON(KeyUsage, keyUsage_);
          DARABONBA_PTR_TO_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
        };
        friend void from_json(const Darabonba::Json& j, Extensions& obj) { 
          DARABONBA_PTR_FROM_JSON(Criticals, criticals_);
          DARABONBA_PTR_FROM_JSON(ExtendedKeyUsages, extendedKeyUsages_);
          DARABONBA_PTR_FROM_JSON(KeyUsage, keyUsage_);
          DARABONBA_PTR_FROM_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
        };
        Extensions() = default ;
        Extensions(const Extensions &) = default ;
        Extensions(Extensions &&) = default ;
        Extensions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Extensions() = default ;
        Extensions& operator=(const Extensions &) = default ;
        Extensions& operator=(Extensions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubjectAlternativeNames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubjectAlternativeNames& obj) { 
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SubjectAlternativeNames& obj) { 
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SubjectAlternativeNames() = default ;
          SubjectAlternativeNames(const SubjectAlternativeNames &) = default ;
          SubjectAlternativeNames(SubjectAlternativeNames &&) = default ;
          SubjectAlternativeNames(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubjectAlternativeNames() = default ;
          SubjectAlternativeNames& operator=(const SubjectAlternativeNames &) = default ;
          SubjectAlternativeNames& operator=(SubjectAlternativeNames &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SubjectAlternativeNames& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline SubjectAlternativeNames& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The following values are allowed:
          // 
          // - rfc822Name - Email address
          // 
          // - dNSName - Domain name
          // 
          // - uniformResourceIdentifier - Uniform Resource Identifier (URI)
          // 
          // - iPAddress - IP address
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
          // A value that matches the specified Type.
          shared_ptr<string> value_ {};
        };

        class KeyUsage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KeyUsage& obj) { 
            DARABONBA_PTR_TO_JSON(ContentCommitment, contentCommitment_);
            DARABONBA_PTR_TO_JSON(DataEncipherment, dataEncipherment_);
            DARABONBA_PTR_TO_JSON(DecipherOnly, decipherOnly_);
            DARABONBA_PTR_TO_JSON(DigitalSignature, digitalSignature_);
            DARABONBA_PTR_TO_JSON(EncipherOnly, encipherOnly_);
            DARABONBA_PTR_TO_JSON(KeyAgreement, keyAgreement_);
            DARABONBA_PTR_TO_JSON(KeyEncipherment, keyEncipherment_);
            DARABONBA_PTR_TO_JSON(NonRepudiation, nonRepudiation_);
          };
          friend void from_json(const Darabonba::Json& j, KeyUsage& obj) { 
            DARABONBA_PTR_FROM_JSON(ContentCommitment, contentCommitment_);
            DARABONBA_PTR_FROM_JSON(DataEncipherment, dataEncipherment_);
            DARABONBA_PTR_FROM_JSON(DecipherOnly, decipherOnly_);
            DARABONBA_PTR_FROM_JSON(DigitalSignature, digitalSignature_);
            DARABONBA_PTR_FROM_JSON(EncipherOnly, encipherOnly_);
            DARABONBA_PTR_FROM_JSON(KeyAgreement, keyAgreement_);
            DARABONBA_PTR_FROM_JSON(KeyEncipherment, keyEncipherment_);
            DARABONBA_PTR_FROM_JSON(NonRepudiation, nonRepudiation_);
          };
          KeyUsage() = default ;
          KeyUsage(const KeyUsage &) = default ;
          KeyUsage(KeyUsage &&) = default ;
          KeyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KeyUsage() = default ;
          KeyUsage& operator=(const KeyUsage &) = default ;
          KeyUsage& operator=(KeyUsage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contentCommitment_ == nullptr
        && this->dataEncipherment_ == nullptr && this->decipherOnly_ == nullptr && this->digitalSignature_ == nullptr && this->encipherOnly_ == nullptr && this->keyAgreement_ == nullptr
        && this->keyEncipherment_ == nullptr && this->nonRepudiation_ == nullptr; };
          // contentCommitment Field Functions 
          bool hasContentCommitment() const { return this->contentCommitment_ != nullptr;};
          void deleteContentCommitment() { this->contentCommitment_ = nullptr;};
          inline bool getContentCommitment() const { DARABONBA_PTR_GET_DEFAULT(contentCommitment_, false) };
          inline KeyUsage& setContentCommitment(bool contentCommitment) { DARABONBA_PTR_SET_VALUE(contentCommitment_, contentCommitment) };


          // dataEncipherment Field Functions 
          bool hasDataEncipherment() const { return this->dataEncipherment_ != nullptr;};
          void deleteDataEncipherment() { this->dataEncipherment_ = nullptr;};
          inline bool getDataEncipherment() const { DARABONBA_PTR_GET_DEFAULT(dataEncipherment_, false) };
          inline KeyUsage& setDataEncipherment(bool dataEncipherment) { DARABONBA_PTR_SET_VALUE(dataEncipherment_, dataEncipherment) };


          // decipherOnly Field Functions 
          bool hasDecipherOnly() const { return this->decipherOnly_ != nullptr;};
          void deleteDecipherOnly() { this->decipherOnly_ = nullptr;};
          inline bool getDecipherOnly() const { DARABONBA_PTR_GET_DEFAULT(decipherOnly_, false) };
          inline KeyUsage& setDecipherOnly(bool decipherOnly) { DARABONBA_PTR_SET_VALUE(decipherOnly_, decipherOnly) };


          // digitalSignature Field Functions 
          bool hasDigitalSignature() const { return this->digitalSignature_ != nullptr;};
          void deleteDigitalSignature() { this->digitalSignature_ = nullptr;};
          inline bool getDigitalSignature() const { DARABONBA_PTR_GET_DEFAULT(digitalSignature_, false) };
          inline KeyUsage& setDigitalSignature(bool digitalSignature) { DARABONBA_PTR_SET_VALUE(digitalSignature_, digitalSignature) };


          // encipherOnly Field Functions 
          bool hasEncipherOnly() const { return this->encipherOnly_ != nullptr;};
          void deleteEncipherOnly() { this->encipherOnly_ = nullptr;};
          inline bool getEncipherOnly() const { DARABONBA_PTR_GET_DEFAULT(encipherOnly_, false) };
          inline KeyUsage& setEncipherOnly(bool encipherOnly) { DARABONBA_PTR_SET_VALUE(encipherOnly_, encipherOnly) };


          // keyAgreement Field Functions 
          bool hasKeyAgreement() const { return this->keyAgreement_ != nullptr;};
          void deleteKeyAgreement() { this->keyAgreement_ = nullptr;};
          inline bool getKeyAgreement() const { DARABONBA_PTR_GET_DEFAULT(keyAgreement_, false) };
          inline KeyUsage& setKeyAgreement(bool keyAgreement) { DARABONBA_PTR_SET_VALUE(keyAgreement_, keyAgreement) };


          // keyEncipherment Field Functions 
          bool hasKeyEncipherment() const { return this->keyEncipherment_ != nullptr;};
          void deleteKeyEncipherment() { this->keyEncipherment_ = nullptr;};
          inline bool getKeyEncipherment() const { DARABONBA_PTR_GET_DEFAULT(keyEncipherment_, false) };
          inline KeyUsage& setKeyEncipherment(bool keyEncipherment) { DARABONBA_PTR_SET_VALUE(keyEncipherment_, keyEncipherment) };


          // nonRepudiation Field Functions 
          bool hasNonRepudiation() const { return this->nonRepudiation_ != nullptr;};
          void deleteNonRepudiation() { this->nonRepudiation_ = nullptr;};
          inline bool getNonRepudiation() const { DARABONBA_PTR_GET_DEFAULT(nonRepudiation_, false) };
          inline KeyUsage& setNonRepudiation(bool nonRepudiation) { DARABONBA_PTR_SET_VALUE(nonRepudiation_, nonRepudiation) };


        protected:
          // Content commitment. Formerly known as NonRepudiation. Allows the certificate key to be used for content commitment.
          shared_ptr<bool> contentCommitment_ {};
          // Data encipherment.
          shared_ptr<bool> dataEncipherment_ {};
          // When KeyAgreement is true, this marks that the certificate key can only be used for decryption.
          shared_ptr<bool> decipherOnly_ {};
          // Digital signature. Allows the private key of the certificate to be used for digital signatures and the public key to be used to verify digital signatures.
          shared_ptr<bool> digitalSignature_ {};
          // When KeyAgreement is true, this marks that the certificate key can only be used for encryption.
          shared_ptr<bool> encipherOnly_ {};
          // Key agreement.
          shared_ptr<bool> keyAgreement_ {};
          // Key encipherment. Allows the certificate key to be used to encrypt other keys.
          shared_ptr<bool> keyEncipherment_ {};
          // Non-repudiation. This has been renamed to ContentCommitment in the X.509 standard.
          shared_ptr<bool> nonRepudiation_ {};
        };

        virtual bool empty() const override { return this->criticals_ == nullptr
        && this->extendedKeyUsages_ == nullptr && this->keyUsage_ == nullptr && this->subjectAlternativeNames_ == nullptr; };
        // criticals Field Functions 
        bool hasCriticals() const { return this->criticals_ != nullptr;};
        void deleteCriticals() { this->criticals_ = nullptr;};
        inline const vector<string> & getCriticals() const { DARABONBA_PTR_GET_CONST(criticals_, vector<string>) };
        inline vector<string> getCriticals() { DARABONBA_PTR_GET(criticals_, vector<string>) };
        inline Extensions& setCriticals(const vector<string> & criticals) { DARABONBA_PTR_SET_VALUE(criticals_, criticals) };
        inline Extensions& setCriticals(vector<string> && criticals) { DARABONBA_PTR_SET_RVALUE(criticals_, criticals) };


        // extendedKeyUsages Field Functions 
        bool hasExtendedKeyUsages() const { return this->extendedKeyUsages_ != nullptr;};
        void deleteExtendedKeyUsages() { this->extendedKeyUsages_ = nullptr;};
        inline const vector<string> & getExtendedKeyUsages() const { DARABONBA_PTR_GET_CONST(extendedKeyUsages_, vector<string>) };
        inline vector<string> getExtendedKeyUsages() { DARABONBA_PTR_GET(extendedKeyUsages_, vector<string>) };
        inline Extensions& setExtendedKeyUsages(const vector<string> & extendedKeyUsages) { DARABONBA_PTR_SET_VALUE(extendedKeyUsages_, extendedKeyUsages) };
        inline Extensions& setExtendedKeyUsages(vector<string> && extendedKeyUsages) { DARABONBA_PTR_SET_RVALUE(extendedKeyUsages_, extendedKeyUsages) };


        // keyUsage Field Functions 
        bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
        void deleteKeyUsage() { this->keyUsage_ = nullptr;};
        inline const Extensions::KeyUsage & getKeyUsage() const { DARABONBA_PTR_GET_CONST(keyUsage_, Extensions::KeyUsage) };
        inline Extensions::KeyUsage getKeyUsage() { DARABONBA_PTR_GET(keyUsage_, Extensions::KeyUsage) };
        inline Extensions& setKeyUsage(const Extensions::KeyUsage & keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };
        inline Extensions& setKeyUsage(Extensions::KeyUsage && keyUsage) { DARABONBA_PTR_SET_RVALUE(keyUsage_, keyUsage) };


        // subjectAlternativeNames Field Functions 
        bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
        void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
        inline const vector<Extensions::SubjectAlternativeNames> & getSubjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, vector<Extensions::SubjectAlternativeNames>) };
        inline vector<Extensions::SubjectAlternativeNames> getSubjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, vector<Extensions::SubjectAlternativeNames>) };
        inline Extensions& setSubjectAlternativeNames(const vector<Extensions::SubjectAlternativeNames> & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
        inline Extensions& setSubjectAlternativeNames(vector<Extensions::SubjectAlternativeNames> && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


      protected:
        // If an extension is critical, its name is included in the criticals list.
        shared_ptr<vector<string>> criticals_ {};
        // The extended key usages.
        shared_ptr<vector<string>> extendedKeyUsages_ {};
        // The key usage.
        shared_ptr<Extensions::KeyUsage> keyUsage_ {};
        // The subject alternative names (SANs) of the certificate.
        shared_ptr<vector<Extensions::SubjectAlternativeNames>> subjectAlternativeNames_ {};
      };

      virtual bool empty() const override { return this->extensions_ == nullptr
        && this->serialNumber_ == nullptr && this->subject_ == nullptr; };
      // extensions Field Functions 
      bool hasExtensions() const { return this->extensions_ != nullptr;};
      void deleteExtensions() { this->extensions_ = nullptr;};
      inline const ApiPassthrough::Extensions & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, ApiPassthrough::Extensions) };
      inline ApiPassthrough::Extensions getExtensions() { DARABONBA_PTR_GET(extensions_, ApiPassthrough::Extensions) };
      inline ApiPassthrough& setExtensions(const ApiPassthrough::Extensions & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
      inline ApiPassthrough& setExtensions(ApiPassthrough::Extensions && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline ApiPassthrough& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline const ApiPassthrough::Subject & getSubject() const { DARABONBA_PTR_GET_CONST(subject_, ApiPassthrough::Subject) };
      inline ApiPassthrough::Subject getSubject() { DARABONBA_PTR_GET(subject_, ApiPassthrough::Subject) };
      inline ApiPassthrough& setSubject(const ApiPassthrough::Subject & subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };
      inline ApiPassthrough& setSubject(ApiPassthrough::Subject && subject) { DARABONBA_PTR_SET_RVALUE(subject_, subject) };


    protected:
      // The certificate extensions.
      shared_ptr<ApiPassthrough::Extensions> extensions_ {};
      // The custom serial number of the certificate. Must be a long integer.
      shared_ptr<string> serialNumber_ {};
      // The certificate subject.
      shared_ptr<ApiPassthrough::Subject> subject_ {};
    };

    virtual bool empty() const override { return this->apiPassthrough_ == nullptr
        && this->csr_ == nullptr && this->enableCrl_ == nullptr && this->immediately_ == nullptr && this->parentIdentifier_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tags_ == nullptr && this->validity_ == nullptr && this->customIdentifier_ == nullptr; };
    // apiPassthrough Field Functions 
    bool hasApiPassthrough() const { return this->apiPassthrough_ != nullptr;};
    void deleteApiPassthrough() { this->apiPassthrough_ = nullptr;};
    inline const CreateCustomCertificateRequest::ApiPassthrough & getApiPassthrough() const { DARABONBA_PTR_GET_CONST(apiPassthrough_, CreateCustomCertificateRequest::ApiPassthrough) };
    inline CreateCustomCertificateRequest::ApiPassthrough getApiPassthrough() { DARABONBA_PTR_GET(apiPassthrough_, CreateCustomCertificateRequest::ApiPassthrough) };
    inline CreateCustomCertificateRequest& setApiPassthrough(const CreateCustomCertificateRequest::ApiPassthrough & apiPassthrough) { DARABONBA_PTR_SET_VALUE(apiPassthrough_, apiPassthrough) };
    inline CreateCustomCertificateRequest& setApiPassthrough(CreateCustomCertificateRequest::ApiPassthrough && apiPassthrough) { DARABONBA_PTR_SET_RVALUE(apiPassthrough_, apiPassthrough) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateCustomCertificateRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline int64_t getEnableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, 0L) };
    inline CreateCustomCertificateRequest& setEnableCrl(int64_t enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int32_t getImmediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0) };
    inline CreateCustomCertificateRequest& setImmediately(int32_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateCustomCertificateRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCustomCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateCustomCertificateRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateCustomCertificateRequest::Tags>) };
    inline vector<CreateCustomCertificateRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateCustomCertificateRequest::Tags>) };
    inline CreateCustomCertificateRequest& setTags(const vector<CreateCustomCertificateRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateCustomCertificateRequest& setTags(vector<CreateCustomCertificateRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // validity Field Functions 
    bool hasValidity() const { return this->validity_ != nullptr;};
    void deleteValidity() { this->validity_ = nullptr;};
    inline string getValidity() const { DARABONBA_PTR_GET_DEFAULT(validity_, "") };
    inline CreateCustomCertificateRequest& setValidity(string validity) { DARABONBA_PTR_SET_VALUE(validity_, validity) };


    // customIdentifier Field Functions 
    bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
    void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
    inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
    inline CreateCustomCertificateRequest& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


  protected:
    // Pass-through parameters.
    shared_ptr<CreateCustomCertificateRequest::ApiPassthrough> apiPassthrough_ {};
    // The content of the CSR. You can generate a CSR using tools such as OpenSSL or Keytool. For more information, see [Create a CSR file](https://help.aliyun.com/document_detail/42218.html).
    // 
    // This parameter is required.
    shared_ptr<string> csr_ {};
    // Specifies whether to include a CRL address.
    // 
    // - 0 - No
    // 
    // - 1 - Yes
    shared_ptr<int64_t> enableCrl_ {};
    // Obtain the certificate immediately.
    // 
    // - 0 - Issue the certificate asynchronously.
    // 
    // - 1 - Issue the certificate immediately.
    // 
    // - 2 - Issue the certificate immediately and return the CA certificate chain.
    shared_ptr<int32_t> immediately_ {};
    // The identifier of the CA certificate.
    // 
    // This parameter is required.
    shared_ptr<string> parentIdentifier_ {};
    // The ID of the resource group. You can obtain this ID by calling the [ListResources](https://help.aliyun.com/document_detail/2716559.html) operation.
    shared_ptr<string> resourceGroupId_ {};
    // The list of tags.
    shared_ptr<vector<CreateCustomCertificateRequest::Tags>> tags_ {};
    // The validity period of the certificate. This period cannot exceed the validity period of the instance. You can use relative time or absolute time.
    // 
    // Relative time: Supports years, months, and days.
    // 
    // - Year - y
    // 
    // - Month - m
    // 
    // - Day - d
    // 
    // Absolute time: Uses GMT. Format: `yyyy-MM-dd\\"T\\"HH:mm:ss\\"Z\\"`
    // 
    // - Specify the end time - $NotAfter
    // 
    // - Specify the start and end times - $NotBefore/$NotAfter
    // 
    // This parameter is required.
    shared_ptr<string> validity_ {};
    // A custom identifier.
    shared_ptr<string> customIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
