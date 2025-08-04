// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCALLBACKMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCALLBACKMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyCallbackMetaRequestCallback.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyCallbackMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCallbackMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCallbackMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyCallbackMetaRequest() = default ;
    ModifyCallbackMetaRequest(const ModifyCallbackMetaRequest &) = default ;
    ModifyCallbackMetaRequest(ModifyCallbackMetaRequest &&) = default ;
    ModifyCallbackMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCallbackMetaRequest() = default ;
    ModifyCallbackMetaRequest& operator=(const ModifyCallbackMetaRequest &) = default ;
    ModifyCallbackMetaRequest& operator=(ModifyCallbackMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->callback_ != nullptr && this->ownerId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyCallbackMetaRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline const ModifyCallbackMetaRequestCallback & callback() const { DARABONBA_PTR_GET_CONST(callback_, ModifyCallbackMetaRequestCallback) };
    inline ModifyCallbackMetaRequestCallback callback() { DARABONBA_PTR_GET(callback_, ModifyCallbackMetaRequestCallback) };
    inline ModifyCallbackMetaRequest& setCallback(const ModifyCallbackMetaRequestCallback & callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };
    inline ModifyCallbackMetaRequest& setCallback(ModifyCallbackMetaRequestCallback && callback) { DARABONBA_PTR_SET_RVALUE(callback_, callback) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCallbackMetaRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModifyCallbackMetaRequestCallback> callback_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
