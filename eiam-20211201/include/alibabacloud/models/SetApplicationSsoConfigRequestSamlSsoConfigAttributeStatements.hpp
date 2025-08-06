// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTSAMLSSOCONFIGATTRIBUTESTATEMENTS_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTSAMLSSOCONFIGATTRIBUTESTATEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_TO_JSON(AttributeValueExpression, attributeValueExpression_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_FROM_JSON(AttributeValueExpression, attributeValueExpression_);
    };
    SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements() = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements(const SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements &) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements(SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements &&) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements() = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements& operator=(const SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements &) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements& operator=(SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeName_ != nullptr
        && this->attributeValueExpression_ != nullptr; };
    // attributeName Field Functions 
    bool hasAttributeName() const { return this->attributeName_ != nullptr;};
    void deleteAttributeName() { this->attributeName_ = nullptr;};
    inline string attributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


    // attributeValueExpression Field Functions 
    bool hasAttributeValueExpression() const { return this->attributeValueExpression_ != nullptr;};
    void deleteAttributeValueExpression() { this->attributeValueExpression_ = nullptr;};
    inline string attributeValueExpression() const { DARABONBA_PTR_GET_DEFAULT(attributeValueExpression_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfigAttributeStatements& setAttributeValueExpression(string attributeValueExpression) { DARABONBA_PTR_SET_VALUE(attributeValueExpression_, attributeValueExpression) };


  protected:
    // The name of the attribute in the SAML assertion.
    std::shared_ptr<string> attributeName_ = nullptr;
    // The expression that is used to generate the value of the attribute in the SAML assertion.
    std::shared_ptr<string> attributeValueExpression_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
