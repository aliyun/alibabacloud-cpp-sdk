// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLAUNCHTEMPLATEDEFAULTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLAUNCHTEMPLATEDEFAULTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyLaunchTemplateDefaultVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLaunchTemplateDefaultVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLaunchTemplateDefaultVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyLaunchTemplateDefaultVersionResponseBody() = default ;
    ModifyLaunchTemplateDefaultVersionResponseBody(const ModifyLaunchTemplateDefaultVersionResponseBody &) = default ;
    ModifyLaunchTemplateDefaultVersionResponseBody(ModifyLaunchTemplateDefaultVersionResponseBody &&) = default ;
    ModifyLaunchTemplateDefaultVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLaunchTemplateDefaultVersionResponseBody() = default ;
    ModifyLaunchTemplateDefaultVersionResponseBody& operator=(const ModifyLaunchTemplateDefaultVersionResponseBody &) = default ;
    ModifyLaunchTemplateDefaultVersionResponseBody& operator=(ModifyLaunchTemplateDefaultVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->launchTemplateId_ != nullptr
        && this->requestId_ != nullptr; };
    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline ModifyLaunchTemplateDefaultVersionResponseBody& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLaunchTemplateDefaultVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the launch template. For more information, see [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html).
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
