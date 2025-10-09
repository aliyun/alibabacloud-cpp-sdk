// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNetworkResponseBodyNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNetworkResponseBody() = default ;
    GetNetworkResponseBody(const GetNetworkResponseBody &) = default ;
    GetNetworkResponseBody(GetNetworkResponseBody &&) = default ;
    GetNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkResponseBody() = default ;
    GetNetworkResponseBody& operator=(const GetNetworkResponseBody &) = default ;
    GetNetworkResponseBody& operator=(GetNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->network_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const GetNetworkResponseBodyNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, GetNetworkResponseBodyNetwork) };
    inline GetNetworkResponseBodyNetwork network() { DARABONBA_PTR_GET(network_, GetNetworkResponseBodyNetwork) };
    inline GetNetworkResponseBody& setNetwork(const GetNetworkResponseBodyNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline GetNetworkResponseBody& setNetwork(GetNetworkResponseBodyNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNetworkResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the network resource.
    std::shared_ptr<GetNetworkResponseBodyNetwork> network_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
