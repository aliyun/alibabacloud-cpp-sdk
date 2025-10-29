// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERTRAFFICLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERTRAFFICLOGRESPONSEBODYDOMAINLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserTrafficLogResponseBodyDomainLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserTrafficLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserTrafficLogResponseBodyDomainLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
    };
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetails() = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetails(const DescribeLiveUserTrafficLogResponseBodyDomainLogDetails &) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetails(DescribeLiveUserTrafficLogResponseBodyDomainLogDetails &&) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserTrafficLogResponseBodyDomainLogDetails() = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetails& operator=(const DescribeLiveUserTrafficLogResponseBodyDomainLogDetails &) = default ;
    DescribeLiveUserTrafficLogResponseBodyDomainLogDetails& operator=(DescribeLiveUserTrafficLogResponseBodyDomainLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetail_ == nullptr; };
    // domainLogDetail Field Functions 
    bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
    void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
    inline const vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetail> domainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetail>) };
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetails& setDomainLogDetail(const vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
    inline DescribeLiveUserTrafficLogResponseBodyDomainLogDetails& setDomainLogDetail(vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUserTrafficLogResponseBodyDomainLogDetailsDomainLogDetail>> domainLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
