// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGMODELDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGMODELDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails(const DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails(DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails &&) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails& operator=(const DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails& operator=(DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetail_ != nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail>) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails& setDomainLogDetail(vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
