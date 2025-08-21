// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODYRESULTENDPOINTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODYRESULTENDPOINTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeLogstashResponseBodyResultEndpointList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogstashResponseBodyResultEndpointList& obj) { 
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogstashResponseBodyResultEndpointList& obj) { 
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    DescribeLogstashResponseBodyResultEndpointList() = default ;
    DescribeLogstashResponseBodyResultEndpointList(const DescribeLogstashResponseBodyResultEndpointList &) = default ;
    DescribeLogstashResponseBodyResultEndpointList(DescribeLogstashResponseBodyResultEndpointList &&) = default ;
    DescribeLogstashResponseBodyResultEndpointList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogstashResponseBodyResultEndpointList() = default ;
    DescribeLogstashResponseBodyResultEndpointList& operator=(const DescribeLogstashResponseBodyResultEndpointList &) = default ;
    DescribeLogstashResponseBodyResultEndpointList& operator=(DescribeLogstashResponseBodyResultEndpointList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->port_ != nullptr && this->zoneId_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeLogstashResponseBodyResultEndpointList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeLogstashResponseBodyResultEndpointList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeLogstashResponseBodyResultEndpointList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The tags added to the ALB instance.
    std::shared_ptr<string> host_ = nullptr;
    // The IP address of the node.
    std::shared_ptr<string> port_ = nullptr;
    // The port number.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
