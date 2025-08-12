// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINEDGELOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINEDGELOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails() = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails(const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails &) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails(DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails &&) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails() = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails& operator=(const DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails &) = default ;
    DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails& operator=(DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetail_ != nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeLiveDomainEdgeLogResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainEdgeLogResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
