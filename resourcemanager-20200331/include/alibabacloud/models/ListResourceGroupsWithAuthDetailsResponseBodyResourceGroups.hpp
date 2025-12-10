// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODYRESOURCEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSRESPONSEBODYRESOURCEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupsWithAuthDetailsResponseBodyResourceGroupsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups() = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups(const ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups(ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups &&) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups() = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& operator=(const ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups &) = default ;
    ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& operator=(ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->createDate_ == nullptr && return this->displayName_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyResourceGroupsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyResourceGroupsTags>) };
    inline vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyResourceGroupsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyResourceGroupsTags>) };
    inline ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& setTags(const vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyResourceGroupsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListResourceGroupsWithAuthDetailsResponseBodyResourceGroups& setTags(vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyResourceGroupsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> createDate_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceGroupsWithAuthDetailsResponseBodyResourceGroupsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
