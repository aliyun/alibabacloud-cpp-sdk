// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOLVESTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOLVESTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class GetResolveStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResolveStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_TO_JSON(TimeSpan, timeSpan_);
    };
    friend void from_json(const Darabonba::Json& j, GetResolveStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_FROM_JSON(TimeSpan, timeSpan_);
    };
    GetResolveStatisticsRequest() = default ;
    GetResolveStatisticsRequest(const GetResolveStatisticsRequest &) = default ;
    GetResolveStatisticsRequest(GetResolveStatisticsRequest &&) = default ;
    GetResolveStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResolveStatisticsRequest() = default ;
    GetResolveStatisticsRequest& operator=(const GetResolveStatisticsRequest &) = default ;
    GetResolveStatisticsRequest& operator=(GetResolveStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->granularity_ == nullptr && this->protocolName_ == nullptr && this->timeSpan_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetResolveStatisticsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline GetResolveStatisticsRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline GetResolveStatisticsRequest& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // timeSpan Field Functions 
    bool hasTimeSpan() const { return this->timeSpan_ != nullptr;};
    void deleteTimeSpan() { this->timeSpan_ = nullptr;};
    inline int32_t getTimeSpan() const { DARABONBA_PTR_GET_DEFAULT(timeSpan_, 0) };
    inline GetResolveStatisticsRequest& setTimeSpan(int32_t timeSpan) { DARABONBA_PTR_SET_VALUE(timeSpan_, timeSpan) };


  protected:
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // This parameter is required.
    shared_ptr<string> granularity_ {};
    shared_ptr<string> protocolName_ {};
    // This parameter is required.
    shared_ptr<int32_t> timeSpan_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
