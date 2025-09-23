// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODYLISTENERSHEALTHCHECK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODYLISTENERSHEALTHCHECK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeHealthCheckListResponseBodyListenersHealthCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckListResponseBodyListenersHealthCheck& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Down, down_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Up, up_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckListResponseBodyListenersHealthCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Down, down_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Up, up_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DescribeHealthCheckListResponseBodyListenersHealthCheck() = default ;
    DescribeHealthCheckListResponseBodyListenersHealthCheck(const DescribeHealthCheckListResponseBodyListenersHealthCheck &) = default ;
    DescribeHealthCheckListResponseBodyListenersHealthCheck(DescribeHealthCheckListResponseBodyListenersHealthCheck &&) = default ;
    DescribeHealthCheckListResponseBodyListenersHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckListResponseBodyListenersHealthCheck() = default ;
    DescribeHealthCheckListResponseBodyListenersHealthCheck& operator=(const DescribeHealthCheckListResponseBodyListenersHealthCheck &) = default ;
    DescribeHealthCheckListResponseBodyListenersHealthCheck& operator=(DescribeHealthCheckListResponseBodyListenersHealthCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->down_ != nullptr && this->interval_ != nullptr && this->port_ != nullptr && this->timeout_ != nullptr && this->type_ != nullptr
        && this->up_ != nullptr && this->uri_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeHealthCheckListResponseBodyListenersHealthCheck& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // down Field Functions 
    bool hasDown() const { return this->down_ != nullptr;};
    void deleteDown() { this->down_ = nullptr;};
    inline int32_t down() const { DARABONBA_PTR_GET_DEFAULT(down_, 0) };
    inline DescribeHealthCheckListResponseBodyListenersHealthCheck& setDown(int32_t down) { DARABONBA_PTR_SET_VALUE(down_, down) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeHealthCheckListResponseBodyListenersHealthCheck& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeHealthCheckListResponseBodyListenersHealthCheck& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeHealthCheckListResponseBodyListenersHealthCheck& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeHealthCheckListResponseBodyListenersHealthCheck& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // up Field Functions 
    bool hasUp() const { return this->up_ != nullptr;};
    void deleteUp() { this->up_ = nullptr;};
    inline int32_t up() const { DARABONBA_PTR_GET_DEFAULT(up_, 0) };
    inline DescribeHealthCheckListResponseBodyListenersHealthCheck& setUp(int32_t up) { DARABONBA_PTR_SET_VALUE(up_, up) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DescribeHealthCheckListResponseBodyListenersHealthCheck& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int32_t> down_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int32_t> up_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
