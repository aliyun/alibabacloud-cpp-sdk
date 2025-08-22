// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHTTPCODEDATARESPONSEBODYDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHTTPCODEDATARESPONSEBODYDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(HttpCodeDataPerInterval, httpCodeDataPerInterval_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpCodeDataPerInterval, httpCodeDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule(const DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule(DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule& operator=(const DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule& operator=(DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpCodeDataPerInterval_ != nullptr
        && this->timeStamp_ != nullptr; };
    // httpCodeDataPerInterval Field Functions 
    bool hasHttpCodeDataPerInterval() const { return this->httpCodeDataPerInterval_ != nullptr;};
    void deleteHttpCodeDataPerInterval() { this->httpCodeDataPerInterval_ = nullptr;};
    inline const Models::DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval & httpCodeDataPerInterval() const { DARABONBA_PTR_GET_CONST(httpCodeDataPerInterval_, Models::DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval) };
    inline Models::DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval httpCodeDataPerInterval() { DARABONBA_PTR_GET(httpCodeDataPerInterval_, Models::DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval) };
    inline DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule& setHttpCodeDataPerInterval(const Models::DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval & httpCodeDataPerInterval) { DARABONBA_PTR_SET_VALUE(httpCodeDataPerInterval_, httpCodeDataPerInterval) };
    inline DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule& setHttpCodeDataPerInterval(Models::DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval && httpCodeDataPerInterval) { DARABONBA_PTR_SET_RVALUE(httpCodeDataPerInterval_, httpCodeDataPerInterval) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The proportions of the HTTP status codes.
    std::shared_ptr<Models::DescribeDcdnDomainHttpCodeDataResponseBodyDataPerIntervalDataModuleHttpCodeDataPerInterval> httpCodeDataPerInterval_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
