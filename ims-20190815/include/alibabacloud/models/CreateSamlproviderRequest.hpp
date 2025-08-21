// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMLPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMLPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateSAMLProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSAMLProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncodedSAMLMetadataDocument, encodedSAMLMetadataDocument_);
      DARABONBA_PTR_TO_JSON(SAMLProviderName, SAMLProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSAMLProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncodedSAMLMetadataDocument, encodedSAMLMetadataDocument_);
      DARABONBA_PTR_FROM_JSON(SAMLProviderName, SAMLProviderName_);
    };
    CreateSAMLProviderRequest() = default ;
    CreateSAMLProviderRequest(const CreateSAMLProviderRequest &) = default ;
    CreateSAMLProviderRequest(CreateSAMLProviderRequest &&) = default ;
    CreateSAMLProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSAMLProviderRequest() = default ;
    CreateSAMLProviderRequest& operator=(const CreateSAMLProviderRequest &) = default ;
    CreateSAMLProviderRequest& operator=(CreateSAMLProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->encodedSAMLMetadataDocument_ != nullptr && this->SAMLProviderName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSAMLProviderRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encodedSAMLMetadataDocument Field Functions 
    bool hasEncodedSAMLMetadataDocument() const { return this->encodedSAMLMetadataDocument_ != nullptr;};
    void deleteEncodedSAMLMetadataDocument() { this->encodedSAMLMetadataDocument_ = nullptr;};
    inline string encodedSAMLMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(encodedSAMLMetadataDocument_, "") };
    inline CreateSAMLProviderRequest& setEncodedSAMLMetadataDocument(string encodedSAMLMetadataDocument) { DARABONBA_PTR_SET_VALUE(encodedSAMLMetadataDocument_, encodedSAMLMetadataDocument) };


    // SAMLProviderName Field Functions 
    bool hasSAMLProviderName() const { return this->SAMLProviderName_ != nullptr;};
    void deleteSAMLProviderName() { this->SAMLProviderName_ = nullptr;};
    inline string SAMLProviderName() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderName_, "") };
    inline CreateSAMLProviderRequest& setSAMLProviderName(string SAMLProviderName) { DARABONBA_PTR_SET_VALUE(SAMLProviderName_, SAMLProviderName) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The metadata file which is Base64-encoded.
    // 
    // The file is provided by an IdP that supports Security Assertion Markup Language (SAML) 2.0.
    std::shared_ptr<string> encodedSAMLMetadataDocument_ = nullptr;
    // The name of the IdP.
    // 
    // The name can be up to 128 characters in length. The name can contain letters, digits, `periods (.), hyphens (-), and underscores (_)`. The name cannot start or end with `periods (.), hyphens (-), or underscores (_)`.
    // 
    // This parameter is required.
    std::shared_ptr<string> SAMLProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
