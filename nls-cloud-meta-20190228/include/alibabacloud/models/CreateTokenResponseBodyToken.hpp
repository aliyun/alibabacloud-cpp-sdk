// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENRESPONSEBODYTOKEN_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENRESPONSEBODYTOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NlsCloudMeta20190228
{
namespace Models
{
  class CreateTokenResponseBodyToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenResponseBodyToken& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenResponseBodyToken& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateTokenResponseBodyToken() = default ;
    CreateTokenResponseBodyToken(const CreateTokenResponseBodyToken &) = default ;
    CreateTokenResponseBodyToken(CreateTokenResponseBodyToken &&) = default ;
    CreateTokenResponseBodyToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenResponseBodyToken() = default ;
    CreateTokenResponseBodyToken& operator=(const CreateTokenResponseBodyToken &) = default ;
    CreateTokenResponseBodyToken& operator=(CreateTokenResponseBodyToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && return this->id_ == nullptr && return this->userId_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline CreateTokenResponseBodyToken& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateTokenResponseBodyToken& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateTokenResponseBodyToken& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int32_t> expireTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NlsCloudMeta20190228
#endif
