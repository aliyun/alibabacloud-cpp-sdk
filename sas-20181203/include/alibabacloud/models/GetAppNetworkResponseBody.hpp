// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAppNetworkResponseBodyAppNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAppNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppNetwork, appNetwork_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppNetwork, appNetwork_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAppNetworkResponseBody() = default ;
    GetAppNetworkResponseBody(const GetAppNetworkResponseBody &) = default ;
    GetAppNetworkResponseBody(GetAppNetworkResponseBody &&) = default ;
    GetAppNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppNetworkResponseBody() = default ;
    GetAppNetworkResponseBody& operator=(const GetAppNetworkResponseBody &) = default ;
    GetAppNetworkResponseBody& operator=(GetAppNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appNetwork_ != nullptr
        && this->requestId_ != nullptr; };
    // appNetwork Field Functions 
    bool hasAppNetwork() const { return this->appNetwork_ != nullptr;};
    void deleteAppNetwork() { this->appNetwork_ = nullptr;};
    inline const GetAppNetworkResponseBodyAppNetwork & appNetwork() const { DARABONBA_PTR_GET_CONST(appNetwork_, GetAppNetworkResponseBodyAppNetwork) };
    inline GetAppNetworkResponseBodyAppNetwork appNetwork() { DARABONBA_PTR_GET(appNetwork_, GetAppNetworkResponseBodyAppNetwork) };
    inline GetAppNetworkResponseBody& setAppNetwork(const GetAppNetworkResponseBodyAppNetwork & appNetwork) { DARABONBA_PTR_SET_VALUE(appNetwork_, appNetwork) };
    inline GetAppNetworkResponseBody& setAppNetwork(GetAppNetworkResponseBodyAppNetwork && appNetwork) { DARABONBA_PTR_SET_RVALUE(appNetwork_, appNetwork) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application network topology.
    std::shared_ptr<GetAppNetworkResponseBodyAppNetwork> appNetwork_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
