// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateUserResponseBodyUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    UpdateUserResponseBody() = default ;
    UpdateUserResponseBody(const UpdateUserResponseBody &) = default ;
    UpdateUserResponseBody(UpdateUserResponseBody &&) = default ;
    UpdateUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserResponseBody() = default ;
    UpdateUserResponseBody& operator=(const UpdateUserResponseBody &) = default ;
    UpdateUserResponseBody& operator=(UpdateUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->user_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const UpdateUserResponseBodyUser & user() const { DARABONBA_PTR_GET_CONST(user_, UpdateUserResponseBodyUser) };
    inline UpdateUserResponseBodyUser user() { DARABONBA_PTR_GET(user_, UpdateUserResponseBodyUser) };
    inline UpdateUserResponseBody& setUser(const UpdateUserResponseBodyUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline UpdateUserResponseBody& setUser(UpdateUserResponseBodyUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the RAM user.
    std::shared_ptr<UpdateUserResponseBodyUser> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
