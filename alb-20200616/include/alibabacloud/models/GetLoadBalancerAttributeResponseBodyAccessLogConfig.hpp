// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYACCESSLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYACCESSLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBodyAccessLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBodyAccessLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LogProject, logProject_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBodyAccessLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
    };
    GetLoadBalancerAttributeResponseBodyAccessLogConfig() = default ;
    GetLoadBalancerAttributeResponseBodyAccessLogConfig(const GetLoadBalancerAttributeResponseBodyAccessLogConfig &) = default ;
    GetLoadBalancerAttributeResponseBodyAccessLogConfig(GetLoadBalancerAttributeResponseBodyAccessLogConfig &&) = default ;
    GetLoadBalancerAttributeResponseBodyAccessLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerAttributeResponseBodyAccessLogConfig() = default ;
    GetLoadBalancerAttributeResponseBodyAccessLogConfig& operator=(const GetLoadBalancerAttributeResponseBodyAccessLogConfig &) = default ;
    GetLoadBalancerAttributeResponseBodyAccessLogConfig& operator=(GetLoadBalancerAttributeResponseBodyAccessLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logProject_ != nullptr
        && this->logStore_ != nullptr; };
    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string logProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline GetLoadBalancerAttributeResponseBodyAccessLogConfig& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline GetLoadBalancerAttributeResponseBodyAccessLogConfig& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


  protected:
    // The Log Service project.
    std::shared_ptr<string> logProject_ = nullptr;
    // The Logstore.
    std::shared_ptr<string> logStore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
