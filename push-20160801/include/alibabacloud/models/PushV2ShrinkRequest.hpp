// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_TO_JSON(PushTask, pushTaskShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PushV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_FROM_JSON(PushTask, pushTaskShrink_);
    };
    PushV2ShrinkRequest() = default ;
    PushV2ShrinkRequest(const PushV2ShrinkRequest &) = default ;
    PushV2ShrinkRequest(PushV2ShrinkRequest &&) = default ;
    PushV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushV2ShrinkRequest() = default ;
    PushV2ShrinkRequest& operator=(const PushV2ShrinkRequest &) = default ;
    PushV2ShrinkRequest& operator=(PushV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->idempotentToken_ == nullptr && return this->pushTaskShrink_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline PushV2ShrinkRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // idempotentToken Field Functions 
    bool hasIdempotentToken() const { return this->idempotentToken_ != nullptr;};
    void deleteIdempotentToken() { this->idempotentToken_ = nullptr;};
    inline string idempotentToken() const { DARABONBA_PTR_GET_DEFAULT(idempotentToken_, "") };
    inline PushV2ShrinkRequest& setIdempotentToken(string idempotentToken) { DARABONBA_PTR_SET_VALUE(idempotentToken_, idempotentToken) };


    // pushTaskShrink Field Functions 
    bool hasPushTaskShrink() const { return this->pushTaskShrink_ != nullptr;};
    void deletePushTaskShrink() { this->pushTaskShrink_ = nullptr;};
    inline string pushTaskShrink() const { DARABONBA_PTR_GET_DEFAULT(pushTaskShrink_, "") };
    inline PushV2ShrinkRequest& setPushTaskShrink(string pushTaskShrink) { DARABONBA_PTR_SET_VALUE(pushTaskShrink_, pushTaskShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> idempotentToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pushTaskShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
