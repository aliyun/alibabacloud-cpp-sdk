// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCRIBEDCALENDARSREQUESTSUBSCRIBESCOPE_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCRIBEDCALENDARSREQUESTSUBSCRIBESCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateSubscribedCalendarsRequestSubscribeScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubscribedCalendarsRequestSubscribeScope& obj) { 
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubscribedCalendarsRequestSubscribeScope& obj) { 
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    UpdateSubscribedCalendarsRequestSubscribeScope() = default ;
    UpdateSubscribedCalendarsRequestSubscribeScope(const UpdateSubscribedCalendarsRequestSubscribeScope &) = default ;
    UpdateSubscribedCalendarsRequestSubscribeScope(UpdateSubscribedCalendarsRequestSubscribeScope &&) = default ;
    UpdateSubscribedCalendarsRequestSubscribeScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubscribedCalendarsRequestSubscribeScope() = default ;
    UpdateSubscribedCalendarsRequestSubscribeScope& operator=(const UpdateSubscribedCalendarsRequestSubscribeScope &) = default ;
    UpdateSubscribedCalendarsRequestSubscribeScope& operator=(UpdateSubscribedCalendarsRequestSubscribeScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userIds_ != nullptr; };
    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline UpdateSubscribedCalendarsRequestSubscribeScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline UpdateSubscribedCalendarsRequestSubscribeScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    std::shared_ptr<vector<string>> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
