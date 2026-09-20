// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class SwitchServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Operate, operate_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    SwitchServiceRequest() = default ;
    SwitchServiceRequest(const SwitchServiceRequest &) = default ;
    SwitchServiceRequest(SwitchServiceRequest &&) = default ;
    SwitchServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchServiceRequest() = default ;
    SwitchServiceRequest& operator=(const SwitchServiceRequest &) = default ;
    SwitchServiceRequest& operator=(SwitchServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->operate_ == nullptr && this->serviceName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline SwitchServiceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline SwitchServiceRequest& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline SwitchServiceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // - open: Enable  
    // - close: Shutdown
    // 
    // This parameter is required.
    shared_ptr<string> operate_ {};
    // Service name.
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
