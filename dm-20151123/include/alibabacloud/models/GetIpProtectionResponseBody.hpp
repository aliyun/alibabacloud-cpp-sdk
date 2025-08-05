// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPPROTECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetIpProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpProtection, ipProtection_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpProtection, ipProtection_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIpProtectionResponseBody() = default ;
    GetIpProtectionResponseBody(const GetIpProtectionResponseBody &) = default ;
    GetIpProtectionResponseBody(GetIpProtectionResponseBody &&) = default ;
    GetIpProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpProtectionResponseBody() = default ;
    GetIpProtectionResponseBody& operator=(const GetIpProtectionResponseBody &) = default ;
    GetIpProtectionResponseBody& operator=(GetIpProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipProtection_ != nullptr
        && this->requestId_ != nullptr; };
    // ipProtection Field Functions 
    bool hasIpProtection() const { return this->ipProtection_ != nullptr;};
    void deleteIpProtection() { this->ipProtection_ = nullptr;};
    inline string ipProtection() const { DARABONBA_PTR_GET_DEFAULT(ipProtection_, "") };
    inline GetIpProtectionResponseBody& setIpProtection(string ipProtection) { DARABONBA_PTR_SET_VALUE(ipProtection_, ipProtection) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIpProtectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // IP protection switch, On: 1 Off: 0
    std::shared_ptr<string> ipProtection_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
