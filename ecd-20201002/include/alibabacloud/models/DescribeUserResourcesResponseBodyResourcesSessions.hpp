// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCESSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCESSESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeUserResourcesResponseBodyResourcesSessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcesResponseBodyResourcesSessions& obj) { 
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(ResourceSessionStartTime, resourceSessionStartTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcesResponseBodyResourcesSessions& obj) { 
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(ResourceSessionStartTime, resourceSessionStartTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    DescribeUserResourcesResponseBodyResourcesSessions() = default ;
    DescribeUserResourcesResponseBodyResourcesSessions(const DescribeUserResourcesResponseBodyResourcesSessions &) = default ;
    DescribeUserResourcesResponseBodyResourcesSessions(DescribeUserResourcesResponseBodyResourcesSessions &&) = default ;
    DescribeUserResourcesResponseBodyResourcesSessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcesResponseBodyResourcesSessions() = default ;
    DescribeUserResourcesResponseBodyResourcesSessions& operator=(const DescribeUserResourcesResponseBodyResourcesSessions &) = default ;
    DescribeUserResourcesResponseBodyResourcesSessions& operator=(DescribeUserResourcesResponseBodyResourcesSessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nickName_ != nullptr
        && this->resourceSessionStartTime_ != nullptr && this->userId_ != nullptr && this->userPrincipalName_ != nullptr; };
    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline DescribeUserResourcesResponseBodyResourcesSessions& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // resourceSessionStartTime Field Functions 
    bool hasResourceSessionStartTime() const { return this->resourceSessionStartTime_ != nullptr;};
    void deleteResourceSessionStartTime() { this->resourceSessionStartTime_ = nullptr;};
    inline string resourceSessionStartTime() const { DARABONBA_PTR_GET_DEFAULT(resourceSessionStartTime_, "") };
    inline DescribeUserResourcesResponseBodyResourcesSessions& setResourceSessionStartTime(string resourceSessionStartTime) { DARABONBA_PTR_SET_VALUE(resourceSessionStartTime_, resourceSessionStartTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeUserResourcesResponseBodyResourcesSessions& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline DescribeUserResourcesResponseBodyResourcesSessions& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> resourceSessionStartTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
