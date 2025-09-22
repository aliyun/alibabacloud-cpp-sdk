// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESAMLPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESAMLPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateSAMLProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSAMLProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnSignAlgo, authnSignAlgo_);
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_TO_JSON(NewEncodedSAMLMetadataDocument, newEncodedSAMLMetadataDocument_);
      DARABONBA_PTR_TO_JSON(SAMLProviderName, SAMLProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSAMLProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnSignAlgo, authnSignAlgo_);
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_FROM_JSON(NewEncodedSAMLMetadataDocument, newEncodedSAMLMetadataDocument_);
      DARABONBA_PTR_FROM_JSON(SAMLProviderName, SAMLProviderName_);
    };
    UpdateSAMLProviderRequest() = default ;
    UpdateSAMLProviderRequest(const UpdateSAMLProviderRequest &) = default ;
    UpdateSAMLProviderRequest(UpdateSAMLProviderRequest &&) = default ;
    UpdateSAMLProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSAMLProviderRequest() = default ;
    UpdateSAMLProviderRequest& operator=(const UpdateSAMLProviderRequest &) = default ;
    UpdateSAMLProviderRequest& operator=(UpdateSAMLProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authnSignAlgo_ != nullptr
        && this->newDescription_ != nullptr && this->newEncodedSAMLMetadataDocument_ != nullptr && this->SAMLProviderName_ != nullptr; };
    // authnSignAlgo Field Functions 
    bool hasAuthnSignAlgo() const { return this->authnSignAlgo_ != nullptr;};
    void deleteAuthnSignAlgo() { this->authnSignAlgo_ = nullptr;};
    inline string authnSignAlgo() const { DARABONBA_PTR_GET_DEFAULT(authnSignAlgo_, "") };
    inline UpdateSAMLProviderRequest& setAuthnSignAlgo(string authnSignAlgo) { DARABONBA_PTR_SET_VALUE(authnSignAlgo_, authnSignAlgo) };


    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string newDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdateSAMLProviderRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


    // newEncodedSAMLMetadataDocument Field Functions 
    bool hasNewEncodedSAMLMetadataDocument() const { return this->newEncodedSAMLMetadataDocument_ != nullptr;};
    void deleteNewEncodedSAMLMetadataDocument() { this->newEncodedSAMLMetadataDocument_ = nullptr;};
    inline string newEncodedSAMLMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(newEncodedSAMLMetadataDocument_, "") };
    inline UpdateSAMLProviderRequest& setNewEncodedSAMLMetadataDocument(string newEncodedSAMLMetadataDocument) { DARABONBA_PTR_SET_VALUE(newEncodedSAMLMetadataDocument_, newEncodedSAMLMetadataDocument) };


    // SAMLProviderName Field Functions 
    bool hasSAMLProviderName() const { return this->SAMLProviderName_ != nullptr;};
    void deleteSAMLProviderName() { this->SAMLProviderName_ = nullptr;};
    inline string SAMLProviderName() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderName_, "") };
    inline UpdateSAMLProviderRequest& setSAMLProviderName(string SAMLProviderName) { DARABONBA_PTR_SET_VALUE(SAMLProviderName_, SAMLProviderName) };


  protected:
    std::shared_ptr<string> authnSignAlgo_ = nullptr;
    // The new description.
    // 
    // >  You must specify at least one of the `NewDescription` and `NewEncodedSAMLMetadataDocument` parameters.
    std::shared_ptr<string> newDescription_ = nullptr;
    // The new metadata file.
    // 
    // >  You must specify at least one of the `NewDescription` and `NewEncodedSAMLMetadataDocument` parameters.
    std::shared_ptr<string> newEncodedSAMLMetadataDocument_ = nullptr;
    // The name of the IdP whose information you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> SAMLProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
