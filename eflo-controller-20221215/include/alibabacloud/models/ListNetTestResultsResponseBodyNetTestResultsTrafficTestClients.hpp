// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETTESTRESULTSRESPONSEBODYNETTESTRESULTSTRAFFICTESTCLIENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNETTESTRESULTSRESPONSEBODYNETTESTRESULTSTRAFFICTESTCLIENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients& obj) { 
      DARABONBA_PTR_TO_JSON(Bond, bond_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ServerName, serverName_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients& obj) { 
      DARABONBA_PTR_FROM_JSON(Bond, bond_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
    };
    ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients() = default ;
    ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients(const ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients &) = default ;
    ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients(ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients &&) = default ;
    ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients() = default ;
    ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients& operator=(const ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients &) = default ;
    ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients& operator=(ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bond_ != nullptr
        && this->IP_ != nullptr && this->resourceId_ != nullptr && this->serverName_ != nullptr; };
    // bond Field Functions 
    bool hasBond() const { return this->bond_ != nullptr;};
    void deleteBond() { this->bond_ = nullptr;};
    inline string bond() const { DARABONBA_PTR_GET_DEFAULT(bond_, "") };
    inline ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients& setBond(string bond) { DARABONBA_PTR_SET_VALUE(bond_, bond) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string serverName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


  protected:
    // The bonding of network interface card.
    std::shared_ptr<string> bond_ = nullptr;
    // The IP address.
    std::shared_ptr<string> IP_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serverName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
