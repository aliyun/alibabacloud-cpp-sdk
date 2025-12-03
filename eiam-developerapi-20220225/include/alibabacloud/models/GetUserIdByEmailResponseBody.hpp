// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYEMAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYEMAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserIdByEmailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByEmailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByEmailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetUserIdByEmailResponseBody() = default ;
    GetUserIdByEmailResponseBody(const GetUserIdByEmailResponseBody &) = default ;
    GetUserIdByEmailResponseBody(GetUserIdByEmailResponseBody &&) = default ;
    GetUserIdByEmailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByEmailResponseBody() = default ;
    GetUserIdByEmailResponseBody& operator=(const GetUserIdByEmailResponseBody &) = default ;
    GetUserIdByEmailResponseBody& operator=(GetUserIdByEmailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserIdByEmailResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The account ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
