// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUESTSLOWSTARTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUESTSLOWSTARTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateServerGroupAttributeRequestSlowStartConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupAttributeRequestSlowStartConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SlowStartDuration, slowStartDuration_);
      DARABONBA_PTR_TO_JSON(SlowStartEnabled, slowStartEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupAttributeRequestSlowStartConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SlowStartDuration, slowStartDuration_);
      DARABONBA_PTR_FROM_JSON(SlowStartEnabled, slowStartEnabled_);
    };
    UpdateServerGroupAttributeRequestSlowStartConfig() = default ;
    UpdateServerGroupAttributeRequestSlowStartConfig(const UpdateServerGroupAttributeRequestSlowStartConfig &) = default ;
    UpdateServerGroupAttributeRequestSlowStartConfig(UpdateServerGroupAttributeRequestSlowStartConfig &&) = default ;
    UpdateServerGroupAttributeRequestSlowStartConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerGroupAttributeRequestSlowStartConfig() = default ;
    UpdateServerGroupAttributeRequestSlowStartConfig& operator=(const UpdateServerGroupAttributeRequestSlowStartConfig &) = default ;
    UpdateServerGroupAttributeRequestSlowStartConfig& operator=(UpdateServerGroupAttributeRequestSlowStartConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->slowStartDuration_ != nullptr
        && this->slowStartEnabled_ != nullptr; };
    // slowStartDuration Field Functions 
    bool hasSlowStartDuration() const { return this->slowStartDuration_ != nullptr;};
    void deleteSlowStartDuration() { this->slowStartDuration_ = nullptr;};
    inline int32_t slowStartDuration() const { DARABONBA_PTR_GET_DEFAULT(slowStartDuration_, 0) };
    inline UpdateServerGroupAttributeRequestSlowStartConfig& setSlowStartDuration(int32_t slowStartDuration) { DARABONBA_PTR_SET_VALUE(slowStartDuration_, slowStartDuration) };


    // slowStartEnabled Field Functions 
    bool hasSlowStartEnabled() const { return this->slowStartEnabled_ != nullptr;};
    void deleteSlowStartEnabled() { this->slowStartEnabled_ = nullptr;};
    inline bool slowStartEnabled() const { DARABONBA_PTR_GET_DEFAULT(slowStartEnabled_, false) };
    inline UpdateServerGroupAttributeRequestSlowStartConfig& setSlowStartEnabled(bool slowStartEnabled) { DARABONBA_PTR_SET_VALUE(slowStartEnabled_, slowStartEnabled) };


  protected:
    // The duration of a slow start.
    std::shared_ptr<int32_t> slowStartDuration_ = nullptr;
    // Indicates whether slow starts are enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> slowStartEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
