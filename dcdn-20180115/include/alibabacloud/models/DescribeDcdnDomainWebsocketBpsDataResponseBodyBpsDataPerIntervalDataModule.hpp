// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(WebsocketBps, websocketBps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(WebsocketBps, websocketBps_);
    };
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule(const DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule(DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(const DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timeStamp_ != nullptr
        && this->websocketBps_ != nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // websocketBps Field Functions 
    bool hasWebsocketBps() const { return this->websocketBps_ != nullptr;};
    void deleteWebsocketBps() { this->websocketBps_ = nullptr;};
    inline float websocketBps() const { DARABONBA_PTR_GET_DEFAULT(websocketBps_, 0.0) };
    inline DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule& setWebsocketBps(float websocketBps) { DARABONBA_PTR_SET_VALUE(websocketBps_, websocketBps) };


  protected:
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The bandwidth value. Unit: bit/s.
    std::shared_ptr<float> websocketBps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
