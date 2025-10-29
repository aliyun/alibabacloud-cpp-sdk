// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVETRAFFICDOMAINLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVETRAFFICDOMAINLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails() = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails(const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails &) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails(DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails &&) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails() = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails& operator=(const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails &) = default ;
    DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails& operator=(DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetail_ == nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveTrafficDomainLogResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
