// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAclCheckQuotaResponseBodyQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclCheckQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclCheckQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclCheckQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAclCheckQuotaResponseBody() = default ;
    DescribeAclCheckQuotaResponseBody(const DescribeAclCheckQuotaResponseBody &) = default ;
    DescribeAclCheckQuotaResponseBody(DescribeAclCheckQuotaResponseBody &&) = default ;
    DescribeAclCheckQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclCheckQuotaResponseBody() = default ;
    DescribeAclCheckQuotaResponseBody& operator=(const DescribeAclCheckQuotaResponseBody &) = default ;
    DescribeAclCheckQuotaResponseBody& operator=(DescribeAclCheckQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quota_ == nullptr
        && return this->requestId_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const DescribeAclCheckQuotaResponseBodyQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, DescribeAclCheckQuotaResponseBodyQuota) };
    inline DescribeAclCheckQuotaResponseBodyQuota quota() { DARABONBA_PTR_GET(quota_, DescribeAclCheckQuotaResponseBodyQuota) };
    inline DescribeAclCheckQuotaResponseBody& setQuota(const DescribeAclCheckQuotaResponseBodyQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline DescribeAclCheckQuotaResponseBody& setQuota(DescribeAclCheckQuotaResponseBodyQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclCheckQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeAclCheckQuotaResponseBodyQuota> quota_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
