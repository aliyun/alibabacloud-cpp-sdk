// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOSTPAYUSERVPCSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOSTPAYUSERVPCSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdatePostpayUserVpcStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePostpayUserVpcStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Operate, operate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePostpayUserVpcStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
    };
    UpdatePostpayUserVpcStatusRequest() = default ;
    UpdatePostpayUserVpcStatusRequest(const UpdatePostpayUserVpcStatusRequest &) = default ;
    UpdatePostpayUserVpcStatusRequest(UpdatePostpayUserVpcStatusRequest &&) = default ;
    UpdatePostpayUserVpcStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePostpayUserVpcStatusRequest() = default ;
    UpdatePostpayUserVpcStatusRequest& operator=(const UpdatePostpayUserVpcStatusRequest &) = default ;
    UpdatePostpayUserVpcStatusRequest& operator=(UpdatePostpayUserVpcStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->lang_ == nullptr && return this->operate_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdatePostpayUserVpcStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdatePostpayUserVpcStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string operate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline UpdatePostpayUserVpcStatusRequest& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


  protected:
    // The instance ID of Cloud Firewall.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of the content within the request and response.
    // 
    // Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    std::shared_ptr<string> lang_ = nullptr;
    // The operation type.
    // 
    // *   Set the value to open.
    std::shared_ptr<string> operate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
