// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENABLEDEXTENSIONSFORPROJECTRESPONSEBODYEXTENSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTENABLEDEXTENSIONSFORPROJECTRESPONSEBODYEXTENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListEnabledExtensionsForProjectResponseBodyExtensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnabledExtensionsForProjectResponseBodyExtensions& obj) { 
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_TO_JSON(ExtensionDesc, extensionDesc_);
      DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ParameterSetting, parameterSetting_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnabledExtensionsForProjectResponseBodyExtensions& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_FROM_JSON(ExtensionDesc, extensionDesc_);
      DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ParameterSetting, parameterSetting_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListEnabledExtensionsForProjectResponseBodyExtensions() = default ;
    ListEnabledExtensionsForProjectResponseBodyExtensions(const ListEnabledExtensionsForProjectResponseBodyExtensions &) = default ;
    ListEnabledExtensionsForProjectResponseBodyExtensions(ListEnabledExtensionsForProjectResponseBodyExtensions &&) = default ;
    ListEnabledExtensionsForProjectResponseBodyExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnabledExtensionsForProjectResponseBodyExtensions() = default ;
    ListEnabledExtensionsForProjectResponseBodyExtensions& operator=(const ListEnabledExtensionsForProjectResponseBodyExtensions &) = default ;
    ListEnabledExtensionsForProjectResponseBodyExtensions& operator=(ListEnabledExtensionsForProjectResponseBodyExtensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createUser_ != nullptr
        && this->extensionCode_ != nullptr && this->extensionDesc_ != nullptr && this->extensionName_ != nullptr && this->modifyUser_ != nullptr && this->owner_ != nullptr
        && this->parameterSetting_ != nullptr && this->tenantId_ != nullptr; };
    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListEnabledExtensionsForProjectResponseBodyExtensions& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // extensionCode Field Functions 
    bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
    void deleteExtensionCode() { this->extensionCode_ = nullptr;};
    inline string extensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
    inline ListEnabledExtensionsForProjectResponseBodyExtensions& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


    // extensionDesc Field Functions 
    bool hasExtensionDesc() const { return this->extensionDesc_ != nullptr;};
    void deleteExtensionDesc() { this->extensionDesc_ = nullptr;};
    inline string extensionDesc() const { DARABONBA_PTR_GET_DEFAULT(extensionDesc_, "") };
    inline ListEnabledExtensionsForProjectResponseBodyExtensions& setExtensionDesc(string extensionDesc) { DARABONBA_PTR_SET_VALUE(extensionDesc_, extensionDesc) };


    // extensionName Field Functions 
    bool hasExtensionName() const { return this->extensionName_ != nullptr;};
    void deleteExtensionName() { this->extensionName_ = nullptr;};
    inline string extensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
    inline ListEnabledExtensionsForProjectResponseBodyExtensions& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListEnabledExtensionsForProjectResponseBodyExtensions& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListEnabledExtensionsForProjectResponseBodyExtensions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameterSetting Field Functions 
    bool hasParameterSetting() const { return this->parameterSetting_ != nullptr;};
    void deleteParameterSetting() { this->parameterSetting_ = nullptr;};
    inline string parameterSetting() const { DARABONBA_PTR_GET_DEFAULT(parameterSetting_, "") };
    inline ListEnabledExtensionsForProjectResponseBodyExtensions& setParameterSetting(string parameterSetting) { DARABONBA_PTR_SET_VALUE(parameterSetting_, parameterSetting) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListEnabledExtensionsForProjectResponseBodyExtensions& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The creator of the extension.
    std::shared_ptr<string> createUser_ = nullptr;
    // The unique code of the extension.
    std::shared_ptr<string> extensionCode_ = nullptr;
    // The description of the extension.
    std::shared_ptr<string> extensionDesc_ = nullptr;
    // The name of the extension.
    std::shared_ptr<string> extensionName_ = nullptr;
    // The modifier of the extension.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The owner ID.
    std::shared_ptr<string> owner_ = nullptr;
    // The parameter settings of the extension. For more information, see [Configure extension parameters](https://help.aliyun.com/document_detail/405354.html).
    std::shared_ptr<string> parameterSetting_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
