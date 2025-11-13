// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTUDPUSHCONFIGPERIODICSYNCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTUDPUSHCONFIGPERIODICSYNCCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodicSyncCron, periodicSyncCron_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncTimes, periodicSyncTimes_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncType, periodicSyncType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodicSyncCron, periodicSyncCron_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncTimes, periodicSyncTimes_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncType, periodicSyncType_);
    };
    CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig() = default ;
    CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig(const CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig &) = default ;
    CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig(CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig &&) = default ;
    CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig() = default ;
    CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig& operator=(const CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig &) = default ;
    CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig& operator=(CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->periodicSyncCron_ == nullptr
        && return this->periodicSyncTimes_ == nullptr && return this->periodicSyncType_ == nullptr; };
    // periodicSyncCron Field Functions 
    bool hasPeriodicSyncCron() const { return this->periodicSyncCron_ != nullptr;};
    void deletePeriodicSyncCron() { this->periodicSyncCron_ = nullptr;};
    inline string periodicSyncCron() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncCron_, "") };
    inline CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig& setPeriodicSyncCron(string periodicSyncCron) { DARABONBA_PTR_SET_VALUE(periodicSyncCron_, periodicSyncCron) };


    // periodicSyncTimes Field Functions 
    bool hasPeriodicSyncTimes() const { return this->periodicSyncTimes_ != nullptr;};
    void deletePeriodicSyncTimes() { this->periodicSyncTimes_ = nullptr;};
    inline const vector<int32_t> & periodicSyncTimes() const { DARABONBA_PTR_GET_CONST(periodicSyncTimes_, vector<int32_t>) };
    inline vector<int32_t> periodicSyncTimes() { DARABONBA_PTR_GET(periodicSyncTimes_, vector<int32_t>) };
    inline CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig& setPeriodicSyncTimes(const vector<int32_t> & periodicSyncTimes) { DARABONBA_PTR_SET_VALUE(periodicSyncTimes_, periodicSyncTimes) };
    inline CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig& setPeriodicSyncTimes(vector<int32_t> && periodicSyncTimes) { DARABONBA_PTR_SET_RVALUE(periodicSyncTimes_, periodicSyncTimes) };


    // periodicSyncType Field Functions 
    bool hasPeriodicSyncType() const { return this->periodicSyncType_ != nullptr;};
    void deletePeriodicSyncType() { this->periodicSyncType_ = nullptr;};
    inline string periodicSyncType() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncType_, "") };
    inline CreateIdentityProviderRequestUdPushConfigPeriodicSyncConfig& setPeriodicSyncType(string periodicSyncType) { DARABONBA_PTR_SET_VALUE(periodicSyncType_, periodicSyncType) };


  protected:
    std::shared_ptr<string> periodicSyncCron_ = nullptr;
    std::shared_ptr<vector<int32_t>> periodicSyncTimes_ = nullptr;
    std::shared_ptr<string> periodicSyncType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
