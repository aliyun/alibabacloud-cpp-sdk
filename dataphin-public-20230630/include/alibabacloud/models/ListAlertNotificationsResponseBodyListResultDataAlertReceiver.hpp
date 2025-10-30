// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATAALERTRECEIVER_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATAALERTRECEIVER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlertNotificationsResponseBodyListResultDataAlertReceiverUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertNotificationsResponseBodyListResultDataAlertReceiver : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsResponseBodyListResultDataAlertReceiver& obj) { 
      DARABONBA_PTR_TO_JSON(AlertChannelType, alertChannelType_);
      DARABONBA_PTR_TO_JSON(CustomAlertChannelId, customAlertChannelId_);
      DARABONBA_PTR_TO_JSON(OnCallTableId, onCallTableId_);
      DARABONBA_PTR_TO_JSON(OnCallTableName, onCallTableName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsResponseBodyListResultDataAlertReceiver& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertChannelType, alertChannelType_);
      DARABONBA_PTR_FROM_JSON(CustomAlertChannelId, customAlertChannelId_);
      DARABONBA_PTR_FROM_JSON(OnCallTableId, onCallTableId_);
      DARABONBA_PTR_FROM_JSON(OnCallTableName, onCallTableName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListAlertNotificationsResponseBodyListResultDataAlertReceiver() = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReceiver(const ListAlertNotificationsResponseBodyListResultDataAlertReceiver &) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReceiver(ListAlertNotificationsResponseBodyListResultDataAlertReceiver &&) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReceiver(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsResponseBodyListResultDataAlertReceiver() = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReceiver& operator=(const ListAlertNotificationsResponseBodyListResultDataAlertReceiver &) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReceiver& operator=(ListAlertNotificationsResponseBodyListResultDataAlertReceiver &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertChannelType_ == nullptr
        && return this->customAlertChannelId_ == nullptr && return this->onCallTableId_ == nullptr && return this->onCallTableName_ == nullptr && return this->type_ == nullptr && return this->user_ == nullptr; };
    // alertChannelType Field Functions 
    bool hasAlertChannelType() const { return this->alertChannelType_ != nullptr;};
    void deleteAlertChannelType() { this->alertChannelType_ = nullptr;};
    inline string alertChannelType() const { DARABONBA_PTR_GET_DEFAULT(alertChannelType_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReceiver& setAlertChannelType(string alertChannelType) { DARABONBA_PTR_SET_VALUE(alertChannelType_, alertChannelType) };


    // customAlertChannelId Field Functions 
    bool hasCustomAlertChannelId() const { return this->customAlertChannelId_ != nullptr;};
    void deleteCustomAlertChannelId() { this->customAlertChannelId_ = nullptr;};
    inline string customAlertChannelId() const { DARABONBA_PTR_GET_DEFAULT(customAlertChannelId_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReceiver& setCustomAlertChannelId(string customAlertChannelId) { DARABONBA_PTR_SET_VALUE(customAlertChannelId_, customAlertChannelId) };


    // onCallTableId Field Functions 
    bool hasOnCallTableId() const { return this->onCallTableId_ != nullptr;};
    void deleteOnCallTableId() { this->onCallTableId_ = nullptr;};
    inline string onCallTableId() const { DARABONBA_PTR_GET_DEFAULT(onCallTableId_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReceiver& setOnCallTableId(string onCallTableId) { DARABONBA_PTR_SET_VALUE(onCallTableId_, onCallTableId) };


    // onCallTableName Field Functions 
    bool hasOnCallTableName() const { return this->onCallTableName_ != nullptr;};
    void deleteOnCallTableName() { this->onCallTableName_ = nullptr;};
    inline string onCallTableName() const { DARABONBA_PTR_GET_DEFAULT(onCallTableName_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReceiver& setOnCallTableName(string onCallTableName) { DARABONBA_PTR_SET_VALUE(onCallTableName_, onCallTableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReceiver& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiverUser & user() const { DARABONBA_PTR_GET_CONST(user_, Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiverUser) };
    inline Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiverUser user() { DARABONBA_PTR_GET(user_, Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiverUser) };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReceiver& setUser(const Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiverUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReceiver& setUser(Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiverUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<string> alertChannelType_ = nullptr;
    std::shared_ptr<string> customAlertChannelId_ = nullptr;
    std::shared_ptr<string> onCallTableId_ = nullptr;
    std::shared_ptr<string> onCallTableName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::ListAlertNotificationsResponseBodyListResultDataAlertReceiverUser> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
