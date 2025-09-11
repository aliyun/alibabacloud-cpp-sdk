// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTEDCLIENTSRESPONSEBODYCLIENTSCLIENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTEDCLIENTSRESPONSEBODYCLIENTSCLIENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountedClientsResponseBodyClientsClient : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountedClientsResponseBodyClientsClient& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountedClientsResponseBodyClientsClient& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
    };
    DescribeMountedClientsResponseBodyClientsClient() = default ;
    DescribeMountedClientsResponseBodyClientsClient(const DescribeMountedClientsResponseBodyClientsClient &) = default ;
    DescribeMountedClientsResponseBodyClientsClient(DescribeMountedClientsResponseBodyClientsClient &&) = default ;
    DescribeMountedClientsResponseBodyClientsClient(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountedClientsResponseBodyClientsClient() = default ;
    DescribeMountedClientsResponseBodyClientsClient& operator=(const DescribeMountedClientsResponseBodyClientsClient &) = default ;
    DescribeMountedClientsResponseBodyClientsClient& operator=(DescribeMountedClientsResponseBodyClientsClient &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIP_ != nullptr; };
    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline DescribeMountedClientsResponseBodyClientsClient& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


  protected:
    // The IP address of the client.
    std::shared_ptr<string> clientIP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
