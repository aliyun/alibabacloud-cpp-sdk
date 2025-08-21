// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONNECTABLECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONNECTABLECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class AddConnectableClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddConnectableClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, AddConnectableClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    AddConnectableClusterRequest() = default ;
    AddConnectableClusterRequest(const AddConnectableClusterRequest &) = default ;
    AddConnectableClusterRequest(AddConnectableClusterRequest &&) = default ;
    AddConnectableClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddConnectableClusterRequest() = default ;
    AddConnectableClusterRequest& operator=(const AddConnectableClusterRequest &) = default ;
    AddConnectableClusterRequest& operator=(AddConnectableClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->clientToken_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline AddConnectableClusterRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddConnectableClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // 请求体。
    std::shared_ptr<string> body_ = nullptr;
    // 5A2CFF0E-5718-45B5-9D4D-70B3FF\\*\\*\\*\\*
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
