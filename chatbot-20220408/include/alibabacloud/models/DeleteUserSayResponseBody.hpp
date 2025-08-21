// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERSAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERSAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DeleteUserSayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserSayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserSayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    DeleteUserSayResponseBody() = default ;
    DeleteUserSayResponseBody(const DeleteUserSayResponseBody &) = default ;
    DeleteUserSayResponseBody(DeleteUserSayResponseBody &&) = default ;
    DeleteUserSayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserSayResponseBody() = default ;
    DeleteUserSayResponseBody& operator=(const DeleteUserSayResponseBody &) = default ;
    DeleteUserSayResponseBody& operator=(DeleteUserSayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userSayId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteUserSayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline int64_t userSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, 0L) };
    inline DeleteUserSayResponseBody& setUserSayId(int64_t userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> userSayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
