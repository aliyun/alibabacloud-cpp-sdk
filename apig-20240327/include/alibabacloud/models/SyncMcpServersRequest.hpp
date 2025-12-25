// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCMCPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCMCPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SyncMCPServersRequestNacosMcpServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class SyncMCPServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncMCPServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(nacosMcpServers, nacosMcpServers_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncMCPServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(nacosMcpServers, nacosMcpServers_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
    };
    SyncMCPServersRequest() = default ;
    SyncMCPServersRequest(const SyncMCPServersRequest &) = default ;
    SyncMCPServersRequest(SyncMCPServersRequest &&) = default ;
    SyncMCPServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncMCPServersRequest() = default ;
    SyncMCPServersRequest& operator=(const SyncMCPServersRequest &) = default ;
    SyncMCPServersRequest& operator=(SyncMCPServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainIds_ == nullptr
        && return this->gatewayId_ == nullptr && return this->nacosMcpServers_ == nullptr && return this->namespace_ == nullptr && return this->sourceId_ == nullptr; };
    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & domainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> domainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline SyncMCPServersRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline SyncMCPServersRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline SyncMCPServersRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // nacosMcpServers Field Functions 
    bool hasNacosMcpServers() const { return this->nacosMcpServers_ != nullptr;};
    void deleteNacosMcpServers() { this->nacosMcpServers_ = nullptr;};
    inline const vector<SyncMCPServersRequestNacosMcpServers> & nacosMcpServers() const { DARABONBA_PTR_GET_CONST(nacosMcpServers_, vector<SyncMCPServersRequestNacosMcpServers>) };
    inline vector<SyncMCPServersRequestNacosMcpServers> nacosMcpServers() { DARABONBA_PTR_GET(nacosMcpServers_, vector<SyncMCPServersRequestNacosMcpServers>) };
    inline SyncMCPServersRequest& setNacosMcpServers(const vector<SyncMCPServersRequestNacosMcpServers> & nacosMcpServers) { DARABONBA_PTR_SET_VALUE(nacosMcpServers_, nacosMcpServers) };
    inline SyncMCPServersRequest& setNacosMcpServers(vector<SyncMCPServersRequestNacosMcpServers> && nacosMcpServers) { DARABONBA_PTR_SET_RVALUE(nacosMcpServers_, nacosMcpServers) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SyncMCPServersRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline SyncMCPServersRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    std::shared_ptr<vector<string>> domainIds_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<vector<SyncMCPServersRequestNacosMcpServers>> nacosMcpServers_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
