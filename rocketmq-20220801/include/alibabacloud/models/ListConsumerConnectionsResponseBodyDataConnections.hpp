// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERCONNECTIONSRESPONSEBODYDATACONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERCONNECTIONSRESPONSEBODYDATACONNECTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListConsumerConnectionsResponseBodyDataConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerConnectionsResponseBodyDataConnections& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(egressIp, egressIp_);
      DARABONBA_PTR_TO_JSON(hostname, hostname_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerConnectionsResponseBodyDataConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(egressIp, egressIp_);
      DARABONBA_PTR_FROM_JSON(hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListConsumerConnectionsResponseBodyDataConnections() = default ;
    ListConsumerConnectionsResponseBodyDataConnections(const ListConsumerConnectionsResponseBodyDataConnections &) = default ;
    ListConsumerConnectionsResponseBodyDataConnections(ListConsumerConnectionsResponseBodyDataConnections &&) = default ;
    ListConsumerConnectionsResponseBodyDataConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerConnectionsResponseBodyDataConnections() = default ;
    ListConsumerConnectionsResponseBodyDataConnections& operator=(const ListConsumerConnectionsResponseBodyDataConnections &) = default ;
    ListConsumerConnectionsResponseBodyDataConnections& operator=(ListConsumerConnectionsResponseBodyDataConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && return this->egressIp_ == nullptr && return this->hostname_ == nullptr && return this->language_ == nullptr && return this->messageModel_ == nullptr && return this->version_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ListConsumerConnectionsResponseBodyDataConnections& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // egressIp Field Functions 
    bool hasEgressIp() const { return this->egressIp_ != nullptr;};
    void deleteEgressIp() { this->egressIp_ = nullptr;};
    inline string egressIp() const { DARABONBA_PTR_GET_DEFAULT(egressIp_, "") };
    inline ListConsumerConnectionsResponseBodyDataConnections& setEgressIp(string egressIp) { DARABONBA_PTR_SET_VALUE(egressIp_, egressIp) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListConsumerConnectionsResponseBodyDataConnections& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListConsumerConnectionsResponseBodyDataConnections& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // messageModel Field Functions 
    bool hasMessageModel() const { return this->messageModel_ != nullptr;};
    void deleteMessageModel() { this->messageModel_ = nullptr;};
    inline string messageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
    inline ListConsumerConnectionsResponseBodyDataConnections& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListConsumerConnectionsResponseBodyDataConnections& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the client.
    std::shared_ptr<string> clientId_ = nullptr;
    // Host IP/Public IP
    std::shared_ptr<string> egressIp_ = nullptr;
    // The `hostname` of the cloud-native box.
    std::shared_ptr<string> hostname_ = nullptr;
    // The language of the client.
    std::shared_ptr<string> language_ = nullptr;
    // Consumption Mode
    // - BROADCASTING
    // - CLUSTERING
    std::shared_ptr<string> messageModel_ = nullptr;
    // The version of the client.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
