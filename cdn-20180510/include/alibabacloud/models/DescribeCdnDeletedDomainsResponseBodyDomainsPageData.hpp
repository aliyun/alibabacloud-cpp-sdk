// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDELETEDDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDELETEDDOMAINSRESPONSEBODYDOMAINSPAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDeletedDomainsResponseBodyDomainsPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDeletedDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDeletedDomainsResponseBodyDomainsPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
    };
    DescribeCdnDeletedDomainsResponseBodyDomainsPageData() = default ;
    DescribeCdnDeletedDomainsResponseBodyDomainsPageData(const DescribeCdnDeletedDomainsResponseBodyDomainsPageData &) = default ;
    DescribeCdnDeletedDomainsResponseBodyDomainsPageData(DescribeCdnDeletedDomainsResponseBodyDomainsPageData &&) = default ;
    DescribeCdnDeletedDomainsResponseBodyDomainsPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDeletedDomainsResponseBodyDomainsPageData() = default ;
    DescribeCdnDeletedDomainsResponseBodyDomainsPageData& operator=(const DescribeCdnDeletedDomainsResponseBodyDomainsPageData &) = default ;
    DescribeCdnDeletedDomainsResponseBodyDomainsPageData& operator=(DescribeCdnDeletedDomainsResponseBodyDomainsPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->gmtModified_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnDeletedDomainsResponseBodyDomainsPageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCdnDeletedDomainsResponseBodyDomainsPageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


  protected:
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The time when the accelerated domain name was modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
