// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMLPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMLPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateSAMLProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSAMLProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLProvider, SAMLProvider_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSAMLProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLProvider, SAMLProvider_);
    };
    CreateSAMLProviderResponseBody() = default ;
    CreateSAMLProviderResponseBody(const CreateSAMLProviderResponseBody &) = default ;
    CreateSAMLProviderResponseBody(CreateSAMLProviderResponseBody &&) = default ;
    CreateSAMLProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSAMLProviderResponseBody() = default ;
    CreateSAMLProviderResponseBody& operator=(const CreateSAMLProviderResponseBody &) = default ;
    CreateSAMLProviderResponseBody& operator=(CreateSAMLProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SAMLProvider : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SAMLProvider& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(AuthnSignAlgo, authnSignAlgo_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(SAMLProviderName, SAMLProviderName_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, SAMLProvider& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(AuthnSignAlgo, authnSignAlgo_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(SAMLProviderName, SAMLProviderName_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      SAMLProvider() = default ;
      SAMLProvider(const SAMLProvider &) = default ;
      SAMLProvider(SAMLProvider &&) = default ;
      SAMLProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SAMLProvider() = default ;
      SAMLProvider& operator=(const SAMLProvider &) = default ;
      SAMLProvider& operator=(SAMLProvider &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->authnSignAlgo_ == nullptr && this->createDate_ == nullptr && this->description_ == nullptr && this->SAMLProviderName_ == nullptr && this->updateDate_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline SAMLProvider& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // authnSignAlgo Field Functions 
      bool hasAuthnSignAlgo() const { return this->authnSignAlgo_ != nullptr;};
      void deleteAuthnSignAlgo() { this->authnSignAlgo_ = nullptr;};
      inline string getAuthnSignAlgo() const { DARABONBA_PTR_GET_DEFAULT(authnSignAlgo_, "") };
      inline SAMLProvider& setAuthnSignAlgo(string authnSignAlgo) { DARABONBA_PTR_SET_VALUE(authnSignAlgo_, authnSignAlgo) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline SAMLProvider& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SAMLProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // SAMLProviderName Field Functions 
      bool hasSAMLProviderName() const { return this->SAMLProviderName_ != nullptr;};
      void deleteSAMLProviderName() { this->SAMLProviderName_ = nullptr;};
      inline string getSAMLProviderName() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderName_, "") };
      inline SAMLProvider& setSAMLProviderName(string SAMLProviderName) { DARABONBA_PTR_SET_VALUE(SAMLProviderName_, SAMLProviderName) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline SAMLProvider& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The Alibaba Cloud Resource Name (ARN) of the IdP.
      shared_ptr<string> arn_ {};
      shared_ptr<string> authnSignAlgo_ {};
      // The creation time. The time is displayed in UTC.
      shared_ptr<string> createDate_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The name of the IdP.
      shared_ptr<string> SAMLProviderName_ {};
      // The update time. The time is displayed in UTC.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SAMLProvider_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSAMLProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLProvider Field Functions 
    bool hasSAMLProvider() const { return this->SAMLProvider_ != nullptr;};
    void deleteSAMLProvider() { this->SAMLProvider_ = nullptr;};
    inline const CreateSAMLProviderResponseBody::SAMLProvider & getSAMLProvider() const { DARABONBA_PTR_GET_CONST(SAMLProvider_, CreateSAMLProviderResponseBody::SAMLProvider) };
    inline CreateSAMLProviderResponseBody::SAMLProvider getSAMLProvider() { DARABONBA_PTR_GET(SAMLProvider_, CreateSAMLProviderResponseBody::SAMLProvider) };
    inline CreateSAMLProviderResponseBody& setSAMLProvider(const CreateSAMLProviderResponseBody::SAMLProvider & sAMLProvider) { DARABONBA_PTR_SET_VALUE(SAMLProvider_, sAMLProvider) };
    inline CreateSAMLProviderResponseBody& setSAMLProvider(CreateSAMLProviderResponseBody::SAMLProvider && sAMLProvider) { DARABONBA_PTR_SET_RVALUE(SAMLProvider_, sAMLProvider) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the IdP.
    shared_ptr<CreateSAMLProviderResponseBody::SAMLProvider> SAMLProvider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
