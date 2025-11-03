// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTEDCLIENTSRESPONSEBODYCLIENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTEDCLIENTSRESPONSEBODYCLIENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMountedClientsResponseBodyClientsClient.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountedClientsResponseBodyClients : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountedClientsResponseBodyClients& obj) { 
      DARABONBA_PTR_TO_JSON(Client, client_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountedClientsResponseBodyClients& obj) { 
      DARABONBA_PTR_FROM_JSON(Client, client_);
    };
    DescribeMountedClientsResponseBodyClients() = default ;
    DescribeMountedClientsResponseBodyClients(const DescribeMountedClientsResponseBodyClients &) = default ;
    DescribeMountedClientsResponseBodyClients(DescribeMountedClientsResponseBodyClients &&) = default ;
    DescribeMountedClientsResponseBodyClients(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountedClientsResponseBodyClients() = default ;
    DescribeMountedClientsResponseBodyClients& operator=(const DescribeMountedClientsResponseBodyClients &) = default ;
    DescribeMountedClientsResponseBodyClients& operator=(DescribeMountedClientsResponseBodyClients &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->client_ == nullptr; };
    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline const vector<Models::DescribeMountedClientsResponseBodyClientsClient> & client() const { DARABONBA_PTR_GET_CONST(client_, vector<Models::DescribeMountedClientsResponseBodyClientsClient>) };
    inline vector<Models::DescribeMountedClientsResponseBodyClientsClient> client() { DARABONBA_PTR_GET(client_, vector<Models::DescribeMountedClientsResponseBodyClientsClient>) };
    inline DescribeMountedClientsResponseBodyClients& setClient(const vector<Models::DescribeMountedClientsResponseBodyClientsClient> & client) { DARABONBA_PTR_SET_VALUE(client_, client) };
    inline DescribeMountedClientsResponseBodyClients& setClient(vector<Models::DescribeMountedClientsResponseBodyClientsClient> && client) { DARABONBA_PTR_SET_RVALUE(client_, client) };


  protected:
    std::shared_ptr<vector<Models::DescribeMountedClientsResponseBodyClientsClient>> client_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
