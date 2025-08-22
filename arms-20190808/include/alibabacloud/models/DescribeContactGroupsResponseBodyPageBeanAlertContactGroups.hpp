// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPSRESPONSEBODYPAGEBEANALERTCONTACTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPSRESPONSEBODYPAGEBEANALERTCONTACTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeContactGroupsResponseBodyPageBeanAlertContactGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ArmsContactGroupId, armsContactGroupId_);
      DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ArmsContactGroupId, armsContactGroupId_);
      DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
    };
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroups() = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroups(const DescribeContactGroupsResponseBodyPageBeanAlertContactGroups &) = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroups(DescribeContactGroupsResponseBodyPageBeanAlertContactGroups &&) = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupsResponseBodyPageBeanAlertContactGroups() = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& operator=(const DescribeContactGroupsResponseBodyPageBeanAlertContactGroups &) = default ;
    DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& operator=(DescribeContactGroupsResponseBodyPageBeanAlertContactGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->armsContactGroupId_ != nullptr
        && this->contactGroupId_ != nullptr && this->contactGroupName_ != nullptr && this->contacts_ != nullptr; };
    // armsContactGroupId Field Functions 
    bool hasArmsContactGroupId() const { return this->armsContactGroupId_ != nullptr;};
    void deleteArmsContactGroupId() { this->armsContactGroupId_ = nullptr;};
    inline int64_t armsContactGroupId() const { DARABONBA_PTR_GET_DEFAULT(armsContactGroupId_, 0L) };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& setArmsContactGroupId(int64_t armsContactGroupId) { DARABONBA_PTR_SET_VALUE(armsContactGroupId_, armsContactGroupId) };


    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline float contactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0.0) };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& setContactGroupId(float contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<Models::DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Models::DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts>) };
    inline vector<Models::DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts> contacts() { DARABONBA_PTR_GET(contacts_, vector<Models::DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts>) };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& setContacts(const vector<Models::DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline DescribeContactGroupsResponseBodyPageBeanAlertContactGroups& setContacts(vector<Models::DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


  protected:
    // The ID of the alert contact group.
    std::shared_ptr<int64_t> armsContactGroupId_ = nullptr;
    // The ID of the alert contact group.
    std::shared_ptr<float> contactGroupId_ = nullptr;
    // The name of the alert contact group.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The contact information. If the **IsDetail** parameter is set to `false`, no **contact** information is displayed.
    std::shared_ptr<vector<Models::DescribeContactGroupsResponseBodyPageBeanAlertContactGroupsContacts>> contacts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
