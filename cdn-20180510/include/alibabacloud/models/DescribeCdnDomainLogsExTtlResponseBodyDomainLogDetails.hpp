// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSEXTTLRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSEXTTLRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails() = default ;
    DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails(const DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails &) = default ;
    DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails(DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails &&) = default ;
    DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails() = default ;
    DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails& operator=(const DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails &) = default ;
    DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails& operator=(DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetail_ == nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
