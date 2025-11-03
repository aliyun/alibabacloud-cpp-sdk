// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclAttribute, networkAclAttribute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclAttribute, networkAclAttribute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkAclAttributesResponseBody() = default ;
    DescribeNetworkAclAttributesResponseBody(const DescribeNetworkAclAttributesResponseBody &) = default ;
    DescribeNetworkAclAttributesResponseBody(DescribeNetworkAclAttributesResponseBody &&) = default ;
    DescribeNetworkAclAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclAttributesResponseBody() = default ;
    DescribeNetworkAclAttributesResponseBody& operator=(const DescribeNetworkAclAttributesResponseBody &) = default ;
    DescribeNetworkAclAttributesResponseBody& operator=(DescribeNetworkAclAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAclAttribute_ == nullptr
        && return this->requestId_ == nullptr; };
    // networkAclAttribute Field Functions 
    bool hasNetworkAclAttribute() const { return this->networkAclAttribute_ != nullptr;};
    void deleteNetworkAclAttribute() { this->networkAclAttribute_ = nullptr;};
    inline const DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute & networkAclAttribute() const { DARABONBA_PTR_GET_CONST(networkAclAttribute_, DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute networkAclAttribute() { DARABONBA_PTR_GET(networkAclAttribute_, DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute) };
    inline DescribeNetworkAclAttributesResponseBody& setNetworkAclAttribute(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute & networkAclAttribute) { DARABONBA_PTR_SET_VALUE(networkAclAttribute_, networkAclAttribute) };
    inline DescribeNetworkAclAttributesResponseBody& setNetworkAclAttribute(DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute && networkAclAttribute) { DARABONBA_PTR_SET_RVALUE(networkAclAttribute_, networkAclAttribute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkAclAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the network ACLs.
    std::shared_ptr<DescribeNetworkAclAttributesResponseBodyNetworkAclAttribute> networkAclAttribute_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
