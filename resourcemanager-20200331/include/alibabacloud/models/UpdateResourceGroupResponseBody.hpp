// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
    };
    UpdateResourceGroupResponseBody() = default ;
    UpdateResourceGroupResponseBody(const UpdateResourceGroupResponseBody &) = default ;
    UpdateResourceGroupResponseBody(UpdateResourceGroupResponseBody &&) = default ;
    UpdateResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceGroupResponseBody() = default ;
    UpdateResourceGroupResponseBody& operator=(const UpdateResourceGroupResponseBody &) = default ;
    UpdateResourceGroupResponseBody& operator=(UpdateResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroup& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      ResourceGroup() = default ;
      ResourceGroup(const ResourceGroup &) = default ;
      ResourceGroup(ResourceGroup &&) = default ;
      ResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceGroup() = default ;
      ResourceGroup& operator=(const ResourceGroup &) = default ;
      ResourceGroup& operator=(ResourceGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->createDate_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline ResourceGroup& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline ResourceGroup& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline ResourceGroup& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ResourceGroup& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResourceGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The ID of the Alibaba Cloud account to which the resource group belongs.
      shared_ptr<string> accountId_ {};
      // The time when the resource group was created. The time is displayed in UTC.
      shared_ptr<string> createDate_ {};
      // The display name of the resource group.
      shared_ptr<string> displayName_ {};
      // The ID of the resource group.
      shared_ptr<string> id_ {};
      // The unique identifier of the resource group.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const UpdateResourceGroupResponseBody::ResourceGroup & getResourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, UpdateResourceGroupResponseBody::ResourceGroup) };
    inline UpdateResourceGroupResponseBody::ResourceGroup getResourceGroup() { DARABONBA_PTR_GET(resourceGroup_, UpdateResourceGroupResponseBody::ResourceGroup) };
    inline UpdateResourceGroupResponseBody& setResourceGroup(const UpdateResourceGroupResponseBody::ResourceGroup & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline UpdateResourceGroupResponseBody& setResourceGroup(UpdateResourceGroupResponseBody::ResourceGroup && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information of the resource group.
    shared_ptr<UpdateResourceGroupResponseBody::ResourceGroup> resourceGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
