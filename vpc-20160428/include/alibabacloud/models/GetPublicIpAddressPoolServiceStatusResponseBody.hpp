// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLICIPADDRESSPOOLSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLICIPADDRESSPOOLSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetPublicIpAddressPoolServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublicIpAddressPoolServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublicIpAddressPoolServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPublicIpAddressPoolServiceStatusResponseBody() = default ;
    GetPublicIpAddressPoolServiceStatusResponseBody(const GetPublicIpAddressPoolServiceStatusResponseBody &) = default ;
    GetPublicIpAddressPoolServiceStatusResponseBody(GetPublicIpAddressPoolServiceStatusResponseBody &&) = default ;
    GetPublicIpAddressPoolServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublicIpAddressPoolServiceStatusResponseBody() = default ;
    GetPublicIpAddressPoolServiceStatusResponseBody& operator=(const GetPublicIpAddressPoolServiceStatusResponseBody &) = default ;
    GetPublicIpAddressPoolServiceStatusResponseBody& operator=(GetPublicIpAddressPoolServiceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->requestId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetPublicIpAddressPoolServiceStatusResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPublicIpAddressPoolServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the IP address pool feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false** You can call OpenPublicIpAddressPoolService to enable the IP address pool feature.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
