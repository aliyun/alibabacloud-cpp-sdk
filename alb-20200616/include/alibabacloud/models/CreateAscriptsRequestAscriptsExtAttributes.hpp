// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASCRIPTSREQUESTASCRIPTSEXTATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_CREATEASCRIPTSREQUESTASCRIPTSEXTATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateAScriptsRequestAScriptsExtAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAScriptsRequestAScriptsExtAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeKey, attributeKey_);
      DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAScriptsRequestAScriptsExtAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeKey, attributeKey_);
      DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
    };
    CreateAScriptsRequestAScriptsExtAttributes() = default ;
    CreateAScriptsRequestAScriptsExtAttributes(const CreateAScriptsRequestAScriptsExtAttributes &) = default ;
    CreateAScriptsRequestAScriptsExtAttributes(CreateAScriptsRequestAScriptsExtAttributes &&) = default ;
    CreateAScriptsRequestAScriptsExtAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAScriptsRequestAScriptsExtAttributes() = default ;
    CreateAScriptsRequestAScriptsExtAttributes& operator=(const CreateAScriptsRequestAScriptsExtAttributes &) = default ;
    CreateAScriptsRequestAScriptsExtAttributes& operator=(CreateAScriptsRequestAScriptsExtAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeKey_ != nullptr
        && this->attributeValue_ != nullptr; };
    // attributeKey Field Functions 
    bool hasAttributeKey() const { return this->attributeKey_ != nullptr;};
    void deleteAttributeKey() { this->attributeKey_ = nullptr;};
    inline string attributeKey() const { DARABONBA_PTR_GET_DEFAULT(attributeKey_, "") };
    inline CreateAScriptsRequestAScriptsExtAttributes& setAttributeKey(string attributeKey) { DARABONBA_PTR_SET_VALUE(attributeKey_, attributeKey) };


    // attributeValue Field Functions 
    bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
    void deleteAttributeValue() { this->attributeValue_ = nullptr;};
    inline string attributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
    inline CreateAScriptsRequestAScriptsExtAttributes& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


  protected:
    // The key of the extended attribute.
    // 
    // You can only set the key to **EsDebug**. This extended attribute adds a debug response header to record the execution of the AScript rule if the client request includes the _es_dbg parameter and its value matches the specified value of the extended attribute.
    std::shared_ptr<string> attributeKey_ = nullptr;
    // The value of the extended attribute, which can contain a maximum of 128 characters, including letters and digits.
    std::shared_ptr<string> attributeValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
