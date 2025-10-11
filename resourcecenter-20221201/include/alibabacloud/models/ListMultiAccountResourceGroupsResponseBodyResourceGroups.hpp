// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCEGROUPSRESPONSEBODYRESOURCEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCEGROUPSRESPONSEBODYRESOURCEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountResourceGroupsResponseBodyResourceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountResourceGroupsResponseBodyResourceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountResourceGroupsResponseBodyResourceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListMultiAccountResourceGroupsResponseBodyResourceGroups() = default ;
    ListMultiAccountResourceGroupsResponseBodyResourceGroups(const ListMultiAccountResourceGroupsResponseBodyResourceGroups &) = default ;
    ListMultiAccountResourceGroupsResponseBodyResourceGroups(ListMultiAccountResourceGroupsResponseBodyResourceGroups &&) = default ;
    ListMultiAccountResourceGroupsResponseBodyResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountResourceGroupsResponseBodyResourceGroups() = default ;
    ListMultiAccountResourceGroupsResponseBodyResourceGroups& operator=(const ListMultiAccountResourceGroupsResponseBodyResourceGroups &) = default ;
    ListMultiAccountResourceGroupsResponseBodyResourceGroups& operator=(ListMultiAccountResourceGroupsResponseBodyResourceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->createDate_ != nullptr && this->displayName_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->status_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListMultiAccountResourceGroupsResponseBodyResourceGroups& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListMultiAccountResourceGroupsResponseBodyResourceGroups& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListMultiAccountResourceGroupsResponseBodyResourceGroups& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListMultiAccountResourceGroupsResponseBodyResourceGroups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMultiAccountResourceGroupsResponseBodyResourceGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMultiAccountResourceGroupsResponseBodyResourceGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the management account or member of the resource directory.
    std::shared_ptr<string> accountId_ = nullptr;
    // The time when the resource group was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The display name of the resource group.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> id_ = nullptr;
    // The unique identifier of the resource group.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the resource group. Valid values:
    // 
    // *   Creating: The resource group is being created.
    // *   OK: The resource group is created.
    // *   PendingDelete: The resource group is waiting to be deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
