// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCTCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCTCONTACTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentMemberStructContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentMemberStructContacts& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(contactMask, contactMask_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentMemberStructContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(contactMask, contactMask_);
    };
    IncidentMemberStructContacts() = default ;
    IncidentMemberStructContacts(const IncidentMemberStructContacts &) = default ;
    IncidentMemberStructContacts(IncidentMemberStructContacts &&) = default ;
    IncidentMemberStructContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentMemberStructContacts() = default ;
    IncidentMemberStructContacts& operator=(const IncidentMemberStructContacts &) = default ;
    IncidentMemberStructContacts& operator=(IncidentMemberStructContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->contactMask_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline IncidentMemberStructContacts& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // contactMask Field Functions 
    bool hasContactMask() const { return this->contactMask_ != nullptr;};
    void deleteContactMask() { this->contactMask_ = nullptr;};
    inline string contactMask() const { DARABONBA_PTR_GET_DEFAULT(contactMask_, "") };
    inline IncidentMemberStructContacts& setContactMask(string contactMask) { DARABONBA_PTR_SET_VALUE(contactMask_, contactMask) };


  protected:
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> contactMask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
