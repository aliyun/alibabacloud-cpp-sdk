// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLACKLISTCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLACKLISTCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeBlackListClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlackListClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlackListClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBlackListClientsResponseBody() = default ;
    DescribeBlackListClientsResponseBody(const DescribeBlackListClientsResponseBody &) = default ;
    DescribeBlackListClientsResponseBody(DescribeBlackListClientsResponseBody &&) = default ;
    DescribeBlackListClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlackListClientsResponseBody() = default ;
    DescribeBlackListClientsResponseBody& operator=(const DescribeBlackListClientsResponseBody &) = default ;
    DescribeBlackListClientsResponseBody& operator=(DescribeBlackListClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clients_ == nullptr
        && this->requestId_ == nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline string getClients() const { DARABONBA_PTR_GET_DEFAULT(clients_, "") };
    inline DescribeBlackListClientsResponseBody& setClients(string clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBlackListClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of clients and the status of each client. The parameter value is a JSON string, for example, `{"client1": "EVICTING","client2":"EVICTED"}`.
    // 
    // Available client statuses include:
    // 
    // *   EVICTING: The client is being evicted.
    // *   EVICTED: The client is evicted.
    // *   ACCEPTING: The write access to the file system is being granted to the client.
    // *   ACCEPTABLE: The write access to the file system is granted to the client.
    shared_ptr<string> clients_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
