// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(BpsValue, bpsValue_);
      DARABONBA_PTR_TO_JSON(HttpBpsValue, httpBpsValue_);
      DARABONBA_PTR_TO_JSON(HttpsBpsValue, httpsBpsValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsValue, bpsValue_);
      DARABONBA_PTR_FROM_JSON(HttpBpsValue, httpBpsValue_);
      DARABONBA_PTR_FROM_JSON(HttpsBpsValue, httpsBpsValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(const DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsValue_ != nullptr
        && this->httpBpsValue_ != nullptr && this->httpsBpsValue_ != nullptr && this->timeStamp_ != nullptr; };
    // bpsValue Field Functions 
    bool hasBpsValue() const { return this->bpsValue_ != nullptr;};
    void deleteBpsValue() { this->bpsValue_ = nullptr;};
    inline string bpsValue() const { DARABONBA_PTR_GET_DEFAULT(bpsValue_, "") };
    inline DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setBpsValue(string bpsValue) { DARABONBA_PTR_SET_VALUE(bpsValue_, bpsValue) };


    // httpBpsValue Field Functions 
    bool hasHttpBpsValue() const { return this->httpBpsValue_ != nullptr;};
    void deleteHttpBpsValue() { this->httpBpsValue_ = nullptr;};
    inline string httpBpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpBpsValue_, "") };
    inline DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setHttpBpsValue(string httpBpsValue) { DARABONBA_PTR_SET_VALUE(httpBpsValue_, httpBpsValue) };


    // httpsBpsValue Field Functions 
    bool hasHttpsBpsValue() const { return this->httpsBpsValue_ != nullptr;};
    void deleteHttpsBpsValue() { this->httpsBpsValue_ = nullptr;};
    inline string httpsBpsValue() const { DARABONBA_PTR_GET_DEFAULT(httpsBpsValue_, "") };
    inline DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setHttpsBpsValue(string httpsBpsValue) { DARABONBA_PTR_SET_VALUE(httpsBpsValue_, httpsBpsValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<string> bpsValue_ = nullptr;
    // The bandwidth over HTTP. Unit: bit/s.
    std::shared_ptr<string> httpBpsValue_ = nullptr;
    // The bandwidth over HTTPS. Unit: bit/s.
    std::shared_ptr<string> httpsBpsValue_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
