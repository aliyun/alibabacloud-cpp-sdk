// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(WebsocketTraffic, websocketTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(WebsocketTraffic, websocketTraffic_);
    };
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule(DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(const DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule& operator=(DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timeStamp_ != nullptr
        && this->websocketTraffic_ != nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // websocketTraffic Field Functions 
    bool hasWebsocketTraffic() const { return this->websocketTraffic_ != nullptr;};
    void deleteWebsocketTraffic() { this->websocketTraffic_ = nullptr;};
    inline float websocketTraffic() const { DARABONBA_PTR_GET_DEFAULT(websocketTraffic_, 0.0) };
    inline DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule& setWebsocketTraffic(float websocketTraffic) { DARABONBA_PTR_SET_VALUE(websocketTraffic_, websocketTraffic) };


  protected:
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The total volume of traffic.
    std::shared_ptr<float> websocketTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
