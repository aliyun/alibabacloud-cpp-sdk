// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUESTTRAFFICTEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUESTTRAFFICTEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetTestTaskRequestTrafficTestClients.hpp>
#include <alibabacloud/models/CreateNetTestTaskRequestTrafficTestServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNetTestTaskRequestTrafficTest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetTestTaskRequestTrafficTest& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(GDR, GDR_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(QP, QP_);
      DARABONBA_PTR_TO_JSON(Servers, servers_);
      DARABONBA_PTR_TO_JSON(TrafficModel, trafficModel_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetTestTaskRequestTrafficTest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(GDR, GDR_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(QP, QP_);
      DARABONBA_PTR_FROM_JSON(Servers, servers_);
      DARABONBA_PTR_FROM_JSON(TrafficModel, trafficModel_);
    };
    CreateNetTestTaskRequestTrafficTest() = default ;
    CreateNetTestTaskRequestTrafficTest(const CreateNetTestTaskRequestTrafficTest &) = default ;
    CreateNetTestTaskRequestTrafficTest(CreateNetTestTaskRequestTrafficTest &&) = default ;
    CreateNetTestTaskRequestTrafficTest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetTestTaskRequestTrafficTest() = default ;
    CreateNetTestTaskRequestTrafficTest& operator=(const CreateNetTestTaskRequestTrafficTest &) = default ;
    CreateNetTestTaskRequestTrafficTest& operator=(CreateNetTestTaskRequestTrafficTest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clients_ != nullptr
        && this->duration_ != nullptr && this->GDR_ != nullptr && this->protocol_ != nullptr && this->QP_ != nullptr && this->servers_ != nullptr
        && this->trafficModel_ != nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const vector<Models::CreateNetTestTaskRequestTrafficTestClients> & clients() const { DARABONBA_PTR_GET_CONST(clients_, vector<Models::CreateNetTestTaskRequestTrafficTestClients>) };
    inline vector<Models::CreateNetTestTaskRequestTrafficTestClients> clients() { DARABONBA_PTR_GET(clients_, vector<Models::CreateNetTestTaskRequestTrafficTestClients>) };
    inline CreateNetTestTaskRequestTrafficTest& setClients(const vector<Models::CreateNetTestTaskRequestTrafficTestClients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline CreateNetTestTaskRequestTrafficTest& setClients(vector<Models::CreateNetTestTaskRequestTrafficTestClients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline CreateNetTestTaskRequestTrafficTest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // GDR Field Functions 
    bool hasGDR() const { return this->GDR_ != nullptr;};
    void deleteGDR() { this->GDR_ = nullptr;};
    inline bool GDR() const { DARABONBA_PTR_GET_DEFAULT(GDR_, false) };
    inline CreateNetTestTaskRequestTrafficTest& setGDR(bool GDR) { DARABONBA_PTR_SET_VALUE(GDR_, GDR) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateNetTestTaskRequestTrafficTest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // QP Field Functions 
    bool hasQP() const { return this->QP_ != nullptr;};
    void deleteQP() { this->QP_ = nullptr;};
    inline int64_t QP() const { DARABONBA_PTR_GET_DEFAULT(QP_, 0L) };
    inline CreateNetTestTaskRequestTrafficTest& setQP(int64_t QP) { DARABONBA_PTR_SET_VALUE(QP_, QP) };


    // servers Field Functions 
    bool hasServers() const { return this->servers_ != nullptr;};
    void deleteServers() { this->servers_ = nullptr;};
    inline const vector<Models::CreateNetTestTaskRequestTrafficTestServers> & servers() const { DARABONBA_PTR_GET_CONST(servers_, vector<Models::CreateNetTestTaskRequestTrafficTestServers>) };
    inline vector<Models::CreateNetTestTaskRequestTrafficTestServers> servers() { DARABONBA_PTR_GET(servers_, vector<Models::CreateNetTestTaskRequestTrafficTestServers>) };
    inline CreateNetTestTaskRequestTrafficTest& setServers(const vector<Models::CreateNetTestTaskRequestTrafficTestServers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
    inline CreateNetTestTaskRequestTrafficTest& setServers(vector<Models::CreateNetTestTaskRequestTrafficTestServers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


    // trafficModel Field Functions 
    bool hasTrafficModel() const { return this->trafficModel_ != nullptr;};
    void deleteTrafficModel() { this->trafficModel_ = nullptr;};
    inline string trafficModel() const { DARABONBA_PTR_GET_DEFAULT(trafficModel_, "") };
    inline CreateNetTestTaskRequestTrafficTest& setTrafficModel(string trafficModel) { DARABONBA_PTR_SET_VALUE(trafficModel_, trafficModel) };


  protected:
    // The client IDs.
    std::shared_ptr<vector<Models::CreateNetTestTaskRequestTrafficTestClients>> clients_ = nullptr;
    // The running duration of the pipeline job. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // If the protocol is RDMA, enter True or False. If the protocol is TCP, leave this field empty.
    std::shared_ptr<bool> GDR_ = nullptr;
    // The network protocol, which can be RDMA or TCP.
    std::shared_ptr<string> protocol_ = nullptr;
    // If the protocol is TCP, enter the number of concurrent connections. If the protocol is RDMA, enter the configured QP value.
    std::shared_ptr<int64_t> QP_ = nullptr;
    // The services.
    std::shared_ptr<vector<Models::CreateNetTestTaskRequestTrafficTestServers>> servers_ = nullptr;
    // The traffic model, which can be MTON or Fullmesh.
    std::shared_ptr<string> trafficModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
