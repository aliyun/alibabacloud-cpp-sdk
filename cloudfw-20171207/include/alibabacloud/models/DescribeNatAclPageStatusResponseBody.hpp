// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATACLPAGESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATACLPAGESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatAclPageStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatAclPageStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(NatAclPageEnable, natAclPageEnable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatAclPageStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(NatAclPageEnable, natAclPageEnable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatAclPageStatusResponseBody() = default ;
    DescribeNatAclPageStatusResponseBody(const DescribeNatAclPageStatusResponseBody &) = default ;
    DescribeNatAclPageStatusResponseBody(DescribeNatAclPageStatusResponseBody &&) = default ;
    DescribeNatAclPageStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatAclPageStatusResponseBody() = default ;
    DescribeNatAclPageStatusResponseBody& operator=(const DescribeNatAclPageStatusResponseBody &) = default ;
    DescribeNatAclPageStatusResponseBody& operator=(DescribeNatAclPageStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->natAclPageEnable_ == nullptr && return this->requestId_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeNatAclPageStatusResponseBody& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // natAclPageEnable Field Functions 
    bool hasNatAclPageEnable() const { return this->natAclPageEnable_ != nullptr;};
    void deleteNatAclPageEnable() { this->natAclPageEnable_ = nullptr;};
    inline bool natAclPageEnable() const { DARABONBA_PTR_GET_DEFAULT(natAclPageEnable_, false) };
    inline DescribeNatAclPageStatusResponseBody& setNatAclPageEnable(bool natAclPageEnable) { DARABONBA_PTR_SET_VALUE(natAclPageEnable_, natAclPageEnable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatAclPageStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Extra error information.
    std::shared_ptr<string> detail_ = nullptr;
    // Indicates whether pagination for access control policies for NAT firewalls is supported.
    std::shared_ptr<bool> natAclPageEnable_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
