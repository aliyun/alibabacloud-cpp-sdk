// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIBEDCALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIBEDCALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSubscribedCalendarRequestSubscribeScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateSubscribedCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscribedCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Managers, managers_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubscribeScope, subscribeScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscribedCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Managers, managers_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubscribeScope, subscribeScope_);
    };
    CreateSubscribedCalendarRequest() = default ;
    CreateSubscribedCalendarRequest(const CreateSubscribedCalendarRequest &) = default ;
    CreateSubscribedCalendarRequest(CreateSubscribedCalendarRequest &&) = default ;
    CreateSubscribedCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscribedCalendarRequest() = default ;
    CreateSubscribedCalendarRequest& operator=(const CreateSubscribedCalendarRequest &) = default ;
    CreateSubscribedCalendarRequest& operator=(CreateSubscribedCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->managers_ != nullptr && this->name_ != nullptr && this->subscribeScope_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSubscribedCalendarRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // managers Field Functions 
    bool hasManagers() const { return this->managers_ != nullptr;};
    void deleteManagers() { this->managers_ = nullptr;};
    inline const vector<string> & managers() const { DARABONBA_PTR_GET_CONST(managers_, vector<string>) };
    inline vector<string> managers() { DARABONBA_PTR_GET(managers_, vector<string>) };
    inline CreateSubscribedCalendarRequest& setManagers(const vector<string> & managers) { DARABONBA_PTR_SET_VALUE(managers_, managers) };
    inline CreateSubscribedCalendarRequest& setManagers(vector<string> && managers) { DARABONBA_PTR_SET_RVALUE(managers_, managers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSubscribedCalendarRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subscribeScope Field Functions 
    bool hasSubscribeScope() const { return this->subscribeScope_ != nullptr;};
    void deleteSubscribeScope() { this->subscribeScope_ = nullptr;};
    inline const CreateSubscribedCalendarRequestSubscribeScope & subscribeScope() const { DARABONBA_PTR_GET_CONST(subscribeScope_, CreateSubscribedCalendarRequestSubscribeScope) };
    inline CreateSubscribedCalendarRequestSubscribeScope subscribeScope() { DARABONBA_PTR_GET(subscribeScope_, CreateSubscribedCalendarRequestSubscribeScope) };
    inline CreateSubscribedCalendarRequest& setSubscribeScope(const CreateSubscribedCalendarRequestSubscribeScope & subscribeScope) { DARABONBA_PTR_SET_VALUE(subscribeScope_, subscribeScope) };
    inline CreateSubscribedCalendarRequest& setSubscribeScope(CreateSubscribedCalendarRequestSubscribeScope && subscribeScope) { DARABONBA_PTR_SET_RVALUE(subscribeScope_, subscribeScope) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> managers_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateSubscribedCalendarRequestSubscribeScope> subscribeScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
