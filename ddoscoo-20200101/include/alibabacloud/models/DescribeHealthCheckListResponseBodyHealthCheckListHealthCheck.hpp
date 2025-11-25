// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODYHEALTHCHECKLISTHEALTHCHECK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODYHEALTHCHECKLISTHEALTHCHECK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Down, down_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Up, up_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Down, down_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Up, up_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck() = default ;
    DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck(const DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck &) = default ;
    DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck(DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck &&) = default ;
    DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck() = default ;
    DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& operator=(const DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck &) = default ;
    DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& operator=(DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->down_ == nullptr && return this->interval_ == nullptr && return this->port_ == nullptr && return this->timeout_ == nullptr && return this->type_ == nullptr
        && return this->up_ == nullptr && return this->uri_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // down Field Functions 
    bool hasDown() const { return this->down_ != nullptr;};
    void deleteDown() { this->down_ = nullptr;};
    inline int32_t down() const { DARABONBA_PTR_GET_DEFAULT(down_, 0) };
    inline DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& setDown(int32_t down) { DARABONBA_PTR_SET_VALUE(down_, down) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // up Field Functions 
    bool hasUp() const { return this->up_ != nullptr;};
    void deleteUp() { this->up_ = nullptr;};
    inline int32_t up() const { DARABONBA_PTR_GET_DEFAULT(up_, 0) };
    inline DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& setUp(int32_t up) { DARABONBA_PTR_SET_VALUE(up_, up) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The domain name.
    // 
    // >  This parameter is returned only when the Layer 7 health check configuration is queried.
    std::shared_ptr<string> domain_ = nullptr;
    // The number of consecutive failed health checks that must occur before a port is declared unhealthy. Valid values: **1** to **10**.
    std::shared_ptr<int32_t> down_ = nullptr;
    // The interval at which checks are performed. Valid values: **1** to **30**. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The port that was checked.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The response timeout period. Valid values: **1** to **30**. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **tcp**: The Layer 4 health check configuration was queried.
    // *   **http**: The Layer 7 health check configuration was queried.
    std::shared_ptr<string> type_ = nullptr;
    // The number of consecutive successful health checks that must occur before a port is declared healthy. Valid values: **1** to **10**.
    std::shared_ptr<int32_t> up_ = nullptr;
    // The check path.
    // 
    // >  This parameter is returned only when the Layer 7 health check configuration is queried.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
