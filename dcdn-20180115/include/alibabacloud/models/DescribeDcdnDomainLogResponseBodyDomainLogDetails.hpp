// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainLogResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeDcdnDomainLogResponseBodyDomainLogDetails() = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetails(const DescribeDcdnDomainLogResponseBodyDomainLogDetails &) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetails(DescribeDcdnDomainLogResponseBodyDomainLogDetails &&) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainLogResponseBodyDomainLogDetails() = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetails& operator=(const DescribeDcdnDomainLogResponseBodyDomainLogDetails &) = default ;
    DescribeDcdnDomainLogResponseBodyDomainLogDetails& operator=(DescribeDcdnDomainLogResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetail_ != nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeDcdnDomainLogResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainLogResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
