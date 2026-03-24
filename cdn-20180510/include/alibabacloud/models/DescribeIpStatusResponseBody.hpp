// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeIpStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpStatus, ipStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpStatus, ipStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIpStatusResponseBody() = default ;
    DescribeIpStatusResponseBody(const DescribeIpStatusResponseBody &) = default ;
    DescribeIpStatusResponseBody(DescribeIpStatusResponseBody &&) = default ;
    DescribeIpStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpStatusResponseBody() = default ;
    DescribeIpStatusResponseBody& operator=(const DescribeIpStatusResponseBody &) = default ;
    DescribeIpStatusResponseBody& operator=(DescribeIpStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ip, ip_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, IpStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ip, ip_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      IpStatus() = default ;
      IpStatus(const IpStatus &) = default ;
      IpStatus(IpStatus &&) = default ;
      IpStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpStatus() = default ;
      IpStatus& operator=(const IpStatus &) = default ;
      IpStatus& operator=(IpStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->status_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline IpStatus& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The IP address of the POP.
      shared_ptr<string> ip_ {};
      // The status.
      // 
      // *   **nonali**: not an Alibaba Cloud CDN POP
      // *   **normal**: an available Alibaba Cloud CDN POP
      // *   **abnormal**: an unavailable Alibaba Cloud CDN POP
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->ipStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // ipStatus Field Functions 
    bool hasIpStatus() const { return this->ipStatus_ != nullptr;};
    void deleteIpStatus() { this->ipStatus_ = nullptr;};
    inline const vector<DescribeIpStatusResponseBody::IpStatus> & getIpStatus() const { DARABONBA_PTR_GET_CONST(ipStatus_, vector<DescribeIpStatusResponseBody::IpStatus>) };
    inline vector<DescribeIpStatusResponseBody::IpStatus> getIpStatus() { DARABONBA_PTR_GET(ipStatus_, vector<DescribeIpStatusResponseBody::IpStatus>) };
    inline DescribeIpStatusResponseBody& setIpStatus(const vector<DescribeIpStatusResponseBody::IpStatus> & ipStatus) { DARABONBA_PTR_SET_VALUE(ipStatus_, ipStatus) };
    inline DescribeIpStatusResponseBody& setIpStatus(vector<DescribeIpStatusResponseBody::IpStatus> && ipStatus) { DARABONBA_PTR_SET_RVALUE(ipStatus_, ipStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the IP addresses of the POPs.
    shared_ptr<vector<DescribeIpStatusResponseBody::IpStatus>> ipStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
