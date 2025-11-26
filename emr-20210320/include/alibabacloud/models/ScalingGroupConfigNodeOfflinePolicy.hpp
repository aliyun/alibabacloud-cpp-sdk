// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGNODEOFFLINEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGNODEOFFLINEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingGroupConfigNodeOfflinePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingGroupConfigNodeOfflinePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(TimeoutMs, timeoutMs_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingGroupConfigNodeOfflinePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(TimeoutMs, timeoutMs_);
    };
    ScalingGroupConfigNodeOfflinePolicy() = default ;
    ScalingGroupConfigNodeOfflinePolicy(const ScalingGroupConfigNodeOfflinePolicy &) = default ;
    ScalingGroupConfigNodeOfflinePolicy(ScalingGroupConfigNodeOfflinePolicy &&) = default ;
    ScalingGroupConfigNodeOfflinePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingGroupConfigNodeOfflinePolicy() = default ;
    ScalingGroupConfigNodeOfflinePolicy& operator=(const ScalingGroupConfigNodeOfflinePolicy &) = default ;
    ScalingGroupConfigNodeOfflinePolicy& operator=(ScalingGroupConfigNodeOfflinePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->timeoutMs_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ScalingGroupConfigNodeOfflinePolicy& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // timeoutMs Field Functions 
    bool hasTimeoutMs() const { return this->timeoutMs_ != nullptr;};
    void deleteTimeoutMs() { this->timeoutMs_ = nullptr;};
    inline int64_t timeoutMs() const { DARABONBA_PTR_GET_DEFAULT(timeoutMs_, 0L) };
    inline ScalingGroupConfigNodeOfflinePolicy& setTimeoutMs(int64_t timeoutMs) { DARABONBA_PTR_SET_VALUE(timeoutMs_, timeoutMs) };


  protected:
    // 下线模式,是否为优雅下线。
    std::shared_ptr<string> mode_ = nullptr;
    // 下线超时时间,单位毫秒。
    std::shared_ptr<int64_t> timeoutMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
