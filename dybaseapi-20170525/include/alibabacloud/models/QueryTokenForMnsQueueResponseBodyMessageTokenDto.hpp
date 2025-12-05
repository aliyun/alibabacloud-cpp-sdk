// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTOKENFORMNSQUEUERESPONSEBODYMESSAGETOKENDTO_HPP_
#define ALIBABACLOUD_MODELS_QUERYTOKENFORMNSQUEUERESPONSEBODYMESSAGETOKENDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dybaseapi20170525
{
namespace Models
{
  class QueryTokenForMnsQueueResponseBodyMessageTokenDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTokenForMnsQueueResponseBodyMessageTokenDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTokenForMnsQueueResponseBodyMessageTokenDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    QueryTokenForMnsQueueResponseBodyMessageTokenDTO() = default ;
    QueryTokenForMnsQueueResponseBodyMessageTokenDTO(const QueryTokenForMnsQueueResponseBodyMessageTokenDTO &) = default ;
    QueryTokenForMnsQueueResponseBodyMessageTokenDTO(QueryTokenForMnsQueueResponseBodyMessageTokenDTO &&) = default ;
    QueryTokenForMnsQueueResponseBodyMessageTokenDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTokenForMnsQueueResponseBodyMessageTokenDTO() = default ;
    QueryTokenForMnsQueueResponseBodyMessageTokenDTO& operator=(const QueryTokenForMnsQueueResponseBodyMessageTokenDTO &) = default ;
    QueryTokenForMnsQueueResponseBodyMessageTokenDTO& operator=(QueryTokenForMnsQueueResponseBodyMessageTokenDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && return this->accessKeySecret_ == nullptr && return this->createTime_ == nullptr && return this->expireTime_ == nullptr && return this->securityToken_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline QueryTokenForMnsQueueResponseBodyMessageTokenDTO& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline QueryTokenForMnsQueueResponseBodyMessageTokenDTO& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryTokenForMnsQueueResponseBodyMessageTokenDTO& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline QueryTokenForMnsQueueResponseBodyMessageTokenDTO& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline QueryTokenForMnsQueueResponseBodyMessageTokenDTO& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dybaseapi20170525
#endif
