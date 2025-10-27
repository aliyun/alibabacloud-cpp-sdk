// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupClientsResponseBodyClients.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupClientsResponseBody() = default ;
    DescribeBackupClientsResponseBody(const DescribeBackupClientsResponseBody &) = default ;
    DescribeBackupClientsResponseBody(DescribeBackupClientsResponseBody &&) = default ;
    DescribeBackupClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupClientsResponseBody() = default ;
    DescribeBackupClientsResponseBody& operator=(const DescribeBackupClientsResponseBody &) = default ;
    DescribeBackupClientsResponseBody& operator=(DescribeBackupClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clients_ == nullptr
        && return this->requestId_ == nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const vector<DescribeBackupClientsResponseBodyClients> & clients() const { DARABONBA_PTR_GET_CONST(clients_, vector<DescribeBackupClientsResponseBodyClients>) };
    inline vector<DescribeBackupClientsResponseBodyClients> clients() { DARABONBA_PTR_GET(clients_, vector<DescribeBackupClientsResponseBodyClients>) };
    inline DescribeBackupClientsResponseBody& setClients(const vector<DescribeBackupClientsResponseBodyClients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline DescribeBackupClientsResponseBody& setClients(vector<DescribeBackupClientsResponseBodyClients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about the anti-ransomware agent.
    std::shared_ptr<vector<DescribeBackupClientsResponseBodyClients>> clients_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
