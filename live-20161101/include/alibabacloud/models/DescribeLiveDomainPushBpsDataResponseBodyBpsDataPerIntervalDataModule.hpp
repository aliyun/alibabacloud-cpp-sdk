// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUSHBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUSHBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(BpsValue, bpsValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsValue, bpsValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule(const DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule(DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(const DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsValue_ != nullptr
        && this->timeStamp_ != nullptr; };
    // bpsValue Field Functions 
    bool hasBpsValue() const { return this->bpsValue_ != nullptr;};
    void deleteBpsValue() { this->bpsValue_ = nullptr;};
    inline string bpsValue() const { DARABONBA_PTR_GET_DEFAULT(bpsValue_, "") };
    inline DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule& setBpsValue(string bpsValue) { DARABONBA_PTR_SET_VALUE(bpsValue_, bpsValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<string> bpsValue_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
