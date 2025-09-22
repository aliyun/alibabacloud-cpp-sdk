// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAMLPROVIDERRESPONSEBODYSAMLPROVIDER_HPP_
#define ALIBABACLOUD_MODELS_GETSAMLPROVIDERRESPONSEBODYSAMLPROVIDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSAMLProviderResponseBodySAMLProvider : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSAMLProviderResponseBodySAMLProvider& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AuthnSignAlgo, authnSignAlgo_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncodedSAMLMetadataDocument, encodedSAMLMetadataDocument_);
      DARABONBA_PTR_TO_JSON(SAMLProviderName, SAMLProviderName_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetSAMLProviderResponseBodySAMLProvider& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AuthnSignAlgo, authnSignAlgo_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncodedSAMLMetadataDocument, encodedSAMLMetadataDocument_);
      DARABONBA_PTR_FROM_JSON(SAMLProviderName, SAMLProviderName_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    GetSAMLProviderResponseBodySAMLProvider() = default ;
    GetSAMLProviderResponseBodySAMLProvider(const GetSAMLProviderResponseBodySAMLProvider &) = default ;
    GetSAMLProviderResponseBodySAMLProvider(GetSAMLProviderResponseBodySAMLProvider &&) = default ;
    GetSAMLProviderResponseBodySAMLProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSAMLProviderResponseBodySAMLProvider() = default ;
    GetSAMLProviderResponseBodySAMLProvider& operator=(const GetSAMLProviderResponseBodySAMLProvider &) = default ;
    GetSAMLProviderResponseBodySAMLProvider& operator=(GetSAMLProviderResponseBodySAMLProvider &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->authnSignAlgo_ != nullptr && this->createDate_ != nullptr && this->description_ != nullptr && this->encodedSAMLMetadataDocument_ != nullptr && this->SAMLProviderName_ != nullptr
        && this->updateDate_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline GetSAMLProviderResponseBodySAMLProvider& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // authnSignAlgo Field Functions 
    bool hasAuthnSignAlgo() const { return this->authnSignAlgo_ != nullptr;};
    void deleteAuthnSignAlgo() { this->authnSignAlgo_ = nullptr;};
    inline string authnSignAlgo() const { DARABONBA_PTR_GET_DEFAULT(authnSignAlgo_, "") };
    inline GetSAMLProviderResponseBodySAMLProvider& setAuthnSignAlgo(string authnSignAlgo) { DARABONBA_PTR_SET_VALUE(authnSignAlgo_, authnSignAlgo) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetSAMLProviderResponseBodySAMLProvider& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSAMLProviderResponseBodySAMLProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encodedSAMLMetadataDocument Field Functions 
    bool hasEncodedSAMLMetadataDocument() const { return this->encodedSAMLMetadataDocument_ != nullptr;};
    void deleteEncodedSAMLMetadataDocument() { this->encodedSAMLMetadataDocument_ = nullptr;};
    inline string encodedSAMLMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(encodedSAMLMetadataDocument_, "") };
    inline GetSAMLProviderResponseBodySAMLProvider& setEncodedSAMLMetadataDocument(string encodedSAMLMetadataDocument) { DARABONBA_PTR_SET_VALUE(encodedSAMLMetadataDocument_, encodedSAMLMetadataDocument) };


    // SAMLProviderName Field Functions 
    bool hasSAMLProviderName() const { return this->SAMLProviderName_ != nullptr;};
    void deleteSAMLProviderName() { this->SAMLProviderName_ = nullptr;};
    inline string SAMLProviderName() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderName_, "") };
    inline GetSAMLProviderResponseBodySAMLProvider& setSAMLProviderName(string SAMLProviderName) { DARABONBA_PTR_SET_VALUE(SAMLProviderName_, SAMLProviderName) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline GetSAMLProviderResponseBodySAMLProvider& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the IdP.
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> authnSignAlgo_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createDate_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The metadata file, which is Base64 encoded.
    std::shared_ptr<string> encodedSAMLMetadataDocument_ = nullptr;
    // The name of the IdP.
    std::shared_ptr<string> SAMLProviderName_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
