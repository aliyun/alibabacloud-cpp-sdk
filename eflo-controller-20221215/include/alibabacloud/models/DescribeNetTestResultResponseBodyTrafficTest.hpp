// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTRESPONSEBODYTRAFFICTEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTRESPONSEBODYTRAFFICTEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetTestResultResponseBodyTrafficTestClients.hpp>
#include <alibabacloud/models/DescribeNetTestResultResponseBodyTrafficTestServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNetTestResultResponseBodyTrafficTest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetTestResultResponseBodyTrafficTest& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(GDR, GDR_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(QP, QP_);
      DARABONBA_PTR_TO_JSON(Servers, servers_);
      DARABONBA_PTR_TO_JSON(TrafficModel, trafficModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetTestResultResponseBodyTrafficTest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(GDR, GDR_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(QP, QP_);
      DARABONBA_PTR_FROM_JSON(Servers, servers_);
      DARABONBA_PTR_FROM_JSON(TrafficModel, trafficModel_);
    };
    DescribeNetTestResultResponseBodyTrafficTest() = default ;
    DescribeNetTestResultResponseBodyTrafficTest(const DescribeNetTestResultResponseBodyTrafficTest &) = default ;
    DescribeNetTestResultResponseBodyTrafficTest(DescribeNetTestResultResponseBodyTrafficTest &&) = default ;
    DescribeNetTestResultResponseBodyTrafficTest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetTestResultResponseBodyTrafficTest() = default ;
    DescribeNetTestResultResponseBodyTrafficTest& operator=(const DescribeNetTestResultResponseBodyTrafficTest &) = default ;
    DescribeNetTestResultResponseBodyTrafficTest& operator=(DescribeNetTestResultResponseBodyTrafficTest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clients_ == nullptr
        && return this->duration_ == nullptr && return this->GDR_ == nullptr && return this->protocol_ == nullptr && return this->QP_ == nullptr && return this->servers_ == nullptr
        && return this->trafficModel_ == nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const vector<Models::DescribeNetTestResultResponseBodyTrafficTestClients> & clients() const { DARABONBA_PTR_GET_CONST(clients_, vector<Models::DescribeNetTestResultResponseBodyTrafficTestClients>) };
    inline vector<Models::DescribeNetTestResultResponseBodyTrafficTestClients> clients() { DARABONBA_PTR_GET(clients_, vector<Models::DescribeNetTestResultResponseBodyTrafficTestClients>) };
    inline DescribeNetTestResultResponseBodyTrafficTest& setClients(const vector<Models::DescribeNetTestResultResponseBodyTrafficTestClients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline DescribeNetTestResultResponseBodyTrafficTest& setClients(vector<Models::DescribeNetTestResultResponseBodyTrafficTestClients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeNetTestResultResponseBodyTrafficTest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // GDR Field Functions 
    bool hasGDR() const { return this->GDR_ != nullptr;};
    void deleteGDR() { this->GDR_ = nullptr;};
    inline string GDR() const { DARABONBA_PTR_GET_DEFAULT(GDR_, "") };
    inline DescribeNetTestResultResponseBodyTrafficTest& setGDR(string GDR) { DARABONBA_PTR_SET_VALUE(GDR_, GDR) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeNetTestResultResponseBodyTrafficTest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // QP Field Functions 
    bool hasQP() const { return this->QP_ != nullptr;};
    void deleteQP() { this->QP_ = nullptr;};
    inline int64_t QP() const { DARABONBA_PTR_GET_DEFAULT(QP_, 0L) };
    inline DescribeNetTestResultResponseBodyTrafficTest& setQP(int64_t QP) { DARABONBA_PTR_SET_VALUE(QP_, QP) };


    // servers Field Functions 
    bool hasServers() const { return this->servers_ != nullptr;};
    void deleteServers() { this->servers_ = nullptr;};
    inline const vector<Models::DescribeNetTestResultResponseBodyTrafficTestServers> & servers() const { DARABONBA_PTR_GET_CONST(servers_, vector<Models::DescribeNetTestResultResponseBodyTrafficTestServers>) };
    inline vector<Models::DescribeNetTestResultResponseBodyTrafficTestServers> servers() { DARABONBA_PTR_GET(servers_, vector<Models::DescribeNetTestResultResponseBodyTrafficTestServers>) };
    inline DescribeNetTestResultResponseBodyTrafficTest& setServers(const vector<Models::DescribeNetTestResultResponseBodyTrafficTestServers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
    inline DescribeNetTestResultResponseBodyTrafficTest& setServers(vector<Models::DescribeNetTestResultResponseBodyTrafficTestServers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


    // trafficModel Field Functions 
    bool hasTrafficModel() const { return this->trafficModel_ != nullptr;};
    void deleteTrafficModel() { this->trafficModel_ = nullptr;};
    inline string trafficModel() const { DARABONBA_PTR_GET_DEFAULT(trafficModel_, "") };
    inline DescribeNetTestResultResponseBodyTrafficTest& setTrafficModel(string trafficModel) { DARABONBA_PTR_SET_VALUE(trafficModel_, trafficModel) };


  protected:
    // All clients information
    std::shared_ptr<vector<Models::DescribeNetTestResultResponseBodyTrafficTestClients>> clients_ = nullptr;
    // Call duration, in seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // When the protocol is RDMA, fill in True/False,
    // when the protocol is TCP, this field is empty.
    std::shared_ptr<string> GDR_ = nullptr;
    // Network protocol, either RDMA or TCP.
    std::shared_ptr<string> protocol_ = nullptr;
    // When the protocol is TCP, fill in the number of concurrent connections; when the protocol is RDMA, fill in the configured QP value.
    std::shared_ptr<int64_t> QP_ = nullptr;
    // Servers infomation.
    std::shared_ptr<vector<Models::DescribeNetTestResultResponseBodyTrafficTestServers>> servers_ = nullptr;
    // Traffic model, either MTON or Fullmesh.
    std::shared_ptr<string> trafficModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
