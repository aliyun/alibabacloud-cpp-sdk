// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASSPUSHV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MASSPUSHV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class MassPushV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MassPushV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_TO_JSON(PushTasks, pushTasksShrink_);
    };
    friend void from_json(const Darabonba::Json& j, MassPushV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_FROM_JSON(PushTasks, pushTasksShrink_);
    };
    MassPushV2ShrinkRequest() = default ;
    MassPushV2ShrinkRequest(const MassPushV2ShrinkRequest &) = default ;
    MassPushV2ShrinkRequest(MassPushV2ShrinkRequest &&) = default ;
    MassPushV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MassPushV2ShrinkRequest() = default ;
    MassPushV2ShrinkRequest& operator=(const MassPushV2ShrinkRequest &) = default ;
    MassPushV2ShrinkRequest& operator=(MassPushV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->idempotentToken_ == nullptr && this->pushTasksShrink_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline MassPushV2ShrinkRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // idempotentToken Field Functions 
    bool hasIdempotentToken() const { return this->idempotentToken_ != nullptr;};
    void deleteIdempotentToken() { this->idempotentToken_ = nullptr;};
    inline string getIdempotentToken() const { DARABONBA_PTR_GET_DEFAULT(idempotentToken_, "") };
    inline MassPushV2ShrinkRequest& setIdempotentToken(string idempotentToken) { DARABONBA_PTR_SET_VALUE(idempotentToken_, idempotentToken) };


    // pushTasksShrink Field Functions 
    bool hasPushTasksShrink() const { return this->pushTasksShrink_ != nullptr;};
    void deletePushTasksShrink() { this->pushTasksShrink_ = nullptr;};
    inline string getPushTasksShrink() const { DARABONBA_PTR_GET_DEFAULT(pushTasksShrink_, "") };
    inline MassPushV2ShrinkRequest& setPushTasksShrink(string pushTasksShrink) { DARABONBA_PTR_SET_VALUE(pushTasksShrink_, pushTasksShrink) };


  protected:
    // AppKey value.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // An idempotency token to prevent duplicate pushes caused by API retries. If you call this API with the same IdempotentToken within 15 minutes, only one push is sent. Subsequent calls return the result of the first successful push.
    // 
    // > - The token must be a standard 36-character UUID in 8-4-4-4-12 format. Valid characters are hexadecimal digits 0–9 and a–f. Case does not matter.
    // >
    // > - This parameter prevents duplicates only from retries. It does not prevent duplicates from concurrent calls.
    shared_ptr<string> idempotentToken_ {};
    // Batch push tasks.
    // 
    // This parameter is required.
    shared_ptr<string> pushTasksShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
