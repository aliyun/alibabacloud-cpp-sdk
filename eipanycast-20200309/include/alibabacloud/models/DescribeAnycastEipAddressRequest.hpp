// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastEipAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastEipAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_TO_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastEipAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_FROM_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeAnycastEipAddressRequest() = default ;
    DescribeAnycastEipAddressRequest(const DescribeAnycastEipAddressRequest &) = default ;
    DescribeAnycastEipAddressRequest(DescribeAnycastEipAddressRequest &&) = default ;
    DescribeAnycastEipAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastEipAddressRequest() = default ;
    DescribeAnycastEipAddressRequest& operator=(const DescribeAnycastEipAddressRequest &) = default ;
    DescribeAnycastEipAddressRequest& operator=(DescribeAnycastEipAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anycastId_ == nullptr
        && return this->bindInstanceId_ == nullptr && return this->ip_ == nullptr; };
    // anycastId Field Functions 
    bool hasAnycastId() const { return this->anycastId_ != nullptr;};
    void deleteAnycastId() { this->anycastId_ = nullptr;};
    inline string anycastId() const { DARABONBA_PTR_GET_DEFAULT(anycastId_, "") };
    inline DescribeAnycastEipAddressRequest& setAnycastId(string anycastId) { DARABONBA_PTR_SET_VALUE(anycastId_, anycastId) };


    // bindInstanceId Field Functions 
    bool hasBindInstanceId() const { return this->bindInstanceId_ != nullptr;};
    void deleteBindInstanceId() { this->bindInstanceId_ = nullptr;};
    inline string bindInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceId_, "") };
    inline DescribeAnycastEipAddressRequest& setBindInstanceId(string bindInstanceId) { DARABONBA_PTR_SET_VALUE(bindInstanceId_, bindInstanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeAnycastEipAddressRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // The ID of the Anycast EIP.
    // 
    // > You must specify **Ip** or **AnycastId**.
    std::shared_ptr<string> anycastId_ = nullptr;
    // The ID of the endpoint with which the Anycast EIP is associated.
    std::shared_ptr<string> bindInstanceId_ = nullptr;
    // The IP address of the Anycast EIP.
    // 
    // > You must specify **Ip** or **AnycastId**.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
