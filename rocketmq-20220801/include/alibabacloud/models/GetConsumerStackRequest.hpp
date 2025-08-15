// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERSTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERSTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
    };
    GetConsumerStackRequest() = default ;
    GetConsumerStackRequest(const GetConsumerStackRequest &) = default ;
    GetConsumerStackRequest(GetConsumerStackRequest &&) = default ;
    GetConsumerStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerStackRequest() = default ;
    GetConsumerStackRequest& operator=(const GetConsumerStackRequest &) = default ;
    GetConsumerStackRequest& operator=(GetConsumerStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetConsumerStackRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


  protected:
    // The client ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
