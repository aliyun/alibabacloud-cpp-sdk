// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERVIPSBYDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERVIPSBYDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnUserVipsByDomainResponseBodyVips.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserVipsByDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserVipsByDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vips, vips_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserVipsByDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vips, vips_);
    };
    DescribeDcdnUserVipsByDomainResponseBody() = default ;
    DescribeDcdnUserVipsByDomainResponseBody(const DescribeDcdnUserVipsByDomainResponseBody &) = default ;
    DescribeDcdnUserVipsByDomainResponseBody(DescribeDcdnUserVipsByDomainResponseBody &&) = default ;
    DescribeDcdnUserVipsByDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserVipsByDomainResponseBody() = default ;
    DescribeDcdnUserVipsByDomainResponseBody& operator=(const DescribeDcdnUserVipsByDomainResponseBody &) = default ;
    DescribeDcdnUserVipsByDomainResponseBody& operator=(DescribeDcdnUserVipsByDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->requestId_ != nullptr && this->vips_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnUserVipsByDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserVipsByDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vips Field Functions 
    bool hasVips() const { return this->vips_ != nullptr;};
    void deleteVips() { this->vips_ = nullptr;};
    inline const DescribeDcdnUserVipsByDomainResponseBodyVips & vips() const { DARABONBA_PTR_GET_CONST(vips_, DescribeDcdnUserVipsByDomainResponseBodyVips) };
    inline DescribeDcdnUserVipsByDomainResponseBodyVips vips() { DARABONBA_PTR_GET(vips_, DescribeDcdnUserVipsByDomainResponseBodyVips) };
    inline DescribeDcdnUserVipsByDomainResponseBody& setVips(const DescribeDcdnUserVipsByDomainResponseBodyVips & vips) { DARABONBA_PTR_SET_VALUE(vips_, vips) };
    inline DescribeDcdnUserVipsByDomainResponseBody& setVips(DescribeDcdnUserVipsByDomainResponseBodyVips && vips) { DARABONBA_PTR_SET_RVALUE(vips_, vips) };


  protected:
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of VIPs.
    std::shared_ptr<DescribeDcdnUserVipsByDomainResponseBodyVips> vips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
