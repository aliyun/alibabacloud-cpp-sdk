// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIBEDCALENDARSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIBEDCALENDARSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateSubscribedCalendarShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscribedCalendarShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Managers, managersShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubscribeScope, subscribeScopeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscribedCalendarShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Managers, managersShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubscribeScope, subscribeScopeShrink_);
    };
    CreateSubscribedCalendarShrinkRequest() = default ;
    CreateSubscribedCalendarShrinkRequest(const CreateSubscribedCalendarShrinkRequest &) = default ;
    CreateSubscribedCalendarShrinkRequest(CreateSubscribedCalendarShrinkRequest &&) = default ;
    CreateSubscribedCalendarShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscribedCalendarShrinkRequest() = default ;
    CreateSubscribedCalendarShrinkRequest& operator=(const CreateSubscribedCalendarShrinkRequest &) = default ;
    CreateSubscribedCalendarShrinkRequest& operator=(CreateSubscribedCalendarShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->managersShrink_ == nullptr && this->name_ == nullptr && this->subscribeScopeShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSubscribedCalendarShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // managersShrink Field Functions 
    bool hasManagersShrink() const { return this->managersShrink_ != nullptr;};
    void deleteManagersShrink() { this->managersShrink_ = nullptr;};
    inline string getManagersShrink() const { DARABONBA_PTR_GET_DEFAULT(managersShrink_, "") };
    inline CreateSubscribedCalendarShrinkRequest& setManagersShrink(string managersShrink) { DARABONBA_PTR_SET_VALUE(managersShrink_, managersShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSubscribedCalendarShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subscribeScopeShrink Field Functions 
    bool hasSubscribeScopeShrink() const { return this->subscribeScopeShrink_ != nullptr;};
    void deleteSubscribeScopeShrink() { this->subscribeScopeShrink_ = nullptr;};
    inline string getSubscribeScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(subscribeScopeShrink_, "") };
    inline CreateSubscribedCalendarShrinkRequest& setSubscribeScopeShrink(string subscribeScopeShrink) { DARABONBA_PTR_SET_VALUE(subscribeScopeShrink_, subscribeScopeShrink) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> managersShrink_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> subscribeScopeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
