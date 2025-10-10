// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASCRIPTSREQUESTASCRIPTSEXTATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASCRIPTSREQUESTASCRIPTSEXTATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateAScriptsRequestAScriptsExtAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAScriptsRequestAScriptsExtAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeKey, attributeKey_);
      DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAScriptsRequestAScriptsExtAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeKey, attributeKey_);
      DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
    };
    UpdateAScriptsRequestAScriptsExtAttributes() = default ;
    UpdateAScriptsRequestAScriptsExtAttributes(const UpdateAScriptsRequestAScriptsExtAttributes &) = default ;
    UpdateAScriptsRequestAScriptsExtAttributes(UpdateAScriptsRequestAScriptsExtAttributes &&) = default ;
    UpdateAScriptsRequestAScriptsExtAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAScriptsRequestAScriptsExtAttributes() = default ;
    UpdateAScriptsRequestAScriptsExtAttributes& operator=(const UpdateAScriptsRequestAScriptsExtAttributes &) = default ;
    UpdateAScriptsRequestAScriptsExtAttributes& operator=(UpdateAScriptsRequestAScriptsExtAttributes &&) = default ;
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
    inline UpdateAScriptsRequestAScriptsExtAttributes& setAttributeKey(string attributeKey) { DARABONBA_PTR_SET_VALUE(attributeKey_, attributeKey) };


    // attributeValue Field Functions 
    bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
    void deleteAttributeValue() { this->attributeValue_ = nullptr;};
    inline string attributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
    inline UpdateAScriptsRequestAScriptsExtAttributes& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


  protected:
    // The attribute name.
    // 
    // Set the value to **EsDebug**, which specifies that when requests carry the _es_dbg parameter whose value is the specified key, the debugging header is enabled to output the execution result.
    // 
    // This parameter is required.
    std::shared_ptr<string> attributeKey_ = nullptr;
    // The attribute value, which must be 1 to 128 characters in length, and can contain letters and digits.
    // 
    // This parameter is required.
    std::shared_ptr<string> attributeValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
