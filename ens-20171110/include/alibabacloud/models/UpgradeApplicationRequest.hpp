// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UpgradeApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpgradeApplicationRequest() = default ;
    UpgradeApplicationRequest(const UpgradeApplicationRequest &) = default ;
    UpgradeApplicationRequest(UpgradeApplicationRequest &&) = default ;
    UpgradeApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeApplicationRequest() = default ;
    UpgradeApplicationRequest& operator=(const UpgradeApplicationRequest &) = default ;
    UpgradeApplicationRequest& operator=(UpgradeApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->template_ == nullptr && return this->timeout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpgradeApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline UpgradeApplicationRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpgradeApplicationRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The information template for phased update. The value must be a JSON string and contain the following information:
    // 
    // *   Version range that you want to update
    // *   Configuration information of the target version
    // *   Canary release policy for resources
    // *   Intelligent upgrade policy that contains information such as the time window and resource usage limit
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
    // The timeout period for asynchronous upgrade. Unit: seconds. Default value: 300.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
