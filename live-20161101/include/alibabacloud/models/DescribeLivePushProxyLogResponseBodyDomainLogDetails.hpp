// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePushProxyLogResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePushProxyLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePushProxyLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeLivePushProxyLogResponseBodyDomainLogDetails() = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetails(const DescribeLivePushProxyLogResponseBodyDomainLogDetails &) = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetails(DescribeLivePushProxyLogResponseBodyDomainLogDetails &&) = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePushProxyLogResponseBodyDomainLogDetails() = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetails& operator=(const DescribeLivePushProxyLogResponseBodyDomainLogDetails &) = default ;
    DescribeLivePushProxyLogResponseBodyDomainLogDetails& operator=(DescribeLivePushProxyLogResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetail_ != nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeLivePushProxyLogResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeLivePushProxyLogResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLivePushProxyLogResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
