// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSRESPONSEBODYHOSTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSRESPONSEBODYHOSTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitoringAgentHostsResponseBodyHostsHost.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentHostsResponseBodyHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentHostsResponseBodyHosts& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentHostsResponseBodyHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
    };
    DescribeMonitoringAgentHostsResponseBodyHosts() = default ;
    DescribeMonitoringAgentHostsResponseBodyHosts(const DescribeMonitoringAgentHostsResponseBodyHosts &) = default ;
    DescribeMonitoringAgentHostsResponseBodyHosts(DescribeMonitoringAgentHostsResponseBodyHosts &&) = default ;
    DescribeMonitoringAgentHostsResponseBodyHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentHostsResponseBodyHosts() = default ;
    DescribeMonitoringAgentHostsResponseBodyHosts& operator=(const DescribeMonitoringAgentHostsResponseBodyHosts &) = default ;
    DescribeMonitoringAgentHostsResponseBodyHosts& operator=(DescribeMonitoringAgentHostsResponseBodyHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline const vector<Models::DescribeMonitoringAgentHostsResponseBodyHostsHost> & host() const { DARABONBA_PTR_GET_CONST(host_, vector<Models::DescribeMonitoringAgentHostsResponseBodyHostsHost>) };
    inline vector<Models::DescribeMonitoringAgentHostsResponseBodyHostsHost> host() { DARABONBA_PTR_GET(host_, vector<Models::DescribeMonitoringAgentHostsResponseBodyHostsHost>) };
    inline DescribeMonitoringAgentHostsResponseBodyHosts& setHost(const vector<Models::DescribeMonitoringAgentHostsResponseBodyHostsHost> & host) { DARABONBA_PTR_SET_VALUE(host_, host) };
    inline DescribeMonitoringAgentHostsResponseBodyHosts& setHost(vector<Models::DescribeMonitoringAgentHostsResponseBodyHostsHost> && host) { DARABONBA_PTR_SET_RVALUE(host_, host) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitoringAgentHostsResponseBodyHostsHost>> host_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
