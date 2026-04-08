// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENABLEDEXTENSIONSFORPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENABLEDEXTENSIONSFORPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListEnabledExtensionsForProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnabledExtensionsForProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Extensions, extensions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnabledExtensionsForProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEnabledExtensionsForProjectResponseBody() = default ;
    ListEnabledExtensionsForProjectResponseBody(const ListEnabledExtensionsForProjectResponseBody &) = default ;
    ListEnabledExtensionsForProjectResponseBody(ListEnabledExtensionsForProjectResponseBody &&) = default ;
    ListEnabledExtensionsForProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnabledExtensionsForProjectResponseBody() = default ;
    ListEnabledExtensionsForProjectResponseBody& operator=(const ListEnabledExtensionsForProjectResponseBody &) = default ;
    ListEnabledExtensionsForProjectResponseBody& operator=(ListEnabledExtensionsForProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Extensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extensions& obj) { 
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
        DARABONBA_PTR_TO_JSON(ExtensionDesc, extensionDesc_);
        DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ParameterSetting, parameterSetting_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Extensions& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
        DARABONBA_PTR_FROM_JSON(ExtensionDesc, extensionDesc_);
        DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ParameterSetting, parameterSetting_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      Extensions() = default ;
      Extensions(const Extensions &) = default ;
      Extensions(Extensions &&) = default ;
      Extensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extensions() = default ;
      Extensions& operator=(const Extensions &) = default ;
      Extensions& operator=(Extensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createUser_ == nullptr
        && this->extensionCode_ == nullptr && this->extensionDesc_ == nullptr && this->extensionName_ == nullptr && this->modifyUser_ == nullptr && this->owner_ == nullptr
        && this->parameterSetting_ == nullptr && this->tenantId_ == nullptr; };
      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Extensions& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // extensionCode Field Functions 
      bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
      void deleteExtensionCode() { this->extensionCode_ = nullptr;};
      inline string getExtensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
      inline Extensions& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


      // extensionDesc Field Functions 
      bool hasExtensionDesc() const { return this->extensionDesc_ != nullptr;};
      void deleteExtensionDesc() { this->extensionDesc_ = nullptr;};
      inline string getExtensionDesc() const { DARABONBA_PTR_GET_DEFAULT(extensionDesc_, "") };
      inline Extensions& setExtensionDesc(string extensionDesc) { DARABONBA_PTR_SET_VALUE(extensionDesc_, extensionDesc) };


      // extensionName Field Functions 
      bool hasExtensionName() const { return this->extensionName_ != nullptr;};
      void deleteExtensionName() { this->extensionName_ = nullptr;};
      inline string getExtensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
      inline Extensions& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline Extensions& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Extensions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // parameterSetting Field Functions 
      bool hasParameterSetting() const { return this->parameterSetting_ != nullptr;};
      void deleteParameterSetting() { this->parameterSetting_ = nullptr;};
      inline string getParameterSetting() const { DARABONBA_PTR_GET_DEFAULT(parameterSetting_, "") };
      inline Extensions& setParameterSetting(string parameterSetting) { DARABONBA_PTR_SET_VALUE(parameterSetting_, parameterSetting) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Extensions& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // The creator of the extension.
      shared_ptr<string> createUser_ {};
      // The unique code of the extension.
      shared_ptr<string> extensionCode_ {};
      // The description of the extension.
      shared_ptr<string> extensionDesc_ {};
      // The name of the extension.
      shared_ptr<string> extensionName_ {};
      // The modifier of the extension.
      shared_ptr<string> modifyUser_ {};
      // The owner ID.
      shared_ptr<string> owner_ {};
      // The parameter settings of the extension. For more information, see [Configure extension parameters](https://help.aliyun.com/document_detail/405354.html).
      shared_ptr<string> parameterSetting_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
    };

    virtual bool empty() const override { return this->extensions_ == nullptr
        && this->requestId_ == nullptr; };
    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline const vector<ListEnabledExtensionsForProjectResponseBody::Extensions> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<ListEnabledExtensionsForProjectResponseBody::Extensions>) };
    inline vector<ListEnabledExtensionsForProjectResponseBody::Extensions> getExtensions() { DARABONBA_PTR_GET(extensions_, vector<ListEnabledExtensionsForProjectResponseBody::Extensions>) };
    inline ListEnabledExtensionsForProjectResponseBody& setExtensions(const vector<ListEnabledExtensionsForProjectResponseBody::Extensions> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
    inline ListEnabledExtensionsForProjectResponseBody& setExtensions(vector<ListEnabledExtensionsForProjectResponseBody::Extensions> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnabledExtensionsForProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The extensions.
    shared_ptr<vector<ListEnabledExtensionsForProjectResponseBody::Extensions>> extensions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
