// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEINFO_HPP_
#define ALIBABACLOUD_MODELS_NODEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class NodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(hostName, hostName_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(hostName, hostName_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    NodeInfo() = default ;
    NodeInfo(const NodeInfo &) = default ;
    NodeInfo(NodeInfo &&) = default ;
    NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeInfo() = default ;
    NodeInfo& operator=(const NodeInfo &) = default ;
    NodeInfo& operator=(NodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->host_ == nullptr
        && this->hostName_ == nullptr && this->port_ == nullptr && this->zoneId_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline NodeInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline NodeInfo& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline NodeInfo& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline NodeInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> host_ {};
    shared_ptr<string> hostName_ {};
    shared_ptr<int64_t> port_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
