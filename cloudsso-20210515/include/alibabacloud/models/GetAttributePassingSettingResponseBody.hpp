// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTRIBUTEPASSINGSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTRIBUTEPASSINGSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetAttributePassingSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttributePassingSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttributePassingSetting, attributePassingSetting_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttributePassingSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributePassingSetting, attributePassingSetting_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttributePassingSettingResponseBody() = default ;
    GetAttributePassingSettingResponseBody(const GetAttributePassingSettingResponseBody &) = default ;
    GetAttributePassingSettingResponseBody(GetAttributePassingSettingResponseBody &&) = default ;
    GetAttributePassingSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttributePassingSettingResponseBody() = default ;
    GetAttributePassingSettingResponseBody& operator=(const GetAttributePassingSettingResponseBody &) = default ;
    GetAttributePassingSettingResponseBody& operator=(GetAttributePassingSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttributePassingSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttributePassingSetting& obj) { 
        DARABONBA_PTR_TO_JSON(SourceIdentityPassing, sourceIdentityPassing_);
      };
      friend void from_json(const Darabonba::Json& j, AttributePassingSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceIdentityPassing, sourceIdentityPassing_);
      };
      AttributePassingSetting() = default ;
      AttributePassingSetting(const AttributePassingSetting &) = default ;
      AttributePassingSetting(AttributePassingSetting &&) = default ;
      AttributePassingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttributePassingSetting() = default ;
      AttributePassingSetting& operator=(const AttributePassingSetting &) = default ;
      AttributePassingSetting& operator=(AttributePassingSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sourceIdentityPassing_ == nullptr; };
      // sourceIdentityPassing Field Functions 
      bool hasSourceIdentityPassing() const { return this->sourceIdentityPassing_ != nullptr;};
      void deleteSourceIdentityPassing() { this->sourceIdentityPassing_ = nullptr;};
      inline string getSourceIdentityPassing() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentityPassing_, "") };
      inline AttributePassingSetting& setSourceIdentityPassing(string sourceIdentityPassing) { DARABONBA_PTR_SET_VALUE(sourceIdentityPassing_, sourceIdentityPassing) };


    protected:
      // The SourceIdentity pass-through mode. If not configured, Disabled is returned by default. Valid values:
      // 
      // - IdP: Uses the SourceIdentity attribute value carried in the SAML assertion from the external identity provider (IdP). The attribute value must be 2 to 64 characters in length and can contain only letters, digits, and the following special characters: =,.@-_.
      // - UserName: Uses the CloudSSO username as the SourceIdentity. The system automatically adds a reserved prefix, resulting in the format acs:sso:<username>. The total length cannot exceed 64 characters.
      // - Disabled: Does not pass through the SourceIdentity.
      shared_ptr<string> sourceIdentityPassing_ {};
    };

    virtual bool empty() const override { return this->attributePassingSetting_ == nullptr
        && this->requestId_ == nullptr; };
    // attributePassingSetting Field Functions 
    bool hasAttributePassingSetting() const { return this->attributePassingSetting_ != nullptr;};
    void deleteAttributePassingSetting() { this->attributePassingSetting_ = nullptr;};
    inline const GetAttributePassingSettingResponseBody::AttributePassingSetting & getAttributePassingSetting() const { DARABONBA_PTR_GET_CONST(attributePassingSetting_, GetAttributePassingSettingResponseBody::AttributePassingSetting) };
    inline GetAttributePassingSettingResponseBody::AttributePassingSetting getAttributePassingSetting() { DARABONBA_PTR_GET(attributePassingSetting_, GetAttributePassingSettingResponseBody::AttributePassingSetting) };
    inline GetAttributePassingSettingResponseBody& setAttributePassingSetting(const GetAttributePassingSettingResponseBody::AttributePassingSetting & attributePassingSetting) { DARABONBA_PTR_SET_VALUE(attributePassingSetting_, attributePassingSetting) };
    inline GetAttributePassingSettingResponseBody& setAttributePassingSetting(GetAttributePassingSettingResponseBody::AttributePassingSetting && attributePassingSetting) { DARABONBA_PTR_SET_RVALUE(attributePassingSetting_, attributePassingSetting) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttributePassingSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The attribute passing settings.
    shared_ptr<GetAttributePassingSettingResponseBody::AttributePassingSetting> attributePassingSetting_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
