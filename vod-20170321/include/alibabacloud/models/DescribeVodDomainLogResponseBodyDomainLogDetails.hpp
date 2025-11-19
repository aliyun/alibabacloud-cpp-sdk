// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainLogResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeVodDomainLogResponseBodyDomainLogDetails() = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetails(const DescribeVodDomainLogResponseBodyDomainLogDetails &) = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetails(DescribeVodDomainLogResponseBodyDomainLogDetails &&) = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainLogResponseBodyDomainLogDetails() = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetails& operator=(const DescribeVodDomainLogResponseBodyDomainLogDetails &) = default ;
    DescribeVodDomainLogResponseBodyDomainLogDetails& operator=(DescribeVodDomainLogResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetail_ == nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeVodDomainLogResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeVodDomainLogResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainLogResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
