// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTACTFORINCIDENTVIEW_HPP_
#define ALIBABACLOUD_MODELS_CONTACTFORINCIDENTVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ContactForIncidentView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContactForIncidentView& obj) { 
      DARABONBA_PTR_TO_JSON(contactId, contactId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ContactForIncidentView& obj) { 
      DARABONBA_PTR_FROM_JSON(contactId, contactId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ContactForIncidentView() = default ;
    ContactForIncidentView(const ContactForIncidentView &) = default ;
    ContactForIncidentView(ContactForIncidentView &&) = default ;
    ContactForIncidentView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContactForIncidentView() = default ;
    ContactForIncidentView& operator=(const ContactForIncidentView &) = default ;
    ContactForIncidentView& operator=(ContactForIncidentView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->name_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ContactForIncidentView& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ContactForIncidentView& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
