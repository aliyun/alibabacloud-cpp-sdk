// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNetworkZoneResponseBodyNetworkZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetNetworkZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkZone, networkZone_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkZone, networkZone_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkZoneResponseBody() = default ;
    GetNetworkZoneResponseBody(const GetNetworkZoneResponseBody &) = default ;
    GetNetworkZoneResponseBody(GetNetworkZoneResponseBody &&) = default ;
    GetNetworkZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkZoneResponseBody() = default ;
    GetNetworkZoneResponseBody& operator=(const GetNetworkZoneResponseBody &) = default ;
    GetNetworkZoneResponseBody& operator=(GetNetworkZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkZone_ == nullptr
        && return this->requestId_ == nullptr; };
    // networkZone Field Functions 
    bool hasNetworkZone() const { return this->networkZone_ != nullptr;};
    void deleteNetworkZone() { this->networkZone_ = nullptr;};
    inline const GetNetworkZoneResponseBodyNetworkZone & networkZone() const { DARABONBA_PTR_GET_CONST(networkZone_, GetNetworkZoneResponseBodyNetworkZone) };
    inline GetNetworkZoneResponseBodyNetworkZone networkZone() { DARABONBA_PTR_GET(networkZone_, GetNetworkZoneResponseBodyNetworkZone) };
    inline GetNetworkZoneResponseBody& setNetworkZone(const GetNetworkZoneResponseBodyNetworkZone & networkZone) { DARABONBA_PTR_SET_VALUE(networkZone_, networkZone) };
    inline GetNetworkZoneResponseBody& setNetworkZone(GetNetworkZoneResponseBodyNetworkZone && networkZone) { DARABONBA_PTR_SET_RVALUE(networkZone_, networkZone) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetNetworkZoneResponseBodyNetworkZone> networkZone_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
