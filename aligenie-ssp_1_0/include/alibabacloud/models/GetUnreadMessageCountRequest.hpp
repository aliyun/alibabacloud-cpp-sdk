// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNREADMESSAGECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUNREADMESSAGECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUnreadMessageCountRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetUnreadMessageCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnreadMessageCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnreadMessageCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetUnreadMessageCountRequest() = default ;
    GetUnreadMessageCountRequest(const GetUnreadMessageCountRequest &) = default ;
    GetUnreadMessageCountRequest(GetUnreadMessageCountRequest &&) = default ;
    GetUnreadMessageCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnreadMessageCountRequest() = default ;
    GetUnreadMessageCountRequest& operator=(const GetUnreadMessageCountRequest &) = default ;
    GetUnreadMessageCountRequest& operator=(GetUnreadMessageCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userInfo_ != nullptr; };
    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetUnreadMessageCountRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetUnreadMessageCountRequestUserInfo) };
    inline GetUnreadMessageCountRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetUnreadMessageCountRequestUserInfo) };
    inline GetUnreadMessageCountRequest& setUserInfo(const GetUnreadMessageCountRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetUnreadMessageCountRequest& setUserInfo(GetUnreadMessageCountRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<GetUnreadMessageCountRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
