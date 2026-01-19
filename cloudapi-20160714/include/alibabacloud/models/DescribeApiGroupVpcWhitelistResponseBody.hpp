// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPVPCWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPVPCWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupVpcWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupVpcWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcIds, vpcIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupVpcWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcIds, vpcIds_);
    };
    DescribeApiGroupVpcWhitelistResponseBody() = default ;
    DescribeApiGroupVpcWhitelistResponseBody(const DescribeApiGroupVpcWhitelistResponseBody &) = default ;
    DescribeApiGroupVpcWhitelistResponseBody(DescribeApiGroupVpcWhitelistResponseBody &&) = default ;
    DescribeApiGroupVpcWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupVpcWhitelistResponseBody() = default ;
    DescribeApiGroupVpcWhitelistResponseBody& operator=(const DescribeApiGroupVpcWhitelistResponseBody &) = default ;
    DescribeApiGroupVpcWhitelistResponseBody& operator=(DescribeApiGroupVpcWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vpcIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiGroupVpcWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcIds Field Functions 
    bool hasVpcIds() const { return this->vpcIds_ != nullptr;};
    void deleteVpcIds() { this->vpcIds_ = nullptr;};
    inline string getVpcIds() const { DARABONBA_PTR_GET_DEFAULT(vpcIds_, "") };
    inline DescribeApiGroupVpcWhitelistResponseBody& setVpcIds(string vpcIds) { DARABONBA_PTR_SET_VALUE(vpcIds_, vpcIds) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
