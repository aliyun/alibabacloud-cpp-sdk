// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainLogsResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainLogsResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainLogsResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeCdnDomainLogsResponseBodyDomainLogDetails() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetails(const DescribeCdnDomainLogsResponseBodyDomainLogDetails &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetails(DescribeCdnDomainLogsResponseBodyDomainLogDetails &&) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainLogsResponseBodyDomainLogDetails() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetails& operator=(const DescribeCdnDomainLogsResponseBodyDomainLogDetails &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogDetails& operator=(DescribeCdnDomainLogsResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetail_ != nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
