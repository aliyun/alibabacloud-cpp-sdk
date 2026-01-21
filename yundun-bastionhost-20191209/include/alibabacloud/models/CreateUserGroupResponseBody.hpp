// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    CreateUserGroupResponseBody() = default ;
    CreateUserGroupResponseBody(const CreateUserGroupResponseBody &) = default ;
    CreateUserGroupResponseBody(CreateUserGroupResponseBody &&) = default ;
    CreateUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserGroupResponseBody() = default ;
    CreateUserGroupResponseBody& operator=(const CreateUserGroupResponseBody &) = default ;
    CreateUserGroupResponseBody& operator=(CreateUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userGroupId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline CreateUserGroupResponseBody& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The ID of the user group.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
