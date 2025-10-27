// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class UnbindAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(UnbindAll, unbindAll_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(UnbindAll, unbindAll_);
    };
    UnbindAliasRequest() = default ;
    UnbindAliasRequest(const UnbindAliasRequest &) = default ;
    UnbindAliasRequest(UnbindAliasRequest &&) = default ;
    UnbindAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindAliasRequest() = default ;
    UnbindAliasRequest& operator=(const UnbindAliasRequest &) = default ;
    UnbindAliasRequest& operator=(UnbindAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->appKey_ == nullptr && return this->deviceId_ == nullptr && return this->unbindAll_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline UnbindAliasRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline UnbindAliasRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline UnbindAliasRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // unbindAll Field Functions 
    bool hasUnbindAll() const { return this->unbindAll_ != nullptr;};
    void deleteUnbindAll() { this->unbindAll_ = nullptr;};
    inline bool unbindAll() const { DARABONBA_PTR_GET_DEFAULT(unbindAll_, false) };
    inline UnbindAliasRequest& setUnbindAll(bool unbindAll) { DARABONBA_PTR_SET_VALUE(unbindAll_, unbindAll) };


  protected:
    std::shared_ptr<string> aliasName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<bool> unbindAll_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
