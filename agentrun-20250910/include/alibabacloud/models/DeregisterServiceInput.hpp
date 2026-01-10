// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEREGISTERSERVICEINPUT_HPP_
#define ALIBABACLOUD_MODELS_DEREGISTERSERVICEINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class DeregisterServiceInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeregisterServiceInput& obj) { 
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeregisterServiceInput& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
    };
    DeregisterServiceInput() = default ;
    DeregisterServiceInput(const DeregisterServiceInput &) = default ;
    DeregisterServiceInput(DeregisterServiceInput &&) = default ;
    DeregisterServiceInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeregisterServiceInput() = default ;
    DeregisterServiceInput& operator=(const DeregisterServiceInput &) = default ;
    DeregisterServiceInput& operator=(DeregisterServiceInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceName_ == nullptr; };
    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DeregisterServiceInput& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // 要注销的服务名称（UUID格式）
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
