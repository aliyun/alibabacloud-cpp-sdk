// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressPoolReferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressPoolReferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(AddressPoolName, addressPoolName_);
      DARABONBA_PTR_TO_JSON(InstanceConfigs, instanceConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressPoolReferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(AddressPoolName, addressPoolName_);
      DARABONBA_PTR_FROM_JSON(InstanceConfigs, instanceConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudGtmAddressPoolReferenceResponseBody() = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBody(const DescribeCloudGtmAddressPoolReferenceResponseBody &) = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBody(DescribeCloudGtmAddressPoolReferenceResponseBody &&) = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressPoolReferenceResponseBody() = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBody& operator=(const DescribeCloudGtmAddressPoolReferenceResponseBody &) = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBody& operator=(DescribeCloudGtmAddressPoolReferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressPoolId_ == nullptr
        && return this->addressPoolName_ == nullptr && return this->instanceConfigs_ == nullptr && return this->requestId_ == nullptr; };
    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string addressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline DescribeCloudGtmAddressPoolReferenceResponseBody& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // addressPoolName Field Functions 
    bool hasAddressPoolName() const { return this->addressPoolName_ != nullptr;};
    void deleteAddressPoolName() { this->addressPoolName_ = nullptr;};
    inline string addressPoolName() const { DARABONBA_PTR_GET_DEFAULT(addressPoolName_, "") };
    inline DescribeCloudGtmAddressPoolReferenceResponseBody& setAddressPoolName(string addressPoolName) { DARABONBA_PTR_SET_VALUE(addressPoolName_, addressPoolName) };


    // instanceConfigs Field Functions 
    bool hasInstanceConfigs() const { return this->instanceConfigs_ != nullptr;};
    void deleteInstanceConfigs() { this->instanceConfigs_ = nullptr;};
    inline const DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs & instanceConfigs() const { DARABONBA_PTR_GET_CONST(instanceConfigs_, DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs) };
    inline DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs instanceConfigs() { DARABONBA_PTR_GET(instanceConfigs_, DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs) };
    inline DescribeCloudGtmAddressPoolReferenceResponseBody& setInstanceConfigs(const DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs & instanceConfigs) { DARABONBA_PTR_SET_VALUE(instanceConfigs_, instanceConfigs) };
    inline DescribeCloudGtmAddressPoolReferenceResponseBody& setInstanceConfigs(DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs && instanceConfigs) { DARABONBA_PTR_SET_RVALUE(instanceConfigs_, instanceConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmAddressPoolReferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the address pool. This ID uniquely identifies the address pool.
    std::shared_ptr<string> addressPoolId_ = nullptr;
    // Address pool name.
    std::shared_ptr<string> addressPoolName_ = nullptr;
    // The access domain names that reference the address pool.
    std::shared_ptr<DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs> instanceConfigs_ = nullptr;
    // Unique request identification code.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
