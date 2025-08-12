// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGEXTTLRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails() = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails(const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails &) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails(DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails &&) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails() = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails& operator=(const DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails &) = default ;
    DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails& operator=(DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetail_ != nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeLiveDomainLogExTtlResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainLogExTtlResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
