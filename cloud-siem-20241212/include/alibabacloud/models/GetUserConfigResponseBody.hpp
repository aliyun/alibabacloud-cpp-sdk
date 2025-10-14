// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserConfigResponseBodyUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetUserConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetUserConfigResponseBody() = default ;
    GetUserConfigResponseBody(const GetUserConfigResponseBody &) = default ;
    GetUserConfigResponseBody(GetUserConfigResponseBody &&) = default ;
    GetUserConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserConfigResponseBody() = default ;
    GetUserConfigResponseBody& operator=(const GetUserConfigResponseBody &) = default ;
    GetUserConfigResponseBody& operator=(GetUserConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->user_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const GetUserConfigResponseBodyUser & user() const { DARABONBA_PTR_GET_CONST(user_, GetUserConfigResponseBodyUser) };
    inline GetUserConfigResponseBodyUser user() { DARABONBA_PTR_GET(user_, GetUserConfigResponseBodyUser) };
    inline GetUserConfigResponseBody& setUser(const GetUserConfigResponseBodyUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline GetUserConfigResponseBody& setUser(GetUserConfigResponseBodyUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetUserConfigResponseBodyUser> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
