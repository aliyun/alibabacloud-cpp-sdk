// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTSRESPONSEBODYCLIENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTSRESPONSEBODYCLIENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClientsResponseBodyClientsClient.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeClientsResponseBodyClients : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientsResponseBodyClients& obj) { 
      DARABONBA_PTR_TO_JSON(Client, client_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientsResponseBodyClients& obj) { 
      DARABONBA_PTR_FROM_JSON(Client, client_);
    };
    DescribeClientsResponseBodyClients() = default ;
    DescribeClientsResponseBodyClients(const DescribeClientsResponseBodyClients &) = default ;
    DescribeClientsResponseBodyClients(DescribeClientsResponseBodyClients &&) = default ;
    DescribeClientsResponseBodyClients(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientsResponseBodyClients() = default ;
    DescribeClientsResponseBodyClients& operator=(const DescribeClientsResponseBodyClients &) = default ;
    DescribeClientsResponseBodyClients& operator=(DescribeClientsResponseBodyClients &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->client_ != nullptr; };
    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline const vector<Models::DescribeClientsResponseBodyClientsClient> & client() const { DARABONBA_PTR_GET_CONST(client_, vector<Models::DescribeClientsResponseBodyClientsClient>) };
    inline vector<Models::DescribeClientsResponseBodyClientsClient> client() { DARABONBA_PTR_GET(client_, vector<Models::DescribeClientsResponseBodyClientsClient>) };
    inline DescribeClientsResponseBodyClients& setClient(const vector<Models::DescribeClientsResponseBodyClientsClient> & client) { DARABONBA_PTR_SET_VALUE(client_, client) };
    inline DescribeClientsResponseBodyClients& setClient(vector<Models::DescribeClientsResponseBodyClientsClient> && client) { DARABONBA_PTR_SET_RVALUE(client_, client) };


  protected:
    std::shared_ptr<vector<Models::DescribeClientsResponseBodyClientsClient>> client_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
