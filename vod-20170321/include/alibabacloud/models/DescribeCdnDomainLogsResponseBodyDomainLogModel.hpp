// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODYDOMAINLOGMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeCdnDomainLogsResponseBodyDomainLogModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainLogsResponseBodyDomainLogModel& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainLogsResponseBodyDomainLogModel& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeCdnDomainLogsResponseBodyDomainLogModel() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModel(const DescribeCdnDomainLogsResponseBodyDomainLogModel &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModel(DescribeCdnDomainLogsResponseBodyDomainLogModel &&) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainLogsResponseBodyDomainLogModel() = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModel& operator=(const DescribeCdnDomainLogsResponseBodyDomainLogModel &) = default ;
    DescribeCdnDomainLogsResponseBodyDomainLogModel& operator=(DescribeCdnDomainLogsResponseBodyDomainLogModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetails_ != nullptr
        && this->domainName_ != nullptr; };
    // domainLogDetails Field Functions 
    bool hasDomainLogDetails() const { return this->domainLogDetails_ != nullptr;};
    void deleteDomainLogDetails() { this->domainLogDetails_ = nullptr;};
    inline const Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails & domainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails) };
    inline Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails domainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogModel& setDomainLogDetails(const Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogModel& setDomainLogDetails(Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnDomainLogsResponseBodyDomainLogModel& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    std::shared_ptr<Models::DescribeCdnDomainLogsResponseBodyDomainLogModelDomainLogDetails> domainLogDetails_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
