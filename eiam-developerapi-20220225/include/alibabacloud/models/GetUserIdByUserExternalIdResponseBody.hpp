// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYUSEREXTERNALIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYUSEREXTERNALIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserIdByUserExternalIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByUserExternalIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByUserExternalIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetUserIdByUserExternalIdResponseBody() = default ;
    GetUserIdByUserExternalIdResponseBody(const GetUserIdByUserExternalIdResponseBody &) = default ;
    GetUserIdByUserExternalIdResponseBody(GetUserIdByUserExternalIdResponseBody &&) = default ;
    GetUserIdByUserExternalIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByUserExternalIdResponseBody() = default ;
    GetUserIdByUserExternalIdResponseBody& operator=(const GetUserIdByUserExternalIdResponseBody &) = default ;
    GetUserIdByUserExternalIdResponseBody& operator=(GetUserIdByUserExternalIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserIdByUserExternalIdResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The account ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
