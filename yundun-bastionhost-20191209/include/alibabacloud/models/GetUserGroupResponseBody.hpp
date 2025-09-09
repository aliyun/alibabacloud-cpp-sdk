// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserGroupResponseBodyUserGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody(GetUserGroupResponseBody &&) = default ;
    GetUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody& operator=(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody& operator=(GetUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userGroup_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline const GetUserGroupResponseBodyUserGroup & userGroup() const { DARABONBA_PTR_GET_CONST(userGroup_, GetUserGroupResponseBodyUserGroup) };
    inline GetUserGroupResponseBodyUserGroup userGroup() { DARABONBA_PTR_GET(userGroup_, GetUserGroupResponseBodyUserGroup) };
    inline GetUserGroupResponseBody& setUserGroup(const GetUserGroupResponseBodyUserGroup & userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };
    inline GetUserGroupResponseBody& setUserGroup(GetUserGroupResponseBodyUserGroup && userGroup) { DARABONBA_PTR_SET_RVALUE(userGroup_, userGroup) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the user group returned.
    std::shared_ptr<GetUserGroupResponseBodyUserGroup> userGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
