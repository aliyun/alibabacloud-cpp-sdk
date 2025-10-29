// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLogResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeLiveDomainLogResponseBodyDomainLogDetails() = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetails(const DescribeLiveDomainLogResponseBodyDomainLogDetails &) = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetails(DescribeLiveDomainLogResponseBodyDomainLogDetails &&) = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLogResponseBodyDomainLogDetails() = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetails& operator=(const DescribeLiveDomainLogResponseBodyDomainLogDetails &) = default ;
    DescribeLiveDomainLogResponseBodyDomainLogDetails& operator=(DescribeLiveDomainLogResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetail_ == nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeLiveDomainLogResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeLiveDomainLogResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainLogResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
