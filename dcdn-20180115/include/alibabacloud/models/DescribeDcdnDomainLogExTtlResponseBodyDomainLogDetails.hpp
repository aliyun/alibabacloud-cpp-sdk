// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails() = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails(const DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails &) = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails(DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails &&) = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails() = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails& operator=(const DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails &) = default ;
    DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails& operator=(DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetail_ != nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
