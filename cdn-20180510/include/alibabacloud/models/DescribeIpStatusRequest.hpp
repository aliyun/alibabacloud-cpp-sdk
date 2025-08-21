// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeIpStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ips, ips_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
    };
    DescribeIpStatusRequest() = default ;
    DescribeIpStatusRequest(const DescribeIpStatusRequest &) = default ;
    DescribeIpStatusRequest(DescribeIpStatusRequest &&) = default ;
    DescribeIpStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpStatusRequest() = default ;
    DescribeIpStatusRequest& operator=(const DescribeIpStatusRequest &) = default ;
    DescribeIpStatusRequest& operator=(DescribeIpStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ips_ != nullptr; };
    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline string ips() const { DARABONBA_PTR_GET_DEFAULT(ips_, "") };
    inline DescribeIpStatusRequest& setIps(string ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };


  protected:
    // The IP addresses that you want to query. Separate IP addresses with underscores (_), such as Ips=ip1_ip2.
    // 
    // This parameter is required.
    std::shared_ptr<string> ips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
