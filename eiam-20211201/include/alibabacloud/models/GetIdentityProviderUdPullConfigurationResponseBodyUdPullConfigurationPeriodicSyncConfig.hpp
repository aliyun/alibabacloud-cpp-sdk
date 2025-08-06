// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESPONSEBODYUDPULLCONFIGURATIONPERIODICSYNCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESPONSEBODYUDPULLCONFIGURATIONPERIODICSYNCCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodicSyncCron, periodicSyncCron_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncTimes, periodicSyncTimes_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncType, periodicSyncType_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodicSyncCron, periodicSyncCron_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncTimes, periodicSyncTimes_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncType, periodicSyncType_);
    };
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig() = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig(const GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig &) = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig(GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig &&) = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig() = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig& operator=(const GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig &) = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig& operator=(GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->periodicSyncCron_ != nullptr
        && this->periodicSyncTimes_ != nullptr && this->periodicSyncType_ != nullptr; };
    // periodicSyncCron Field Functions 
    bool hasPeriodicSyncCron() const { return this->periodicSyncCron_ != nullptr;};
    void deletePeriodicSyncCron() { this->periodicSyncCron_ = nullptr;};
    inline string periodicSyncCron() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncCron_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig& setPeriodicSyncCron(string periodicSyncCron) { DARABONBA_PTR_SET_VALUE(periodicSyncCron_, periodicSyncCron) };


    // periodicSyncTimes Field Functions 
    bool hasPeriodicSyncTimes() const { return this->periodicSyncTimes_ != nullptr;};
    void deletePeriodicSyncTimes() { this->periodicSyncTimes_ = nullptr;};
    inline int32_t periodicSyncTimes() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncTimes_, 0) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig& setPeriodicSyncTimes(int32_t periodicSyncTimes) { DARABONBA_PTR_SET_VALUE(periodicSyncTimes_, periodicSyncTimes) };


    // periodicSyncType Field Functions 
    bool hasPeriodicSyncType() const { return this->periodicSyncType_ != nullptr;};
    void deletePeriodicSyncType() { this->periodicSyncType_ = nullptr;};
    inline string periodicSyncType() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncType_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig& setPeriodicSyncType(string periodicSyncType) { DARABONBA_PTR_SET_VALUE(periodicSyncType_, periodicSyncType) };


  protected:
    // Cron expression
    std::shared_ptr<string> periodicSyncCron_ = nullptr;
    // Execution time slots, for example 3,5, meaning the task runs once between 03:00–04:00 and once between 05:00–06:00.
    std::shared_ptr<int32_t> periodicSyncTimes_ = nullptr;
    // type
    std::shared_ptr<string> periodicSyncType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
