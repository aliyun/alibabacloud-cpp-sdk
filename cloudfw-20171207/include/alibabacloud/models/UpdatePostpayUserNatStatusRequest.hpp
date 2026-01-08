// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOSTPAYUSERNATSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOSTPAYUSERNATSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdatePostpayUserNatStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePostpayUserNatStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Operate, operate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePostpayUserNatStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
    };
    UpdatePostpayUserNatStatusRequest() = default ;
    UpdatePostpayUserNatStatusRequest(const UpdatePostpayUserNatStatusRequest &) = default ;
    UpdatePostpayUserNatStatusRequest(UpdatePostpayUserNatStatusRequest &&) = default ;
    UpdatePostpayUserNatStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePostpayUserNatStatusRequest() = default ;
    UpdatePostpayUserNatStatusRequest& operator=(const UpdatePostpayUserNatStatusRequest &) = default ;
    UpdatePostpayUserNatStatusRequest& operator=(UpdatePostpayUserNatStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->operate_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdatePostpayUserNatStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdatePostpayUserNatStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline UpdatePostpayUserNatStatusRequest& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


  protected:
    // The instance ID of Cloud Firewall.
    shared_ptr<string> instanceId_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    shared_ptr<string> lang_ {};
    // The operation type.
    // 
    // *   Set the value to open.
    shared_ptr<string> operate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
