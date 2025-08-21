// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTMAXCONNSRESPONSEBODYPORTMAXCONNS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTMAXCONNSRESPONSEBODYPORTMAXCONNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortMaxConnsResponseBodyPortMaxConns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortMaxConnsResponseBodyPortMaxConns& obj) { 
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortMaxConnsResponseBodyPortMaxConns& obj) { 
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribePortMaxConnsResponseBodyPortMaxConns() = default ;
    DescribePortMaxConnsResponseBodyPortMaxConns(const DescribePortMaxConnsResponseBodyPortMaxConns &) = default ;
    DescribePortMaxConnsResponseBodyPortMaxConns(DescribePortMaxConnsResponseBodyPortMaxConns &&) = default ;
    DescribePortMaxConnsResponseBodyPortMaxConns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortMaxConnsResponseBodyPortMaxConns() = default ;
    DescribePortMaxConnsResponseBodyPortMaxConns& operator=(const DescribePortMaxConnsResponseBodyPortMaxConns &) = default ;
    DescribePortMaxConnsResponseBodyPortMaxConns& operator=(DescribePortMaxConnsResponseBodyPortMaxConns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cps_ != nullptr
        && this->ip_ != nullptr && this->port_ != nullptr; };
    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int64_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
    inline DescribePortMaxConnsResponseBodyPortMaxConns& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribePortMaxConnsResponseBodyPortMaxConns& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribePortMaxConnsResponseBodyPortMaxConns& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The maximum number of connections per second (CPS).
    std::shared_ptr<int64_t> cps_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The port of the instance.
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
