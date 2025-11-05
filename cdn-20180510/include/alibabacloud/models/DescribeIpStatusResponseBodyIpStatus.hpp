// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSTATUSRESPONSEBODYIPSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSTATUSRESPONSEBODYIPSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeIpStatusResponseBodyIpStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpStatusResponseBodyIpStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpStatusResponseBodyIpStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeIpStatusResponseBodyIpStatus() = default ;
    DescribeIpStatusResponseBodyIpStatus(const DescribeIpStatusResponseBodyIpStatus &) = default ;
    DescribeIpStatusResponseBodyIpStatus(DescribeIpStatusResponseBodyIpStatus &&) = default ;
    DescribeIpStatusResponseBodyIpStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpStatusResponseBodyIpStatus() = default ;
    DescribeIpStatusResponseBodyIpStatus& operator=(const DescribeIpStatusResponseBodyIpStatus &) = default ;
    DescribeIpStatusResponseBodyIpStatus& operator=(DescribeIpStatusResponseBodyIpStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->status_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeIpStatusResponseBodyIpStatus& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIpStatusResponseBodyIpStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IP address of the POP.
    std::shared_ptr<string> ip_ = nullptr;
    // The status.
    // 
    // *   **nonali**: not an Alibaba Cloud CDN POP
    // *   **normal**: an available Alibaba Cloud CDN POP
    // *   **abnormal**: an unavailable Alibaba Cloud CDN POP
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
