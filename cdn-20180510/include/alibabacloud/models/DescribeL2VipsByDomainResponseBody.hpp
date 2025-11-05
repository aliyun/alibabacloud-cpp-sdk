// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL2VIPSBYDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL2VIPSBYDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeL2VipsByDomainResponseBodyVips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeL2VipsByDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL2VipsByDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vips, vips_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL2VipsByDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vips, vips_);
    };
    DescribeL2VipsByDomainResponseBody() = default ;
    DescribeL2VipsByDomainResponseBody(const DescribeL2VipsByDomainResponseBody &) = default ;
    DescribeL2VipsByDomainResponseBody(DescribeL2VipsByDomainResponseBody &&) = default ;
    DescribeL2VipsByDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL2VipsByDomainResponseBody() = default ;
    DescribeL2VipsByDomainResponseBody& operator=(const DescribeL2VipsByDomainResponseBody &) = default ;
    DescribeL2VipsByDomainResponseBody& operator=(DescribeL2VipsByDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->requestId_ == nullptr && return this->vips_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeL2VipsByDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeL2VipsByDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vips Field Functions 
    bool hasVips() const { return this->vips_ != nullptr;};
    void deleteVips() { this->vips_ = nullptr;};
    inline const DescribeL2VipsByDomainResponseBodyVips & vips() const { DARABONBA_PTR_GET_CONST(vips_, DescribeL2VipsByDomainResponseBodyVips) };
    inline DescribeL2VipsByDomainResponseBodyVips vips() { DARABONBA_PTR_GET(vips_, DescribeL2VipsByDomainResponseBodyVips) };
    inline DescribeL2VipsByDomainResponseBody& setVips(const DescribeL2VipsByDomainResponseBodyVips & vips) { DARABONBA_PTR_SET_VALUE(vips_, vips) };
    inline DescribeL2VipsByDomainResponseBody& setVips(DescribeL2VipsByDomainResponseBodyVips && vips) { DARABONBA_PTR_SET_RVALUE(vips_, vips) };


  protected:
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of VIPs.
    std::shared_ptr<DescribeL2VipsByDomainResponseBodyVips> vips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
