// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingConfigurationRequestImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequestImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequestImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    CreateScalingConfigurationRequestImageOptions() = default ;
    CreateScalingConfigurationRequestImageOptions(const CreateScalingConfigurationRequestImageOptions &) = default ;
    CreateScalingConfigurationRequestImageOptions(CreateScalingConfigurationRequestImageOptions &&) = default ;
    CreateScalingConfigurationRequestImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequestImageOptions() = default ;
    CreateScalingConfigurationRequestImageOptions& operator=(const CreateScalingConfigurationRequestImageOptions &) = default ;
    CreateScalingConfigurationRequestImageOptions& operator=(CreateScalingConfigurationRequestImageOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginAsNonRoot_ == nullptr; };
    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline CreateScalingConfigurationRequestImageOptions& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


  protected:
    // For more information about whether an ECS instance uses the ecs-user user user to log on to an ECS instance, see [Manage the login name of an ECS instance](https://help.aliyun.com/document_detail/388447.html). Value range:
    // 
    // - true: Yes.
    // - false: No.
    // 
    // Default value: false.
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
