// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATARESPONSEBODYDETECTPORNDATADATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATARESPONSEBODYDETECTPORNDATADATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Fee, fee_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Fee, fee_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule() = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule(const DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule &) = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule(DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule &&) = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule() = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& operator=(const DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule &) = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& operator=(DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->count_ == nullptr && return this->domain_ == nullptr && return this->fee_ == nullptr && return this->region_ == nullptr && return this->scene_ == nullptr
        && return this->stream_ == nullptr && return this->timeStamp_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // fee Field Functions 
    bool hasFee() const { return this->fee_ != nullptr;};
    void deleteFee() { this->fee_ = nullptr;};
    inline string fee() const { DARABONBA_PTR_GET_DEFAULT(fee_, "") };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& setFee(string fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> app_ = nullptr;
    // The number of reviewed images.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether a quota of free image scanning is available. Valid values:
    // 
    // *   **free**
    // *   **charge**
    std::shared_ptr<string> fee_ = nullptr;
    // The region in which the domain name resides.
    std::shared_ptr<string> region_ = nullptr;
    // The moderation scenario. Valid values:
    // 
    // *   **porn** (default): pornography
    // *   **terrorism**: terrorism or politically sensitive content
    // *   **ad**: ad violation
    // *   **live**: undesirable scene
    // *   **logo**
    std::shared_ptr<string> scene_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> stream_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
