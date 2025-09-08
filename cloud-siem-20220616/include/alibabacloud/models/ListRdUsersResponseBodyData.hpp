// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRDUSERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRDUSERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListRdUsersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRdUsersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DelegatedOrNot, delegatedOrNot_);
      DARABONBA_PTR_TO_JSON(Joined, joined_);
      DARABONBA_PTR_TO_JSON(JoinedTime, joinedTime_);
      DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRdUsersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DelegatedOrNot, delegatedOrNot_);
      DARABONBA_PTR_FROM_JSON(Joined, joined_);
      DARABONBA_PTR_FROM_JSON(JoinedTime, joinedTime_);
      DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
    };
    ListRdUsersResponseBodyData() = default ;
    ListRdUsersResponseBodyData(const ListRdUsersResponseBodyData &) = default ;
    ListRdUsersResponseBodyData(ListRdUsersResponseBodyData &&) = default ;
    ListRdUsersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRdUsersResponseBodyData() = default ;
    ListRdUsersResponseBodyData& operator=(const ListRdUsersResponseBodyData &) = default ;
    ListRdUsersResponseBodyData& operator=(ListRdUsersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delegatedOrNot_ != nullptr
        && this->joined_ != nullptr && this->joinedTime_ != nullptr && this->mainUserId_ != nullptr && this->subUserId_ != nullptr && this->subUserName_ != nullptr; };
    // delegatedOrNot Field Functions 
    bool hasDelegatedOrNot() const { return this->delegatedOrNot_ != nullptr;};
    void deleteDelegatedOrNot() { this->delegatedOrNot_ = nullptr;};
    inline bool delegatedOrNot() const { DARABONBA_PTR_GET_DEFAULT(delegatedOrNot_, false) };
    inline ListRdUsersResponseBodyData& setDelegatedOrNot(bool delegatedOrNot) { DARABONBA_PTR_SET_VALUE(delegatedOrNot_, delegatedOrNot) };


    // joined Field Functions 
    bool hasJoined() const { return this->joined_ != nullptr;};
    void deleteJoined() { this->joined_ = nullptr;};
    inline bool joined() const { DARABONBA_PTR_GET_DEFAULT(joined_, false) };
    inline ListRdUsersResponseBodyData& setJoined(bool joined) { DARABONBA_PTR_SET_VALUE(joined_, joined) };


    // joinedTime Field Functions 
    bool hasJoinedTime() const { return this->joinedTime_ != nullptr;};
    void deleteJoinedTime() { this->joinedTime_ = nullptr;};
    inline string joinedTime() const { DARABONBA_PTR_GET_DEFAULT(joinedTime_, "") };
    inline ListRdUsersResponseBodyData& setJoinedTime(string joinedTime) { DARABONBA_PTR_SET_VALUE(joinedTime_, joinedTime) };


    // mainUserId Field Functions 
    bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
    void deleteMainUserId() { this->mainUserId_ = nullptr;};
    inline int64_t mainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
    inline ListRdUsersResponseBodyData& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline ListRdUsersResponseBodyData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // subUserName Field Functions 
    bool hasSubUserName() const { return this->subUserName_ != nullptr;};
    void deleteSubUserName() { this->subUserName_ = nullptr;};
    inline string subUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
    inline ListRdUsersResponseBodyData& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


  protected:
    // Indicates whether the account can be used to view the logs and alerts within the account.
    std::shared_ptr<bool> delegatedOrNot_ = nullptr;
    // Indicates whether the account is added to the threat analysis feature for centralized management. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> joined_ = nullptr;
    // The time when the account was added to the threat analysis feature.
    std::shared_ptr<string> joinedTime_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
    std::shared_ptr<int64_t> mainUserId_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to perform operations supported by the threat analysis feature.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
    // The username of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
    std::shared_ptr<string> subUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
