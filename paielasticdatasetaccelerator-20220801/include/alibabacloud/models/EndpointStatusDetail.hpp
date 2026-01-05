// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDPOINTSTATUSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_ENDPOINTSTATUSDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/IpPort.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class EndpointStatusDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndpointStatusDetail& obj) { 
      DARABONBA_PTR_TO_JSON(IpPortMapping, ipPortMapping_);
    };
    friend void from_json(const Darabonba::Json& j, EndpointStatusDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPortMapping, ipPortMapping_);
    };
    EndpointStatusDetail() = default ;
    EndpointStatusDetail(const EndpointStatusDetail &) = default ;
    EndpointStatusDetail(EndpointStatusDetail &&) = default ;
    EndpointStatusDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndpointStatusDetail() = default ;
    EndpointStatusDetail& operator=(const EndpointStatusDetail &) = default ;
    EndpointStatusDetail& operator=(EndpointStatusDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipPortMapping_ == nullptr; };
    // ipPortMapping Field Functions 
    bool hasIpPortMapping() const { return this->ipPortMapping_ != nullptr;};
    void deleteIpPortMapping() { this->ipPortMapping_ = nullptr;};
    inline const map<string, IpPort> & getIpPortMapping() const { DARABONBA_PTR_GET_CONST(ipPortMapping_, map<string, IpPort>) };
    inline map<string, IpPort> getIpPortMapping() { DARABONBA_PTR_GET(ipPortMapping_, map<string, IpPort>) };
    inline EndpointStatusDetail& setIpPortMapping(const map<string, IpPort> & ipPortMapping) { DARABONBA_PTR_SET_VALUE(ipPortMapping_, ipPortMapping) };
    inline EndpointStatusDetail& setIpPortMapping(map<string, IpPort> && ipPortMapping) { DARABONBA_PTR_SET_RVALUE(ipPortMapping_, ipPortMapping) };


  protected:
    shared_ptr<map<string, IpPort>> ipPortMapping_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
