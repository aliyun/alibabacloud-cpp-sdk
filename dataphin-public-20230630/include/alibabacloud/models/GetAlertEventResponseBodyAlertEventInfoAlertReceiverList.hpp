// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFOALERTRECEIVERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFOALERTRECEIVERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlertEventResponseBodyAlertEventInfoAlertReceiverListUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAlertEventResponseBodyAlertEventInfoAlertReceiverList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& obj) { 
      DARABONBA_PTR_TO_JSON(AlertChannelTypeList, alertChannelTypeList_);
      DARABONBA_PTR_TO_JSON(CustomAlertChannelIdList, customAlertChannelIdList_);
      DARABONBA_PTR_TO_JSON(OnCallTableName, onCallTableName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertChannelTypeList, alertChannelTypeList_);
      DARABONBA_PTR_FROM_JSON(CustomAlertChannelIdList, customAlertChannelIdList_);
      DARABONBA_PTR_FROM_JSON(OnCallTableName, onCallTableName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    GetAlertEventResponseBodyAlertEventInfoAlertReceiverList() = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReceiverList(const GetAlertEventResponseBodyAlertEventInfoAlertReceiverList &) = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReceiverList(GetAlertEventResponseBodyAlertEventInfoAlertReceiverList &&) = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReceiverList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertEventResponseBodyAlertEventInfoAlertReceiverList() = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& operator=(const GetAlertEventResponseBodyAlertEventInfoAlertReceiverList &) = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& operator=(GetAlertEventResponseBodyAlertEventInfoAlertReceiverList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertChannelTypeList_ == nullptr
        && return this->customAlertChannelIdList_ == nullptr && return this->onCallTableName_ == nullptr && return this->type_ == nullptr && return this->userList_ == nullptr; };
    // alertChannelTypeList Field Functions 
    bool hasAlertChannelTypeList() const { return this->alertChannelTypeList_ != nullptr;};
    void deleteAlertChannelTypeList() { this->alertChannelTypeList_ = nullptr;};
    inline const vector<string> & alertChannelTypeList() const { DARABONBA_PTR_GET_CONST(alertChannelTypeList_, vector<string>) };
    inline vector<string> alertChannelTypeList() { DARABONBA_PTR_GET(alertChannelTypeList_, vector<string>) };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& setAlertChannelTypeList(const vector<string> & alertChannelTypeList) { DARABONBA_PTR_SET_VALUE(alertChannelTypeList_, alertChannelTypeList) };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& setAlertChannelTypeList(vector<string> && alertChannelTypeList) { DARABONBA_PTR_SET_RVALUE(alertChannelTypeList_, alertChannelTypeList) };


    // customAlertChannelIdList Field Functions 
    bool hasCustomAlertChannelIdList() const { return this->customAlertChannelIdList_ != nullptr;};
    void deleteCustomAlertChannelIdList() { this->customAlertChannelIdList_ = nullptr;};
    inline const vector<string> & customAlertChannelIdList() const { DARABONBA_PTR_GET_CONST(customAlertChannelIdList_, vector<string>) };
    inline vector<string> customAlertChannelIdList() { DARABONBA_PTR_GET(customAlertChannelIdList_, vector<string>) };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& setCustomAlertChannelIdList(const vector<string> & customAlertChannelIdList) { DARABONBA_PTR_SET_VALUE(customAlertChannelIdList_, customAlertChannelIdList) };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& setCustomAlertChannelIdList(vector<string> && customAlertChannelIdList) { DARABONBA_PTR_SET_RVALUE(customAlertChannelIdList_, customAlertChannelIdList) };


    // onCallTableName Field Functions 
    bool hasOnCallTableName() const { return this->onCallTableName_ != nullptr;};
    void deleteOnCallTableName() { this->onCallTableName_ = nullptr;};
    inline string onCallTableName() const { DARABONBA_PTR_GET_DEFAULT(onCallTableName_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& setOnCallTableName(string onCallTableName) { DARABONBA_PTR_SET_VALUE(onCallTableName_, onCallTableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverListUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverListUserList>) };
    inline vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverListUserList> userList() { DARABONBA_PTR_GET(userList_, vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverListUserList>) };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& setUserList(const vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverListUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReceiverList& setUserList(vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverListUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<vector<string>> alertChannelTypeList_ = nullptr;
    std::shared_ptr<vector<string>> customAlertChannelIdList_ = nullptr;
    std::shared_ptr<string> onCallTableName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverListUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
