// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCIPAMSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCIPAMSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class GetVpcIpamServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcIpamServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcIpamServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVpcIpamServiceStatusResponseBody() = default ;
    GetVpcIpamServiceStatusResponseBody(const GetVpcIpamServiceStatusResponseBody &) = default ;
    GetVpcIpamServiceStatusResponseBody(GetVpcIpamServiceStatusResponseBody &&) = default ;
    GetVpcIpamServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcIpamServiceStatusResponseBody() = default ;
    GetVpcIpamServiceStatusResponseBody& operator=(const GetVpcIpamServiceStatusResponseBody &) = default ;
    GetVpcIpamServiceStatusResponseBody& operator=(GetVpcIpamServiceStatusResponseBody &&) = default ;
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
    inline GetVpcIpamServiceStatusResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcIpamServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether IPAM is activated.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enabled_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
