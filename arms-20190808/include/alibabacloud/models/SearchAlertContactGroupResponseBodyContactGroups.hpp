// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTCONTACTGROUPRESPONSEBODYCONTACTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTCONTACTGROUPRESPONSEBODYCONTACTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertContactGroupResponseBodyContactGroupsContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertContactGroupResponseBodyContactGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertContactGroupResponseBodyContactGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertContactGroupResponseBodyContactGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SearchAlertContactGroupResponseBodyContactGroups() = default ;
    SearchAlertContactGroupResponseBodyContactGroups(const SearchAlertContactGroupResponseBodyContactGroups &) = default ;
    SearchAlertContactGroupResponseBodyContactGroups(SearchAlertContactGroupResponseBodyContactGroups &&) = default ;
    SearchAlertContactGroupResponseBodyContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertContactGroupResponseBodyContactGroups() = default ;
    SearchAlertContactGroupResponseBodyContactGroups& operator=(const SearchAlertContactGroupResponseBodyContactGroups &) = default ;
    SearchAlertContactGroupResponseBodyContactGroups& operator=(SearchAlertContactGroupResponseBodyContactGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupId_ != nullptr
        && this->contactGroupName_ != nullptr && this->contacts_ != nullptr && this->createTime_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr; };
    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline int64_t contactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0L) };
    inline SearchAlertContactGroupResponseBodyContactGroups& setContactGroupId(int64_t contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline SearchAlertContactGroupResponseBodyContactGroups& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<Models::SearchAlertContactGroupResponseBodyContactGroupsContacts> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Models::SearchAlertContactGroupResponseBodyContactGroupsContacts>) };
    inline vector<Models::SearchAlertContactGroupResponseBodyContactGroupsContacts> contacts() { DARABONBA_PTR_GET(contacts_, vector<Models::SearchAlertContactGroupResponseBodyContactGroupsContacts>) };
    inline SearchAlertContactGroupResponseBodyContactGroups& setContacts(const vector<Models::SearchAlertContactGroupResponseBodyContactGroupsContacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline SearchAlertContactGroupResponseBodyContactGroups& setContacts(vector<Models::SearchAlertContactGroupResponseBodyContactGroupsContacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline SearchAlertContactGroupResponseBodyContactGroups& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline SearchAlertContactGroupResponseBodyContactGroups& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchAlertContactGroupResponseBodyContactGroups& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the alert contact group.
    std::shared_ptr<int64_t> contactGroupId_ = nullptr;
    // The name of the alert contact group.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The alert contact list.
    std::shared_ptr<vector<Models::SearchAlertContactGroupResponseBodyContactGroupsContacts>> contacts_ = nullptr;
    // The time when the alert contact group list was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the alert contact group was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
