// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSUBSCRIPTIONRESPONSEBODYDATACONTACTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSUBSCRIPTIONRESPONSEBODYDATACONTACTGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetEventSubscriptionResponseBodyDataContactGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventSubscriptionResponseBodyDataContactGroups& obj) { 
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventSubscriptionResponseBodyDataContactGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetEventSubscriptionResponseBodyDataContactGroups() = default ;
    GetEventSubscriptionResponseBodyDataContactGroups(const GetEventSubscriptionResponseBodyDataContactGroups &) = default ;
    GetEventSubscriptionResponseBodyDataContactGroups(GetEventSubscriptionResponseBodyDataContactGroups &&) = default ;
    GetEventSubscriptionResponseBodyDataContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventSubscriptionResponseBodyDataContactGroups() = default ;
    GetEventSubscriptionResponseBodyDataContactGroups& operator=(const GetEventSubscriptionResponseBodyDataContactGroups &) = default ;
    GetEventSubscriptionResponseBodyDataContactGroups& operator=(GetEventSubscriptionResponseBodyDataContactGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacts_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->userId_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline string contacts() const { DARABONBA_PTR_GET_DEFAULT(contacts_, "") };
    inline GetEventSubscriptionResponseBodyDataContactGroups& setContacts(string contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEventSubscriptionResponseBodyDataContactGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetEventSubscriptionResponseBodyDataContactGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetEventSubscriptionResponseBodyDataContactGroups& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The members of the alert contact group.
    std::shared_ptr<string> contacts_ = nullptr;
    // The description of the alert contact group.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the alert contact group.
    std::shared_ptr<string> name_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
