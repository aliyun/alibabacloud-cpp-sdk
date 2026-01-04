// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTMAXCONNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTMAXCONNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortMaxConnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortMaxConnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortMaxConns, portMaxConns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortMaxConnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortMaxConns, portMaxConns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortMaxConnsResponseBody() = default ;
    DescribePortMaxConnsResponseBody(const DescribePortMaxConnsResponseBody &) = default ;
    DescribePortMaxConnsResponseBody(DescribePortMaxConnsResponseBody &&) = default ;
    DescribePortMaxConnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortMaxConnsResponseBody() = default ;
    DescribePortMaxConnsResponseBody& operator=(const DescribePortMaxConnsResponseBody &) = default ;
    DescribePortMaxConnsResponseBody& operator=(DescribePortMaxConnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortMaxConns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortMaxConns& obj) { 
        DARABONBA_PTR_TO_JSON(Cps, cps_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, PortMaxConns& obj) { 
        DARABONBA_PTR_FROM_JSON(Cps, cps_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      PortMaxConns() = default ;
      PortMaxConns(const PortMaxConns &) = default ;
      PortMaxConns(PortMaxConns &&) = default ;
      PortMaxConns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortMaxConns() = default ;
      PortMaxConns& operator=(const PortMaxConns &) = default ;
      PortMaxConns& operator=(PortMaxConns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cps_ == nullptr
        && this->ip_ == nullptr && this->port_ == nullptr; };
      // cps Field Functions 
      bool hasCps() const { return this->cps_ != nullptr;};
      void deleteCps() { this->cps_ = nullptr;};
      inline int64_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
      inline PortMaxConns& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline PortMaxConns& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline PortMaxConns& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The maximum number of connections per second (CPS).
      shared_ptr<int64_t> cps_ {};
      // The IP address of the instance.
      shared_ptr<string> ip_ {};
      // The port of the instance.
      shared_ptr<string> port_ {};
    };

    virtual bool empty() const override { return this->portMaxConns_ == nullptr
        && this->requestId_ == nullptr; };
    // portMaxConns Field Functions 
    bool hasPortMaxConns() const { return this->portMaxConns_ != nullptr;};
    void deletePortMaxConns() { this->portMaxConns_ = nullptr;};
    inline const vector<DescribePortMaxConnsResponseBody::PortMaxConns> & getPortMaxConns() const { DARABONBA_PTR_GET_CONST(portMaxConns_, vector<DescribePortMaxConnsResponseBody::PortMaxConns>) };
    inline vector<DescribePortMaxConnsResponseBody::PortMaxConns> getPortMaxConns() { DARABONBA_PTR_GET(portMaxConns_, vector<DescribePortMaxConnsResponseBody::PortMaxConns>) };
    inline DescribePortMaxConnsResponseBody& setPortMaxConns(const vector<DescribePortMaxConnsResponseBody::PortMaxConns> & portMaxConns) { DARABONBA_PTR_SET_VALUE(portMaxConns_, portMaxConns) };
    inline DescribePortMaxConnsResponseBody& setPortMaxConns(vector<DescribePortMaxConnsResponseBody::PortMaxConns> && portMaxConns) { DARABONBA_PTR_SET_RVALUE(portMaxConns_, portMaxConns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortMaxConnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the maximum number of connections that can be established over a port of the instance.
    shared_ptr<vector<DescribePortMaxConnsResponseBody::PortMaxConns>> portMaxConns_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
