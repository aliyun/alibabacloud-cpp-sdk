// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOGGLEPUBLICSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TOGGLEPUBLICSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class TogglePublicSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TogglePublicSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnablePublicSlb, enablePublicSlb_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, TogglePublicSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnablePublicSlb, enablePublicSlb_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    TogglePublicSlbRequest() = default ;
    TogglePublicSlbRequest(const TogglePublicSlbRequest &) = default ;
    TogglePublicSlbRequest(TogglePublicSlbRequest &&) = default ;
    TogglePublicSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TogglePublicSlbRequest() = default ;
    TogglePublicSlbRequest& operator=(const TogglePublicSlbRequest &) = default ;
    TogglePublicSlbRequest& operator=(TogglePublicSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enablePublicSlb_ == nullptr
        && this->gatewayId_ == nullptr && this->instanceId_ == nullptr; };
    // enablePublicSlb Field Functions 
    bool hasEnablePublicSlb() const { return this->enablePublicSlb_ != nullptr;};
    void deleteEnablePublicSlb() { this->enablePublicSlb_ = nullptr;};
    inline bool getEnablePublicSlb() const { DARABONBA_PTR_GET_DEFAULT(enablePublicSlb_, false) };
    inline TogglePublicSlbRequest& setEnablePublicSlb(bool enablePublicSlb) { DARABONBA_PTR_SET_VALUE(enablePublicSlb_, enablePublicSlb) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline TogglePublicSlbRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TogglePublicSlbRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<bool> enablePublicSlb_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
