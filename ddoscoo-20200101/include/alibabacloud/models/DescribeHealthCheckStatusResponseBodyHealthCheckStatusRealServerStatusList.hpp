// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSRESPONSEBODYHEALTHCHECKSTATUSREALSERVERSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSRESPONSEBODYHEALTHCHECKSTATUSREALSERVERSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList() = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList(const DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList &) = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList(DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList &&) = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList() = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList& operator=(const DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList &) = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList& operator=(DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->status_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IP address of the origin server.
    std::shared_ptr<string> address_ = nullptr;
    // The health state of the IP address. Valid values:
    // 
    // *   **normal**: healthy
    // *   **abnormal**: unhealthy
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
