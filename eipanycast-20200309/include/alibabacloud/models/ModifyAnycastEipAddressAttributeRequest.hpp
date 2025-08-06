// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYANYCASTEIPADDRESSATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYANYCASTEIPADDRESSATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class ModifyAnycastEipAddressAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAnycastEipAddressAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAnycastEipAddressAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ModifyAnycastEipAddressAttributeRequest() = default ;
    ModifyAnycastEipAddressAttributeRequest(const ModifyAnycastEipAddressAttributeRequest &) = default ;
    ModifyAnycastEipAddressAttributeRequest(ModifyAnycastEipAddressAttributeRequest &&) = default ;
    ModifyAnycastEipAddressAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAnycastEipAddressAttributeRequest() = default ;
    ModifyAnycastEipAddressAttributeRequest& operator=(const ModifyAnycastEipAddressAttributeRequest &) = default ;
    ModifyAnycastEipAddressAttributeRequest& operator=(ModifyAnycastEipAddressAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anycastId_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr; };
    // anycastId Field Functions 
    bool hasAnycastId() const { return this->anycastId_ != nullptr;};
    void deleteAnycastId() { this->anycastId_ = nullptr;};
    inline string anycastId() const { DARABONBA_PTR_GET_DEFAULT(anycastId_, "") };
    inline ModifyAnycastEipAddressAttributeRequest& setAnycastId(string anycastId) { DARABONBA_PTR_SET_VALUE(anycastId_, anycastId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAnycastEipAddressAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAnycastEipAddressAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the Anycast EIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> anycastId_ = nullptr;
    // The description of the Anycast EIP.
    // 
    // The description must be 0 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the Anycast EIP.
    // 
    // The name must be 0 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
