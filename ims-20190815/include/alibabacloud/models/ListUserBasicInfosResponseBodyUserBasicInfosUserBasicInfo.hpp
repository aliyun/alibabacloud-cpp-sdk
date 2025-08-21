// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERBASICINFOSRESPONSEBODYUSERBASICINFOSUSERBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERBASICINFOSRESPONSEBODYUSERBASICINFOSUSERBASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo() = default ;
    ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo(const ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo &) = default ;
    ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo(ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo &&) = default ;
    ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo() = default ;
    ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo& operator=(const ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo &) = default ;
    ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo& operator=(ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->status_ != nullptr && this->userId_ != nullptr && this->userPrincipalName_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The display name of the RAM user.
    std::shared_ptr<string> displayName_ = nullptr;
    // The status of the RAM user.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the RAM user.
    std::shared_ptr<string> userId_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
