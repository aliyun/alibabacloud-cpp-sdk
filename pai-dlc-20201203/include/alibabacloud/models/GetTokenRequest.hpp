// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetTokenRequest() = default ;
    GetTokenRequest(const GetTokenRequest &) = default ;
    GetTokenRequest(GetTokenRequest &&) = default ;
    GetTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenRequest() = default ;
    GetTokenRequest& operator=(const GetTokenRequest &) = default ;
    GetTokenRequest& operator=(GetTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->targetId_ == nullptr && this->targetType_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetTokenRequest& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GetTokenRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetTokenRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The time when the share link expires. Default value: 604800. Minimum value: 0. Unit: seconds.
    shared_ptr<int64_t> expireTime_ {};
    // The ID of the job to be shared.
    shared_ptr<string> targetId_ {};
    // The type of the job that you want to share. Valid values: job and tensorboard.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
