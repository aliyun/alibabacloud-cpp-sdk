// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNodeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EniHighDenseQuantity, eniHighDenseQuantity_);
      DARABONBA_PTR_TO_JSON(EniIpv6AddressQuantity, eniIpv6AddressQuantity_);
      DARABONBA_PTR_TO_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
      DARABONBA_PTR_TO_JSON(EniQuantity, eniQuantity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EniHighDenseQuantity, eniHighDenseQuantity_);
      DARABONBA_PTR_FROM_JSON(EniIpv6AddressQuantity, eniIpv6AddressQuantity_);
      DARABONBA_PTR_FROM_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
      DARABONBA_PTR_FROM_JSON(EniQuantity, eniQuantity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNodeTypeResponseBody() = default ;
    DescribeNodeTypeResponseBody(const DescribeNodeTypeResponseBody &) = default ;
    DescribeNodeTypeResponseBody(DescribeNodeTypeResponseBody &&) = default ;
    DescribeNodeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeTypeResponseBody() = default ;
    DescribeNodeTypeResponseBody& operator=(const DescribeNodeTypeResponseBody &) = default ;
    DescribeNodeTypeResponseBody& operator=(DescribeNodeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eniHighDenseQuantity_ == nullptr
        && return this->eniIpv6AddressQuantity_ == nullptr && return this->eniPrivateIpAddressQuantity_ == nullptr && return this->eniQuantity_ == nullptr && return this->requestId_ == nullptr; };
    // eniHighDenseQuantity Field Functions 
    bool hasEniHighDenseQuantity() const { return this->eniHighDenseQuantity_ != nullptr;};
    void deleteEniHighDenseQuantity() { this->eniHighDenseQuantity_ = nullptr;};
    inline int32_t eniHighDenseQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniHighDenseQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEniHighDenseQuantity(int32_t eniHighDenseQuantity) { DARABONBA_PTR_SET_VALUE(eniHighDenseQuantity_, eniHighDenseQuantity) };


    // eniIpv6AddressQuantity Field Functions 
    bool hasEniIpv6AddressQuantity() const { return this->eniIpv6AddressQuantity_ != nullptr;};
    void deleteEniIpv6AddressQuantity() { this->eniIpv6AddressQuantity_ = nullptr;};
    inline int32_t eniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniIpv6AddressQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEniIpv6AddressQuantity(int32_t eniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(eniIpv6AddressQuantity_, eniIpv6AddressQuantity) };


    // eniPrivateIpAddressQuantity Field Functions 
    bool hasEniPrivateIpAddressQuantity() const { return this->eniPrivateIpAddressQuantity_ != nullptr;};
    void deleteEniPrivateIpAddressQuantity() { this->eniPrivateIpAddressQuantity_ = nullptr;};
    inline int32_t eniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddressQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEniPrivateIpAddressQuantity(int32_t eniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddressQuantity_, eniPrivateIpAddressQuantity) };


    // eniQuantity Field Functions 
    bool hasEniQuantity() const { return this->eniQuantity_ != nullptr;};
    void deleteEniQuantity() { this->eniQuantity_ = nullptr;};
    inline int32_t eniQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniQuantity_, 0) };
    inline DescribeNodeTypeResponseBody& setEniQuantity(int32_t eniQuantity) { DARABONBA_PTR_SET_VALUE(eniQuantity_, eniQuantity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> eniHighDenseQuantity_ = nullptr;
    std::shared_ptr<int32_t> eniIpv6AddressQuantity_ = nullptr;
    std::shared_ptr<int32_t> eniPrivateIpAddressQuantity_ = nullptr;
    std::shared_ptr<int32_t> eniQuantity_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
