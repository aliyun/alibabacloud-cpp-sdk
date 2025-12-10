// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPRESPONSEBODYRESOURCEGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPRESPONSEBODYRESOURCEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceGroupResponseBodyResourceGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceGroupResponseBodyResourceGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateResourceGroupResponseBodyResourceGroup() = default ;
    UpdateResourceGroupResponseBodyResourceGroup(const UpdateResourceGroupResponseBodyResourceGroup &) = default ;
    UpdateResourceGroupResponseBodyResourceGroup(UpdateResourceGroupResponseBodyResourceGroup &&) = default ;
    UpdateResourceGroupResponseBodyResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceGroupResponseBodyResourceGroup() = default ;
    UpdateResourceGroupResponseBodyResourceGroup& operator=(const UpdateResourceGroupResponseBodyResourceGroup &) = default ;
    UpdateResourceGroupResponseBodyResourceGroup& operator=(UpdateResourceGroupResponseBodyResourceGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->createDate_ == nullptr && return this->displayName_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline UpdateResourceGroupResponseBodyResourceGroup& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline UpdateResourceGroupResponseBodyResourceGroup& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateResourceGroupResponseBodyResourceGroup& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateResourceGroupResponseBodyResourceGroup& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResourceGroupResponseBodyResourceGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource group belongs.
    std::shared_ptr<string> accountId_ = nullptr;
    // The time when the resource group was created. The time is displayed in UTC.
    std::shared_ptr<string> createDate_ = nullptr;
    // The display name of the resource group.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> id_ = nullptr;
    // The unique identifier of the resource group.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
