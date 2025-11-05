// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLISTDOMAINSDATADOMAININFOSDOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODYDOMAINSLISTDOMAINSDATADOMAININFOSDOMAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainCname, domainCname_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainCname, domainCname_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo() = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo(const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo(DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo &&) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo() = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& operator=(const DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo &) = default ;
    DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& operator=(DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnType_ == nullptr
        && return this->createTime_ == nullptr && return this->domainCname_ == nullptr && return this->domainName_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // cdnType Field Functions 
    bool hasCdnType() const { return this->cdnType_ != nullptr;};
    void deleteCdnType() { this->cdnType_ = nullptr;};
    inline string cdnType() const { DARABONBA_PTR_GET_DEFAULT(cdnType_, "") };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& setCdnType(string cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainCname Field Functions 
    bool hasDomainCname() const { return this->domainCname_ != nullptr;};
    void deleteDomainCname() { this->domainCname_ = nullptr;};
    inline string domainCname() const { DARABONBA_PTR_GET_DEFAULT(domainCname_, "") };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& setDomainCname(string domainCname) { DARABONBA_PTR_SET_VALUE(domainCname_, domainCname) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDomainsBySourceResponseBodyDomainsListDomainsDataDomainInfosDomainInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The workload type of the accelerated domain name. Valid values:
    // 
    // *   **web**: images and small files
    // *   **download**: large files
    // *   **video**: on-demand video and audio streaming
    std::shared_ptr<string> cdnType_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The CNAME record assigned to the domain name.
    std::shared_ptr<string> domainCname_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **applying**: The domain name is under review.
    // *   **configuring**: The domain name is being configured.
    // *   **online**: The domain name is working as expected.
    // *   **stopping**: The domain name is being stopped.
    // *   **offline**: The domain name is disabled.
    // *   **disabling**: The domain name is being removed.
    std::shared_ptr<string> status_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
