// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCALLBACKMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCALLBACKMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyCallbackMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCallbackMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Callback, callbackShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCallbackMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Callback, callbackShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyCallbackMetaShrinkRequest() = default ;
    ModifyCallbackMetaShrinkRequest(const ModifyCallbackMetaShrinkRequest &) = default ;
    ModifyCallbackMetaShrinkRequest(ModifyCallbackMetaShrinkRequest &&) = default ;
    ModifyCallbackMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCallbackMetaShrinkRequest() = default ;
    ModifyCallbackMetaShrinkRequest& operator=(const ModifyCallbackMetaShrinkRequest &) = default ;
    ModifyCallbackMetaShrinkRequest& operator=(ModifyCallbackMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->callbackShrink_ == nullptr && return this->ownerId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyCallbackMetaShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackShrink Field Functions 
    bool hasCallbackShrink() const { return this->callbackShrink_ != nullptr;};
    void deleteCallbackShrink() { this->callbackShrink_ = nullptr;};
    inline string callbackShrink() const { DARABONBA_PTR_GET_DEFAULT(callbackShrink_, "") };
    inline ModifyCallbackMetaShrinkRequest& setCallbackShrink(string callbackShrink) { DARABONBA_PTR_SET_VALUE(callbackShrink_, callbackShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCallbackMetaShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callbackShrink_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
