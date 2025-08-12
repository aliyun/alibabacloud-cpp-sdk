// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCTSCHEDULEGROUP_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCTSCHEDULEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentMemberStructScheduleGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentMemberStructScheduleGroup& obj) { 
      DARABONBA_PTR_TO_JSON(contactId, contactId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentMemberStructScheduleGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(contactId, contactId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    IncidentMemberStructScheduleGroup() = default ;
    IncidentMemberStructScheduleGroup(const IncidentMemberStructScheduleGroup &) = default ;
    IncidentMemberStructScheduleGroup(IncidentMemberStructScheduleGroup &&) = default ;
    IncidentMemberStructScheduleGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentMemberStructScheduleGroup() = default ;
    IncidentMemberStructScheduleGroup& operator=(const IncidentMemberStructScheduleGroup &) = default ;
    IncidentMemberStructScheduleGroup& operator=(IncidentMemberStructScheduleGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->name_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline IncidentMemberStructScheduleGroup& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentMemberStructScheduleGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
