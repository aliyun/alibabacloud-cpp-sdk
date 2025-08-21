// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLASSICNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLASSICNETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateClassicNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClassicNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClassicNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateClassicNetworkResponseBody() = default ;
    CreateClassicNetworkResponseBody(const CreateClassicNetworkResponseBody &) = default ;
    CreateClassicNetworkResponseBody(CreateClassicNetworkResponseBody &&) = default ;
    CreateClassicNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClassicNetworkResponseBody() = default ;
    CreateClassicNetworkResponseBody& operator=(const CreateClassicNetworkResponseBody &) = default ;
    CreateClassicNetworkResponseBody& operator=(CreateClassicNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkId_ != nullptr
        && this->requestId_ != nullptr; };
    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline CreateClassicNetworkResponseBody& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClassicNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
