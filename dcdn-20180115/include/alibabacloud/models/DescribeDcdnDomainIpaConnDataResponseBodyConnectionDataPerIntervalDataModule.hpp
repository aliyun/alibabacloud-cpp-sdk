// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPACONNDATARESPONSEBODYCONNECTIONDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPACONNDATARESPONSEBODYCONNECTIONDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule(const DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule(DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule& operator=(const DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule& operator=(DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connections_ != nullptr
        && this->domain_ != nullptr && this->timeStamp_ != nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline int64_t connections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
    inline DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainIpaConnDataResponseBodyConnectionDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of IPA user connections.
    std::shared_ptr<int64_t> connections_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
