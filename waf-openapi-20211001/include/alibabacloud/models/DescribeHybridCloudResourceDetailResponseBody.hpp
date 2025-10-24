// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHybridCloudResourceDetailResponseBodyDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridCloudResourceDetailResponseBody() = default ;
    DescribeHybridCloudResourceDetailResponseBody(const DescribeHybridCloudResourceDetailResponseBody &) = default ;
    DescribeHybridCloudResourceDetailResponseBody(DescribeHybridCloudResourceDetailResponseBody &&) = default ;
    DescribeHybridCloudResourceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourceDetailResponseBody() = default ;
    DescribeHybridCloudResourceDetailResponseBody& operator=(const DescribeHybridCloudResourceDetailResponseBody &) = default ;
    DescribeHybridCloudResourceDetailResponseBody& operator=(DescribeHybridCloudResourceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->requestId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const DescribeHybridCloudResourceDetailResponseBodyDomain & domain() const { DARABONBA_PTR_GET_CONST(domain_, DescribeHybridCloudResourceDetailResponseBodyDomain) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomain domain() { DARABONBA_PTR_GET(domain_, DescribeHybridCloudResourceDetailResponseBodyDomain) };
    inline DescribeHybridCloudResourceDetailResponseBody& setDomain(const DescribeHybridCloudResourceDetailResponseBodyDomain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline DescribeHybridCloudResourceDetailResponseBody& setDomain(DescribeHybridCloudResourceDetailResponseBodyDomain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudResourceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeHybridCloudResourceDetailResponseBodyDomain> domain_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
